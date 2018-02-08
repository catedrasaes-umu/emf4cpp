// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * XMLSerializer.cpp
 * Copyright (C) INCHRON GmbH 2016 <soeren.henning@inchron.com>
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

#include "XMLSerializer.hpp"

#include <algorithm>

#include <ecorecpp/resource/XMLResource.hpp>
#include <ecore.hpp>

#include "../util/debug.hpp"
#include "../mapping.hpp"

using namespace ::ecorecpp::serializer;
using namespace ::ecore;

using ::ecorecpp::mapping::type_definitions::string_t;

XMLSerializer::XMLSerializer( std::ostream& os )
	: m_out(os),
	  m_internalBuffer(),
	  m_level(0),
	  m_ser(m_internalBuffer, m_mode == XmiIndentMode::Indentation),
	  m_usedPackages() {
}

void XMLSerializer::setIndentMode(XmiIndentMode mode) {
	m_mode = mode;
	m_ser.setIndent(m_mode == XmiIndentMode::Indentation);
}

XMLSerializer::XmiIndentMode XMLSerializer::getIndentMode() const {
	return m_mode;
}

void XMLSerializer::setKeepDefault(bool kd) {
	m_keepDefault = kd;
}

bool XMLSerializer::getKeepDefault() const {
	return m_keepDefault;
}

void XMLSerializer::serialize(EObject_ptr obj) {
	m_root_obj = obj;

	EClass_ptr cl = obj->eClass();
	EPackage_ptr pkg = cl->getEPackage();
	m_usedPackages.push_back(pkg);

	// remove the XML processing instruction
	m_internalBuffer.str(::ecorecpp::mapping::type_definitions::string_t());
	// Serialize the top level object into m_internalBuffer
	m_ser.open_object("", true);
	serialize_node(obj);
	m_ser.close_object("", true);

	// Create a new serializer for the real output.
	greedy_serializer output(m_out, m_mode == XmiIndentMode::Indentation);

	::ecorecpp::mapping::type_definitions::string_t root_name(get_type(obj));
	output.open_object(root_name);

	// common attributes, following standard EMF order
	// xmi:version="2.0"
	output.add_attribute("xmi:version", "2.0");
	// xmlns:xmi="http://www.omg.org/XMI"
	output.add_attribute("xmlns:xmi", "http://www.omg.org/XMI");
	// xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
	output.add_attribute("xmlns:xsi", "http://www.w3.org/2001/XMLSchema-instance");

	// sort and unify according to EPackage name
	std::sort(m_usedPackages.begin(), m_usedPackages.end(),
			[](const EPackage_ptr& lhs, const EPackage_ptr& rhs) -> bool {
				return lhs->getName() < rhs->getName(); });
	m_usedPackages.erase(std::unique(m_usedPackages.begin(), m_usedPackages.end()),
	m_usedPackages.end());

	for ( auto pkg : m_usedPackages ) {

		::ecorecpp::mapping::type_definitions::string_t const& ns_uri = pkg->getNsURI();

		::ecorecpp::mapping::type_definitions::stringstream_t root_namespace;
		root_namespace << "xmlns:" << pkg->getName();

		output.add_attribute(root_namespace.str(),ns_uri); // root element namespace URI
	}

	output.append(m_internalBuffer.str());

	output.close_object(root_name);
}

::ecorecpp::mapping::type_definitions::string_t
XMLSerializer::get_type(EObject_ptr obj) const {
	EClass_ptr cl = obj->eClass();
	EPackage_ptr pkg = cl->getEPackage();

	::ecorecpp::mapping::type_definitions::stringstream_t ss;
	ss << pkg->getName() << ":" << cl->getName();

	return ss.str();
}

::ecorecpp::mapping::type_definitions::string_t XMLSerializer::get_reference(
			::ecore::EObject_ptr from, ::ecore::EObject_ptr to,
			bool crossDocument ) const {
	::ecorecpp::resource::Resource* fromResource = from->eResource();
	assert (fromResource);
	::ecorecpp::resource::Resource* toResource = to->eResource();
	assert (toResource);

	QUrl referenceUri = toResource->getURI();
	referenceUri.setFragment(QString::fromStdString(toResource->getURIFragment(to)));

#ifdef ECORECPP_USE_WSTRING
	if (crossDocument) {
		return ( fromResource == toResource )
				? (QString("#") + referenceUri.fragment()).toStdWString()
				: referenceUri.toString().toStdWString();
	}

	return referenceUri.fragment().toStdWString();
#else
	if (crossDocument) {
		return ( fromResource == toResource )
				? (QString("#") + referenceUri.fragment()).toStdString()
				: referenceUri.toString().toStdString();
	}

	return referenceUri.fragment().toStdString();
#endif
}

void XMLSerializer::create_node(::ecore::EObject_ptr parent_obj,
                        EObject_ptr child_obj, EStructuralFeature_ptr ef) {

	m_ser.open_object(ef->getName());

    EClass_ptr child_cl = child_obj->eClass();

    // May be a subtype
    if (child_cl != ef->getEType()) {
        m_ser.add_attribute("xsi:type", get_type(child_obj));
		m_usedPackages.push_back(child_cl->getEPackage());
	}

	auto resource = dynamic_cast<resource::XMLResource*>(child_obj->eResource());
	if (resource) {
		if (resource->useIDs() || resource->useUUIDs()) {
			auto id = resource->getID(child_obj);
			if (!id.empty())
				m_ser.add_attribute("xmi:id", id);
		}
	}

    serialize_node(child_obj);

    m_ser.close_object(ef->getName());
}

void XMLSerializer::create_crossref_node(::ecore::EObject_ptr parent_obj,
                        EObject_ptr child_obj, EStructuralFeature_ptr ef) {

	m_ser.open_object(ef->getName());

    EClass_ptr child_cl = child_obj->eClass();

    // May be a subtype
    if (child_cl != ef->getEType()) {
        m_ser.add_attribute("xsi:type", get_type(child_obj));
		m_usedPackages.push_back(child_cl->getEPackage());
	}
	m_ser.add_attribute("href", get_reference(parent_obj, child_obj, true));

    m_ser.close_object(ef->getName());
}

void XMLSerializer::serialize_node(EObject_ptr obj) {
	++m_level;

	serialize_node_attributes(obj);
	serialize_node_children(obj);

	--m_level;
}

void XMLSerializer::serialize_node_attributes(EObject_ptr obj) {
#ifdef DEBUG
	::ecorecpp::mapping::type_definitions::string_t indent(m_level, '\t');
#endif

	EClass_ptr cl = obj->eClass();

	/**
	*
	* Node attributes
	*
	*/
	::ecorecpp::mapping::EList<EAttribute_ptr>& attributes =
			cl->getEAllAttributes();

	// Multiplicity-one attributes
	for (auto const& current_at : attributes) {
		if ( current_at->isTransient()
				|| current_at->getUpperBound() != 1
				|| (!obj->eIsSet(current_at) && !m_keepDefault) )
			continue;

		try {
			EClassifier_ptr at_classifier = current_at->getEType();

			DEBUG_MSG(cout, indent << current_at->getName());

			EDataType_ptr atc = at_classifier->as< EDataType > ();
			if (atc) {
				EFactory_ptr fac =
						at_classifier->getEPackage()->getEFactoryInstance();
				ecorecpp::mapping::any any = obj->eGet(current_at);

				::ecorecpp::mapping::type_definitions::string_t value =
						fac->convertToString(atc, any);

				DEBUG_MSG(cout, indent << current_at->getName() << " "
						<< value);

				if ( (!value.empty() && value
						!= current_at->getDefaultValueLiteral())
					|| (m_keepDefault && value
						== current_at->getDefaultValueLiteral())) {
					m_ser.add_attribute(current_at->getName(), value);
				}
			} else {
				// TODO: possible? Yes, for non-ecore built-in types!
			}
		} catch (const std::exception& e) {
			DEBUG_MSG(cerr, e.what() );
		}
	}

	// Non-containment references
	::ecorecpp::mapping::EList<EReference_ptr>& references =
			cl->getEAllReferences();

	std::vector<std::array<::ecorecpp::mapping::type_definitions::string_t, 3>> crossReferences;

	for ( auto const& current_ref : references ) {
		if ( current_ref->isTransient()
				|| current_ref->isContainment()
				|| !obj->eIsSet(current_ref) )
			continue;

		try {
			DEBUG_MSG(cout, indent << current_ref->getName());

			ecorecpp::mapping::any any = obj->eGet(current_ref);
			::ecorecpp::mapping::type_definitions::stringstream_t value;

			if (current_ref->getUpperBound() != 1) {
				mapping::EList<::ecore::EObject_ptr>::ptr_type children =
						ecorecpp::mapping::any::any_cast<
							mapping::EList<::ecore::EObject_ptr>::ptr_type >(any);

				const bool isCrossDocumentReference =
						std::any_of( children->begin(), children->end(),
						[obj](::ecore::EObject_ptr child){
								return obj->eResource() != child->eResource(); } );

				for ( size_t ind = 0; ind < children->size(); ++ind ) {
					auto child = children->get(ind);
					auto ref = get_reference(obj, child, isCrossDocumentReference);
					if ( isCrossDocumentReference ) {
						std::array<::ecorecpp::mapping::type_definitions::string_t, 3> crossRef;
						crossRef[0] = current_ref->getName();

						if (child->eClass() != current_ref->getEType()) {
							crossRef[1] = get_type(child);
							m_usedPackages.push_back(child->eClass()->getEPackage());
						}

						crossRef[2] = ref;
						crossReferences.push_back(crossRef);
					} else {
						value << ref;
						if (ind+1 != children->size())
							value << " ";
					}
				}
			} else {
				EObject_ptr child =
						ecorecpp::mapping::any::any_cast< EObject_ptr >(any);
				if (child) {
					const bool isCrossDocumentReference =
							obj->eResource() != child->eResource();

					auto ref = get_reference(obj, child, isCrossDocumentReference);
					if (isCrossDocumentReference) {
						std::array<::ecorecpp::mapping::type_definitions::string_t, 3> crossRef;
						crossRef[0] = current_ref->getName();

						if (child->eClass() != current_ref->getEType()) {
							crossRef[1] = get_type(child);
							m_usedPackages.push_back(child->eClass()->getEPackage());
						}

						crossRef[2] = ref;
						crossReferences.push_back(crossRef);
					} else {
						value << ref;
					}
				}
			}

			if (!value.str().empty())
				m_ser.add_attribute(current_ref->getName(), value.str());
		} catch (...) {
			DEBUG_MSG(cerr, "exception catched! ");
		}
	}

	for ( auto const& crossRef : crossReferences ) {
		m_ser.open_object(crossRef[0]);
		if ( !crossRef[1].empty() ) {
			m_ser.add_attribute("xsi:type", crossRef[1]);
		}
		m_ser.add_attribute("href", crossRef[2]);
		m_ser.close_object(crossRef[0]);
	}

	//Multiplicity-many attributes

	for (auto const& current_at : attributes) {
		if ( current_at->isTransient()
				|| current_at->getUpperBound() == 1
				|| !obj->eIsSet(current_at) )
			continue;

		try {
			EClassifier_ptr at_classifier = current_at->getEType();

			DEBUG_MSG(cout, indent << current_at->getName());

			EDataType_ptr atc = at_classifier->as< EDataType > ();
			if (atc) {
				EFactory_ptr fac =
						at_classifier->getEPackage()->getEFactoryInstance();
				ecorecpp::mapping::any any = obj->eGet(current_at);

				std::vector< ecorecpp::mapping::any > anys =
						ecorecpp::mapping::any::any_cast<
							std::vector<ecorecpp::mapping::any> >(any);

				for (auto const& currAny : anys) {
					::ecorecpp::mapping::type_definitions::string_t value =
						fac->convertToString(atc, currAny);

					DEBUG_MSG(cout, indent << current_at->getName()
							<< " " << value);

					m_ser.open_object(current_at->getName());
					m_ser.add_value(value);
					m_ser.close_object(current_at->getName());
				}
			} else {
				// TODO: possible?
			}
		} catch (...) {
			DEBUG_MSG(cerr, "exception catched!");
		}
	}
}

void XMLSerializer::serialize_node_children(EObject_ptr obj) {
	::ecorecpp::mapping::EList<EReference_ptr>& references =
			obj->eClass()->getEAllReferences();

#ifdef DEBUG
	::ecorecpp::mapping::type_definitions::string_t indent(m_level, '\t');
#endif

	auto objResource = obj->eResource();

	// Containment references
	for ( auto const& current_ref : references ) {
		try {
			DEBUG_MSG(cout, indent << current_ref->getName());

			if ( current_ref->isTransient()
					|| !current_ref->isContainment()
					|| !obj->eIsSet(current_ref) )
				continue;

			ecorecpp::mapping::any any = obj->eGet(current_ref);

			if (current_ref->getUpperBound() != 1) {
				mapping::EList<::ecore::EObject_ptr>::ptr_type children =
						ecorecpp::mapping::any::any_cast<
							mapping::EList<::ecore::EObject_ptr>::ptr_type >(any);

				for ( auto const& child : *children ) {
					if (objResource != child->eResource())
						create_crossref_node(obj, child, current_ref);
					else
						create_node(obj, child, current_ref);
				}

			} else {
				EObject_ptr child =
						ecorecpp::mapping::any::any_cast<EObject_ptr>(any);
				if (child) {
					if (objResource != child->eResource())
						create_crossref_node(obj, child, current_ref);
					else
						create_node(obj, child, current_ref);
				}
			}
		} catch (...) {
			DEBUG_MSG(cerr, "exception catched! ");
		}
	}
}
