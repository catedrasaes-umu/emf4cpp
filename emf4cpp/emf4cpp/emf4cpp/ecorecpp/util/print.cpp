// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * util/print.cpp
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

#include "print.hpp"
#include <ecore.hpp>
#include <string>
#include <cassert>
#include "../mapping.hpp"


using namespace ::ecore;

namespace ecorecpp
{
namespace util
{

void print_all(EPackage_ptr pkg)
{
/*
    E_COUT << "PACKAGE: " << pkg->getName() << std::endl;
    E_COUT << "         " << pkg->getNsPrefix() << std::endl;
    E_COUT << "         " << pkg->getNsURI() << std::endl;

    std::vector< EClassifier_ptr > classifiers = pkg->getEClassifiers();

    for (size_t i = 0; i < classifiers.size(); i++)
    {
        EClassifier_ptr classifier = classifiers[i];
        EClass_ptr eclass = instanceOf< EClass > (classifier);
        EDataType_ptr edt = instanceOf< EDataType > (classifier);

        E_COUT << "CLASSIFIER: " << classifier->getName() << std::endl;
        assert(pkg == classifier->getEPackage());

        if (eclass)
        {
            E_COUT << "            EClass" << std::endl;

            // AllSuperTypes
            std::vector< EClass_ptr > const& supertypes =
                    eclass->getEAllSuperTypes();
            for (size_t j = 0; j < supertypes.size(); j++)
            {
                E_COUT << "            SUPERTYPE: "
                        << supertypes[j]->getName() << std::endl;
            }

            // Operations
            std::vector< EOperation_ptr > const& operations =
                    eclass->getEAllOperations();
            for (size_t j = 0; j < operations.size(); j++)
            {
                E_COUT << "            OPERATION: "
                        << operations[j]->getName() << std::endl;
            }

            // Attributes
            std::vector< EAttribute_ptr > const& attributes =
                    eclass->getEAllAttributes();
            for (size_t j = 0; j < attributes.size(); j++)
            {
                E_COUT << "            ATTRIBUTE: "
                        << attributes[j]->getName() << std::endl;
            }

            // References
            std::vector< EReference_ptr > const& references =
                    eclass->getEAllReferences();
            for (size_t j = 0; j < references.size(); j++)
            {
                E_COUT << "            REFERENCE: "
                        << references[j]->getName() << std::endl;

                EClass_ptr _cc = references[j]->getEContainingClass();
                if (_cc)
                {
                    E_COUT << "                       "
                            << "ContainingClass: " << _cc->getName()
                            << std::endl;
                }

                EReference_ptr opp = references[j]->getEOpposite();

                if (opp)
                {
                    E_COUT << "                       " << "Opposite: "
                            << opp->getName();

                    EClass_ptr _occ = opp->getEContainingClass();
                    if (_occ)
                    {
                        E_COUT << " EClass: "
                                << opp->getEContainingClass()->getName();
                    }
                    E_COUT << std::endl;
                }
            }

            // EStructuralFeatures
            std::vector< EStructuralFeature_ptr > const& features =
                    eclass->getEAllStructuralFeatures();
            for (size_t j = 0; j < features.size(); j++)
            {
                E_COUT << "            FEATURE: " << features[j]->getName()
                        << std::endl;
                if (features[j]->getEType())
                    E_COUT << "                     " << "Type: "
                            << features[j]->getEType()->getName() << std::endl;
            }
        }
        else if (edt)
        {
            E_COUT << "            EDataType" << std::endl;
        }
    }

    std::vector< EPackage_ptr > const& subpkgs = pkg->getESubpackages();
    for (size_t i = 0; i < subpkgs.size(); i++)
        print_all(subpkgs[i]);
*/
}

void print(EPackage_ptr pkg)
{
/*
    std::vector< EClassifier_ptr > const& classifiers = pkg->getEClassifiers();

    for (size_t i = 0; i < classifiers.size(); i++)
    {
        EClassifier_ptr classifier = classifiers[i];
        EClass_ptr eclass = dynamic_cast< EClass* > (classifier);
        EDataType_ptr edt = dynamic_cast< EDataType* > (classifier);

        E_COUT << "CLASSIFIER: " << classifier->getName() << std::endl;
        assert(pkg == classifier->getEPackage());

        if (eclass)
        {
            E_COUT << "            EClass" << std::endl;

            // AllSuperTypes
            std::vector< EClass_ptr > const& supertypes =
                    eclass->getESuperTypes();
            for (size_t j = 0; j < supertypes.size(); j++)
            {
                E_COUT << "            SUPERTYPE: "
                        << supertypes[j]->getName() << std::endl;
            }

            // Operations
            std::vector< EOperation_ptr > const& operations =
                    eclass->getEOperations();
            for (size_t j = 0; j < operations.size(); j++)
            {
                E_COUT << "            OPERATION: "
                        << operations[j]->getName() << std::endl;
            }

            // Attributes
            std::vector< EAttribute_ptr > const& attributes =
                    eclass->getEAttributes();
            for (size_t j = 0; j < attributes.size(); j++)
            {
                E_COUT << "            ATTRIBUTE: "
                        << attributes[j]->getName() << std::endl;
            }

            // References
            std::vector< EReference_ptr > const& references =
                    eclass->getEReferences();
            for (size_t j = 0; j < references.size(); j++)
            {
                E_COUT << "            REFERENCE: "
                        << references[j]->getName() << std::endl;
            }

            // EStructuralFeatures
            std::vector< EStructuralFeature_ptr > const& features =
                    eclass->getEStructuralFeatures();
            for (size_t j = 0; j < features.size(); j++)
            {
                E_COUT << "            FEATURE: " << features[j]->getName()
                        << std::endl;
            }
        }
        else if (edt)
        {
            E_COUT << "            EDataType" << std::endl;
        }
    }
*/
}

#define PRINT(str) out << indent << str << std::endl

#ifdef ECORECPP_USE_WSTRING
void print(std::wostream& out, const EObject_ptr obj, int level)
#else // STRING (default)
void print(std::ostream& out, const EObject_ptr obj, int level)
#endif
{
    ::ecorecpp::mapping::type_traits::string_t indent(level, L'\t');

    EClass_ptr cl = obj->eClass();
    EPackage_ptr pkg = cl->getEPackage();
    EFactory_ptr fac = pkg->getEFactoryInstance();

    PRINT("Type: " << cl->getName());

    // Attributes
    ::ecorecpp::mapping::EList< EAttribute > const& attributes = cl->getEAllAttributes();
    for (size_t j = 0; j < attributes.size(); j++)
    {
        EAttribute_ptr at = attributes[j];
        EClassifier_ptr at_clf = at->getEType();
        EDataType_ptr at_dt = at_clf->as< EDataType > ();

        if (!at->isTransient() && obj->eIsSet(at))
        {
            if (at_dt)
            {
                any any = obj->eGet(at);
                EString value = fac->convertToString(at_dt, any);

                PRINT("Attribute: " << at->getName() << " = " << value);
            }
            else
                ; // TODO: possible?
        }
    }

    // References
    ::ecorecpp::mapping::EList< EReference > const& references = cl->getEAllReferences();
    for (size_t j = 0; j < references.size(); j++)
    {
        EReference_ptr ref = references[j];

        if (!ref->isTransient() && obj->eIsSet(ref))
        {
            if (ref->isContainment())
            {
                any any = obj->eGet(ref);

                if (ref->getUpperBound() != 1)
                {
                    mapping::EEListBase_ptr children = any::any_cast<
                            mapping::EEListBase_ptr >(any);
                    for (size_t j = 0; j < children->size(); j++)
                    {
                        PRINT("Reference: " << ref->getName());

                        print(out, (*children)[j], level + 1);
                    }
                }
                else
                {
                    PRINT("Reference: " << ref->getName());

                    EObject_ptr child = any::any_cast< EObject_ptr >(any);
                    if (child)
                        print(out, child, level + 1);
                }
            }
            else
            {
                PRINT("Reference: " << ref->getName());
                // TODO
            }
        }
    }
}

} // util
} // ecorecpp
