// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * myDsl/EntityImpl.cpp
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

#include "Entity.hpp"
#include <myDsl/MyDslPackage.hpp>
#include <myDsl/Type.hpp>
#include <myDsl/Entity.hpp>
#include <myDsl/Property.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::myDsl;

/*PROTECTED REGION ID(EntityImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Entity::_initialize()
{
    // Supertypes
    ::myDsl::Type::_initialize();

    // References
    for (size_t i = 0; i < m_properties->size(); i++)
    {
        (*m_properties)[i]->_initialize();
    }

    /*PROTECTED REGION ID(EntityImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Entity::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::myDsl::MyDslPackage::TYPE__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::myDsl::MyDslPackage::ENTITY__EXTENDS:
    {
        _any = static_cast< ::ecore::EObject* >(m_extends);
    }
        return _any;
    case ::myDsl::MyDslPackage::ENTITY__PROPERTIES:
    {
        _any = m_properties->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void Entity::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::myDsl::MyDslPackage::TYPE__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_name);
    }
        return;
    case ::myDsl::MyDslPackage::ENTITY__EXTENDS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::myDsl::Entity_ptr _t1 = dynamic_cast< ::myDsl::Entity_ptr >(_t0);
        ::myDsl::Entity::setExtends(_t1);
    }
        return;
    case ::myDsl::MyDslPackage::ENTITY__PROPERTIES:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::myDsl::Entity::getProperties().clear();
        ::myDsl::Entity::getProperties().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Entity::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::myDsl::MyDslPackage::TYPE__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::myDsl::MyDslPackage::ENTITY__EXTENDS:
        return m_extends;
    case ::myDsl::MyDslPackage::ENTITY__PROPERTIES:
        return m_properties && m_properties->size();

    }
    throw "Error";
}

void Entity::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Entity::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::myDsl::MyDslPackage_ptr >(::myDsl::MyDslPackage::_instance())->getEntity();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Entity::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::myDsl::MyDslPackage::ENTITY__EXTENDS:
    {
    }
        return;
    case ::myDsl::MyDslPackage::ENTITY__PROPERTIES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Entity::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::myDsl::MyDslPackage::ENTITY__EXTENDS:
    {
    }
        return;
    case ::myDsl::MyDslPackage::ENTITY__PROPERTIES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

