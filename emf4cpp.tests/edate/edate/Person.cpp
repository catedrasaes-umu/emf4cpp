// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * edate/Person.cpp
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
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "edate/EdatePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Person.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::edate;

// Default constructor
Person::Person()
{

    /*PROTECTED REGION ID(PersonImpl__PersonImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Person::~Person()
{
}

// Attributes

::ecore::EDate Person::getBirthday() const
{
    return m_Birthday;
}

void Person::setBirthday(::ecore::EDate _Birthday)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EDate _old_Birthday = m_Birthday;
#endif
    m_Birthday = _Birthday;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::edate::EdatePackage::_instance()->getPerson__Birthday(),
                _old_Birthday,
                m_Birthday
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& Person::getName() const
{
    return m_Name;
}

void Person::setName(::ecore::EString const& _Name)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_Name = m_Name;
#endif
    m_Name = _Name;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::edate::EdatePackage::_instance()->getPerson__Name(),
                _old_Name,
                m_Name
        );
        eNotify(&notification);
    }
#endif
}

// References

