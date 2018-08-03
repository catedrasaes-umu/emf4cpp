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
    using Container_ptr = ::ecore::Ptr<Container>;

// Contained
    class Contained;
    using Contained_ptr = ::ecore::Ptr<Contained>;

// InterfaceDef
    class InterfaceDef;
    using InterfaceDef_ptr = ::ecore::Ptr<InterfaceDef>;

// ModuleDef
    class ModuleDef;
    using ModuleDef_ptr = ::ecore::Ptr<ModuleDef>;

// IDLType
    class IDLType;
    using IDLType_ptr = ::ecore::Ptr<IDLType>;

// OperationDef
    class OperationDef;
    using OperationDef_ptr = ::ecore::Ptr<OperationDef>;

// AttributeDef
    class AttributeDef;
    using AttributeDef_ptr = ::ecore::Ptr<AttributeDef>;

// ConstantDef
    class ConstantDef;
    using ConstantDef_ptr = ::ecore::Ptr<ConstantDef>;

// Typed
    class Typed;
    using Typed_ptr = ::ecore::Ptr<Typed>;

// ParameterDef
    class ParameterDef;
    using ParameterDef_ptr = ::ecore::Ptr<ParameterDef>;

// PrimitiveDef
    class PrimitiveDef;
    using PrimitiveDef_ptr = ::ecore::Ptr<PrimitiveDef>;

// ExceptionDef
    class ExceptionDef;
    using ExceptionDef_ptr = ::ecore::Ptr<ExceptionDef>;

// Field
    class Field;
    using Field_ptr = ::ecore::Ptr<Field>;

// FixedDef
    class FixedDef;
    using FixedDef_ptr = ::ecore::Ptr<FixedDef>;

// WstringDef
    class WstringDef;
    using WstringDef_ptr = ::ecore::Ptr<WstringDef>;

// StringDef
    class StringDef;
    using StringDef_ptr = ::ecore::Ptr<StringDef>;

// AliasDef
    class AliasDef;
    using AliasDef_ptr = ::ecore::Ptr<AliasDef>;

// ArrayDef
    class ArrayDef;
    using ArrayDef_ptr = ::ecore::Ptr<ArrayDef>;

// SequenceDef
    class SequenceDef;
    using SequenceDef_ptr = ::ecore::Ptr<SequenceDef>;

// UnionField
    class UnionField;
    using UnionField_ptr = ::ecore::Ptr<UnionField>;

// TypedefDef
    class TypedefDef;
    using TypedefDef_ptr = ::ecore::Ptr<TypedefDef>;

// UnionDef
    class UnionDef;
    using UnionDef_ptr = ::ecore::Ptr<UnionDef>;

// EnumDef
    class EnumDef;
    using EnumDef_ptr = ::ecore::Ptr<EnumDef>;

// StructDef
    class StructDef;
    using StructDef_ptr = ::ecore::Ptr<StructDef>;

// TranslationUnit
    class TranslationUnit;
    using TranslationUnit_ptr = ::ecore::Ptr<TranslationUnit>;

// Include
    class Include;
    using Include_ptr = ::ecore::Ptr<Include>;

// EEnum

// ParameterMode
    enum class ParameterMode
    ;

// PrimitiveKind
    enum class PrimitiveKind
    ;

// Package & Factory
    class IdlmmFactory;
    using IdlmmFactory_ptr = ::ecore::Ptr<IdlmmFactory>;
    class IdlmmPackage;
    using IdlmmPackage_ptr = ::ecore::Ptr<IdlmmPackage>;

} // idlmm

#endif // _IDLMM_FORWARD_HPP

