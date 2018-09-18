// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/event_forward.hpp
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

#ifndef _KDM_EVENT_FORWARD_HPP
#define _KDM_EVENT_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(kdm_event_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace kdm
{
    namespace event
    {

// EDataType

// EClass

// EventModel
        class EventModel;
        using EventModel_ptr = ::ecore::Ptr<EventModel>;

// AbstractEventElement
        class AbstractEventElement;
        using AbstractEventElement_ptr = ::ecore::Ptr<AbstractEventElement>;

// Event
        class Event;
        using Event_ptr = ::ecore::Ptr<Event>;

// AbstractEventRelationship
        class AbstractEventRelationship;
        using AbstractEventRelationship_ptr = ::ecore::Ptr<AbstractEventRelationship>;

// EventRelationship
        class EventRelationship;
        using EventRelationship_ptr = ::ecore::Ptr<EventRelationship>;

// EventResource
        class EventResource;
        using EventResource_ptr = ::ecore::Ptr<EventResource>;

// State
        class State;
        using State_ptr = ::ecore::Ptr<State>;

// Transition
        class Transition;
        using Transition_ptr = ::ecore::Ptr<Transition>;

// OnEntry
        class OnEntry;
        using OnEntry_ptr = ::ecore::Ptr<OnEntry>;

// OnExit
        class OnExit;
        using OnExit_ptr = ::ecore::Ptr<OnExit>;

// EventAction
        class EventAction;
        using EventAction_ptr = ::ecore::Ptr<EventAction>;

// ReadsState
        class ReadsState;
        using ReadsState_ptr = ::ecore::Ptr<ReadsState>;

// ProducesEvent
        class ProducesEvent;
        using ProducesEvent_ptr = ::ecore::Ptr<ProducesEvent>;

// ConsumesEvent
        class ConsumesEvent;
        using ConsumesEvent_ptr = ::ecore::Ptr<ConsumesEvent>;

// NextState
        class NextState;
        using NextState_ptr = ::ecore::Ptr<NextState>;

// InitialState
        class InitialState;
        using InitialState_ptr = ::ecore::Ptr<InitialState>;

// EventElement
        class EventElement;
        using EventElement_ptr = ::ecore::Ptr<EventElement>;

// HasState
        class HasState;
        using HasState_ptr = ::ecore::Ptr<HasState>;

// EEnum

// Package & Factory
        class EventFactory;
        using EventFactory_ptr = ::ecore::Ptr<EventFactory>;
        class EventPackage;
        using EventPackage_ptr = ::ecore::Ptr<EventPackage>;

    } // event
} // kdm

#endif // _KDM_EVENT_FORWARD_HPP

