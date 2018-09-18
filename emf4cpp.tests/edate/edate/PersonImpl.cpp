// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * edate/PersonImpl.cpp
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

#include "Person.hpp"
#include <edate/EdatePackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(PersonImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::edate;

void Person::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(PersonImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Person::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::edate::EdatePackage::PERSON__BIRTHDAY:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDate
                > ::toAny(_any, m_Birthday);
    }
        return _any;
    case ::edate::EdatePackage::PERSON__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_Name);
    }
        return _any;

    }
    throw "Error";
}

void Person::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::edate::EdatePackage::PERSON__BIRTHDAY:
    {
        ::ecore::EDate _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDate
                > ::fromAny(_newValue, _t0);
        ::edate::Person::setBirthday(_t0);
    }
        return;
    case ::edate::EdatePackage::PERSON__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::edate::Person::setName(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Person::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::edate::EdatePackage::PERSON__BIRTHDAY:
        return ::ecorecpp::mapping::set_traits < ::ecore::EDate
                > ::is_set(m_Birthday);
    case ::edate::EdatePackage::PERSON__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_Name);

    }
    throw "Error";
}

void Person::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Person::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::edate::EdatePackage* >(::edate::EdatePackage::_instance().get())->getPerson();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Person::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Person::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

