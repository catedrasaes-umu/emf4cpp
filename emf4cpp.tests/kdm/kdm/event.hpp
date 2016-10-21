// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/event.hpp
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

#ifndef KDM_EVENT_HPP
#define KDM_EVENT_HPP

#include "event_forward.hpp"
#include <ecorecpp/mapping.hpp>

// EPackage

// EClass
#include "event/EventModel.hpp"
#include "event/AbstractEventElement.hpp"
#include "event/Event.hpp"
#include "event/AbstractEventRelationship.hpp"
#include "event/EventRelationship.hpp"
#include "event/EventResource.hpp"
#include "event/State.hpp"
#include "event/Transition.hpp"
#include "event/OnEntry.hpp"
#include "event/OnExit.hpp"
#include "event/EventAction.hpp"
#include "event/ReadsState.hpp"
#include "event/ProducesEvent.hpp"
#include "event/ConsumesEvent.hpp"
#include "event/NextState.hpp"
#include "event/InitialState.hpp"
#include "event/EventElement.hpp"
#include "event/HasState.hpp"

// Package & Factory
#include "kdm/event/EventPackage.hpp"
#include "kdm/event/EventFactory.hpp"

#endif // KDM_EVENT_HPP
