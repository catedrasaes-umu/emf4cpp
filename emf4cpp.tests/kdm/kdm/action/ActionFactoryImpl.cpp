// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/action/ActionFactoryImpl.cpp
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

#include <kdm/action/ActionFactory.hpp>
#include <kdm/action/ActionPackage.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>
#include <kdm/action/ControlFlow.hpp>
#include <kdm/action/Calls.hpp>
#include <kdm/action/Creates.hpp>
#include <kdm/action/Reads.hpp>
#include <kdm/action/Writes.hpp>
#include <kdm/action/CompliesTo.hpp>
#include <kdm/action/Flow.hpp>
#include <kdm/action/TrueFlow.hpp>
#include <kdm/action/FalseFlow.hpp>
#include <kdm/action/GuardedFlow.hpp>
#include <kdm/action/UsesType.hpp>
#include <kdm/action/Addresses.hpp>
#include <kdm/action/ActionRelationship.hpp>
#include <kdm/action/Throws.hpp>
#include <kdm/action/Dispatches.hpp>
#include <kdm/action/EntryFlow.hpp>
#include <kdm/action/BlockUnit.hpp>
#include <kdm/action/ExceptionUnit.hpp>
#include <kdm/action/TryUnit.hpp>
#include <kdm/action/FinallyUnit.hpp>
#include <kdm/action/CatchUnit.hpp>
#include <kdm/action/ExitFlow.hpp>
#include <kdm/action/ExceptionFlow.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::action;

ActionFactory::ActionFactory()
{
}

::ecore::EObject_ptr ActionFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case ActionPackage::ACTIONELEMENT:
        return createActionElement();
    case ActionPackage::ABSTRACTACTIONRELATIONSHIP:
        return createAbstractActionRelationship();
    case ActionPackage::CONTROLFLOW:
        return createControlFlow();
    case ActionPackage::CALLS:
        return createCalls();
    case ActionPackage::CREATES:
        return createCreates();
    case ActionPackage::READS:
        return createReads();
    case ActionPackage::WRITES:
        return createWrites();
    case ActionPackage::COMPLIESTO:
        return createCompliesTo();
    case ActionPackage::FLOW:
        return createFlow();
    case ActionPackage::TRUEFLOW:
        return createTrueFlow();
    case ActionPackage::FALSEFLOW:
        return createFalseFlow();
    case ActionPackage::GUARDEDFLOW:
        return createGuardedFlow();
    case ActionPackage::USESTYPE:
        return createUsesType();
    case ActionPackage::ADDRESSES:
        return createAddresses();
    case ActionPackage::ACTIONRELATIONSHIP:
        return createActionRelationship();
    case ActionPackage::THROWS:
        return createThrows();
    case ActionPackage::DISPATCHES:
        return createDispatches();
    case ActionPackage::ENTRYFLOW:
        return createEntryFlow();
    case ActionPackage::BLOCKUNIT:
        return createBlockUnit();
    case ActionPackage::EXCEPTIONUNIT:
        return createExceptionUnit();
    case ActionPackage::TRYUNIT:
        return createTryUnit();
    case ActionPackage::FINALLYUNIT:
        return createFinallyUnit();
    case ActionPackage::CATCHUNIT:
        return createCatchUnit();
    case ActionPackage::EXITFLOW:
        return createExitFlow();
    case ActionPackage::EXCEPTIONFLOW:
        return createExceptionFlow();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject ActionFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString ActionFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

ActionElement_ptr ActionFactory::createActionElement()
{
    return boost::intrusive_ptr < ActionElement > (new ActionElement);
}
AbstractActionRelationship_ptr ActionFactory::createAbstractActionRelationship()
{
    return boost::intrusive_ptr < AbstractActionRelationship
            > (new AbstractActionRelationship);
}
ControlFlow_ptr ActionFactory::createControlFlow()
{
    return boost::intrusive_ptr < ControlFlow > (new ControlFlow);
}
Calls_ptr ActionFactory::createCalls()
{
    return boost::intrusive_ptr < Calls > (new Calls);
}
Creates_ptr ActionFactory::createCreates()
{
    return boost::intrusive_ptr < Creates > (new Creates);
}
Reads_ptr ActionFactory::createReads()
{
    return boost::intrusive_ptr < Reads > (new Reads);
}
Writes_ptr ActionFactory::createWrites()
{
    return boost::intrusive_ptr < Writes > (new Writes);
}
CompliesTo_ptr ActionFactory::createCompliesTo()
{
    return boost::intrusive_ptr < CompliesTo > (new CompliesTo);
}
Flow_ptr ActionFactory::createFlow()
{
    return boost::intrusive_ptr < Flow > (new Flow);
}
TrueFlow_ptr ActionFactory::createTrueFlow()
{
    return boost::intrusive_ptr < TrueFlow > (new TrueFlow);
}
FalseFlow_ptr ActionFactory::createFalseFlow()
{
    return boost::intrusive_ptr < FalseFlow > (new FalseFlow);
}
GuardedFlow_ptr ActionFactory::createGuardedFlow()
{
    return boost::intrusive_ptr < GuardedFlow > (new GuardedFlow);
}
UsesType_ptr ActionFactory::createUsesType()
{
    return boost::intrusive_ptr < UsesType > (new UsesType);
}
Addresses_ptr ActionFactory::createAddresses()
{
    return boost::intrusive_ptr < Addresses > (new Addresses);
}
ActionRelationship_ptr ActionFactory::createActionRelationship()
{
    return boost::intrusive_ptr < ActionRelationship > (new ActionRelationship);
}
Throws_ptr ActionFactory::createThrows()
{
    return boost::intrusive_ptr < Throws > (new Throws);
}
Dispatches_ptr ActionFactory::createDispatches()
{
    return boost::intrusive_ptr < Dispatches > (new Dispatches);
}
EntryFlow_ptr ActionFactory::createEntryFlow()
{
    return boost::intrusive_ptr < EntryFlow > (new EntryFlow);
}
BlockUnit_ptr ActionFactory::createBlockUnit()
{
    return boost::intrusive_ptr < BlockUnit > (new BlockUnit);
}
ExceptionUnit_ptr ActionFactory::createExceptionUnit()
{
    return boost::intrusive_ptr < ExceptionUnit > (new ExceptionUnit);
}
TryUnit_ptr ActionFactory::createTryUnit()
{
    return boost::intrusive_ptr < TryUnit > (new TryUnit);
}
FinallyUnit_ptr ActionFactory::createFinallyUnit()
{
    return boost::intrusive_ptr < FinallyUnit > (new FinallyUnit);
}
CatchUnit_ptr ActionFactory::createCatchUnit()
{
    return boost::intrusive_ptr < CatchUnit > (new CatchUnit);
}
ExitFlow_ptr ActionFactory::createExitFlow()
{
    return boost::intrusive_ptr < ExitFlow > (new ExitFlow);
}
ExceptionFlow_ptr ActionFactory::createExceptionFlow()
{
    return boost::intrusive_ptr < ExceptionFlow > (new ExceptionFlow);
}

