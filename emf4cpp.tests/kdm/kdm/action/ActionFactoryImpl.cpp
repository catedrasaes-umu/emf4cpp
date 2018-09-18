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
    return ::ecore::Ptr < ActionElement > (new ActionElement);
}
AbstractActionRelationship_ptr ActionFactory::createAbstractActionRelationship()
{
    return ::ecore::Ptr < AbstractActionRelationship
            > (new AbstractActionRelationship);
}
ControlFlow_ptr ActionFactory::createControlFlow()
{
    return ::ecore::Ptr < ControlFlow > (new ControlFlow);
}
Calls_ptr ActionFactory::createCalls()
{
    return ::ecore::Ptr < Calls > (new Calls);
}
Creates_ptr ActionFactory::createCreates()
{
    return ::ecore::Ptr < Creates > (new Creates);
}
Reads_ptr ActionFactory::createReads()
{
    return ::ecore::Ptr < Reads > (new Reads);
}
Writes_ptr ActionFactory::createWrites()
{
    return ::ecore::Ptr < Writes > (new Writes);
}
CompliesTo_ptr ActionFactory::createCompliesTo()
{
    return ::ecore::Ptr < CompliesTo > (new CompliesTo);
}
Flow_ptr ActionFactory::createFlow()
{
    return ::ecore::Ptr < Flow > (new Flow);
}
TrueFlow_ptr ActionFactory::createTrueFlow()
{
    return ::ecore::Ptr < TrueFlow > (new TrueFlow);
}
FalseFlow_ptr ActionFactory::createFalseFlow()
{
    return ::ecore::Ptr < FalseFlow > (new FalseFlow);
}
GuardedFlow_ptr ActionFactory::createGuardedFlow()
{
    return ::ecore::Ptr < GuardedFlow > (new GuardedFlow);
}
UsesType_ptr ActionFactory::createUsesType()
{
    return ::ecore::Ptr < UsesType > (new UsesType);
}
Addresses_ptr ActionFactory::createAddresses()
{
    return ::ecore::Ptr < Addresses > (new Addresses);
}
ActionRelationship_ptr ActionFactory::createActionRelationship()
{
    return ::ecore::Ptr < ActionRelationship > (new ActionRelationship);
}
Throws_ptr ActionFactory::createThrows()
{
    return ::ecore::Ptr < Throws > (new Throws);
}
Dispatches_ptr ActionFactory::createDispatches()
{
    return ::ecore::Ptr < Dispatches > (new Dispatches);
}
EntryFlow_ptr ActionFactory::createEntryFlow()
{
    return ::ecore::Ptr < EntryFlow > (new EntryFlow);
}
BlockUnit_ptr ActionFactory::createBlockUnit()
{
    return ::ecore::Ptr < BlockUnit > (new BlockUnit);
}
ExceptionUnit_ptr ActionFactory::createExceptionUnit()
{
    return ::ecore::Ptr < ExceptionUnit > (new ExceptionUnit);
}
TryUnit_ptr ActionFactory::createTryUnit()
{
    return ::ecore::Ptr < TryUnit > (new TryUnit);
}
FinallyUnit_ptr ActionFactory::createFinallyUnit()
{
    return ::ecore::Ptr < FinallyUnit > (new FinallyUnit);
}
CatchUnit_ptr ActionFactory::createCatchUnit()
{
    return ::ecore::Ptr < CatchUnit > (new CatchUnit);
}
ExitFlow_ptr ActionFactory::createExitFlow()
{
    return ::ecore::Ptr < ExitFlow > (new ExitFlow);
}
ExceptionFlow_ptr ActionFactory::createExceptionFlow()
{
    return ::ecore::Ptr < ExceptionFlow > (new ExceptionFlow);
}

