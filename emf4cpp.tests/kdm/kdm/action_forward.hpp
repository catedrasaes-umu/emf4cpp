// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/action_forward.hpp
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
        typedef ActionElement* ActionElement_ptr;

// AbstractActionRelationship
        class AbstractActionRelationship;
        typedef AbstractActionRelationship* AbstractActionRelationship_ptr;

// ControlFlow
        class ControlFlow;
        typedef ControlFlow* ControlFlow_ptr;

// Calls
        class Calls;
        typedef Calls* Calls_ptr;

// Creates
        class Creates;
        typedef Creates* Creates_ptr;

// Reads
        class Reads;
        typedef Reads* Reads_ptr;

// Writes
        class Writes;
        typedef Writes* Writes_ptr;

// CompliesTo
        class CompliesTo;
        typedef CompliesTo* CompliesTo_ptr;

// Flow
        class Flow;
        typedef Flow* Flow_ptr;

// TrueFlow
        class TrueFlow;
        typedef TrueFlow* TrueFlow_ptr;

// FalseFlow
        class FalseFlow;
        typedef FalseFlow* FalseFlow_ptr;

// GuardedFlow
        class GuardedFlow;
        typedef GuardedFlow* GuardedFlow_ptr;

// UsesType
        class UsesType;
        typedef UsesType* UsesType_ptr;

// Addresses
        class Addresses;
        typedef Addresses* Addresses_ptr;

// ActionRelationship
        class ActionRelationship;
        typedef ActionRelationship* ActionRelationship_ptr;

// Throws
        class Throws;
        typedef Throws* Throws_ptr;

// Dispatches
        class Dispatches;
        typedef Dispatches* Dispatches_ptr;

// EntryFlow
        class EntryFlow;
        typedef EntryFlow* EntryFlow_ptr;

// BlockUnit
        class BlockUnit;
        typedef BlockUnit* BlockUnit_ptr;

// ExceptionUnit
        class ExceptionUnit;
        typedef ExceptionUnit* ExceptionUnit_ptr;

// TryUnit
        class TryUnit;
        typedef TryUnit* TryUnit_ptr;

// FinallyUnit
        class FinallyUnit;
        typedef FinallyUnit* FinallyUnit_ptr;

// CatchUnit
        class CatchUnit;
        typedef CatchUnit* CatchUnit_ptr;

// ExitFlow
        class ExitFlow;
        typedef ExitFlow* ExitFlow_ptr;

// ExceptionFlow
        class ExceptionFlow;
        typedef ExceptionFlow* ExceptionFlow_ptr;

// EEnum

// Package & Factory
        class ActionFactory;
        typedef ActionFactory * ActionFactory_ptr;
        class ActionPackage;
        typedef ActionPackage * ActionPackage_ptr;

        template< typename T, typename S >
        inline T* instanceOf(S* _s)
        {
            return dynamic_cast< T* >(_s);
        }

    } // action
} // kdm

#endif // _KDM_ACTION_FORWARD_HPP

