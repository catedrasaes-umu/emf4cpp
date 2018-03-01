// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ResourceTests/ETypesImpl.cpp
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

#include "ETypes.hpp"
#include <ResourceTests/ResourceTestsPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ETypesImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ResourceTests;

void ETypes::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(ETypesImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ETypes::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ResourceTests::ResourceTestsPackage::ETYPES__STRING:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_string);
    }
        return _any;
    case ::ResourceTests::ResourceTestsPackage::ETYPES__EMPTYSTRING:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_emptyString);
    }
        return _any;
    case ::ResourceTests::ResourceTestsPackage::ETYPES__DATE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDate
                > ::toAny(_any, m_date);
    }
        return _any;
    case ::ResourceTests::ResourceTestsPackage::ETYPES__CHAR:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EChar
                > ::toAny(_any, m_char);
    }
        return _any;
    case ::ResourceTests::ResourceTestsPackage::ETYPES__BOOL:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_bool);
    }
        return _any;
    case ::ResourceTests::ResourceTestsPackage::ETYPES__DOUBLE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_double);
    }
        return _any;
    case ::ResourceTests::ResourceTestsPackage::ETYPES__INT:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt > ::toAny(_any, m_int);
    }
        return _any;

    }
    throw "Error";
}

void ETypes::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::ResourceTests::ResourceTestsPackage::ETYPES__STRING:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::ResourceTests::ETypes::setString(_t0);
    }
        return;
    case ::ResourceTests::ResourceTestsPackage::ETYPES__EMPTYSTRING:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::ResourceTests::ETypes::setEmptyString(_t0);
    }
        return;
    case ::ResourceTests::ResourceTestsPackage::ETYPES__DATE:
    {
        ::ecore::EDate _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDate
                > ::fromAny(_newValue, _t0);
        ::ResourceTests::ETypes::setDate(_t0);
    }
        return;
    case ::ResourceTests::ResourceTestsPackage::ETYPES__CHAR:
    {
        ::ecore::EChar _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EChar
                > ::fromAny(_newValue, _t0);
        ::ResourceTests::ETypes::setChar(_t0);
    }
        return;
    case ::ResourceTests::ResourceTestsPackage::ETYPES__BOOL:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::ResourceTests::ETypes::setBool(_t0);
    }
        return;
    case ::ResourceTests::ResourceTestsPackage::ETYPES__DOUBLE:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::ResourceTests::ETypes::setDouble(_t0);
    }
        return;
    case ::ResourceTests::ResourceTestsPackage::ETYPES__INT:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::ResourceTests::ETypes::setInt(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ETypes::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ResourceTests::ResourceTestsPackage::ETYPES__STRING:
        return m_string != "Hallo Welt!";
    case ::ResourceTests::ResourceTestsPackage::ETYPES__EMPTYSTRING:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_emptyString);
    case ::ResourceTests::ResourceTestsPackage::ETYPES__DATE:
        return m_date
                != ::ecorecpp::mapping::EDate("1976-05-27T12:13:14.123-0300");
    case ::ResourceTests::ResourceTestsPackage::ETYPES__CHAR:
        return m_char != 98;
    case ::ResourceTests::ResourceTestsPackage::ETYPES__BOOL:
        return m_bool != true;
    case ::ResourceTests::ResourceTestsPackage::ETYPES__DOUBLE:
        return m_double != 3.14;
    case ::ResourceTests::ResourceTestsPackage::ETYPES__INT:
        return m_int != 10;

    }
    throw "Error";
}

void ETypes::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ETypes::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::ResourceTests::ResourceTestsPackage* >(::ResourceTests::ResourceTestsPackage::_instance().get())->getETypes();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ETypes::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ETypes::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

