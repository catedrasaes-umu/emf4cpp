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
        typedef EventModel* EventModel_ptr;

// AbstractEventElement
        class AbstractEventElement;
        typedef AbstractEventElement* AbstractEventElement_ptr;

// Event
        class Event;
        typedef Event* Event_ptr;

// AbstractEventRelationship
        class AbstractEventRelationship;
        typedef AbstractEventRelationship* AbstractEventRelationship_ptr;

// EventRelationship
        class EventRelationship;
        typedef EventRelationship* EventRelationship_ptr;

// EventResource
        class EventResource;
        typedef EventResource* EventResource_ptr;

// State
        class State;
        typedef State* State_ptr;

// Transition
        class Transition;
        typedef Transition* Transition_ptr;

// OnEntry
        class OnEntry;
        typedef OnEntry* OnEntry_ptr;

// OnExit
        class OnExit;
        typedef OnExit* OnExit_ptr;

// EventAction
        class EventAction;
        typedef EventAction* EventAction_ptr;

// ReadsState
        class ReadsState;
        typedef ReadsState* ReadsState_ptr;

// ProducesEvent
        class ProducesEvent;
        typedef ProducesEvent* ProducesEvent_ptr;

// ConsumesEvent
        class ConsumesEvent;
        typedef ConsumesEvent* ConsumesEvent_ptr;

// NextState
        class NextState;
        typedef NextState* NextState_ptr;

// InitialState
        class InitialState;
        typedef InitialState* InitialState_ptr;

// EventElement
        class EventElement;
        typedef EventElement* EventElement_ptr;

// HasState
        class HasState;
        typedef HasState* HasState_ptr;

// EEnum

// Package & Factory
        class EventFactory;
        typedef EventFactory * EventFactory_ptr;
        class EventPackage;
        typedef EventPackage * EventPackage_ptr;

        template< typename T, typename S >
        inline T* instanceOf(S* _s)
        {
            return dynamic_cast< T* >(_s);
        }

    } // event
} // kdm

#endif // _KDM_EVENT_FORWARD_HPP

