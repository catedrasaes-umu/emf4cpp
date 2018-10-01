// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * enumeration/Bird.cpp
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

#include "Bird.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "enumeration/EnumerationPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Bird.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::enumeration;

// Default constructor
Bird::Bird() :
        m_type(::enumeration::BirdType::blackbird), m_name("Birdy")
{

    /*PROTECTED REGION ID(BirdImpl__BirdImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Bird::~Bird()
{
}

// Attributes

::enumeration::BirdType Bird::getType() const
{
    return m_type;
}

void Bird::setType(::enumeration::BirdType _type)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::enumeration::BirdType _old_type = m_type;
#endif
    m_type = _type;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::enumeration::EnumerationPackage::_instance()->getBird__type(),
                _old_type,
                m_type
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& Bird::getName() const
{
    return m_name;
}

void Bird::setName(::ecore::EString const& _name)
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
                _this(),
                ::enumeration::EnumerationPackage::_instance()->getBird__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

// References

