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
        using EventModel_ptr = boost::intrusive_ptr<EventModel>;

// AbstractEventElement
        class AbstractEventElement;
        using AbstractEventElement_ptr = boost::intrusive_ptr<AbstractEventElement>;

// Event
        class Event;
        using Event_ptr = boost::intrusive_ptr<Event>;

// AbstractEventRelationship
        class AbstractEventRelationship;
        using AbstractEventRelationship_ptr = boost::intrusive_ptr<AbstractEventRelationship>;

// EventRelationship
        class EventRelationship;
        using EventRelationship_ptr = boost::intrusive_ptr<EventRelationship>;

// EventResource
        class EventResource;
        using EventResource_ptr = boost::intrusive_ptr<EventResource>;

// State
        class State;
        using State_ptr = boost::intrusive_ptr<State>;

// Transition
        class Transition;
        using Transition_ptr = boost::intrusive_ptr<Transition>;

// OnEntry
        class OnEntry;
        using OnEntry_ptr = boost::intrusive_ptr<OnEntry>;

// OnExit
        class OnExit;
        using OnExit_ptr = boost::intrusive_ptr<OnExit>;

// EventAction
        class EventAction;
        using EventAction_ptr = boost::intrusive_ptr<EventAction>;

// ReadsState
        class ReadsState;
        using ReadsState_ptr = boost::intrusive_ptr<ReadsState>;

// ProducesEvent
        class ProducesEvent;
        using ProducesEvent_ptr = boost::intrusive_ptr<ProducesEvent>;

// ConsumesEvent
        class ConsumesEvent;
        using ConsumesEvent_ptr = boost::intrusive_ptr<ConsumesEvent>;

// NextState
        class NextState;
        using NextState_ptr = boost::intrusive_ptr<NextState>;

// InitialState
        class InitialState;
        using InitialState_ptr = boost::intrusive_ptr<InitialState>;

// EventElement
        class EventElement;
        using EventElement_ptr = boost::intrusive_ptr<EventElement>;

// HasState
        class HasState;
        using HasState_ptr = boost::intrusive_ptr<HasState>;

// EEnum

// Package & Factory
        class EventFactory;
        using EventFactory_ptr = boost::intrusive_ptr<EventFactory>;
        class EventPackage;
        using EventPackage_ptr = boost::intrusive_ptr<EventPackage>;

        template< typename T, typename S >
        inline boost::intrusive_ptr< T > instanceOf(const S& _s)
        {
            return boost::intrusive_ptr < T > (dynamic_cast< T* >(_s.get()));
        }

    } // event
} // kdm

#endif // _KDM_EVENT_FORWARD_HPP

