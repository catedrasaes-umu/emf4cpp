// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build/LinksTo.cpp
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

#include "LinksTo.hpp"
#include <kdm/build/AbstractBuildRelationship.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/build/AbstractBuildElement.hpp>
#include <kdm/build/SymbolicLink.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/build/BuildPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(LinksTo.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::build;

// Default constructor
LinksTo::LinksTo() :
        m_to(0), m_from(0)
{

    /*PROTECTED REGION ID(LinksToImpl__LinksToImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

LinksTo::~LinksTo()
{
}

// Attributes

// References

::kdm::build::AbstractBuildElement_ptr LinksTo::getTo() const
{
    return m_to;
}

void LinksTo::setTo(::kdm::build::AbstractBuildElement_ptr _to)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::build::AbstractBuildElement_ptr _old_to = m_to;
#endif
    m_to = _to;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::build::BuildPackage::_instance()->getLinksTo__to(),
                _old_to,
                m_to
        );
        eNotify(&notification);
    }
#endif
}

::kdm::build::SymbolicLink_ptr LinksTo::getFrom() const
{
    return m_from;
}

void LinksTo::setFrom(::kdm::build::SymbolicLink_ptr _from)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::build::SymbolicLink_ptr _old_from = m_from;
#endif
    m_from = _from;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::build::BuildPackage::_instance()->getLinksTo__from(),
                _old_from,
                m_from
        );
        eNotify(&notification);
    }
#endif
}

