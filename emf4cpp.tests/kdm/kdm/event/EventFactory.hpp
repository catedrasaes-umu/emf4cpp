// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/event/EventFactory.hpp
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

#ifndef _KDM_EVENTFACTORY_HPP
#define _KDM_EVENTFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/event.hpp>

namespace kdm
{
    namespace event
    {

        class EventFactory: public virtual ::ecore::EFactory
        {
        public:

            static EventFactory_ptr _instance();

            virtual EventModel_ptr createEventModel();
            virtual AbstractEventElement_ptr createAbstractEventElement();
            virtual Event_ptr createEvent();
            virtual AbstractEventRelationship_ptr
                    createAbstractEventRelationship();
            virtual EventRelationship_ptr createEventRelationship();
            virtual EventResource_ptr createEventResource();
            virtual State_ptr createState();
            virtual Transition_ptr createTransition();
            virtual OnEntry_ptr createOnEntry();
            virtual OnExit_ptr createOnExit();
            virtual EventAction_ptr createEventAction();
            virtual ReadsState_ptr createReadsState();
            virtual ProducesEvent_ptr createProducesEvent();
            virtual ConsumesEvent_ptr createConsumesEvent();
            virtual NextState_ptr createNextState();
            virtual InitialState_ptr createInitialState();
            virtual EventElement_ptr createEventElement();
            virtual HasState_ptr createHasState();

            virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EJavaObject const& _instanceValue);

        protected:

            static std::auto_ptr< EventFactory > s_instance;

            EventFactory();

        };

    } // event
} // kdm


#endif // _KDM_EVENTFACTORY_HPP
