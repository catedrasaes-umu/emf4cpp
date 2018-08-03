// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/action_forward.hpp
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

#ifndef _KDM_ACTION_FORWARD_HPP
#define _KDM_ACTION_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(kdm_action_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace kdm
{
    namespace action
    {

// EDataType

// EClass

// ActionElement
        class ActionElement;
        using ActionElement_ptr = ::ecore::Ptr<ActionElement>;

// AbstractActionRelationship
        class AbstractActionRelationship;
        using AbstractActionRelationship_ptr = ::ecore::Ptr<AbstractActionRelationship>;

// ControlFlow
        class ControlFlow;
        using ControlFlow_ptr = ::ecore::Ptr<ControlFlow>;

// Calls
        class Calls;
        using Calls_ptr = ::ecore::Ptr<Calls>;

// Creates
        class Creates;
        using Creates_ptr = ::ecore::Ptr<Creates>;

// Reads
        class Reads;
        using Reads_ptr = ::ecore::Ptr<Reads>;

// Writes
        class Writes;
        using Writes_ptr = ::ecore::Ptr<Writes>;

// CompliesTo
        class CompliesTo;
        using CompliesTo_ptr = ::ecore::Ptr<CompliesTo>;

// Flow
        class Flow;
        using Flow_ptr = ::ecore::Ptr<Flow>;

// TrueFlow
        class TrueFlow;
        using TrueFlow_ptr = ::ecore::Ptr<TrueFlow>;

// FalseFlow
        class FalseFlow;
        using FalseFlow_ptr = ::ecore::Ptr<FalseFlow>;

// GuardedFlow
        class GuardedFlow;
        using GuardedFlow_ptr = ::ecore::Ptr<GuardedFlow>;

// UsesType
        class UsesType;
        using UsesType_ptr = ::ecore::Ptr<UsesType>;

// Addresses
        class Addresses;
        using Addresses_ptr = ::ecore::Ptr<Addresses>;

// ActionRelationship
        class ActionRelationship;
        using ActionRelationship_ptr = ::ecore::Ptr<ActionRelationship>;

// Throws
        class Throws;
        using Throws_ptr = ::ecore::Ptr<Throws>;

// Dispatches
        class Dispatches;
        using Dispatches_ptr = ::ecore::Ptr<Dispatches>;

// EntryFlow
        class EntryFlow;
        using EntryFlow_ptr = ::ecore::Ptr<EntryFlow>;

// BlockUnit
        class BlockUnit;
        using BlockUnit_ptr = ::ecore::Ptr<BlockUnit>;

// ExceptionUnit
        class ExceptionUnit;
        using ExceptionUnit_ptr = ::ecore::Ptr<ExceptionUnit>;

// TryUnit
        class TryUnit;
        using TryUnit_ptr = ::ecore::Ptr<TryUnit>;

// FinallyUnit
        class FinallyUnit;
        using FinallyUnit_ptr = ::ecore::Ptr<FinallyUnit>;

// CatchUnit
        class CatchUnit;
        using CatchUnit_ptr = ::ecore::Ptr<CatchUnit>;

// ExitFlow
        class ExitFlow;
        using ExitFlow_ptr = ::ecore::Ptr<ExitFlow>;

// ExceptionFlow
        class ExceptionFlow;
        using ExceptionFlow_ptr = ::ecore::Ptr<ExceptionFlow>;

// EEnum

// Package & Factory
        class ActionFactory;
        using ActionFactory_ptr = ::ecore::Ptr<ActionFactory>;
        class ActionPackage;
        using ActionPackage_ptr = ::ecore::Ptr<ActionPackage>;

    } // action
} // kdm

#endif // _KDM_ACTION_FORWARD_HPP

