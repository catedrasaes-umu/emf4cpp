// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm_forward.hpp
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

#ifndef _IDLMM_FORWARD_HPP
#define _IDLMM_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(idlmm_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace idlmm
{

// EDataType
    /*PROTECTED REGION ID(idlmm_EAny) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef int EAny;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(idlmm_ETypeCode) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef int ETypeCode;
    /*PROTECTED REGION END*/

// EClass
// Container
    class Container;
    using Container_ptr = boost::intrusive_ptr<Container>;

// Contained
    class Contained;
    using Contained_ptr = boost::intrusive_ptr<Contained>;

// InterfaceDef
    class InterfaceDef;
    using InterfaceDef_ptr = boost::intrusive_ptr<InterfaceDef>;

// ModuleDef
    class ModuleDef;
    using ModuleDef_ptr = boost::intrusive_ptr<ModuleDef>;

// IDLType
    class IDLType;
    using IDLType_ptr = boost::intrusive_ptr<IDLType>;

// OperationDef
    class OperationDef;
    using OperationDef_ptr = boost::intrusive_ptr<OperationDef>;

// AttributeDef
    class AttributeDef;
    using AttributeDef_ptr = boost::intrusive_ptr<AttributeDef>;

// ConstantDef
    class ConstantDef;
    using ConstantDef_ptr = boost::intrusive_ptr<ConstantDef>;

// Typed
    class Typed;
    using Typed_ptr = boost::intrusive_ptr<Typed>;

// ParameterDef
    class ParameterDef;
    using ParameterDef_ptr = boost::intrusive_ptr<ParameterDef>;

// PrimitiveDef
    class PrimitiveDef;
    using PrimitiveDef_ptr = boost::intrusive_ptr<PrimitiveDef>;

// ExceptionDef
    class ExceptionDef;
    using ExceptionDef_ptr = boost::intrusive_ptr<ExceptionDef>;

// Field
    class Field;
    using Field_ptr = boost::intrusive_ptr<Field>;

// FixedDef
    class FixedDef;
    using FixedDef_ptr = boost::intrusive_ptr<FixedDef>;

// WstringDef
    class WstringDef;
    using WstringDef_ptr = boost::intrusive_ptr<WstringDef>;

// StringDef
    class StringDef;
    using StringDef_ptr = boost::intrusive_ptr<StringDef>;

// AliasDef
    class AliasDef;
    using AliasDef_ptr = boost::intrusive_ptr<AliasDef>;

// ArrayDef
    class ArrayDef;
    using ArrayDef_ptr = boost::intrusive_ptr<ArrayDef>;

// SequenceDef
    class SequenceDef;
    using SequenceDef_ptr = boost::intrusive_ptr<SequenceDef>;

// UnionField
    class UnionField;
    using UnionField_ptr = boost::intrusive_ptr<UnionField>;

// TypedefDef
    class TypedefDef;
    using TypedefDef_ptr = boost::intrusive_ptr<TypedefDef>;

// UnionDef
    class UnionDef;
    using UnionDef_ptr = boost::intrusive_ptr<UnionDef>;

// EnumDef
    class EnumDef;
    using EnumDef_ptr = boost::intrusive_ptr<EnumDef>;

// StructDef
    class StructDef;
    using StructDef_ptr = boost::intrusive_ptr<StructDef>;

// TranslationUnit
    class TranslationUnit;
    using TranslationUnit_ptr = boost::intrusive_ptr<TranslationUnit>;

// Include
    class Include;
    using Include_ptr = boost::intrusive_ptr<Include>;

// EEnum

// ParameterMode
    enum class ParameterMode
    ;

// PrimitiveKind
    enum class PrimitiveKind
    ;

// Package & Factory
    class IdlmmFactory;
    using IdlmmFactory_ptr = boost::intrusive_ptr<IdlmmFactory>;
    class IdlmmPackage;
    using IdlmmPackage_ptr = boost::intrusive_ptr<IdlmmPackage>;

    template< typename T, typename S >
    inline boost::intrusive_ptr< T > instanceOf(const S& _s)
    {
        return boost::intrusive_ptr < T > (dynamic_cast< T* >(_s.get()));
    }

} // idlmm

#endif // _IDLMM_FORWARD_HPP

