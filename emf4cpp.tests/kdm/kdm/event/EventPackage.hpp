// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/event/EventPackage.hpp
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

#ifndef _KDM_EVENTPACKAGE_HPP
#define _KDM_EVENTPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/event_forward.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/KdmPackage.hpp>

namespace kdm
{
    namespace event
    {

        class EventPackage: public virtual ::ecore::EPackage
        {
        public:

            static EventPackage_ptr _instance();

            // IDs for classifiers

            static const int ABSTRACTEVENTELEMENT = 0;

            static const int ABSTRACTEVENTRELATIONSHIP = 1;

            static const int CONSUMESEVENT = 2;

            static const int EVENT = 3;

            static const int EVENTACTION = 4;

            static const int EVENTELEMENT = 5;

            static const int EVENTMODEL = 6;

            static const int EVENTRELATIONSHIP = 7;

            static const int EVENTRESOURCE = 8;

            static const int HASSTATE = 9;

            static const int INITIALSTATE = 10;

            static const int NEXTSTATE = 11;

            static const int ONENTRY = 12;

            static const int ONEXIT = 13;

            static const int PRODUCESEVENT = 14;

            static const int READSSTATE = 15;

            static const int STATE = 16;

            static const int TRANSITION = 17;

            static const int EVENTMODEL__EVENTELEMENT = 187;

            static const int ABSTRACTEVENTELEMENT__SOURCE = 188;

            static const int ABSTRACTEVENTELEMENT__EVENTRELATION = 189;

            static const int ABSTRACTEVENTELEMENT__ABSTRACTION = 190;

            static const int ABSTRACTEVENTELEMENT__IMPLEMENTATION = 191;

            static const int EVENT__KIND = 192;

            static const int EVENTRELATIONSHIP__TO = 193;

            static const int EVENTRELATIONSHIP__FROM = 194;

            static const int EVENTRESOURCE__EVENTELEMENT = 195;

            static const int EVENTACTION__KIND = 196;

            static const int EVENTACTION__EVENTELEMENT = 197;

            static const int READSSTATE__TO = 198;

            static const int READSSTATE__FROM = 199;

            static const int PRODUCESEVENT__TO = 200;

            static const int PRODUCESEVENT__FROM = 201;

            static const int CONSUMESEVENT__TO = 202;

            static const int CONSUMESEVENT__FROM = 203;

            static const int NEXTSTATE__TO = 204;

            static const int NEXTSTATE__FROM = 205;

            static const int HASSTATE__TO = 206;

            static const int HASSTATE__FROM = 207;

            // IDs for classifiers for class AbstractEventElement 

            static const int ABSTRACTEVENTELEMENT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int ABSTRACTEVENTELEMENT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int ABSTRACTEVENTELEMENT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int ABSTRACTEVENTELEMENT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int ABSTRACTEVENTELEMENT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            // IDs for classifiers for class AbstractEventRelationship 

            static const int ABSTRACTEVENTRELATIONSHIP__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int ABSTRACTEVENTRELATIONSHIP__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int ABSTRACTEVENTRELATIONSHIP__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int ABSTRACTEVENTRELATIONSHIP__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class ConsumesEvent 

            static const int CONSUMESEVENT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int CONSUMESEVENT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int CONSUMESEVENT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int CONSUMESEVENT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class Event 

            static const int EVENT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int EVENT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int EVENT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int EVENT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int EVENT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int EVENT__SOURCE = ABSTRACTEVENTELEMENT__SOURCE;

            static const int EVENT__EVENTRELATION =
                    ABSTRACTEVENTELEMENT__EVENTRELATION;

            static const int EVENT__ABSTRACTION =
                    ABSTRACTEVENTELEMENT__ABSTRACTION;

            static const int EVENT__IMPLEMENTATION =
                    ABSTRACTEVENTELEMENT__IMPLEMENTATION;

            // IDs for classifiers for class EventAction 

            static const int EVENTACTION__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int EVENTACTION__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int EVENTACTION__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int EVENTACTION__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int EVENTACTION__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int EVENTACTION__SOURCE = ABSTRACTEVENTELEMENT__SOURCE;

            static const int EVENTACTION__EVENTRELATION =
                    ABSTRACTEVENTELEMENT__EVENTRELATION;

            static const int EVENTACTION__ABSTRACTION =
                    ABSTRACTEVENTELEMENT__ABSTRACTION;

            static const int EVENTACTION__IMPLEMENTATION =
                    ABSTRACTEVENTELEMENT__IMPLEMENTATION;

            // IDs for classifiers for class EventElement 

            static const int EVENTELEMENT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int EVENTELEMENT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int EVENTELEMENT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int EVENTELEMENT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int EVENTELEMENT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int EVENTELEMENT__SOURCE = ABSTRACTEVENTELEMENT__SOURCE;

            static const int EVENTELEMENT__EVENTRELATION =
                    ABSTRACTEVENTELEMENT__EVENTRELATION;

            static const int EVENTELEMENT__ABSTRACTION =
                    ABSTRACTEVENTELEMENT__ABSTRACTION;

            static const int EVENTELEMENT__IMPLEMENTATION =
                    ABSTRACTEVENTELEMENT__IMPLEMENTATION;

            // IDs for classifiers for class EventModel 

            static const int EVENTMODEL__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int EVENTMODEL__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int EVENTMODEL__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int EVENTMODEL__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int EVENTMODEL__AUDIT =
                    ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT;

            static const int EVENTMODEL__EXTENSIONFAMILY =
                    ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY;

            static const int EVENTMODEL__NAME =
                    ::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME;

            // IDs for classifiers for class EventRelationship 

            static const int EVENTRELATIONSHIP__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int EVENTRELATIONSHIP__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int EVENTRELATIONSHIP__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int EVENTRELATIONSHIP__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class EventResource 

            static const int EVENTRESOURCE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int EVENTRESOURCE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int EVENTRESOURCE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int EVENTRESOURCE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int EVENTRESOURCE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int EVENTRESOURCE__SOURCE =
                    ABSTRACTEVENTELEMENT__SOURCE;

            static const int EVENTRESOURCE__EVENTRELATION =
                    ABSTRACTEVENTELEMENT__EVENTRELATION;

            static const int EVENTRESOURCE__ABSTRACTION =
                    ABSTRACTEVENTELEMENT__ABSTRACTION;

            static const int EVENTRESOURCE__IMPLEMENTATION =
                    ABSTRACTEVENTELEMENT__IMPLEMENTATION;

            // IDs for classifiers for class HasState 

            static const int HASSTATE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int HASSTATE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int HASSTATE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int HASSTATE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class InitialState 

            static const int INITIALSTATE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int INITIALSTATE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int INITIALSTATE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int INITIALSTATE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int INITIALSTATE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int INITIALSTATE__SOURCE = ABSTRACTEVENTELEMENT__SOURCE;

            static const int INITIALSTATE__EVENTRELATION =
                    ABSTRACTEVENTELEMENT__EVENTRELATION;

            static const int INITIALSTATE__ABSTRACTION =
                    ABSTRACTEVENTELEMENT__ABSTRACTION;

            static const int INITIALSTATE__IMPLEMENTATION =
                    ABSTRACTEVENTELEMENT__IMPLEMENTATION;

            static const int INITIALSTATE__EVENTELEMENT =
                    EVENTRESOURCE__EVENTELEMENT;

            // IDs for classifiers for class NextState 

            static const int NEXTSTATE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int NEXTSTATE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int NEXTSTATE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int NEXTSTATE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class OnEntry 

            static const int ONENTRY__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int ONENTRY__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int ONENTRY__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int ONENTRY__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int ONENTRY__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int ONENTRY__SOURCE = ABSTRACTEVENTELEMENT__SOURCE;

            static const int ONENTRY__EVENTRELATION =
                    ABSTRACTEVENTELEMENT__EVENTRELATION;

            static const int ONENTRY__ABSTRACTION =
                    ABSTRACTEVENTELEMENT__ABSTRACTION;

            static const int ONENTRY__IMPLEMENTATION =
                    ABSTRACTEVENTELEMENT__IMPLEMENTATION;

            static const int ONENTRY__EVENTELEMENT = EVENTRESOURCE__EVENTELEMENT;

            // IDs for classifiers for class OnExit 

            static const int ONEXIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int ONEXIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int ONEXIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int ONEXIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int ONEXIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int ONEXIT__SOURCE = ABSTRACTEVENTELEMENT__SOURCE;

            static const int ONEXIT__EVENTRELATION =
                    ABSTRACTEVENTELEMENT__EVENTRELATION;

            static const int ONEXIT__ABSTRACTION =
                    ABSTRACTEVENTELEMENT__ABSTRACTION;

            static const int ONEXIT__IMPLEMENTATION =
                    ABSTRACTEVENTELEMENT__IMPLEMENTATION;

            static const int ONEXIT__EVENTELEMENT = EVENTRESOURCE__EVENTELEMENT;

            // IDs for classifiers for class ProducesEvent 

            static const int PRODUCESEVENT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int PRODUCESEVENT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int PRODUCESEVENT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int PRODUCESEVENT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class ReadsState 

            static const int READSSTATE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int READSSTATE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int READSSTATE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int READSSTATE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class State 

            static const int STATE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int STATE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int STATE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int STATE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int STATE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int STATE__SOURCE = ABSTRACTEVENTELEMENT__SOURCE;

            static const int STATE__EVENTRELATION =
                    ABSTRACTEVENTELEMENT__EVENTRELATION;

            static const int STATE__ABSTRACTION =
                    ABSTRACTEVENTELEMENT__ABSTRACTION;

            static const int STATE__IMPLEMENTATION =
                    ABSTRACTEVENTELEMENT__IMPLEMENTATION;

            static const int STATE__EVENTELEMENT = EVENTRESOURCE__EVENTELEMENT;

            // IDs for classifiers for class Transition 

            static const int TRANSITION__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int TRANSITION__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int TRANSITION__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int TRANSITION__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int TRANSITION__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int TRANSITION__SOURCE = ABSTRACTEVENTELEMENT__SOURCE;

            static const int TRANSITION__EVENTRELATION =
                    ABSTRACTEVENTELEMENT__EVENTRELATION;

            static const int TRANSITION__ABSTRACTION =
                    ABSTRACTEVENTELEMENT__ABSTRACTION;

            static const int TRANSITION__IMPLEMENTATION =
                    ABSTRACTEVENTELEMENT__IMPLEMENTATION;

            static const int TRANSITION__EVENTELEMENT =
                    EVENTRESOURCE__EVENTELEMENT;

            // EClassifiers methods

            virtual ::ecore::EClass_ptr getEventModel();

            virtual ::ecore::EClass_ptr getAbstractEventElement();

            virtual ::ecore::EClass_ptr getEvent();

            virtual ::ecore::EClass_ptr getAbstractEventRelationship();

            virtual ::ecore::EClass_ptr getEventRelationship();

            virtual ::ecore::EClass_ptr getEventResource();

            virtual ::ecore::EClass_ptr getState();

            virtual ::ecore::EClass_ptr getTransition();

            virtual ::ecore::EClass_ptr getOnEntry();

            virtual ::ecore::EClass_ptr getOnExit();

            virtual ::ecore::EClass_ptr getEventAction();

            virtual ::ecore::EClass_ptr getReadsState();

            virtual ::ecore::EClass_ptr getProducesEvent();

            virtual ::ecore::EClass_ptr getConsumesEvent();

            virtual ::ecore::EClass_ptr getNextState();

            virtual ::ecore::EClass_ptr getInitialState();

            virtual ::ecore::EClass_ptr getEventElement();

            virtual ::ecore::EClass_ptr getHasState();

            // EStructuralFeatures methods

            virtual ::ecore::EReference_ptr getElement__attribute();

            virtual ::ecore::EReference_ptr getElement__annotation();

            virtual ::ecore::EReference_ptr getModelElement__stereotype();

            virtual ::ecore::EReference_ptr getModelElement__taggedValue();

            virtual ::ecore::EReference_ptr getKDMFramework__audit();

            virtual ::ecore::EReference_ptr getKDMFramework__extensionFamily();

            virtual ::ecore::EAttribute_ptr getKDMFramework__name();

            virtual ::ecore::EReference_ptr getEventModel__eventElement();

            virtual ::ecore::EAttribute_ptr getKDMEntity__name();

            virtual ::ecore::EReference_ptr getAbstractEventElement__source();

            virtual ::ecore::EReference_ptr getAbstractEventElement__eventRelation();

            virtual ::ecore::EReference_ptr getAbstractEventElement__abstraction();

            virtual ::ecore::EReference_ptr getAbstractEventElement__implementation();

            virtual ::ecore::EAttribute_ptr getEvent__kind();

            virtual ::ecore::EReference_ptr getEventRelationship__to();

            virtual ::ecore::EReference_ptr getEventRelationship__from();

            virtual ::ecore::EReference_ptr getEventResource__eventElement();

            virtual ::ecore::EAttribute_ptr getEventAction__kind();

            virtual ::ecore::EReference_ptr getEventAction__eventElement();

            virtual ::ecore::EReference_ptr getReadsState__to();

            virtual ::ecore::EReference_ptr getReadsState__from();

            virtual ::ecore::EReference_ptr getProducesEvent__to();

            virtual ::ecore::EReference_ptr getProducesEvent__from();

            virtual ::ecore::EReference_ptr getConsumesEvent__to();

            virtual ::ecore::EReference_ptr getConsumesEvent__from();

            virtual ::ecore::EReference_ptr getNextState__to();

            virtual ::ecore::EReference_ptr getNextState__from();

            virtual ::ecore::EReference_ptr getHasState__to();

            virtual ::ecore::EReference_ptr getHasState__from();

        protected:

            static std::auto_ptr< EventPackage > s_instance;

            EventPackage();

            // EClass instances 

            ::ecore::EClass_ptr m_EventModelEClass;

            ::ecore::EClass_ptr m_AbstractEventElementEClass;

            ::ecore::EClass_ptr m_EventEClass;

            ::ecore::EClass_ptr m_AbstractEventRelationshipEClass;

            ::ecore::EClass_ptr m_EventRelationshipEClass;

            ::ecore::EClass_ptr m_EventResourceEClass;

            ::ecore::EClass_ptr m_StateEClass;

            ::ecore::EClass_ptr m_TransitionEClass;

            ::ecore::EClass_ptr m_OnEntryEClass;

            ::ecore::EClass_ptr m_OnExitEClass;

            ::ecore::EClass_ptr m_EventActionEClass;

            ::ecore::EClass_ptr m_ReadsStateEClass;

            ::ecore::EClass_ptr m_ProducesEventEClass;

            ::ecore::EClass_ptr m_ConsumesEventEClass;

            ::ecore::EClass_ptr m_NextStateEClass;

            ::ecore::EClass_ptr m_InitialStateEClass;

            ::ecore::EClass_ptr m_EventElementEClass;

            ::ecore::EClass_ptr m_HasStateEClass;

            // EEnuminstances 

            // EDataType instances 

            // EStructuralFeatures instances

            ::ecore::EReference_ptr m_Element__attribute;

            ::ecore::EReference_ptr m_Element__annotation;

            ::ecore::EReference_ptr m_ModelElement__stereotype;

            ::ecore::EReference_ptr m_ModelElement__taggedValue;

            ::ecore::EReference_ptr m_KDMFramework__audit;

            ::ecore::EReference_ptr m_KDMFramework__extensionFamily;

            ::ecore::EAttribute_ptr m_KDMFramework__name;

            ::ecore::EReference_ptr m_EventModel__eventElement;

            ::ecore::EAttribute_ptr m_KDMEntity__name;

            ::ecore::EReference_ptr m_AbstractEventElement__source;

            ::ecore::EReference_ptr m_AbstractEventElement__eventRelation;

            ::ecore::EReference_ptr m_AbstractEventElement__abstraction;

            ::ecore::EReference_ptr m_AbstractEventElement__implementation;

            ::ecore::EAttribute_ptr m_Event__kind;

            ::ecore::EReference_ptr m_EventRelationship__to;

            ::ecore::EReference_ptr m_EventRelationship__from;

            ::ecore::EReference_ptr m_EventResource__eventElement;

            ::ecore::EAttribute_ptr m_EventAction__kind;

            ::ecore::EReference_ptr m_EventAction__eventElement;

            ::ecore::EReference_ptr m_ReadsState__to;

            ::ecore::EReference_ptr m_ReadsState__from;

            ::ecore::EReference_ptr m_ProducesEvent__to;

            ::ecore::EReference_ptr m_ProducesEvent__from;

            ::ecore::EReference_ptr m_ConsumesEvent__to;

            ::ecore::EReference_ptr m_ConsumesEvent__from;

            ::ecore::EReference_ptr m_NextState__to;

            ::ecore::EReference_ptr m_NextState__from;

            ::ecore::EReference_ptr m_HasState__to;

            ::ecore::EReference_ptr m_HasState__from;

        };

    } // event
} // kdm

#endif // _KDM_EVENTPACKAGE_HPP

