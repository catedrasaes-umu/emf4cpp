// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * edate/Apollo11.cpp
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

#include "Apollo11.hpp"
#include <edate/Person.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "edate/EdatePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Apollo11.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::edate;

// Default constructor
Apollo11::Apollo11() :
        m_FirstManOnMoonDate("1969-07-20T20:18:00.000+0000"), m_Member(0)
{

    /*PROTECTED REGION ID(Apollo11Impl__Apollo11Impl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Apollo11::~Apollo11()
{
    if (m_Member)
    {
        m_Member.reset();
    }
}

// Attributes

::ecore::EDate Apollo11::getFirstManOnMoonDate() const
{
    return m_FirstManOnMoonDate;
}

void Apollo11::setFirstManOnMoonDate(::ecore::EDate _FirstManOnMoonDate)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EDate _old_FirstManOnMoonDate = m_FirstManOnMoonDate;
#endif
    m_FirstManOnMoonDate = _FirstManOnMoonDate;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::edate::EdatePackage::_instance()->getApollo11__FirstManOnMoonDate(),
                _old_FirstManOnMoonDate,
                m_FirstManOnMoonDate
        );
        eNotify(&notification);
    }
#endif
}

// References

::edate::Person_ptr Apollo11::getMember() const
{
    return m_Member;
}

void Apollo11::setMember(::edate::Person_ptr _Member)
{
    if (m_Member)
        m_Member->_setEContainer(Apollo11_ptr(),
                ::edate::EdatePackage::_instance()->getApollo11__Member());
    if (_Member)
        _Member->_setEContainer(_this(),
                ::edate::EdatePackage::_instance()->getApollo11__Member());

#ifdef ECORECPP_NOTIFICATION_API
    ::edate::Person_ptr _old_Member = m_Member;
#endif
    m_Member = _Member;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::edate::EdatePackage::_instance()->getApollo11__Member(),
                _old_Member,
                m_Member
        );
        eNotify(&notification);
    }
#endif
}

