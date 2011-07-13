// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EEnumLiteralImpl.cpp
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

#include "EEnumLiteral.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/ENamedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::ecore;

/*PROTECTED REGION ID(EEnumLiteralImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void EEnumLiteral::_initialize()
{
    // Supertypes
    ::ecore::ENamedElement::_initialize();

    // Rerefences

    /*PROTECTED REGION ID(EEnumLiteralImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject EEnumLiteral::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        _any = m_eAnnotations->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::toAny(_any, m_name);
    }
        return _any;
    case ::ecore::EcorePackage::EENUMLITERAL__VALUE:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EInt >::toAny(_any, m_value);
    }
        return _any;
    case ::ecore::EcorePackage::EENUMLITERAL__INSTANCE:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EEnumerator >::toAny(_any,
                m_instance);
    }
        return _any;
    case ::ecore::EcorePackage::EENUMLITERAL__LITERAL:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::toAny(_any,
                m_literal);
    }
        return _any;
    case ::ecore::EcorePackage::EENUMLITERAL__EENUM:
    {
        _any = static_cast< ::ecore::EObject* > (m_eEnum);
    }
        return _any;

    }
    throw "Error";
}

void EEnumLiteral::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::ecore::EModelElement::getEAnnotations().clear();
        ::ecore::EModelElement::getEAnnotations().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::fromAny(_newValue,
                m_name);
    }
        return;
    case ::ecore::EcorePackage::EENUMLITERAL__VALUE:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EInt >::fromAny(_newValue,
                m_value);
    }
        return;
    case ::ecore::EcorePackage::EENUMLITERAL__INSTANCE:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EEnumerator >::fromAny(
                _newValue, m_instance);
    }
        return;
    case ::ecore::EcorePackage::EENUMLITERAL__LITERAL:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::fromAny(_newValue,
                m_literal);
    }
        return;
    case ::ecore::EcorePackage::EENUMLITERAL__EENUM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::ecore::EEnum_ptr _t1 = dynamic_cast< ::ecore::EEnum_ptr > (_t0);
        ::ecore::EEnumLiteral::setEEnum(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean EEnumLiteral::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
        return m_eAnnotations && m_eAnnotations->size();
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_name);
    case ::ecore::EcorePackage::EENUMLITERAL__VALUE:
        return ::ecorecpp::mapping::set_traits< ::ecore::EInt >::is_set(m_value);
    case ::ecore::EcorePackage::EENUMLITERAL__INSTANCE:
        return ::ecorecpp::mapping::set_traits< ::ecore::EEnumerator >::is_set(
                m_instance);
    case ::ecore::EcorePackage::EENUMLITERAL__LITERAL:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_literal);
    case ::ecore::EcorePackage::EENUMLITERAL__EENUM:
        return m_eEnum;

    }
    throw "Error";
}

void EEnumLiteral::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr EEnumLiteral::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::ecore::EcorePackage_ptr > (::ecore::EcorePackage::_instance())->getEEnumLiteral();
    return _eclass;
}

