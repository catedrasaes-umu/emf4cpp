// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecorecpp/notify/Notification.cpp
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
#include "Notification.hpp"

using namespace ::ecorecpp::notify;

Notification::~Notification()
{
}

Notification::EventType Notification::getEventType()
{
    return m_event_type;
}

Notifier_ptr Notification::getNotifier()
{
    return m_notifier;
}

::ecore::EStructuralFeature_ptr Notification::getFeature()
{
    return m_feature;
}

::ecore::any const& Notification::getNewValue()
{
    return m_new_value;
}

::ecore::any const& Notification::getOldValue()
{
    return m_old_value;
}

