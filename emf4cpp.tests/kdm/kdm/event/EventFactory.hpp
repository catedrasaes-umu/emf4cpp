// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/event/EventFactory.hpp
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

#ifndef _KDM_EVENTFACTORY_HPP
#define _KDM_EVENTFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/event.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace event
    {

        class EXPORT_KDM_DLL EventFactory : public virtual ::ecore::EFactory
        {
        public:

            static EventFactory_ptr _instance();

            virtual EventModel_ptr createEventModel();
            virtual AbstractEventElement_ptr createAbstractEventElement();
            virtual Event_ptr createEvent();
            virtual AbstractEventRelationship_ptr createAbstractEventRelationship();
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

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static std::unique_ptr< EventFactory > s_instance;

            EventFactory();

        };

        /** An object creation helper
         *
         * Usage (add namespaces as required):
         *   auto p = create<MyClass>();
         *
         */
        template< class T > inline T* create()
        {
            return (T*) nullptr;
        }

        template< > inline EventModel_ptr create< EventModel >()
        {
            auto eFactory = EventPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EventFactory* >(eFactory);
            return packageFactory->createEventModel();
        }
        template< > inline AbstractEventElement_ptr create< AbstractEventElement >()
        {
            auto eFactory = EventPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EventFactory* >(eFactory);
            return packageFactory->createAbstractEventElement();
        }
        template< > inline Event_ptr create< Event >()
        {
            auto eFactory = EventPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EventFactory* >(eFactory);
            return packageFactory->createEvent();
        }
        template< > inline AbstractEventRelationship_ptr create<
                AbstractEventRelationship >()
        {
            auto eFactory = EventPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EventFactory* >(eFactory);
            return packageFactory->createAbstractEventRelationship();
        }
        template< > inline EventRelationship_ptr create< EventRelationship >()
        {
            auto eFactory = EventPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EventFactory* >(eFactory);
            return packageFactory->createEventRelationship();
        }
        template< > inline EventResource_ptr create< EventResource >()
        {
            auto eFactory = EventPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EventFactory* >(eFactory);
            return packageFactory->createEventResource();
        }
        template< > inline State_ptr create< State >()
        {
            auto eFactory = EventPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EventFactory* >(eFactory);
            return packageFactory->createState();
        }
        template< > inline Transition_ptr create< Transition >()
        {
            auto eFactory = EventPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EventFactory* >(eFactory);
            return packageFactory->createTransition();
        }
        template< > inline OnEntry_ptr create< OnEntry >()
        {
            auto eFactory = EventPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EventFactory* >(eFactory);
            return packageFactory->createOnEntry();
        }
        template< > inline OnExit_ptr create< OnExit >()
        {
            auto eFactory = EventPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EventFactory* >(eFactory);
            return packageFactory->createOnExit();
        }
        template< > inline EventAction_ptr create< EventAction >()
        {
            auto eFactory = EventPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EventFactory* >(eFactory);
            return packageFactory->createEventAction();
        }
        template< > inline ReadsState_ptr create< ReadsState >()
        {
            auto eFactory = EventPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EventFactory* >(eFactory);
            return packageFactory->createReadsState();
        }
        template< > inline ProducesEvent_ptr create< ProducesEvent >()
        {
            auto eFactory = EventPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EventFactory* >(eFactory);
            return packageFactory->createProducesEvent();
        }
        template< > inline ConsumesEvent_ptr create< ConsumesEvent >()
        {
            auto eFactory = EventPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EventFactory* >(eFactory);
            return packageFactory->createConsumesEvent();
        }
        template< > inline NextState_ptr create< NextState >()
        {
            auto eFactory = EventPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EventFactory* >(eFactory);
            return packageFactory->createNextState();
        }
        template< > inline InitialState_ptr create< InitialState >()
        {
            auto eFactory = EventPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EventFactory* >(eFactory);
            return packageFactory->createInitialState();
        }
        template< > inline EventElement_ptr create< EventElement >()
        {
            auto eFactory = EventPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EventFactory* >(eFactory);
            return packageFactory->createEventElement();
        }
        template< > inline HasState_ptr create< HasState >()
        {
            auto eFactory = EventPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EventFactory* >(eFactory);
            return packageFactory->createHasState();
        }

    } // event
} // kdm

#endif // _KDM_EVENTFACTORY_HPP

