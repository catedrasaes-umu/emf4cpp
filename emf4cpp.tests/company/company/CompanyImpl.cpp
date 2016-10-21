// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * company/CompanyImpl.cpp
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

#include "Company.hpp"
#include <company/CompanyPackage.hpp>
#include <company/Department.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::company;

/*PROTECTED REGION ID(CompanyImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Company::_initialize()
{
    // Supertypes

    // References
    for (size_t i = 0; i < m_departments->size(); i++)
    {
        (*m_departments)[i]->_initialize();
    }

    /*PROTECTED REGION ID(CompanyImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Company::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::company::CompanyPackage::COMPANY__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::company::CompanyPackage::COMPANY__DEPARTMENTS:
    {
        _any = m_departments->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void Company::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::company::CompanyPackage::COMPANY__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_name);
    }
        return;
    case ::company::CompanyPackage::COMPANY__DEPARTMENTS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::company::Company::getDepartments().clear();
        ::company::Company::getDepartments().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Company::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::company::CompanyPackage::COMPANY__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::company::CompanyPackage::COMPANY__DEPARTMENTS:
        return m_departments && m_departments->size();

    }
    throw "Error";
}

void Company::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Company::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::company::CompanyPackage_ptr >(::company::CompanyPackage::_instance())->getCompany();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Company::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::company::CompanyPackage::COMPANY__DEPARTMENTS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Company::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::company::CompanyPackage::COMPANY__DEPARTMENTS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

