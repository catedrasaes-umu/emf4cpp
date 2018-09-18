// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecorecpp/notify/Notification.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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
#ifndef ECORECPP_NOTIFY_NOTIFICATION_HPP
#define ECORECPP_NOTIFY_NOTIFICATION_HPP

#include "../mapping/any.hpp"
#include "../notify_forward.hpp"
#include "../dllEcorecpp.hpp"
#include "Notifier.hpp"

#include <ecore/EStructuralFeature.hpp>

namespace ecorecpp
{
namespace notify
{

class Notification
{
public:

    enum EventType
    {
        CREATE,
        SET,
        UNSET,
		ADD,
        REMOVE,
        ADD_MANY,
        REMOVE_MANY,
        MOVE,
        REMOVING_ADAPTER,
        RESOLVE,
        EVENT_TYPE_COUNT
    };

    template< typename T >
    Notification(EventType type, Notifier_ptr notifier,
				 ::ecore::EStructuralFeature_ptr feature,
				 const T & old_value,
				 const T & new_value) :
        m_event_type(type), m_notifier(notifier), m_feature(feature),
		m_old_value(old_value), m_new_value(new_value)
    {
    }

    virtual ~Notification() {}

    static const int NO_FEATURE_ID = -1;

    EventType getEventType() { return m_event_type; }
    Notifier_ptr getNotifier() { return m_notifier; }
    ::ecore::EStructuralFeature_ptr getFeature() { return m_feature; }

    ::ecore::any const& getOldValue() { return m_old_value; }
    ::ecore::any const& getNewValue() { return m_new_value; }

protected:

    EventType m_event_type;
    Notifier_ptr m_notifier;
    ::ecore::EStructuralFeature_ptr m_feature;

    ::ecore::any m_old_value;
    ::ecore::any m_new_value;

};

} // notify
} // ecorecpp

#endif // ECORECPP_NOTIFY_NOTIFICATION_HPP
