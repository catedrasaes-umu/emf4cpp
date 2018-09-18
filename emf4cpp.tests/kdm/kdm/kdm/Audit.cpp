// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/Audit.cpp
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

#include "Audit.hpp"
#include <kdm/core/Element.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/kdm/KdmPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Audit.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::kdm;

// Default constructor
Audit::Audit()
{

    /*PROTECTED REGION ID(AuditImpl__AuditImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Audit::~Audit()
{
}

// Attributes

::kdm::core::String Audit::getDescription() const
{
    return m_description;
}

void Audit::setDescription(::kdm::core::String _description)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::String _old_description = m_description;
#endif
    m_description = _description;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::kdm::KdmPackage::_instance()->getAudit__description(),
                _old_description,
                m_description
        );
        eNotify(&notification);
    }
#endif
}

::kdm::core::String Audit::getAuthor() const
{
    return m_author;
}

void Audit::setAuthor(::kdm::core::String _author)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::String _old_author = m_author;
#endif
    m_author = _author;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::kdm::KdmPackage::_instance()->getAudit__author(),
                _old_author,
                m_author
        );
        eNotify(&notification);
    }
#endif
}

::kdm::core::String Audit::getDate() const
{
    return m_date;
}

void Audit::setDate(::kdm::core::String _date)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::String _old_date = m_date;
#endif
    m_date = _date;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::kdm::KdmPackage::_instance()->getAudit__date(),
                _old_date,
                m_date
        );
        eNotify(&notification);
    }
#endif
}

// References

