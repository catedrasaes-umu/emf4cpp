// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * company/EmployeeImpl.cpp
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

#include "Employee.hpp"
#include <company/CompanyPackage.hpp>
#include <company/PhonebookEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::company;

/*PROTECTED REGION ID(EmployeeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Employee::_initialize()
{
    // Supertypes

    // References
    if (m_phonebookEntry)
    {
        m_phonebookEntry->_initialize();
    }

    /*PROTECTED REGION ID(EmployeeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Employee::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::company::CompanyPackage::EMPLOYEE__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::company::CompanyPackage::EMPLOYEE__PHONEBOOKENTRY:
    {
        _any = static_cast< ::ecore::EObject* >(m_phonebookEntry);
    }
        return _any;

    }
    throw "Error";
}

void Employee::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::company::CompanyPackage::EMPLOYEE__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_name);
    }
        return;
    case ::company::CompanyPackage::EMPLOYEE__PHONEBOOKENTRY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::company::PhonebookEntry_ptr _t1 =
                dynamic_cast< ::company::PhonebookEntry_ptr >(_t0);
        ::company::Employee::setPhonebookEntry(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Employee::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::company::CompanyPackage::EMPLOYEE__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::company::CompanyPackage::EMPLOYEE__PHONEBOOKENTRY:
        return m_phonebookEntry;

    }
    throw "Error";
}

void Employee::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Employee::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::company::CompanyPackage_ptr >(::company::CompanyPackage::_instance())->getEmployee();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Employee::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::company::CompanyPackage::EMPLOYEE__PHONEBOOKENTRY:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Employee::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::company::CompanyPackage::EMPLOYEE__PHONEBOOKENTRY:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

