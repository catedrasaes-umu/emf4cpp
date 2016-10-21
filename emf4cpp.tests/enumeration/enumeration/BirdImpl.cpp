// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * enumeration/BirdImpl.cpp
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

#include "Bird.hpp"
#include <enumeration/EnumerationPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::enumeration;

/*PROTECTED REGION ID(BirdImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Bird::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(BirdImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Bird::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::enumeration::EnumerationPackage::BIRD__TYPE:
    {
        ::ecorecpp::mapping::any_traits < ::enumeration::BirdType
                > ::toAny(_any, m_type);
    }
        return _any;
    case ::enumeration::EnumerationPackage::BIRD__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;

    }
    throw "Error";
}

void Bird::eSet(::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::enumeration::EnumerationPackage::BIRD__TYPE:
    {
        ::ecorecpp::mapping::any_traits < ::enumeration::BirdType
                > ::fromAny(_newValue, m_type);
    }
        return;
    case ::enumeration::EnumerationPackage::BIRD__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_name);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Bird::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::enumeration::EnumerationPackage::BIRD__TYPE:
        return m_type != ::enumeration::BirdType::blackbird;
    case ::enumeration::EnumerationPackage::BIRD__NAME:
        return m_name != "Birdy";

    }
    throw "Error";
}

void Bird::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Bird::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::enumeration::EnumerationPackage_ptr >(::enumeration::EnumerationPackage::_instance())->getBird();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Bird::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Bird::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

