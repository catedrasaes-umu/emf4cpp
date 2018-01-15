// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * myDsl/PropertyImpl.cpp
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

#include "Property.hpp"
#include <myDsl/MyDslPackage.hpp>
#include <myDsl/Type.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(PropertyImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::myDsl;

void Property::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(PropertyImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Property::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::myDsl::MyDslPackage::PROPERTY__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::myDsl::MyDslPackage::PROPERTY__TYPE:
    {
        if (m_type)
            _any = m_type->as< ::ecore::EObject >();
    }
        return _any;
    case ::myDsl::MyDslPackage::PROPERTY__MANY:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_many);
    }
        return _any;

    }
    throw "Error";
}

void Property::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::myDsl::MyDslPackage::PROPERTY__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::myDsl::Property::setName(_t0);
    }
        return;
    case ::myDsl::MyDslPackage::PROPERTY__TYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::myDsl::Type_ptr _t1 = dynamic_cast< ::myDsl::Type* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::myDsl::Type >(_t0);*/
        ::myDsl::Property::setType(_t1);
    }
        return;
    case ::myDsl::MyDslPackage::PROPERTY__MANY:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::myDsl::Property::setMany(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Property::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::myDsl::MyDslPackage::PROPERTY__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::myDsl::MyDslPackage::PROPERTY__TYPE:
        return (bool) m_type;
    case ::myDsl::MyDslPackage::PROPERTY__MANY:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_many);

    }
    throw "Error";
}

void Property::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Property::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::myDsl::MyDslPackage* >(::myDsl::MyDslPackage::_instance().get())->getProperty();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Property::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::myDsl::MyDslPackage::PROPERTY__TYPE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Property::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::myDsl::MyDslPackage::PROPERTY__TYPE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

