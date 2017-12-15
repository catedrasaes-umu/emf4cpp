// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * company/DepartmentImpl.cpp
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

#include "Department.hpp"
#include <company/CompanyPackage.hpp>
#include <company/Employee.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DepartmentImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::company;

void Department::_initialize()
{
    // Supertypes

    // References
    for (size_t i = 0; i < m_employees->size(); i++)
    {
        (*m_employees)[i]->_initialize();
    }

    /*PROTECTED REGION ID(DepartmentImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Department::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::company::CompanyPackage::DEPARTMENT__EMPLOYEES:
    {
        _any = m_employees->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::company::CompanyPackage::DEPARTMENT__MANAGER:
    {
        if (m_manager)
            _any = m_manager->as< ::ecore::EObject >();
    }
        return _any;
    case ::company::CompanyPackage::DEPARTMENT__NUMBER:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_number);
    }
        return _any;

    }
    throw "Error";
}

void Department::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::company::CompanyPackage::DEPARTMENT__EMPLOYEES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::company::Department::getEmployees().clear();
        ::company::Department::getEmployees().insert_all(*_t0);
    }
        return;
    case ::company::CompanyPackage::DEPARTMENT__MANAGER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::company::Employee_ptr _t1 =
                dynamic_cast< ::company::Employee* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::company::Employee >(_t0);*/
        ::company::Department::setManager(_t1);
    }
        return;
    case ::company::CompanyPackage::DEPARTMENT__NUMBER:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, m_number);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Department::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::company::CompanyPackage::DEPARTMENT__EMPLOYEES:
        return m_employees && m_employees->size();
    case ::company::CompanyPackage::DEPARTMENT__MANAGER:
        return (bool) m_manager;
    case ::company::CompanyPackage::DEPARTMENT__NUMBER:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(m_number);

    }
    throw "Error";
}

void Department::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Department::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::company::CompanyPackage* >(::company::CompanyPackage::_instance().get())->getDepartment();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Department::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::company::CompanyPackage::DEPARTMENT__EMPLOYEES:
    {
    }
        return;
    case ::company::CompanyPackage::DEPARTMENT__MANAGER:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Department::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::company::CompanyPackage::DEPARTMENT__EMPLOYEES:
    {
    }
        return;
    case ::company::CompanyPackage::DEPARTMENT__MANAGER:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

