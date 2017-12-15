// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * json/NVPairImpl.cpp
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

#include "NVPair.hpp"
#include <json/JsonPackage.hpp>
#include <json/Value.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(NVPairImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::json;

void NVPair::_initialize()
{
    // Supertypes

    // References
    if (m_value)
    {
        m_value->_initialize();
    }

    /*PROTECTED REGION ID(NVPairImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject NVPair::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::json::JsonPackage::NVPAIR__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::json::JsonPackage::NVPAIR__VALUE:
    {
        if (m_value)
            _any = m_value->as< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void NVPair::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::json::JsonPackage::NVPAIR__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_name);
    }
        return;
    case ::json::JsonPackage::NVPAIR__VALUE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::json::Value_ptr _t1 = dynamic_cast< ::json::Value* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::json::Value >(_t0);*/
        ::json::NVPair::setValue(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean NVPair::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::json::JsonPackage::NVPAIR__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::json::JsonPackage::NVPAIR__VALUE:
        return (bool) m_value;

    }
    throw "Error";
}

void NVPair::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr NVPair::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::json::JsonPackage* >(::json::JsonPackage::_instance().get())->getNVPair();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void NVPair::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::json::JsonPackage::NVPAIR__VALUE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void NVPair::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::json::JsonPackage::NVPAIR__VALUE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

