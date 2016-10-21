// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/event/EventPackageImpl.cpp
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

#include <kdm/event/EventPackage.hpp>
#include <kdm/event/EventFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/core/CorePackage.hpp>
#include <kdm/source/SourcePackage.hpp>
#include <kdm/action/ActionPackage.hpp>
#include <kdm/code/CodePackage.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/core/KDMEntity.hpp>

using namespace ::kdm::event;

EventPackage::EventPackage()
{

    // Feature definitions of EventModel
    m_EventModel__eventElement = new ::ecore::EReference();

    // Feature definitions of AbstractEventElement
    m_AbstractEventElement__source = new ::ecore::EReference();
    m_AbstractEventElement__eventRelation = new ::ecore::EReference();
    m_AbstractEventElement__abstraction = new ::ecore::EReference();
    m_AbstractEventElement__implementation = new ::ecore::EReference();

    // Feature definitions of Event
    m_Event__kind = new ::ecore::EAttribute();

    // Feature definitions of AbstractEventRelationship

    // Feature definitions of EventRelationship
    m_EventRelationship__to = new ::ecore::EReference();
    m_EventRelationship__from = new ::ecore::EReference();

    // Feature definitions of EventResource
    m_EventResource__eventElement = new ::ecore::EReference();

    // Feature definitions of State

    // Feature definitions of Transition

    // Feature definitions of OnEntry

    // Feature definitions of OnExit

    // Feature definitions of EventAction
    m_EventAction__kind = new ::ecore::EAttribute();
    m_EventAction__eventElement = new ::ecore::EReference();

    // Feature definitions of ReadsState
    m_ReadsState__to = new ::ecore::EReference();
    m_ReadsState__from = new ::ecore::EReference();

    // Feature definitions of ProducesEvent
    m_ProducesEvent__to = new ::ecore::EReference();
    m_ProducesEvent__from = new ::ecore::EReference();

    // Feature definitions of ConsumesEvent
    m_ConsumesEvent__to = new ::ecore::EReference();
    m_ConsumesEvent__from = new ::ecore::EReference();

    // Feature definitions of NextState
    m_NextState__to = new ::ecore::EReference();
    m_NextState__from = new ::ecore::EReference();

    // Feature definitions of InitialState

    // Feature definitions of EventElement

    // Feature definitions of HasState
    m_HasState__to = new ::ecore::EReference();
    m_HasState__from = new ::ecore::EReference();

    /* Now one can safely ask for a feature definition of
     * a class, though it is not yet usable. */
    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = EventFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    // Create classes and their features

    // EventModel
    m_EventModelEClass = new ::ecore::EClass();
    m_EventModelEClass->setClassifierID(EVENTMODEL);
    m_EventModelEClass->setEPackage(this);
    getEClassifiers().push_back(m_EventModelEClass);
    // m_EventModel__eventElement has already been allocated above
    m_EventModel__eventElement->setFeatureID(
            ::kdm::event::EventPackage::EVENTMODEL__EVENTELEMENT);
    m_EventModelEClass->getEStructuralFeatures().push_back(
            m_EventModel__eventElement);

    // AbstractEventElement
    m_AbstractEventElementEClass = new ::ecore::EClass();
    m_AbstractEventElementEClass->setClassifierID(ABSTRACTEVENTELEMENT);
    m_AbstractEventElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_AbstractEventElementEClass);
    // m_AbstractEventElement__source has already been allocated above
    m_AbstractEventElement__source->setFeatureID(
            ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__SOURCE);
    m_AbstractEventElementEClass->getEStructuralFeatures().push_back(
            m_AbstractEventElement__source);
    // m_AbstractEventElement__eventRelation has already been allocated above
    m_AbstractEventElement__eventRelation->setFeatureID(
            ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__EVENTRELATION);
    m_AbstractEventElementEClass->getEStructuralFeatures().push_back(
            m_AbstractEventElement__eventRelation);
    // m_AbstractEventElement__abstraction has already been allocated above
    m_AbstractEventElement__abstraction->setFeatureID(
            ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__ABSTRACTION);
    m_AbstractEventElementEClass->getEStructuralFeatures().push_back(
            m_AbstractEventElement__abstraction);
    // m_AbstractEventElement__implementation has already been allocated above
    m_AbstractEventElement__implementation->setFeatureID(
            ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__IMPLEMENTATION);
    m_AbstractEventElementEClass->getEStructuralFeatures().push_back(
            m_AbstractEventElement__implementation);

    // Event
    m_EventEClass = new ::ecore::EClass();
    m_EventEClass->setClassifierID(EVENT);
    m_EventEClass->setEPackage(this);
    getEClassifiers().push_back(m_EventEClass);
    // m_Event__kind has already been allocated above
    m_Event__kind->setFeatureID(::kdm::event::EventPackage::EVENT__KIND);
    m_EventEClass->getEStructuralFeatures().push_back(m_Event__kind);

    // AbstractEventRelationship
    m_AbstractEventRelationshipEClass = new ::ecore::EClass();
    m_AbstractEventRelationshipEClass->setClassifierID(
            ABSTRACTEVENTRELATIONSHIP);
    m_AbstractEventRelationshipEClass->setEPackage(this);
    getEClassifiers().push_back(m_AbstractEventRelationshipEClass);

    // EventRelationship
    m_EventRelationshipEClass = new ::ecore::EClass();
    m_EventRelationshipEClass->setClassifierID(EVENTRELATIONSHIP);
    m_EventRelationshipEClass->setEPackage(this);
    getEClassifiers().push_back(m_EventRelationshipEClass);
    // m_EventRelationship__to has already been allocated above
    m_EventRelationship__to->setFeatureID(
            ::kdm::event::EventPackage::EVENTRELATIONSHIP__TO);
    m_EventRelationshipEClass->getEStructuralFeatures().push_back(
            m_EventRelationship__to);
    // m_EventRelationship__from has already been allocated above
    m_EventRelationship__from->setFeatureID(
            ::kdm::event::EventPackage::EVENTRELATIONSHIP__FROM);
    m_EventRelationshipEClass->getEStructuralFeatures().push_back(
            m_EventRelationship__from);

    // EventResource
    m_EventResourceEClass = new ::ecore::EClass();
    m_EventResourceEClass->setClassifierID(EVENTRESOURCE);
    m_EventResourceEClass->setEPackage(this);
    getEClassifiers().push_back(m_EventResourceEClass);
    // m_EventResource__eventElement has already been allocated above
    m_EventResource__eventElement->setFeatureID(
            ::kdm::event::EventPackage::EVENTRESOURCE__EVENTELEMENT);
    m_EventResourceEClass->getEStructuralFeatures().push_back(
            m_EventResource__eventElement);

    // State
    m_StateEClass = new ::ecore::EClass();
    m_StateEClass->setClassifierID(STATE);
    m_StateEClass->setEPackage(this);
    getEClassifiers().push_back(m_StateEClass);

    // Transition
    m_TransitionEClass = new ::ecore::EClass();
    m_TransitionEClass->setClassifierID(TRANSITION);
    m_TransitionEClass->setEPackage(this);
    getEClassifiers().push_back(m_TransitionEClass);

    // OnEntry
    m_OnEntryEClass = new ::ecore::EClass();
    m_OnEntryEClass->setClassifierID(ONENTRY);
    m_OnEntryEClass->setEPackage(this);
    getEClassifiers().push_back(m_OnEntryEClass);

    // OnExit
    m_OnExitEClass = new ::ecore::EClass();
    m_OnExitEClass->setClassifierID(ONEXIT);
    m_OnExitEClass->setEPackage(this);
    getEClassifiers().push_back(m_OnExitEClass);

    // EventAction
    m_EventActionEClass = new ::ecore::EClass();
    m_EventActionEClass->setClassifierID(EVENTACTION);
    m_EventActionEClass->setEPackage(this);
    getEClassifiers().push_back(m_EventActionEClass);
    // m_EventAction__kind has already been allocated above
    m_EventAction__kind->setFeatureID(
            ::kdm::event::EventPackage::EVENTACTION__KIND);
    m_EventActionEClass->getEStructuralFeatures().push_back(
            m_EventAction__kind);
    // m_EventAction__eventElement has already been allocated above
    m_EventAction__eventElement->setFeatureID(
            ::kdm::event::EventPackage::EVENTACTION__EVENTELEMENT);
    m_EventActionEClass->getEStructuralFeatures().push_back(
            m_EventAction__eventElement);

    // ReadsState
    m_ReadsStateEClass = new ::ecore::EClass();
    m_ReadsStateEClass->setClassifierID(READSSTATE);
    m_ReadsStateEClass->setEPackage(this);
    getEClassifiers().push_back(m_ReadsStateEClass);
    // m_ReadsState__to has already been allocated above
    m_ReadsState__to->setFeatureID(::kdm::event::EventPackage::READSSTATE__TO);
    m_ReadsStateEClass->getEStructuralFeatures().push_back(m_ReadsState__to);
    // m_ReadsState__from has already been allocated above
    m_ReadsState__from->setFeatureID(
            ::kdm::event::EventPackage::READSSTATE__FROM);
    m_ReadsStateEClass->getEStructuralFeatures().push_back(m_ReadsState__from);

    // ProducesEvent
    m_ProducesEventEClass = new ::ecore::EClass();
    m_ProducesEventEClass->setClassifierID(PRODUCESEVENT);
    m_ProducesEventEClass->setEPackage(this);
    getEClassifiers().push_back(m_ProducesEventEClass);
    // m_ProducesEvent__to has already been allocated above
    m_ProducesEvent__to->setFeatureID(
            ::kdm::event::EventPackage::PRODUCESEVENT__TO);
    m_ProducesEventEClass->getEStructuralFeatures().push_back(
            m_ProducesEvent__to);
    // m_ProducesEvent__from has already been allocated above
    m_ProducesEvent__from->setFeatureID(
            ::kdm::event::EventPackage::PRODUCESEVENT__FROM);
    m_ProducesEventEClass->getEStructuralFeatures().push_back(
            m_ProducesEvent__from);

    // ConsumesEvent
    m_ConsumesEventEClass = new ::ecore::EClass();
    m_ConsumesEventEClass->setClassifierID(CONSUMESEVENT);
    m_ConsumesEventEClass->setEPackage(this);
    getEClassifiers().push_back(m_ConsumesEventEClass);
    // m_ConsumesEvent__to has already been allocated above
    m_ConsumesEvent__to->setFeatureID(
            ::kdm::event::EventPackage::CONSUMESEVENT__TO);
    m_ConsumesEventEClass->getEStructuralFeatures().push_back(
            m_ConsumesEvent__to);
    // m_ConsumesEvent__from has already been allocated above
    m_ConsumesEvent__from->setFeatureID(
            ::kdm::event::EventPackage::CONSUMESEVENT__FROM);
    m_ConsumesEventEClass->getEStructuralFeatures().push_back(
            m_ConsumesEvent__from);

    // NextState
    m_NextStateEClass = new ::ecore::EClass();
    m_NextStateEClass->setClassifierID(NEXTSTATE);
    m_NextStateEClass->setEPackage(this);
    getEClassifiers().push_back(m_NextStateEClass);
    // m_NextState__to has already been allocated above
    m_NextState__to->setFeatureID(::kdm::event::EventPackage::NEXTSTATE__TO);
    m_NextStateEClass->getEStructuralFeatures().push_back(m_NextState__to);
    // m_NextState__from has already been allocated above
    m_NextState__from->setFeatureID(
            ::kdm::event::EventPackage::NEXTSTATE__FROM);
    m_NextStateEClass->getEStructuralFeatures().push_back(m_NextState__from);

    // InitialState
    m_InitialStateEClass = new ::ecore::EClass();
    m_InitialStateEClass->setClassifierID(INITIALSTATE);
    m_InitialStateEClass->setEPackage(this);
    getEClassifiers().push_back(m_InitialStateEClass);

    // EventElement
    m_EventElementEClass = new ::ecore::EClass();
    m_EventElementEClass->setClassifierID(EVENTELEMENT);
    m_EventElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_EventElementEClass);

    // HasState
    m_HasStateEClass = new ::ecore::EClass();
    m_HasStateEClass->setClassifierID(HASSTATE);
    m_HasStateEClass->setEPackage(this);
    getEClassifiers().push_back(m_HasStateEClass);
    // m_HasState__to has already been allocated above
    m_HasState__to->setFeatureID(::kdm::event::EventPackage::HASSTATE__TO);
    m_HasStateEClass->getEStructuralFeatures().push_back(m_HasState__to);
    // m_HasState__from has already been allocated above
    m_HasState__from->setFeatureID(::kdm::event::EventPackage::HASSTATE__FROM);
    m_HasStateEClass->getEStructuralFeatures().push_back(m_HasState__from);

    // Create enums

    // Create data types

    // Initialize package
    setName("event");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_EventModelEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::kdm::KdmPackage* >(::kdm::kdm::KdmPackage::_instance())->getKDMModel());
    m_AbstractEventElementEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMEntity());
    m_EventEClass->getESuperTypes().push_back(m_AbstractEventElementEClass);
    m_AbstractEventRelationshipEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMRelationship());
    m_EventRelationshipEClass->getESuperTypes().push_back(
            m_AbstractEventRelationshipEClass);
    m_EventResourceEClass->getESuperTypes().push_back(
            m_AbstractEventElementEClass);
    m_StateEClass->getESuperTypes().push_back(m_EventResourceEClass);
    m_TransitionEClass->getESuperTypes().push_back(m_EventResourceEClass);
    m_OnEntryEClass->getESuperTypes().push_back(m_TransitionEClass);
    m_OnExitEClass->getESuperTypes().push_back(m_TransitionEClass);
    m_EventActionEClass->getESuperTypes().push_back(
            m_AbstractEventElementEClass);
    m_ReadsStateEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getAbstractActionRelationship());
    m_ProducesEventEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getAbstractActionRelationship());
    m_ConsumesEventEClass->getESuperTypes().push_back(
            m_AbstractEventRelationshipEClass);
    m_NextStateEClass->getESuperTypes().push_back(
            m_AbstractEventRelationshipEClass);
    m_InitialStateEClass->getESuperTypes().push_back(m_StateEClass);
    m_EventElementEClass->getESuperTypes().push_back(
            m_AbstractEventElementEClass);
    m_HasStateEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getAbstractActionRelationship());

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // EventModel
    m_EventModelEClass->setName("EventModel");
    m_EventModelEClass->setAbstract(false);
    m_EventModelEClass->setInterface(false);
    m_EventModel__eventElement->setEType(m_AbstractEventElementEClass);
    m_EventModel__eventElement->setName("eventElement");
    m_EventModel__eventElement->setDefaultValueLiteral("");
    m_EventModel__eventElement->setLowerBound(0);
    m_EventModel__eventElement->setUpperBound(-1);
    m_EventModel__eventElement->setTransient(false);
    m_EventModel__eventElement->setVolatile(false);
    m_EventModel__eventElement->setChangeable(true);
    m_EventModel__eventElement->setContainment(true);
    m_EventModel__eventElement->setResolveProxies(true);
    m_EventModel__eventElement->setUnique(true);
    m_EventModel__eventElement->setDerived(false);
    m_EventModel__eventElement->setOrdered(false);
    // AbstractEventElement
    m_AbstractEventElementEClass->setName("AbstractEventElement");
    m_AbstractEventElementEClass->setAbstract(true);
    m_AbstractEventElementEClass->setInterface(false);
    m_AbstractEventElement__source->setEType(
            dynamic_cast< ::kdm::source::SourcePackage* >(::kdm::source::SourcePackage::_instance())->getSourceRef());
    m_AbstractEventElement__source->setName("source");
    m_AbstractEventElement__source->setDefaultValueLiteral("");
    m_AbstractEventElement__source->setLowerBound(0);
    m_AbstractEventElement__source->setUpperBound(-1);
    m_AbstractEventElement__source->setTransient(false);
    m_AbstractEventElement__source->setVolatile(false);
    m_AbstractEventElement__source->setChangeable(true);
    m_AbstractEventElement__source->setContainment(true);
    m_AbstractEventElement__source->setResolveProxies(true);
    m_AbstractEventElement__source->setUnique(true);
    m_AbstractEventElement__source->setDerived(false);
    m_AbstractEventElement__source->setOrdered(false);
    m_AbstractEventElement__eventRelation->setEType(
            m_AbstractEventRelationshipEClass);
    m_AbstractEventElement__eventRelation->setName("eventRelation");
    m_AbstractEventElement__eventRelation->setDefaultValueLiteral("");
    m_AbstractEventElement__eventRelation->setLowerBound(0);
    m_AbstractEventElement__eventRelation->setUpperBound(-1);
    m_AbstractEventElement__eventRelation->setTransient(false);
    m_AbstractEventElement__eventRelation->setVolatile(false);
    m_AbstractEventElement__eventRelation->setChangeable(true);
    m_AbstractEventElement__eventRelation->setContainment(true);
    m_AbstractEventElement__eventRelation->setResolveProxies(true);
    m_AbstractEventElement__eventRelation->setUnique(true);
    m_AbstractEventElement__eventRelation->setDerived(false);
    m_AbstractEventElement__eventRelation->setOrdered(false);
    m_AbstractEventElement__abstraction->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getActionElement());
    m_AbstractEventElement__abstraction->setName("abstraction");
    m_AbstractEventElement__abstraction->setDefaultValueLiteral("");
    m_AbstractEventElement__abstraction->setLowerBound(0);
    m_AbstractEventElement__abstraction->setUpperBound(-1);
    m_AbstractEventElement__abstraction->setTransient(false);
    m_AbstractEventElement__abstraction->setVolatile(false);
    m_AbstractEventElement__abstraction->setChangeable(true);
    m_AbstractEventElement__abstraction->setContainment(true);
    m_AbstractEventElement__abstraction->setResolveProxies(true);
    m_AbstractEventElement__abstraction->setUnique(true);
    m_AbstractEventElement__abstraction->setDerived(false);
    m_AbstractEventElement__abstraction->setOrdered(true);
    m_AbstractEventElement__implementation->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance())->getAbstractCodeElement());
    m_AbstractEventElement__implementation->setName("implementation");
    m_AbstractEventElement__implementation->setDefaultValueLiteral("");
    m_AbstractEventElement__implementation->setLowerBound(0);
    m_AbstractEventElement__implementation->setUpperBound(-1);
    m_AbstractEventElement__implementation->setTransient(false);
    m_AbstractEventElement__implementation->setVolatile(false);
    m_AbstractEventElement__implementation->setChangeable(true);
    m_AbstractEventElement__implementation->setContainment(false);
    m_AbstractEventElement__implementation->setResolveProxies(true);
    m_AbstractEventElement__implementation->setUnique(true);
    m_AbstractEventElement__implementation->setDerived(false);
    m_AbstractEventElement__implementation->setOrdered(false);
    // Event
    m_EventEClass->setName("Event");
    m_EventEClass->setAbstract(false);
    m_EventEClass->setInterface(false);
    m_Event__kind->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_Event__kind->setName("kind");
    m_Event__kind->setDefaultValueLiteral("");
    m_Event__kind->setLowerBound(0);
    m_Event__kind->setUpperBound(1);
    m_Event__kind->setTransient(false);
    m_Event__kind->setVolatile(false);
    m_Event__kind->setChangeable(true);
    m_Event__kind->setUnsettable(false);
    m_Event__kind->setID(false);
    m_Event__kind->setUnique(false);
    m_Event__kind->setDerived(false);
    m_Event__kind->setOrdered(false);
    // AbstractEventRelationship
    m_AbstractEventRelationshipEClass->setName("AbstractEventRelationship");
    m_AbstractEventRelationshipEClass->setAbstract(true);
    m_AbstractEventRelationshipEClass->setInterface(false);
    // EventRelationship
    m_EventRelationshipEClass->setName("EventRelationship");
    m_EventRelationshipEClass->setAbstract(false);
    m_EventRelationshipEClass->setInterface(false);
    m_EventRelationship__to->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMEntity());
    m_EventRelationship__to->setName("to");
    m_EventRelationship__to->setDefaultValueLiteral("");
    m_EventRelationship__to->setLowerBound(1);
    m_EventRelationship__to->setUpperBound(1);
    m_EventRelationship__to->setTransient(false);
    m_EventRelationship__to->setVolatile(false);
    m_EventRelationship__to->setChangeable(true);
    m_EventRelationship__to->setContainment(false);
    m_EventRelationship__to->setResolveProxies(true);
    m_EventRelationship__to->setUnique(true);
    m_EventRelationship__to->setDerived(false);
    m_EventRelationship__to->setOrdered(false);
    m_EventRelationship__from->setEType(m_AbstractEventElementEClass);
    m_EventRelationship__from->setName("from");
    m_EventRelationship__from->setDefaultValueLiteral("");
    m_EventRelationship__from->setLowerBound(1);
    m_EventRelationship__from->setUpperBound(1);
    m_EventRelationship__from->setTransient(false);
    m_EventRelationship__from->setVolatile(false);
    m_EventRelationship__from->setChangeable(true);
    m_EventRelationship__from->setContainment(false);
    m_EventRelationship__from->setResolveProxies(true);
    m_EventRelationship__from->setUnique(true);
    m_EventRelationship__from->setDerived(false);
    m_EventRelationship__from->setOrdered(false);
    // EventResource
    m_EventResourceEClass->setName("EventResource");
    m_EventResourceEClass->setAbstract(false);
    m_EventResourceEClass->setInterface(false);
    m_EventResource__eventElement->setEType(m_AbstractEventElementEClass);
    m_EventResource__eventElement->setName("eventElement");
    m_EventResource__eventElement->setDefaultValueLiteral("");
    m_EventResource__eventElement->setLowerBound(0);
    m_EventResource__eventElement->setUpperBound(-1);
    m_EventResource__eventElement->setTransient(false);
    m_EventResource__eventElement->setVolatile(false);
    m_EventResource__eventElement->setChangeable(true);
    m_EventResource__eventElement->setContainment(true);
    m_EventResource__eventElement->setResolveProxies(true);
    m_EventResource__eventElement->setUnique(true);
    m_EventResource__eventElement->setDerived(false);
    m_EventResource__eventElement->setOrdered(false);
    // State
    m_StateEClass->setName("State");
    m_StateEClass->setAbstract(false);
    m_StateEClass->setInterface(false);
    // Transition
    m_TransitionEClass->setName("Transition");
    m_TransitionEClass->setAbstract(false);
    m_TransitionEClass->setInterface(false);
    // OnEntry
    m_OnEntryEClass->setName("OnEntry");
    m_OnEntryEClass->setAbstract(false);
    m_OnEntryEClass->setInterface(false);
    // OnExit
    m_OnExitEClass->setName("OnExit");
    m_OnExitEClass->setAbstract(false);
    m_OnExitEClass->setInterface(false);
    // EventAction
    m_EventActionEClass->setName("EventAction");
    m_EventActionEClass->setAbstract(false);
    m_EventActionEClass->setInterface(false);
    m_EventAction__kind->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_EventAction__kind->setName("kind");
    m_EventAction__kind->setDefaultValueLiteral("");
    m_EventAction__kind->setLowerBound(0);
    m_EventAction__kind->setUpperBound(1);
    m_EventAction__kind->setTransient(false);
    m_EventAction__kind->setVolatile(false);
    m_EventAction__kind->setChangeable(true);
    m_EventAction__kind->setUnsettable(false);
    m_EventAction__kind->setID(false);
    m_EventAction__kind->setUnique(false);
    m_EventAction__kind->setDerived(false);
    m_EventAction__kind->setOrdered(false);
    m_EventAction__eventElement->setEType(m_EventEClass);
    m_EventAction__eventElement->setName("eventElement");
    m_EventAction__eventElement->setDefaultValueLiteral("");
    m_EventAction__eventElement->setLowerBound(0);
    m_EventAction__eventElement->setUpperBound(-1);
    m_EventAction__eventElement->setTransient(false);
    m_EventAction__eventElement->setVolatile(false);
    m_EventAction__eventElement->setChangeable(true);
    m_EventAction__eventElement->setContainment(true);
    m_EventAction__eventElement->setResolveProxies(true);
    m_EventAction__eventElement->setUnique(true);
    m_EventAction__eventElement->setDerived(false);
    m_EventAction__eventElement->setOrdered(false);
    // ReadsState
    m_ReadsStateEClass->setName("ReadsState");
    m_ReadsStateEClass->setAbstract(false);
    m_ReadsStateEClass->setInterface(false);
    m_ReadsState__to->setEType(m_StateEClass);
    m_ReadsState__to->setName("to");
    m_ReadsState__to->setDefaultValueLiteral("");
    m_ReadsState__to->setLowerBound(1);
    m_ReadsState__to->setUpperBound(1);
    m_ReadsState__to->setTransient(false);
    m_ReadsState__to->setVolatile(false);
    m_ReadsState__to->setChangeable(true);
    m_ReadsState__to->setContainment(false);
    m_ReadsState__to->setResolveProxies(true);
    m_ReadsState__to->setUnique(true);
    m_ReadsState__to->setDerived(false);
    m_ReadsState__to->setOrdered(false);
    m_ReadsState__from->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getActionElement());
    m_ReadsState__from->setName("from");
    m_ReadsState__from->setDefaultValueLiteral("");
    m_ReadsState__from->setLowerBound(1);
    m_ReadsState__from->setUpperBound(1);
    m_ReadsState__from->setTransient(false);
    m_ReadsState__from->setVolatile(false);
    m_ReadsState__from->setChangeable(true);
    m_ReadsState__from->setContainment(false);
    m_ReadsState__from->setResolveProxies(true);
    m_ReadsState__from->setUnique(true);
    m_ReadsState__from->setDerived(false);
    m_ReadsState__from->setOrdered(false);
    // ProducesEvent
    m_ProducesEventEClass->setName("ProducesEvent");
    m_ProducesEventEClass->setAbstract(false);
    m_ProducesEventEClass->setInterface(false);
    m_ProducesEvent__to->setEType(m_EventEClass);
    m_ProducesEvent__to->setName("to");
    m_ProducesEvent__to->setDefaultValueLiteral("");
    m_ProducesEvent__to->setLowerBound(1);
    m_ProducesEvent__to->setUpperBound(1);
    m_ProducesEvent__to->setTransient(false);
    m_ProducesEvent__to->setVolatile(false);
    m_ProducesEvent__to->setChangeable(true);
    m_ProducesEvent__to->setContainment(false);
    m_ProducesEvent__to->setResolveProxies(true);
    m_ProducesEvent__to->setUnique(true);
    m_ProducesEvent__to->setDerived(false);
    m_ProducesEvent__to->setOrdered(false);
    m_ProducesEvent__from->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getActionElement());
    m_ProducesEvent__from->setName("from");
    m_ProducesEvent__from->setDefaultValueLiteral("");
    m_ProducesEvent__from->setLowerBound(1);
    m_ProducesEvent__from->setUpperBound(1);
    m_ProducesEvent__from->setTransient(false);
    m_ProducesEvent__from->setVolatile(false);
    m_ProducesEvent__from->setChangeable(true);
    m_ProducesEvent__from->setContainment(false);
    m_ProducesEvent__from->setResolveProxies(true);
    m_ProducesEvent__from->setUnique(true);
    m_ProducesEvent__from->setDerived(false);
    m_ProducesEvent__from->setOrdered(false);
    // ConsumesEvent
    m_ConsumesEventEClass->setName("ConsumesEvent");
    m_ConsumesEventEClass->setAbstract(false);
    m_ConsumesEventEClass->setInterface(false);
    m_ConsumesEvent__to->setEType(m_EventEClass);
    m_ConsumesEvent__to->setName("to");
    m_ConsumesEvent__to->setDefaultValueLiteral("");
    m_ConsumesEvent__to->setLowerBound(1);
    m_ConsumesEvent__to->setUpperBound(1);
    m_ConsumesEvent__to->setTransient(false);
    m_ConsumesEvent__to->setVolatile(false);
    m_ConsumesEvent__to->setChangeable(true);
    m_ConsumesEvent__to->setContainment(false);
    m_ConsumesEvent__to->setResolveProxies(true);
    m_ConsumesEvent__to->setUnique(true);
    m_ConsumesEvent__to->setDerived(false);
    m_ConsumesEvent__to->setOrdered(false);
    m_ConsumesEvent__from->setEType(m_TransitionEClass);
    m_ConsumesEvent__from->setName("from");
    m_ConsumesEvent__from->setDefaultValueLiteral("");
    m_ConsumesEvent__from->setLowerBound(1);
    m_ConsumesEvent__from->setUpperBound(1);
    m_ConsumesEvent__from->setTransient(false);
    m_ConsumesEvent__from->setVolatile(false);
    m_ConsumesEvent__from->setChangeable(true);
    m_ConsumesEvent__from->setContainment(false);
    m_ConsumesEvent__from->setResolveProxies(true);
    m_ConsumesEvent__from->setUnique(true);
    m_ConsumesEvent__from->setDerived(false);
    m_ConsumesEvent__from->setOrdered(false);
    // NextState
    m_NextStateEClass->setName("NextState");
    m_NextStateEClass->setAbstract(false);
    m_NextStateEClass->setInterface(false);
    m_NextState__to->setEType(m_StateEClass);
    m_NextState__to->setName("to");
    m_NextState__to->setDefaultValueLiteral("");
    m_NextState__to->setLowerBound(1);
    m_NextState__to->setUpperBound(1);
    m_NextState__to->setTransient(false);
    m_NextState__to->setVolatile(false);
    m_NextState__to->setChangeable(true);
    m_NextState__to->setContainment(false);
    m_NextState__to->setResolveProxies(true);
    m_NextState__to->setUnique(true);
    m_NextState__to->setDerived(false);
    m_NextState__to->setOrdered(false);
    m_NextState__from->setEType(m_TransitionEClass);
    m_NextState__from->setName("from");
    m_NextState__from->setDefaultValueLiteral("");
    m_NextState__from->setLowerBound(1);
    m_NextState__from->setUpperBound(1);
    m_NextState__from->setTransient(false);
    m_NextState__from->setVolatile(false);
    m_NextState__from->setChangeable(true);
    m_NextState__from->setContainment(false);
    m_NextState__from->setResolveProxies(true);
    m_NextState__from->setUnique(true);
    m_NextState__from->setDerived(false);
    m_NextState__from->setOrdered(false);
    // InitialState
    m_InitialStateEClass->setName("InitialState");
    m_InitialStateEClass->setAbstract(false);
    m_InitialStateEClass->setInterface(false);
    // EventElement
    m_EventElementEClass->setName("EventElement");
    m_EventElementEClass->setAbstract(false);
    m_EventElementEClass->setInterface(false);
    // HasState
    m_HasStateEClass->setName("HasState");
    m_HasStateEClass->setAbstract(false);
    m_HasStateEClass->setInterface(false);
    m_HasState__to->setEType(m_AbstractEventElementEClass);
    m_HasState__to->setName("to");
    m_HasState__to->setDefaultValueLiteral("");
    m_HasState__to->setLowerBound(1);
    m_HasState__to->setUpperBound(1);
    m_HasState__to->setTransient(false);
    m_HasState__to->setVolatile(false);
    m_HasState__to->setChangeable(true);
    m_HasState__to->setContainment(false);
    m_HasState__to->setResolveProxies(true);
    m_HasState__to->setUnique(true);
    m_HasState__to->setDerived(false);
    m_HasState__to->setOrdered(false);
    m_HasState__from->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getActionElement());
    m_HasState__from->setName("from");
    m_HasState__from->setDefaultValueLiteral("");
    m_HasState__from->setLowerBound(1);
    m_HasState__from->setUpperBound(1);
    m_HasState__from->setTransient(false);
    m_HasState__from->setVolatile(false);
    m_HasState__from->setChangeable(true);
    m_HasState__from->setContainment(false);
    m_HasState__from->setResolveProxies(true);
    m_HasState__from->setUnique(true);
    m_HasState__from->setDerived(false);
    m_HasState__from->setOrdered(false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr EventPackage::getEventModel()
{
    return m_EventModelEClass;
}
::ecore::EClass_ptr EventPackage::getAbstractEventElement()
{
    return m_AbstractEventElementEClass;
}
::ecore::EClass_ptr EventPackage::getEvent()
{
    return m_EventEClass;
}
::ecore::EClass_ptr EventPackage::getAbstractEventRelationship()
{
    return m_AbstractEventRelationshipEClass;
}
::ecore::EClass_ptr EventPackage::getEventRelationship()
{
    return m_EventRelationshipEClass;
}
::ecore::EClass_ptr EventPackage::getEventResource()
{
    return m_EventResourceEClass;
}
::ecore::EClass_ptr EventPackage::getState()
{
    return m_StateEClass;
}
::ecore::EClass_ptr EventPackage::getTransition()
{
    return m_TransitionEClass;
}
::ecore::EClass_ptr EventPackage::getOnEntry()
{
    return m_OnEntryEClass;
}
::ecore::EClass_ptr EventPackage::getOnExit()
{
    return m_OnExitEClass;
}
::ecore::EClass_ptr EventPackage::getEventAction()
{
    return m_EventActionEClass;
}
::ecore::EClass_ptr EventPackage::getReadsState()
{
    return m_ReadsStateEClass;
}
::ecore::EClass_ptr EventPackage::getProducesEvent()
{
    return m_ProducesEventEClass;
}
::ecore::EClass_ptr EventPackage::getConsumesEvent()
{
    return m_ConsumesEventEClass;
}
::ecore::EClass_ptr EventPackage::getNextState()
{
    return m_NextStateEClass;
}
::ecore::EClass_ptr EventPackage::getInitialState()
{
    return m_InitialStateEClass;
}
::ecore::EClass_ptr EventPackage::getEventElement()
{
    return m_EventElementEClass;
}
::ecore::EClass_ptr EventPackage::getHasState()
{
    return m_HasStateEClass;
}

::ecore::EReference_ptr EventPackage::getElement__attribute()
{
    return m_Element__attribute;
}
::ecore::EReference_ptr EventPackage::getElement__annotation()
{
    return m_Element__annotation;
}
::ecore::EReference_ptr EventPackage::getModelElement__stereotype()
{
    return m_ModelElement__stereotype;
}
::ecore::EReference_ptr EventPackage::getModelElement__taggedValue()
{
    return m_ModelElement__taggedValue;
}
::ecore::EReference_ptr EventPackage::getKDMFramework__audit()
{
    return m_KDMFramework__audit;
}
::ecore::EReference_ptr EventPackage::getKDMFramework__extensionFamily()
{
    return m_KDMFramework__extensionFamily;
}
::ecore::EAttribute_ptr EventPackage::getKDMFramework__name()
{
    return m_KDMFramework__name;
}
::ecore::EReference_ptr EventPackage::getEventModel__eventElement()
{
    return m_EventModel__eventElement;
}
::ecore::EAttribute_ptr EventPackage::getKDMEntity__name()
{
    return m_KDMEntity__name;
}
::ecore::EReference_ptr EventPackage::getAbstractEventElement__source()
{
    return m_AbstractEventElement__source;
}
::ecore::EReference_ptr EventPackage::getAbstractEventElement__eventRelation()
{
    return m_AbstractEventElement__eventRelation;
}
::ecore::EReference_ptr EventPackage::getAbstractEventElement__abstraction()
{
    return m_AbstractEventElement__abstraction;
}
::ecore::EReference_ptr EventPackage::getAbstractEventElement__implementation()
{
    return m_AbstractEventElement__implementation;
}
::ecore::EAttribute_ptr EventPackage::getEvent__kind()
{
    return m_Event__kind;
}
::ecore::EReference_ptr EventPackage::getEventRelationship__to()
{
    return m_EventRelationship__to;
}
::ecore::EReference_ptr EventPackage::getEventRelationship__from()
{
    return m_EventRelationship__from;
}
::ecore::EReference_ptr EventPackage::getEventResource__eventElement()
{
    return m_EventResource__eventElement;
}
::ecore::EAttribute_ptr EventPackage::getEventAction__kind()
{
    return m_EventAction__kind;
}
::ecore::EReference_ptr EventPackage::getEventAction__eventElement()
{
    return m_EventAction__eventElement;
}
::ecore::EReference_ptr EventPackage::getReadsState__to()
{
    return m_ReadsState__to;
}
::ecore::EReference_ptr EventPackage::getReadsState__from()
{
    return m_ReadsState__from;
}
::ecore::EReference_ptr EventPackage::getProducesEvent__to()
{
    return m_ProducesEvent__to;
}
::ecore::EReference_ptr EventPackage::getProducesEvent__from()
{
    return m_ProducesEvent__from;
}
::ecore::EReference_ptr EventPackage::getConsumesEvent__to()
{
    return m_ConsumesEvent__to;
}
::ecore::EReference_ptr EventPackage::getConsumesEvent__from()
{
    return m_ConsumesEvent__from;
}
::ecore::EReference_ptr EventPackage::getNextState__to()
{
    return m_NextState__to;
}
::ecore::EReference_ptr EventPackage::getNextState__from()
{
    return m_NextState__from;
}
::ecore::EReference_ptr EventPackage::getHasState__to()
{
    return m_HasState__to;
}
::ecore::EReference_ptr EventPackage::getHasState__from()
{
    return m_HasState__from;
}

