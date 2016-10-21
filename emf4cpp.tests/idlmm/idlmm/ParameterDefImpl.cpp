// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/ParameterDefImpl.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON Gmbh 2016 <soeren.henning@inchron.com>
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

#include "ParameterDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Typed.hpp>
#include <idlmm/IDLType.hpp>
#include <idlmm/TypedefDef.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::idlmm;

/*PROTECTED REGION ID(ParameterDefImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void ParameterDef::_initialize()
{
    // Supertypes
    ::idlmm::Typed::_initialize();

    // References

    /*PROTECTED REGION ID(ParameterDefImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ParameterDef::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::TYPED__CONTAINEDTYPE:
    {
        _any = static_cast< ::ecore::EObject* >(m_containedType);
    }
        return _any;
    case ::idlmm::IdlmmPackage::TYPED__SHAREDTYPE:
    {
        _any = static_cast< ::ecore::EObject* >(m_sharedType);
    }
        return _any;
    case ::idlmm::IdlmmPackage::PARAMETERDEF__IDENTIFIER:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_identifier);
    }
        return _any;
    case ::idlmm::IdlmmPackage::PARAMETERDEF__DIRECTION:
    {
        ::ecorecpp::mapping::any_traits < ::idlmm::ParameterMode
                > ::toAny(_any, m_direction);
    }
        return _any;

    }
    throw "Error";
}

void ParameterDef::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::TYPED__CONTAINEDTYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::idlmm::IDLType_ptr _t1 = dynamic_cast< ::idlmm::IDLType_ptr >(_t0);
        ::idlmm::Typed::setContainedType(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::TYPED__SHAREDTYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::idlmm::TypedefDef_ptr _t1 =
                dynamic_cast< ::idlmm::TypedefDef_ptr >(_t0);
        ::idlmm::Typed::setSharedType(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::PARAMETERDEF__IDENTIFIER:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_identifier);
    }
        return;
    case ::idlmm::IdlmmPackage::PARAMETERDEF__DIRECTION:
    {
        ::ecorecpp::mapping::any_traits < ::idlmm::ParameterMode
                > ::fromAny(_newValue, m_direction);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ParameterDef::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::TYPED__CONTAINEDTYPE:
        return m_containedType;
    case ::idlmm::IdlmmPackage::TYPED__SHAREDTYPE:
        return m_sharedType;
    case ::idlmm::IdlmmPackage::PARAMETERDEF__IDENTIFIER:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_identifier);
    case ::idlmm::IdlmmPackage::PARAMETERDEF__DIRECTION:
        return ::ecorecpp::mapping::set_traits < ::idlmm::ParameterMode
                > ::is_set(m_direction);

    }
    throw "Error";
}

void ParameterDef::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ParameterDef::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::idlmm::IdlmmPackage_ptr >(::idlmm::IdlmmPackage::_instance())->getParameterDef();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ParameterDef::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::TYPED__CONTAINEDTYPE:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::TYPED__SHAREDTYPE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ParameterDef::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::TYPED__CONTAINEDTYPE:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::TYPED__SHAREDTYPE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

