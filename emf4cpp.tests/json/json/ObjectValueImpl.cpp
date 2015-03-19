// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * json/ObjectValueImpl.cpp
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

#include "ObjectValue.hpp"
#include <json/JsonPackage.hpp>
#include <json/Value.hpp>
#include <json/NVPair.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::json;

/*PROTECTED REGION ID(ObjectValueImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void ObjectValue::_initialize()
{
    // Supertypes
    ::json::Value::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_members->size(); i++)
    {
        (*m_members)[i]->_initialize();
        (*m_members)[i]->_setEContainer(this,
                ::json::JsonPackage::_instance()->getObjectValue__members());
    }

    /*PROTECTED REGION ID(ObjectValueImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject ObjectValue::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::json::JsonPackage::OBJECTVALUE__MEMBERS:
    {
        _any = m_members->asEListOf< ::ecore::EObject > ();
    }
        return _any;

    }
    throw "Error";
}

void ObjectValue::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::json::JsonPackage::OBJECTVALUE__MEMBERS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::json::ObjectValue::getMembers().clear();
        ::json::ObjectValue::getMembers().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ObjectValue::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::json::JsonPackage::OBJECTVALUE__MEMBERS:
        return m_members && m_members->size();

    }
    throw "Error";
}

void ObjectValue::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ObjectValue::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::json::JsonPackage_ptr > (::json::JsonPackage::_instance())->getObjectValue();
    return _eclass;
}

