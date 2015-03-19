// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * company/Department.cpp
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

#include "Department.hpp"
#include <company/Employee.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "company/CompanyPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::company;

// Default constructor
Department::Department() :
    m_manager(0)
{

    m_employees.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::company::Employee,
                    -1, true, false >(this, NULL));

    /*PROTECTED REGION ID(DepartmentImpl__DepartmentImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Department::~Department()
{
}

/*PROTECTED REGION ID(Department.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes

::ecore::EInt Department::getNumber() const
{
    return m_number;
}

void Department::setNumber(::ecore::EInt _number)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_number = m_number;
#endif
    m_number = _number;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::company::CompanyPackage::_instance()->getDepartment__number(),
                _old_number,
                m_number
        );
        eNotify(&notification);
    }
#endif
}

// References
::ecorecpp::mapping::EList< ::company::Employee >& Department::getEmployees()
{
    return *m_employees;
}

::company::Employee_ptr Department::getManager()
{
    return m_manager;
}

void Department::setManager(::company::Employee_ptr _manager)
{
    ::company::Employee_ptr _old_manager = m_manager;

    m_manager = _manager;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::company::CompanyPackage::_instance()->getDepartment__manager(),
                _old_manager,
                m_manager
        );
        eNotify(&notification);
    }
#endif

}

