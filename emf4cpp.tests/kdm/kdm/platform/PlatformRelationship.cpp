// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/platform/PlatformRelationship.cpp
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

#include "PlatformRelationship.hpp"
#include <kdm/platform/AbstractPlatformRelationship.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/platform/PlatformPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::kdm::platform;

// Default constructor
PlatformRelationship::PlatformRelationship() :
        m_to(0), m_from(0)
{

    /*PROTECTED REGION ID(PlatformRelationshipImpl__PlatformRelationshipImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

PlatformRelationship::~PlatformRelationship()
{
}

/*PROTECTED REGION ID(PlatformRelationship.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
::kdm::core::KDMEntity_ptr PlatformRelationship::getTo() const
{
    return m_to;
}

void PlatformRelationship::setTo(::kdm::core::KDMEntity_ptr _to)
{
    ::kdm::core::KDMEntity_ptr _old_to = m_to;

    m_to = _to;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::kdm::platform::PlatformPackage::_instance()->getPlatformRelationship__to(),
                _old_to,
                m_to
        );
        eNotify(&notification);
    }
#endif

}

::kdm::platform::AbstractPlatformElement_ptr PlatformRelationship::getFrom() const
{
    return m_from;
}

void PlatformRelationship::setFrom(
        ::kdm::platform::AbstractPlatformElement_ptr _from)
{
    ::kdm::platform::AbstractPlatformElement_ptr _old_from = m_from;

    m_from = _from;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::kdm::platform::PlatformPackage::_instance()->getPlatformRelationship__from(),
                _old_from,
                m_from
        );
        eNotify(&notification);
    }
#endif

}

