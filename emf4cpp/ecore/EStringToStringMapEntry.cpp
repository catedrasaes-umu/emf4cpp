// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EStringToStringMapEntry.cpp
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

#include "EStringToStringMapEntry.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EStringToStringMapEntry.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

// Default constructor
EStringToStringMapEntry::EStringToStringMapEntry()
{

    /*PROTECTED REGION ID(EStringToStringMapEntryImpl__EStringToStringMapEntryImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EStringToStringMapEntry::~EStringToStringMapEntry()
{
}

// Attributes

::ecore::EString const& EStringToStringMapEntry::getKey() const
{
    return m_key;
}

void EStringToStringMapEntry::setKey(::ecore::EString const& _key)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_key = m_key;
#endif
    m_key = _key;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEStringToStringMapEntry__key(),
                _old_key,
                m_key
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& EStringToStringMapEntry::getValue() const
{
    return m_value;
}

void EStringToStringMapEntry::setValue(::ecore::EString const& _value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_value = m_value;
#endif
    m_value = _value;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEStringToStringMapEntry__value(),
                _old_value,
                m_value
        );
        eNotify(&notification);
    }
#endif
}

// References

