// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/action/ActionFactory.hpp
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

#ifndef _KDM_ACTIONFACTORY_HPP
#define _KDM_ACTIONFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/action.hpp>

namespace kdm
{
    namespace action
    {

        class ActionFactory: public virtual ::ecore::EFactory
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

            virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EJavaObject const& _instanceValue);

        protected:

            static std::unique_ptr< ActionFactory > s_instance;

            ActionFactory();

        };

    } // action
} // kdm

#endif // _KDM_ACTIONFACTORY_HPP

