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
        using ActionElement_ptr = boost::intrusive_ptr<ActionElement>;

// AbstractActionRelationship
        class AbstractActionRelationship;
        using AbstractActionRelationship_ptr = boost::intrusive_ptr<AbstractActionRelationship>;

// ControlFlow
        class ControlFlow;
        using ControlFlow_ptr = boost::intrusive_ptr<ControlFlow>;

// Calls
        class Calls;
        using Calls_ptr = boost::intrusive_ptr<Calls>;

// Creates
        class Creates;
        using Creates_ptr = boost::intrusive_ptr<Creates>;

// Reads
        class Reads;
        using Reads_ptr = boost::intrusive_ptr<Reads>;

// Writes
        class Writes;
        using Writes_ptr = boost::intrusive_ptr<Writes>;

// CompliesTo
        class CompliesTo;
        using CompliesTo_ptr = boost::intrusive_ptr<CompliesTo>;

// Flow
        class Flow;
        using Flow_ptr = boost::intrusive_ptr<Flow>;

// TrueFlow
        class TrueFlow;
        using TrueFlow_ptr = boost::intrusive_ptr<TrueFlow>;

// FalseFlow
        class FalseFlow;
        using FalseFlow_ptr = boost::intrusive_ptr<FalseFlow>;

// GuardedFlow
        class GuardedFlow;
        using GuardedFlow_ptr = boost::intrusive_ptr<GuardedFlow>;

// UsesType
        class UsesType;
        using UsesType_ptr = boost::intrusive_ptr<UsesType>;

// Addresses
        class Addresses;
        using Addresses_ptr = boost::intrusive_ptr<Addresses>;

// ActionRelationship
        class ActionRelationship;
        using ActionRelationship_ptr = boost::intrusive_ptr<ActionRelationship>;

// Throws
        class Throws;
        using Throws_ptr = boost::intrusive_ptr<Throws>;

// Dispatches
        class Dispatches;
        using Dispatches_ptr = boost::intrusive_ptr<Dispatches>;

// EntryFlow
        class EntryFlow;
        using EntryFlow_ptr = boost::intrusive_ptr<EntryFlow>;

// BlockUnit
        class BlockUnit;
        using BlockUnit_ptr = boost::intrusive_ptr<BlockUnit>;

// ExceptionUnit
        class ExceptionUnit;
        using ExceptionUnit_ptr = boost::intrusive_ptr<ExceptionUnit>;

// TryUnit
        class TryUnit;
        using TryUnit_ptr = boost::intrusive_ptr<TryUnit>;

// FinallyUnit
        class FinallyUnit;
        using FinallyUnit_ptr = boost::intrusive_ptr<FinallyUnit>;

// CatchUnit
        class CatchUnit;
        using CatchUnit_ptr = boost::intrusive_ptr<CatchUnit>;

// ExitFlow
        class ExitFlow;
        using ExitFlow_ptr = boost::intrusive_ptr<ExitFlow>;

// ExceptionFlow
        class ExceptionFlow;
        using ExceptionFlow_ptr = boost::intrusive_ptr<ExceptionFlow>;

// EEnum

// Package & Factory
        class ActionFactory;
        using ActionFactory_ptr = boost::intrusive_ptr<ActionFactory>;
        class ActionPackage;
        using ActionPackage_ptr = boost::intrusive_ptr<ActionPackage>;

        template< typename T, typename S >
        inline boost::intrusive_ptr< T > instanceOf(const S& _s)
        {
            return boost::intrusive_ptr < T > (dynamic_cast< T* >(_s.get()));
        }

    } // action
} // kdm

#endif // _KDM_ACTION_FORWARD_HPP

