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
        using AbstractCodeElement_ptr = boost::intrusive_ptr<AbstractCodeElement>;

// CodeItem
        class CodeItem;
        using CodeItem_ptr = boost::intrusive_ptr<CodeItem>;

// ComputationalObject
        class ComputationalObject;
        using ComputationalObject_ptr = boost::intrusive_ptr<ComputationalObject>;

// ControlElement
        class ControlElement;
        using ControlElement_ptr = boost::intrusive_ptr<ControlElement>;

// MethodUnit
        class MethodUnit;
        using MethodUnit_ptr = boost::intrusive_ptr<MethodUnit>;

// Module
        class Module;
        using Module_ptr = boost::intrusive_ptr<Module>;

// CodeAssembly
        class CodeAssembly;
        using CodeAssembly_ptr = boost::intrusive_ptr<CodeAssembly>;

// CallableUnit
        class CallableUnit;
        using CallableUnit_ptr = boost::intrusive_ptr<CallableUnit>;

// Datatype
        class Datatype;
        using Datatype_ptr = boost::intrusive_ptr<Datatype>;

// TemplateUnit
        class TemplateUnit;
        using TemplateUnit_ptr = boost::intrusive_ptr<TemplateUnit>;

// TemplateParameter
        class TemplateParameter;
        using TemplateParameter_ptr = boost::intrusive_ptr<TemplateParameter>;

// AbstractCodeRelationship
        class AbstractCodeRelationship;
        using AbstractCodeRelationship_ptr = boost::intrusive_ptr<AbstractCodeRelationship>;

// InstanceOf
        class InstanceOf;
        using InstanceOf_ptr = boost::intrusive_ptr<InstanceOf>;

// CompilationUnit
        class CompilationUnit;
        using CompilationUnit_ptr = boost::intrusive_ptr<CompilationUnit>;

// CodeModel
        class CodeModel;
        using CodeModel_ptr = boost::intrusive_ptr<CodeModel>;

// DerivedType
        class DerivedType;
        using DerivedType_ptr = boost::intrusive_ptr<DerivedType>;

// ArrayType
        class ArrayType;
        using ArrayType_ptr = boost::intrusive_ptr<ArrayType>;

// PrimitiveType
        class PrimitiveType;
        using PrimitiveType_ptr = boost::intrusive_ptr<PrimitiveType>;

// BooleanType
        class BooleanType;
        using BooleanType_ptr = boost::intrusive_ptr<BooleanType>;

// CharType
        class CharType;
        using CharType_ptr = boost::intrusive_ptr<CharType>;

// ClassUnit
        class ClassUnit;
        using ClassUnit_ptr = boost::intrusive_ptr<ClassUnit>;

// CompositeType
        class CompositeType;
        using CompositeType_ptr = boost::intrusive_ptr<CompositeType>;

// RecordType
        class RecordType;
        using RecordType_ptr = boost::intrusive_ptr<RecordType>;

// EnumeratedType
        class EnumeratedType;
        using EnumeratedType_ptr = boost::intrusive_ptr<EnumeratedType>;

// Extends
        class Extends;
        using Extends_ptr = boost::intrusive_ptr<Extends>;

// ScaledType
        class ScaledType;
        using ScaledType_ptr = boost::intrusive_ptr<ScaledType>;

// FloatType
        class FloatType;
        using FloatType_ptr = boost::intrusive_ptr<FloatType>;

// HasType
        class HasType;
        using HasType_ptr = boost::intrusive_ptr<HasType>;

// ImplementationOf
        class ImplementationOf;
        using ImplementationOf_ptr = boost::intrusive_ptr<ImplementationOf>;

// Implements
        class Implements;
        using Implements_ptr = boost::intrusive_ptr<Implements>;

// IntegerType
        class IntegerType;
        using IntegerType_ptr = boost::intrusive_ptr<IntegerType>;

// InterfaceUnit
        class InterfaceUnit;
        using InterfaceUnit_ptr = boost::intrusive_ptr<InterfaceUnit>;

// PointerType
        class PointerType;
        using PointerType_ptr = boost::intrusive_ptr<PointerType>;

// DefinedType
        class DefinedType;
        using DefinedType_ptr = boost::intrusive_ptr<DefinedType>;

// TypeUnit
        class TypeUnit;
        using TypeUnit_ptr = boost::intrusive_ptr<TypeUnit>;

// RangeType
        class RangeType;
        using RangeType_ptr = boost::intrusive_ptr<RangeType>;

// Signature
        class Signature;
        using Signature_ptr = boost::intrusive_ptr<Signature>;

// DataElement
        class DataElement;
        using DataElement_ptr = boost::intrusive_ptr<DataElement>;

// StringType
        class StringType;
        using StringType_ptr = boost::intrusive_ptr<StringType>;

// ChoiceType
        class ChoiceType;
        using ChoiceType_ptr = boost::intrusive_ptr<ChoiceType>;

// NamespaceUnit
        class NamespaceUnit;
        using NamespaceUnit_ptr = boost::intrusive_ptr<NamespaceUnit>;

// VisibleIn
        class VisibleIn;
        using VisibleIn_ptr = boost::intrusive_ptr<VisibleIn>;

// CommentUnit
        class CommentUnit;
        using CommentUnit_ptr = boost::intrusive_ptr<CommentUnit>;

// SharedUnit
        class SharedUnit;
        using SharedUnit_ptr = boost::intrusive_ptr<SharedUnit>;

// DecimalType
        class DecimalType;
        using DecimalType_ptr = boost::intrusive_ptr<DecimalType>;

// DateType
        class DateType;
        using DateType_ptr = boost::intrusive_ptr<DateType>;

// TimeType
        class TimeType;
        using TimeType_ptr = boost::intrusive_ptr<TimeType>;

// VoidType
        class VoidType;
        using VoidType_ptr = boost::intrusive_ptr<VoidType>;

// ValueElement
        class ValueElement;
        using ValueElement_ptr = boost::intrusive_ptr<ValueElement>;

// Value
        class Value;
        using Value_ptr = boost::intrusive_ptr<Value>;

// ValueList
        class ValueList;
        using ValueList_ptr = boost::intrusive_ptr<ValueList>;

// StorableUnit
        class StorableUnit;
        using StorableUnit_ptr = boost::intrusive_ptr<StorableUnit>;

// MemberUnit
        class MemberUnit;
        using MemberUnit_ptr = boost::intrusive_ptr<MemberUnit>;

// ParameterUnit
        class ParameterUnit;
        using ParameterUnit_ptr = boost::intrusive_ptr<ParameterUnit>;

// ItemUnit
        class ItemUnit;
        using ItemUnit_ptr = boost::intrusive_ptr<ItemUnit>;

// IndexUnit
        class IndexUnit;
        using IndexUnit_ptr = boost::intrusive_ptr<IndexUnit>;

// SynonymType
        class SynonymType;
        using SynonymType_ptr = boost::intrusive_ptr<SynonymType>;

// SequenceType
        class SequenceType;
        using SequenceType_ptr = boost::intrusive_ptr<SequenceType>;

// BagType
        class BagType;
        using BagType_ptr = boost::intrusive_ptr<BagType>;

// SetType
        class SetType;
        using SetType_ptr = boost::intrusive_ptr<SetType>;

// CodeElement
        class CodeElement;
        using CodeElement_ptr = boost::intrusive_ptr<CodeElement>;

// CodeRelationship
        class CodeRelationship;
        using CodeRelationship_ptr = boost::intrusive_ptr<CodeRelationship>;

// LanguageUnit
        class LanguageUnit;
        using LanguageUnit_ptr = boost::intrusive_ptr<LanguageUnit>;

// OrdinalType
        class OrdinalType;
        using OrdinalType_ptr = boost::intrusive_ptr<OrdinalType>;

// BitstringType
        class BitstringType;
        using BitstringType_ptr = boost::intrusive_ptr<BitstringType>;

// OctetType
        class OctetType;
        using OctetType_ptr = boost::intrusive_ptr<OctetType>;

// OctetstringType
        class OctetstringType;
        using OctetstringType_ptr = boost::intrusive_ptr<OctetstringType>;

// BitType
        class BitType;
        using BitType_ptr = boost::intrusive_ptr<BitType>;

// Imports
        class Imports;
        using Imports_ptr = boost::intrusive_ptr<Imports>;

// Package
        class Package;
        using Package_ptr = boost::intrusive_ptr<Package>;

// ParameterTo
        class ParameterTo;
        using ParameterTo_ptr = boost::intrusive_ptr<ParameterTo>;

// TemplateType
        class TemplateType;
        using TemplateType_ptr = boost::intrusive_ptr<TemplateType>;

// PreprocessorDirective
        class PreprocessorDirective;
        using PreprocessorDirective_ptr = boost::intrusive_ptr<PreprocessorDirective>;

// MacroDirective
        class MacroDirective;
        using MacroDirective_ptr = boost::intrusive_ptr<MacroDirective>;

// MacroUnit
        class MacroUnit;
        using MacroUnit_ptr = boost::intrusive_ptr<MacroUnit>;

// ConditionalDirective
        class ConditionalDirective;
        using ConditionalDirective_ptr = boost::intrusive_ptr<ConditionalDirective>;

// IncludeDirective
        class IncludeDirective;
        using IncludeDirective_ptr = boost::intrusive_ptr<IncludeDirective>;

// VariantTo
        class VariantTo;
        using VariantTo_ptr = boost::intrusive_ptr<VariantTo>;

// Expands
        class Expands;
        using Expands_ptr = boost::intrusive_ptr<Expands>;

// Redefines
        class Redefines;
        using Redefines_ptr = boost::intrusive_ptr<Redefines>;

// GeneratedFrom
        class GeneratedFrom;
        using GeneratedFrom_ptr = boost::intrusive_ptr<GeneratedFrom>;

// Includes
        class Includes;
        using Includes_ptr = boost::intrusive_ptr<Includes>;

// HasValue
        class HasValue;
        using HasValue_ptr = boost::intrusive_ptr<HasValue>;

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
        using CodeFactory_ptr = boost::intrusive_ptr<CodeFactory>;
        class CodePackage;
        using CodePackage_ptr = boost::intrusive_ptr<CodePackage>;

        template< typename T, typename S >
        inline boost::intrusive_ptr< T > instanceOf(const S& _s)
        {
            return boost::intrusive_ptr < T > (dynamic_cast< T* >(_s.get()));
        }

    } // code
} // kdm

#endif // _KDM_CODE_FORWARD_HPP

