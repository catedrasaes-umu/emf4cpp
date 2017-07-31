// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * company/Employee.cpp
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
#include <company/PhonebookEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "company/CompanyPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Employee.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::company;

// Default constructor
Employee::Employee() :
        m_phonebookEntry(0)
{

    /*PROTECTED REGION ID(EmployeeImpl__EmployeeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Employee::~Employee()
{
    if (m_phonebookEntry)
    {
        delete m_phonebookEntry;
    }
}

// Attributes

::ecore::EString const& Employee::getName() const
{
    return m_name;
}

void Employee::setName(::ecore::EString const& _name)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_name = m_name;
#endif
    m_name = _name;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::company::CompanyPackage::_instance()->getEmployee__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

// References

::company::PhonebookEntry_ptr Employee::getPhonebookEntry() const
{
    return m_phonebookEntry;
}

void Employee::setPhonebookEntry(::company::PhonebookEntry_ptr _phonebookEntry)
{
    ::company::PhonebookEntry_ptr _old_phonebookEntry = m_phonebookEntry;

    m_phonebookEntry = _phonebookEntry;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::company::CompanyPackage::_instance()->getEmployee__phonebookEntry(),
                _old_phonebookEntry,
                m_phonebookEntry
        );
        eNotify(&notification);
    }
#endif

    delete _old_phonebookEntry;
    m_phonebookEntry->_setEContainer(this,
            ::company::CompanyPackage::_instance()->getEmployee__phonebookEntry());
}

