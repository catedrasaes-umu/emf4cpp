// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ResourceTests/ETypes.cpp
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
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ResourceTests/ResourceTestsPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ETypes.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ResourceTests;

// Default constructor
ETypes::ETypes() :
        m_string("Hallo Welt!"), m_emptyString(""), m_date(
                "1976-05-27T12:13:14.123-0300"), m_char(98), m_bool(true), m_double(
                3.14), m_int(10)
{

    /*PROTECTED REGION ID(ETypesImpl__ETypesImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ETypes::~ETypes()
{
}

// Attributes

::ecore::EString const& ETypes::getString() const
{
    return m_string;
}

void ETypes::setString(::ecore::EString const& _string)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_string = m_string;
#endif
    m_string = _string;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ResourceTests::ResourceTestsPackage::_instance()->getETypes__string(),
                _old_string,
                m_string
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& ETypes::getEmptyString() const
{
    return m_emptyString;
}

void ETypes::setEmptyString(::ecore::EString const& _emptyString)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_emptyString = m_emptyString;
#endif
    m_emptyString = _emptyString;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ResourceTests::ResourceTestsPackage::_instance()->getETypes__emptyString(),
                _old_emptyString,
                m_emptyString
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EDate ETypes::getDate() const
{
    return m_date;
}

void ETypes::setDate(::ecore::EDate _date)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EDate _old_date = m_date;
#endif
    m_date = _date;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ResourceTests::ResourceTestsPackage::_instance()->getETypes__date(),
                _old_date,
                m_date
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EChar ETypes::getChar() const
{
    return m_char;
}

void ETypes::setChar(::ecore::EChar _char)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EChar _old_char = m_char;
#endif
    m_char = _char;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ResourceTests::ResourceTestsPackage::_instance()->getETypes__char(),
                _old_char,
                m_char
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean ETypes::isBool() const
{
    return m_bool;
}

void ETypes::setBool(::ecore::EBoolean _bool)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_bool = m_bool;
#endif
    m_bool = _bool;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ResourceTests::ResourceTestsPackage::_instance()->getETypes__bool(),
                _old_bool,
                m_bool
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EDouble ETypes::getDouble() const
{
    return m_double;
}

void ETypes::setDouble(::ecore::EDouble _double)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EDouble _old_double = m_double;
#endif
    m_double = _double;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ResourceTests::ResourceTestsPackage::_instance()->getETypes__double(),
                _old_double,
                m_double
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EInt ETypes::getInt() const
{
    return m_int;
}

void ETypes::setInt(::ecore::EInt _int)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_int = m_int;
#endif
    m_int = _int;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ResourceTests::ResourceTestsPackage::_instance()->getETypes__int(),
                _old_int,
                m_int
        );
        eNotify(&notification);
    }
#endif
}

// References

