// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EAnnotationImpl.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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

#include "EAnnotation.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EModelElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EStringToStringMapEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::ecore;

/*PROTECTED REGION ID(EAnnotationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void EAnnotation::_initialize()
{
    // Supertypes
    ::ecore::EModelElement::_initialize();

    // References
    for (size_t i = 0; i < m_details->size(); i++)
    {
        (*m_details)[i]->_initialize();
    }
    for (size_t i = 0; i < m_contents->size(); i++)
    {
        (*m_contents)[i]->_initialize();
    }

    /*PROTECTED REGION ID(EAnnotationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EAnnotation::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        _any = m_eAnnotations->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::ecore::EcorePackage::EANNOTATION__SOURCE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_source);
    }
        return _any;
    case ::ecore::EcorePackage::EANNOTATION__DETAILS:
    {
        _any = m_details->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::ecore::EcorePackage::EANNOTATION__EMODELELEMENT:
    {
        _any = static_cast< ::ecore::EObject* >(m_eModelElement);
    }
        return _any;
    case ::ecore::EcorePackage::EANNOTATION__CONTENTS:
    {
        _any = m_contents->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::ecore::EcorePackage::EANNOTATION__REFERENCES:
    {
        _any = m_references->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void EAnnotation::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject > ::ptr_type > (_newValue);
        ::ecore::EModelElement::getEAnnotations().clear();
        ::ecore::EModelElement::getEAnnotations().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__SOURCE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_source);
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__DETAILS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject > ::ptr_type > (_newValue);
        ::ecore::EAnnotation::getDetails().clear();
        ::ecore::EAnnotation::getDetails().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__EMODELELEMENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EModelElement_ptr _t1 =
                dynamic_cast< ::ecore::EModelElement_ptr >(_t0);
        ::ecore::EAnnotation::setEModelElement(_t1);
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__CONTENTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject > ::ptr_type > (_newValue);
        ::ecore::EAnnotation::getContents().clear();
        ::ecore::EAnnotation::getContents().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__REFERENCES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject > ::ptr_type > (_newValue);
        ::ecore::EAnnotation::getReferences().clear();
        ::ecore::EAnnotation::getReferences().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean EAnnotation::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
        return m_eAnnotations && m_eAnnotations->size();
    case ::ecore::EcorePackage::EANNOTATION__SOURCE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_source);
    case ::ecore::EcorePackage::EANNOTATION__DETAILS:
        return m_details && m_details->size();
    case ::ecore::EcorePackage::EANNOTATION__EMODELELEMENT:
        return m_eModelElement;
    case ::ecore::EcorePackage::EANNOTATION__CONTENTS:
        return m_contents && m_contents->size();
    case ::ecore::EcorePackage::EANNOTATION__REFERENCES:
        return m_references && m_references->size();

    }
    throw "Error";
}

void EAnnotation::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr EAnnotation::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::ecore::EcorePackage_ptr >(::ecore::EcorePackage::_instance())->getEAnnotation_();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EAnnotation::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EAnnotation_ptr _t1 =
                dynamic_cast< ::ecore::EAnnotation_ptr >(_t0);

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EAnnotation,
                        -1, true, true >&) ::ecore::EModelElement::getEAnnotations();
        container.basicAdd(_t1);
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__DETAILS:
    {
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__EMODELELEMENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EModelElement_ptr _t1 =
                dynamic_cast< ::ecore::EModelElement_ptr >(_t0);

        // set reference
        basicsetEModelElement(_t1);
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__CONTENTS:
    {
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__REFERENCES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EAnnotation::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EAnnotation_ptr _t1 =
                dynamic_cast< ::ecore::EAnnotation_ptr >(_t0);

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EAnnotation,
                        -1, true, true >&) ::ecore::EModelElement::getEAnnotations();
        container.basicRemove(_t1);
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__DETAILS:
    {
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__EMODELELEMENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EModelElement_ptr _t1 =
                dynamic_cast< ::ecore::EModelElement_ptr >(_t0);

        // set reference
        if (basicgetEModelElement() == _t1)
            basicsetEModelElement(nullptr);
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__CONTENTS:
    {
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__REFERENCES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

