// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serializer/serializer.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 *
 * EMF4CPP is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EMF4CPP is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "serializer.hpp"
#include <ecore.hpp>
#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/dom/DOM.hpp>
#include <xercesc/util/OutOfMemoryException.hpp>
#include <xercesc/framework/LocalFileFormatTarget.hpp>
#include <sstream>
#include "../util/debug.hpp"
#include "../mapping.hpp"
#include "../list.hpp"


using namespace ::ecorecpp::serializer;
using namespace ::ecore;
using namespace ::xercesc;

#define X(str) externalstr(str).unicode()

serializer::serializer(const std::string& _file) :
    m_file(_file), m_doc (0), m_level(0)
{
    // TODO: every time?
    XMLPlatformUtils::Initialize();
}

serializer::~serializer()
{
    if (m_doc)
        m_doc->release();

    XMLPlatformUtils::Terminate();
}

typedef std::basic_string<XMLCh> XercesString;
inline XercesString wstringToXerces(const ::ecorecpp::mapping::type_traits::string_t& str)
{
    return XercesString(str.begin( ), str.end( ));
}
#define W(str) wstringToXerces(str).c_str()

void serializer::create_node(DOMElement * parent, EObject_ptr parent_obj,
        EObject_ptr child_obj, EStructuralFeature_ptr ef)
{
    DOMElement * child = m_doc->createElement(W(ef->getName()));
    EClass_ptr child_cl = child_obj->eClass();

    // May be a subtype
    if (child_cl != ef->getEType())
        child->setAttribute(X("xsi:type"), W(get_type(child_obj)));

    parent->appendChild(child);

    serialize_node(child, child_obj);
}

void serializer::serialize_node(DOMElement* node, EObject_ptr obj)
{
    ++m_level;

#ifdef DEBUG
    ::ecorecpp::mapping::type_traits::string_t indent(m_level, '\t');
#endif

    EClass_ptr cl = obj->eClass();

    std::vector< EAttribute_ptr > const& attributes = cl->getEAllAttributes();

    for (size_t i = 0; i < attributes.size(); i++)
    {
        try
        {
            EAttribute_ptr const& current_at = attributes[i];
            EClassifier_ptr at_classifier = current_at->getEType();

            DEBUG_MSG(cout, indent << current_at->getName());

            if (!current_at->isTransient() && obj->eIsSet(current_at))
            {
                EDataType_ptr atc = at_classifier->as< EDataType > ();
                if (atc)
                {
                    EFactory_ptr fac =
                            at_classifier->getEPackage()->getEFactoryInstance();
                    boost::any any = obj->eGet(current_at);

                    if (current_at->getUpperBound() == 1)
                    {
                        ::ecorecpp::mapping::type_traits::string_t value = fac->convertToString(atc, any);

                        DEBUG_MSG(cout, indent << current_at->getName() << " "
                                << value);

                        if (!value.empty() && value
                                != current_at->getDefaultValueLiteral())
                        {
                            node->setAttribute(W(current_at->getName()),
                                    W(value));
                        }
                    }
                    else
                    {
                        // std::vector of what? solution: anys
                        std::vector< boost::any > anys = boost::any_cast<
                                std::vector< boost::any > >(any);
                        for (size_t k = 0; k < anys.size(); k++)
                        {
                            ::ecorecpp::mapping::type_traits::string_t value = fac->convertToString(
                                    atc, anys[k]);

                            DEBUG_MSG(cout, indent << current_at->getName()
                                    << " " << value);

                            // create text node
                            DOMElement* new_node = m_doc->createElement(
                                    W(current_at->getName()));
                            DOMText* text_node =
                                    m_doc->createTextNode(W(value));
                            new_node->appendChild(text_node);

                            node->appendChild(new_node);
                        }
                    }
                }
                else
                {
                    // TODO: possible?
                }
            }
        } catch (...)
        {
            DEBUG_MSG(cerr, "exception catched!");
        }
    }

    std::vector< EReference_ptr > const& references = cl->getEAllReferences();

    for (size_t i = 0; i < references.size(); i++)
    {
        try
        {
            EReference_ptr current_ref = references[i];

            DEBUG_MSG(cout, indent << current_ref->getName());

            if (!current_ref->isTransient() && obj->eIsSet(current_ref))
            {
                boost::any any = obj->eGet(current_ref);

                if (current_ref->isContainment())
                {
                    DEBUG_MSG(cout, indent << current_ref->getName());

                    if (current_ref->getUpperBound() != 1)
                    {
                        mapping::EEListBase_ptr children = boost::any_cast<
                                mapping::EEListBase_ptr >(any);
                        for (size_t j = 0; j < children->size(); j++)
                        {
                            create_node(node, obj, (*children)[j], current_ref);
                        }
                    }
                    else
                    {
                        EObject_ptr child = boost::any_cast< EObject_ptr >(any);
                        if (child)
                            create_node(node, obj, child, current_ref);
                    }
                }
                else
                {
                    // TODO: create reference
                    ::ecorecpp::mapping::type_traits::stringstream_t value;
                    DEBUG_MSG(cout, indent << current_ref->getName());

                    if (current_ref->getUpperBound() != 1)
                    {
                        mapping::EList_ptr children = boost::any_cast<
                                mapping::EList_ptr >(any);
                        for (size_t j = 0; j < children->size(); j++)
                        {
                            value << get_reference(obj, (*children)[j]);

                            if (j + 1 < children->size())
                                value << " ";
                        }
                    }
                    else
                    {
                        EObject_ptr child = boost::any_cast< EObject_ptr >(any);
                        if (child)
                            value << get_reference(obj, child);
                    }

                    if (!value.str().empty())
                        node->setAttribute(W(current_ref->getName()),
                                W(value.str()));
                }
            }
        } catch (...)
        {
            DEBUG_MSG(cerr, "exception catched! ");
        }
    }

    --m_level;
}

void serializer::serialize(EObject_ptr obj)
{
    m_root_obj = obj;

    m_impl = DOMImplementationRegistry::getDOMImplementation(X("Core"));

    if (m_impl)
    {
        EClass_ptr cl = obj->eClass();
        EPackage_ptr pkg = cl->getEPackage();

        ::ecorecpp::mapping::type_traits::string_t const& ns_uri = pkg->getNsURI();

        m_doc = m_impl->createDocument(
                (ns_uri.empty()) ? X("NULL") : W(ns_uri), // root element namespace URI.
                W(get_type(obj)), // root element name
                0); // document type object (DTD)

        m_root = m_doc->getDocumentElement();

        // common attributes
        // xmlns:xmi="http://www.omg.org/XMI"
        m_root->setAttribute(X("xmlns:xmi"), X("http://www.omg.org/XMI"));
        // xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
        m_root->setAttribute(X("xmlns:xsi"),
                X("http://www.w3.org/2001/XMLSchema-instance"));
        // xmi:version="2.0"
        m_root->setAttribute(X("xmi:version"), X("2.0"));

        serialize_node(m_root, obj);

        // write
        // TODO: outta here

        DOMLSSerializer *theSerializer =
                ((DOMImplementationLS*) m_impl)->createLSSerializer();
        DOMLSOutput *theOutputDesc =
                ((DOMImplementationLS*) m_impl)->createLSOutput();

        DOMConfiguration* serializerConfig = theSerializer->getDomConfig();

        // TODO: set as option
        if (serializerConfig->canSetParameter(
                XMLUni::fgDOMWRTFormatPrettyPrint, true))
            serializerConfig->setParameter(XMLUni::fgDOMWRTFormatPrettyPrint,
                    true);

        XMLFormatTarget *myFormTarget;
        myFormTarget = new LocalFileFormatTarget(X(m_file));
        theOutputDesc->setByteStream(myFormTarget);

        theSerializer->write(m_doc, theOutputDesc);

        theOutputDesc->release();
        theSerializer->release();
        delete myFormTarget;
    }
    else
        throw "Error";
}

::ecorecpp::mapping::type_traits::string_t serializer::get_type(EObject_ptr obj) const
{
    EClass_ptr cl = obj->eClass();
    EPackage_ptr pkg = cl->getEPackage();

    ::ecorecpp::mapping::type_traits::stringstream_t ss;
    ss << pkg->getName() << ":" << cl->getName();

    return ss.str();
}

#include <list>

::ecorecpp::mapping::type_traits::string_t serializer::get_reference(EObject_ptr from, EObject_ptr to) const
{
    ::ecorecpp::mapping::type_traits::stringstream_t value;

    std::list< EObject_ptr > to_antecessors;
    EObject_ptr antecessor = to;
    while (antecessor)
    {
        to_antecessors.push_back(antecessor);
        antecessor = to_antecessors.back()->eContainer();
    }

    EPackage_ptr pkg = instanceOf< EPackage > (to_antecessors.back());
    if (pkg)
    {
        if (m_root_obj != pkg)
        {
            value << get_type(to) << " " << pkg->getNsURI();
        }

        value << "#/";
        to_antecessors.pop_back();

        while (to_antecessors.size())
        {
            value << "/"
                    << to_antecessors.back()->as< ENamedElement > ()->getName();
            to_antecessors.pop_back();
        }
    }
    else if (to_antecessors.back() == m_root_obj)
    {
        value << "/";
        EObject_ptr prev = to_antecessors.back();
        to_antecessors.pop_back();

        while (to_antecessors.size())
        {
            EStructuralFeature_ptr esf =
                    to_antecessors.back()->eContainingFeature();
            if (esf->getUpperBound() == 1)
                value << "/" << esf->getName();
            else
            {
                boost::any _any = prev->eGet(esf);

                mapping::EEListBase_ptr ef = boost::any_cast<
                        mapping::EEListBase_ptr >(_any);

                // calculate the index of back at father's collection
                size_t index_of = 0;
                for (; index_of < ef->size() && (*ef)[index_of]
                        != to_antecessors.back(); index_of++)
                    ;

                value << "/@" << esf->getName() << "." << index_of;
            }

            prev = to_antecessors.back();
            to_antecessors.pop_back();
        }
    }
    else
    {
        // TODO
        DEBUG_MSG(cerr, "not implemented!");
    }

    return value.str();
}
