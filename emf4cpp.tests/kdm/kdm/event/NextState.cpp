// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/event/NextState.cpp
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

#include "NextState.hpp"
#include <kdm/event/AbstractEventRelationship.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/event/State.hpp>
#include <kdm/event/Transition.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/event/EventPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(NextState.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::event;

// Default constructor
NextState::NextState() :
        m_to(0), m_from(0)
{

    /*PROTECTED REGION ID(NextStateImpl__NextStateImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

NextState::~NextState()
{
}

// Attributes

// References

::kdm::event::State_ptr NextState::getTo() const
{
    return m_to;
}

void NextState::setTo(::kdm::event::State_ptr _to)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::event::State_ptr _old_to = m_to;
#endif
    m_to = _to;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::event::EventPackage::_instance()->getNextState__to(),
                _old_to,
                m_to
        );
        eNotify(&notification);
    }
#endif
}

::kdm::event::Transition_ptr NextState::getFrom() const
{
    return m_from;
}

void NextState::setFrom(::kdm::event::Transition_ptr _from)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::event::Transition_ptr _old_from = m_from;
#endif
    m_from = _from;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::event::EventPackage::_instance()->getNextState__from(),
                _old_from,
                m_from
        );
        eNotify(&notification);
    }
#endif
}

