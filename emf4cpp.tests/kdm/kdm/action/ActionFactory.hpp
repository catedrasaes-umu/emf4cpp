// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/action/ActionFactory.hpp
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

#ifndef _KDM_ACTIONFACTORY_HPP
#define _KDM_ACTIONFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/action.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace action
    {

        class EXPORT_KDM_DLL ActionFactory : public virtual ::ecore::EFactory
        {
        public:

            static ActionFactory_ptr _instance();

            virtual ActionElement_ptr createActionElement();
            virtual AbstractActionRelationship_ptr createAbstractActionRelationship();
            virtual ControlFlow_ptr createControlFlow();
            virtual Calls_ptr createCalls();
            virtual Creates_ptr createCreates();
            virtual Reads_ptr createReads();
            virtual Writes_ptr createWrites();
            virtual CompliesTo_ptr createCompliesTo();
            virtual Flow_ptr createFlow();
            virtual TrueFlow_ptr createTrueFlow();
            virtual FalseFlow_ptr createFalseFlow();
            virtual GuardedFlow_ptr createGuardedFlow();
            virtual UsesType_ptr createUsesType();
            virtual Addresses_ptr createAddresses();
            virtual ActionRelationship_ptr createActionRelationship();
            virtual Throws_ptr createThrows();
            virtual Dispatches_ptr createDispatches();
            virtual EntryFlow_ptr createEntryFlow();
            virtual BlockUnit_ptr createBlockUnit();
            virtual ExceptionUnit_ptr createExceptionUnit();
            virtual TryUnit_ptr createTryUnit();
            virtual FinallyUnit_ptr createFinallyUnit();
            virtual CatchUnit_ptr createCatchUnit();
            virtual ExitFlow_ptr createExitFlow();
            virtual ExceptionFlow_ptr createExceptionFlow();

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static ::ecore::Ptr< ActionFactory > s_holder;

            ActionFactory();

        };

        /** An object creation helper
         *
         * Usage (add namespaces as required):
         *   auto p = create<MyClass>();
         *
         */
        template< class T > inline ::ecore::Ptr< T > create()
        {
            return ::ecore::Ptr< T >();
        }

        template< > inline ActionElement_ptr create< ActionElement >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createActionElement();
        }

        template< > inline AbstractActionRelationship_ptr create<
                AbstractActionRelationship >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createAbstractActionRelationship();
        }

        template< > inline ControlFlow_ptr create< ControlFlow >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createControlFlow();
        }

        template< > inline Calls_ptr create< Calls >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createCalls();
        }

        template< > inline Creates_ptr create< Creates >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createCreates();
        }

        template< > inline Reads_ptr create< Reads >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createReads();
        }

        template< > inline Writes_ptr create< Writes >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createWrites();
        }

        template< > inline CompliesTo_ptr create< CompliesTo >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createCompliesTo();
        }

        template< > inline Flow_ptr create< Flow >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createFlow();
        }

        template< > inline TrueFlow_ptr create< TrueFlow >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createTrueFlow();
        }

        template< > inline FalseFlow_ptr create< FalseFlow >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createFalseFlow();
        }

        template< > inline GuardedFlow_ptr create< GuardedFlow >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createGuardedFlow();
        }

        template< > inline UsesType_ptr create< UsesType >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createUsesType();
        }

        template< > inline Addresses_ptr create< Addresses >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createAddresses();
        }

        template< > inline ActionRelationship_ptr create< ActionRelationship >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createActionRelationship();
        }

        template< > inline Throws_ptr create< Throws >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createThrows();
        }

        template< > inline Dispatches_ptr create< Dispatches >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createDispatches();
        }

        template< > inline EntryFlow_ptr create< EntryFlow >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createEntryFlow();
        }

        template< > inline BlockUnit_ptr create< BlockUnit >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createBlockUnit();
        }

        template< > inline ExceptionUnit_ptr create< ExceptionUnit >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createExceptionUnit();
        }

        template< > inline TryUnit_ptr create< TryUnit >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createTryUnit();
        }

        template< > inline FinallyUnit_ptr create< FinallyUnit >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createFinallyUnit();
        }

        template< > inline CatchUnit_ptr create< CatchUnit >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createCatchUnit();
        }

        template< > inline ExitFlow_ptr create< ExitFlow >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createExitFlow();
        }

        template< > inline ExceptionFlow_ptr create< ExceptionFlow >()
        {
            auto eFactory = ActionPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ActionFactory* >(eFactory.get());
            return packageFactory->createExceptionFlow();
        }

    } // action
} // kdm

#endif // _KDM_ACTIONFACTORY_HPP

