// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/event/EventFactoryImpl.cpp
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

#include <kdm/event/EventFactory.hpp>
#include <kdm/event/EventPackage.hpp>
#include <kdm/event/EventModel.hpp>
#include <kdm/event/AbstractEventElement.hpp>
#include <kdm/event/Event.hpp>
#include <kdm/event/AbstractEventRelationship.hpp>
#include <kdm/event/EventRelationship.hpp>
#include <kdm/event/EventResource.hpp>
#include <kdm/event/State.hpp>
#include <kdm/event/Transition.hpp>
#include <kdm/event/OnEntry.hpp>
#include <kdm/event/OnExit.hpp>
#include <kdm/event/EventAction.hpp>
#include <kdm/event/ReadsState.hpp>
#include <kdm/event/ProducesEvent.hpp>
#include <kdm/event/ConsumesEvent.hpp>
#include <kdm/event/NextState.hpp>
#include <kdm/event/InitialState.hpp>
#include <kdm/event/EventElement.hpp>
#include <kdm/event/HasState.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::event;

EventFactory::EventFactory()
{
}

::ecore::EObject_ptr EventFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case EventPackage::EVENTMODEL:
        return createEventModel();
    case EventPackage::ABSTRACTEVENTELEMENT:
        return createAbstractEventElement();
    case EventPackage::EVENT:
        return createEvent();
    case EventPackage::ABSTRACTEVENTRELATIONSHIP:
        return createAbstractEventRelationship();
    case EventPackage::EVENTRELATIONSHIP:
        return createEventRelationship();
    case EventPackage::EVENTRESOURCE:
        return createEventResource();
    case EventPackage::STATE:
        return createState();
    case EventPackage::TRANSITION:
        return createTransition();
    case EventPackage::ONENTRY:
        return createOnEntry();
    case EventPackage::ONEXIT:
        return createOnExit();
    case EventPackage::EVENTACTION:
        return createEventAction();
    case EventPackage::READSSTATE:
        return createReadsState();
    case EventPackage::PRODUCESEVENT:
        return createProducesEvent();
    case EventPackage::CONSUMESEVENT:
        return createConsumesEvent();
    case EventPackage::NEXTSTATE:
        return createNextState();
    case EventPackage::INITIALSTATE:
        return createInitialState();
    case EventPackage::EVENTELEMENT:
        return createEventElement();
    case EventPackage::HASSTATE:
        return createHasState();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject EventFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString EventFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

EventModel_ptr EventFactory::createEventModel()
{
    return ::ecore::Ptr < EventModel > (new EventModel);
}
AbstractEventElement_ptr EventFactory::createAbstractEventElement()
{
    return ::ecore::Ptr < AbstractEventElement > (new AbstractEventElement);
}
Event_ptr EventFactory::createEvent()
{
    return ::ecore::Ptr < Event > (new Event);
}
AbstractEventRelationship_ptr EventFactory::createAbstractEventRelationship()
{
    return ::ecore::Ptr < AbstractEventRelationship
            > (new AbstractEventRelationship);
}
EventRelationship_ptr EventFactory::createEventRelationship()
{
    return ::ecore::Ptr < EventRelationship > (new EventRelationship);
}
EventResource_ptr EventFactory::createEventResource()
{
    return ::ecore::Ptr < EventResource > (new EventResource);
}
State_ptr EventFactory::createState()
{
    return ::ecore::Ptr < State > (new State);
}
Transition_ptr EventFactory::createTransition()
{
    return ::ecore::Ptr < Transition > (new Transition);
}
OnEntry_ptr EventFactory::createOnEntry()
{
    return ::ecore::Ptr < OnEntry > (new OnEntry);
}
OnExit_ptr EventFactory::createOnExit()
{
    return ::ecore::Ptr < OnExit > (new OnExit);
}
EventAction_ptr EventFactory::createEventAction()
{
    return ::ecore::Ptr < EventAction > (new EventAction);
}
ReadsState_ptr EventFactory::createReadsState()
{
    return ::ecore::Ptr < ReadsState > (new ReadsState);
}
ProducesEvent_ptr EventFactory::createProducesEvent()
{
    return ::ecore::Ptr < ProducesEvent > (new ProducesEvent);
}
ConsumesEvent_ptr EventFactory::createConsumesEvent()
{
    return ::ecore::Ptr < ConsumesEvent > (new ConsumesEvent);
}
NextState_ptr EventFactory::createNextState()
{
    return ::ecore::Ptr < NextState > (new NextState);
}
InitialState_ptr EventFactory::createInitialState()
{
    return ::ecore::Ptr < InitialState > (new InitialState);
}
EventElement_ptr EventFactory::createEventElement()
{
    return ::ecore::Ptr < EventElement > (new EventElement);
}
HasState_ptr EventFactory::createHasState()
{
    return ::ecore::Ptr < HasState > (new HasState);
}

