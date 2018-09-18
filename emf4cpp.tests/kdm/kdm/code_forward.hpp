// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code_forward.hpp
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

#ifndef _KDM_CODE_FORWARD_HPP
#define _KDM_CODE_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(kdm_code_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace kdm
{
    namespace code
    {

// EDataType

// EClass

// AbstractCodeElement
        class AbstractCodeElement;
        using AbstractCodeElement_ptr = ::ecore::Ptr<AbstractCodeElement>;

// CodeItem
        class CodeItem;
        using CodeItem_ptr = ::ecore::Ptr<CodeItem>;

// ComputationalObject
        class ComputationalObject;
        using ComputationalObject_ptr = ::ecore::Ptr<ComputationalObject>;

// ControlElement
        class ControlElement;
        using ControlElement_ptr = ::ecore::Ptr<ControlElement>;

// MethodUnit
        class MethodUnit;
        using MethodUnit_ptr = ::ecore::Ptr<MethodUnit>;

// Module
        class Module;
        using Module_ptr = ::ecore::Ptr<Module>;

// CodeAssembly
        class CodeAssembly;
        using CodeAssembly_ptr = ::ecore::Ptr<CodeAssembly>;

// CallableUnit
        class CallableUnit;
        using CallableUnit_ptr = ::ecore::Ptr<CallableUnit>;

// Datatype
        class Datatype;
        using Datatype_ptr = ::ecore::Ptr<Datatype>;

// TemplateUnit
        class TemplateUnit;
        using TemplateUnit_ptr = ::ecore::Ptr<TemplateUnit>;

// TemplateParameter
        class TemplateParameter;
        using TemplateParameter_ptr = ::ecore::Ptr<TemplateParameter>;

// AbstractCodeRelationship
        class AbstractCodeRelationship;
        using AbstractCodeRelationship_ptr = ::ecore::Ptr<AbstractCodeRelationship>;

// InstanceOf
        class InstanceOf;
        using InstanceOf_ptr = ::ecore::Ptr<InstanceOf>;

// CompilationUnit
        class CompilationUnit;
        using CompilationUnit_ptr = ::ecore::Ptr<CompilationUnit>;

// CodeModel
        class CodeModel;
        using CodeModel_ptr = ::ecore::Ptr<CodeModel>;

// DerivedType
        class DerivedType;
        using DerivedType_ptr = ::ecore::Ptr<DerivedType>;

// ArrayType
        class ArrayType;
        using ArrayType_ptr = ::ecore::Ptr<ArrayType>;

// PrimitiveType
        class PrimitiveType;
        using PrimitiveType_ptr = ::ecore::Ptr<PrimitiveType>;

// BooleanType
        class BooleanType;
        using BooleanType_ptr = ::ecore::Ptr<BooleanType>;

// CharType
        class CharType;
        using CharType_ptr = ::ecore::Ptr<CharType>;

// ClassUnit
        class ClassUnit;
        using ClassUnit_ptr = ::ecore::Ptr<ClassUnit>;

// CompositeType
        class CompositeType;
        using CompositeType_ptr = ::ecore::Ptr<CompositeType>;

// RecordType
        class RecordType;
        using RecordType_ptr = ::ecore::Ptr<RecordType>;

// EnumeratedType
        class EnumeratedType;
        using EnumeratedType_ptr = ::ecore::Ptr<EnumeratedType>;

// Extends
        class Extends;
        using Extends_ptr = ::ecore::Ptr<Extends>;

// ScaledType
        class ScaledType;
        using ScaledType_ptr = ::ecore::Ptr<ScaledType>;

// FloatType
        class FloatType;
        using FloatType_ptr = ::ecore::Ptr<FloatType>;

// HasType
        class HasType;
        using HasType_ptr = ::ecore::Ptr<HasType>;

// ImplementationOf
        class ImplementationOf;
        using ImplementationOf_ptr = ::ecore::Ptr<ImplementationOf>;

// Implements
        class Implements;
        using Implements_ptr = ::ecore::Ptr<Implements>;

// IntegerType
        class IntegerType;
        using IntegerType_ptr = ::ecore::Ptr<IntegerType>;

// InterfaceUnit
        class InterfaceUnit;
        using InterfaceUnit_ptr = ::ecore::Ptr<InterfaceUnit>;

// PointerType
        class PointerType;
        using PointerType_ptr = ::ecore::Ptr<PointerType>;

// DefinedType
        class DefinedType;
        using DefinedType_ptr = ::ecore::Ptr<DefinedType>;

// TypeUnit
        class TypeUnit;
        using TypeUnit_ptr = ::ecore::Ptr<TypeUnit>;

// RangeType
        class RangeType;
        using RangeType_ptr = ::ecore::Ptr<RangeType>;

// Signature
        class Signature;
        using Signature_ptr = ::ecore::Ptr<Signature>;

// DataElement
        class DataElement;
        using DataElement_ptr = ::ecore::Ptr<DataElement>;

// StringType
        class StringType;
        using StringType_ptr = ::ecore::Ptr<StringType>;

// ChoiceType
        class ChoiceType;
        using ChoiceType_ptr = ::ecore::Ptr<ChoiceType>;

// NamespaceUnit
        class NamespaceUnit;
        using NamespaceUnit_ptr = ::ecore::Ptr<NamespaceUnit>;

// VisibleIn
        class VisibleIn;
        using VisibleIn_ptr = ::ecore::Ptr<VisibleIn>;

// CommentUnit
        class CommentUnit;
        using CommentUnit_ptr = ::ecore::Ptr<CommentUnit>;

// SharedUnit
        class SharedUnit;
        using SharedUnit_ptr = ::ecore::Ptr<SharedUnit>;

// DecimalType
        class DecimalType;
        using DecimalType_ptr = ::ecore::Ptr<DecimalType>;

// DateType
        class DateType;
        using DateType_ptr = ::ecore::Ptr<DateType>;

// TimeType
        class TimeType;
        using TimeType_ptr = ::ecore::Ptr<TimeType>;

// VoidType
        class VoidType;
        using VoidType_ptr = ::ecore::Ptr<VoidType>;

// ValueElement
        class ValueElement;
        using ValueElement_ptr = ::ecore::Ptr<ValueElement>;

// Value
        class Value;
        using Value_ptr = ::ecore::Ptr<Value>;

// ValueList
        class ValueList;
        using ValueList_ptr = ::ecore::Ptr<ValueList>;

// StorableUnit
        class StorableUnit;
        using StorableUnit_ptr = ::ecore::Ptr<StorableUnit>;

// MemberUnit
        class MemberUnit;
        using MemberUnit_ptr = ::ecore::Ptr<MemberUnit>;

// ParameterUnit
        class ParameterUnit;
        using ParameterUnit_ptr = ::ecore::Ptr<ParameterUnit>;

// ItemUnit
        class ItemUnit;
        using ItemUnit_ptr = ::ecore::Ptr<ItemUnit>;

// IndexUnit
        class IndexUnit;
        using IndexUnit_ptr = ::ecore::Ptr<IndexUnit>;

// SynonymType
        class SynonymType;
        using SynonymType_ptr = ::ecore::Ptr<SynonymType>;

// SequenceType
        class SequenceType;
        using SequenceType_ptr = ::ecore::Ptr<SequenceType>;

// BagType
        class BagType;
        using BagType_ptr = ::ecore::Ptr<BagType>;

// SetType
        class SetType;
        using SetType_ptr = ::ecore::Ptr<SetType>;

// CodeElement
        class CodeElement;
        using CodeElement_ptr = ::ecore::Ptr<CodeElement>;

// CodeRelationship
        class CodeRelationship;
        using CodeRelationship_ptr = ::ecore::Ptr<CodeRelationship>;

// LanguageUnit
        class LanguageUnit;
        using LanguageUnit_ptr = ::ecore::Ptr<LanguageUnit>;

// OrdinalType
        class OrdinalType;
        using OrdinalType_ptr = ::ecore::Ptr<OrdinalType>;

// BitstringType
        class BitstringType;
        using BitstringType_ptr = ::ecore::Ptr<BitstringType>;

// OctetType
        class OctetType;
        using OctetType_ptr = ::ecore::Ptr<OctetType>;

// OctetstringType
        class OctetstringType;
        using OctetstringType_ptr = ::ecore::Ptr<OctetstringType>;

// BitType
        class BitType;
        using BitType_ptr = ::ecore::Ptr<BitType>;

// Imports
        class Imports;
        using Imports_ptr = ::ecore::Ptr<Imports>;

// Package
        class Package;
        using Package_ptr = ::ecore::Ptr<Package>;

// ParameterTo
        class ParameterTo;
        using ParameterTo_ptr = ::ecore::Ptr<ParameterTo>;

// TemplateType
        class TemplateType;
        using TemplateType_ptr = ::ecore::Ptr<TemplateType>;

// PreprocessorDirective
        class PreprocessorDirective;
        using PreprocessorDirective_ptr = ::ecore::Ptr<PreprocessorDirective>;

// MacroDirective
        class MacroDirective;
        using MacroDirective_ptr = ::ecore::Ptr<MacroDirective>;

// MacroUnit
        class MacroUnit;
        using MacroUnit_ptr = ::ecore::Ptr<MacroUnit>;

// ConditionalDirective
        class ConditionalDirective;
        using ConditionalDirective_ptr = ::ecore::Ptr<ConditionalDirective>;

// IncludeDirective
        class IncludeDirective;
        using IncludeDirective_ptr = ::ecore::Ptr<IncludeDirective>;

// VariantTo
        class VariantTo;
        using VariantTo_ptr = ::ecore::Ptr<VariantTo>;

// Expands
        class Expands;
        using Expands_ptr = ::ecore::Ptr<Expands>;

// Redefines
        class Redefines;
        using Redefines_ptr = ::ecore::Ptr<Redefines>;

// GeneratedFrom
        class GeneratedFrom;
        using GeneratedFrom_ptr = ::ecore::Ptr<GeneratedFrom>;

// Includes
        class Includes;
        using Includes_ptr = ::ecore::Ptr<Includes>;

// HasValue
        class HasValue;
        using HasValue_ptr = ::ecore::Ptr<HasValue>;

// EEnum

// MethodKind
        enum class MethodKind
        ;

// ParameterKind
        enum class ParameterKind
        ;

// ExportKind
        enum class ExportKind
        ;

// StorableKind
        enum class StorableKind
        ;

// CallableKind
        enum class CallableKind
        ;

// MacroKind
        enum class MacroKind
        ;

// Package & Factory
        class CodeFactory;
        using CodeFactory_ptr = ::ecore::Ptr<CodeFactory>;
        class CodePackage;
        using CodePackage_ptr = ::ecore::Ptr<CodePackage>;

    } // code
} // kdm

#endif // _KDM_CODE_FORWARD_HPP

