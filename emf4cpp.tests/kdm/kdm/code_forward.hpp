// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code_forward.hpp
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
        /*PROTECTED REGION ID(kdm_code_MethodKind) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
        typedef int MethodKind;
        /*PROTECTED REGION END*/
        /*PROTECTED REGION ID(kdm_code_ParameterKind) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
        typedef int ParameterKind;
        /*PROTECTED REGION END*/
        /*PROTECTED REGION ID(kdm_code_ExportKind) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
        typedef int ExportKind;
        /*PROTECTED REGION END*/
        /*PROTECTED REGION ID(kdm_code_StorableKind) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
        typedef int StorableKind;
        /*PROTECTED REGION END*/
        /*PROTECTED REGION ID(kdm_code_CallableKind) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
        typedef int CallableKind;
        /*PROTECTED REGION END*/
        /*PROTECTED REGION ID(kdm_code_MacroKind) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
        typedef int MacroKind;
        /*PROTECTED REGION END*/

// EClass
// AbstractCodeElement
        class AbstractCodeElement;
        typedef AbstractCodeElement* AbstractCodeElement_ptr;

// CodeItem
        class CodeItem;
        typedef CodeItem* CodeItem_ptr;

// ComputationalObject
        class ComputationalObject;
        typedef ComputationalObject* ComputationalObject_ptr;

// ControlElement
        class ControlElement;
        typedef ControlElement* ControlElement_ptr;

// MethodUnit
        class MethodUnit;
        typedef MethodUnit* MethodUnit_ptr;

// Module
        class Module;
        typedef Module* Module_ptr;

// CodeAssembly
        class CodeAssembly;
        typedef CodeAssembly* CodeAssembly_ptr;

// CallableUnit
        class CallableUnit;
        typedef CallableUnit* CallableUnit_ptr;

// Datatype
        class Datatype;
        typedef Datatype* Datatype_ptr;

// TemplateUnit
        class TemplateUnit;
        typedef TemplateUnit* TemplateUnit_ptr;

// TemplateParameter
        class TemplateParameter;
        typedef TemplateParameter* TemplateParameter_ptr;

// AbstractCodeRelationship
        class AbstractCodeRelationship;
        typedef AbstractCodeRelationship* AbstractCodeRelationship_ptr;

// InstanceOf
        class InstanceOf;
        typedef InstanceOf* InstanceOf_ptr;

// CompilationUnit
        class CompilationUnit;
        typedef CompilationUnit* CompilationUnit_ptr;

// CodeModel
        class CodeModel;
        typedef CodeModel* CodeModel_ptr;

// DerivedType
        class DerivedType;
        typedef DerivedType* DerivedType_ptr;

// ArrayType
        class ArrayType;
        typedef ArrayType* ArrayType_ptr;

// PrimitiveType
        class PrimitiveType;
        typedef PrimitiveType* PrimitiveType_ptr;

// BooleanType
        class BooleanType;
        typedef BooleanType* BooleanType_ptr;

// CharType
        class CharType;
        typedef CharType* CharType_ptr;

// ClassUnit
        class ClassUnit;
        typedef ClassUnit* ClassUnit_ptr;

// CompositeType
        class CompositeType;
        typedef CompositeType* CompositeType_ptr;

// RecordType
        class RecordType;
        typedef RecordType* RecordType_ptr;

// EnumeratedType
        class EnumeratedType;
        typedef EnumeratedType* EnumeratedType_ptr;

// Extends
        class Extends;
        typedef Extends* Extends_ptr;

// ScaledType
        class ScaledType;
        typedef ScaledType* ScaledType_ptr;

// FloatType
        class FloatType;
        typedef FloatType* FloatType_ptr;

// HasType
        class HasType;
        typedef HasType* HasType_ptr;

// ImplementationOf
        class ImplementationOf;
        typedef ImplementationOf* ImplementationOf_ptr;

// Implements
        class Implements;
        typedef Implements* Implements_ptr;

// IntegerType
        class IntegerType;
        typedef IntegerType* IntegerType_ptr;

// InterfaceUnit
        class InterfaceUnit;
        typedef InterfaceUnit* InterfaceUnit_ptr;

// PointerType
        class PointerType;
        typedef PointerType* PointerType_ptr;

// DefinedType
        class DefinedType;
        typedef DefinedType* DefinedType_ptr;

// TypeUnit
        class TypeUnit;
        typedef TypeUnit* TypeUnit_ptr;

// RangeType
        class RangeType;
        typedef RangeType* RangeType_ptr;

// Signature
        class Signature;
        typedef Signature* Signature_ptr;

// DataElement
        class DataElement;
        typedef DataElement* DataElement_ptr;

// StringType
        class StringType;
        typedef StringType* StringType_ptr;

// ChoiceType
        class ChoiceType;
        typedef ChoiceType* ChoiceType_ptr;

// NamespaceUnit
        class NamespaceUnit;
        typedef NamespaceUnit* NamespaceUnit_ptr;

// VisibleIn
        class VisibleIn;
        typedef VisibleIn* VisibleIn_ptr;

// CommentUnit
        class CommentUnit;
        typedef CommentUnit* CommentUnit_ptr;

// SharedUnit
        class SharedUnit;
        typedef SharedUnit* SharedUnit_ptr;

// DecimalType
        class DecimalType;
        typedef DecimalType* DecimalType_ptr;

// DateType
        class DateType;
        typedef DateType* DateType_ptr;

// TimeType
        class TimeType;
        typedef TimeType* TimeType_ptr;

// VoidType
        class VoidType;
        typedef VoidType* VoidType_ptr;

// ValueElement
        class ValueElement;
        typedef ValueElement* ValueElement_ptr;

// Value
        class Value;
        typedef Value* Value_ptr;

// ValueList
        class ValueList;
        typedef ValueList* ValueList_ptr;

// StorableUnit
        class StorableUnit;
        typedef StorableUnit* StorableUnit_ptr;

// MemberUnit
        class MemberUnit;
        typedef MemberUnit* MemberUnit_ptr;

// ParameterUnit
        class ParameterUnit;
        typedef ParameterUnit* ParameterUnit_ptr;

// ItemUnit
        class ItemUnit;
        typedef ItemUnit* ItemUnit_ptr;

// IndexUnit
        class IndexUnit;
        typedef IndexUnit* IndexUnit_ptr;

// SynonymType
        class SynonymType;
        typedef SynonymType* SynonymType_ptr;

// SequenceType
        class SequenceType;
        typedef SequenceType* SequenceType_ptr;

// BagType
        class BagType;
        typedef BagType* BagType_ptr;

// SetType
        class SetType;
        typedef SetType* SetType_ptr;

// CodeElement
        class CodeElement;
        typedef CodeElement* CodeElement_ptr;

// CodeRelationship
        class CodeRelationship;
        typedef CodeRelationship* CodeRelationship_ptr;

// LanguageUnit
        class LanguageUnit;
        typedef LanguageUnit* LanguageUnit_ptr;

// OrdinalType
        class OrdinalType;
        typedef OrdinalType* OrdinalType_ptr;

// BitstringType
        class BitstringType;
        typedef BitstringType* BitstringType_ptr;

// OctetType
        class OctetType;
        typedef OctetType* OctetType_ptr;

// OctetstringType
        class OctetstringType;
        typedef OctetstringType* OctetstringType_ptr;

// BitType
        class BitType;
        typedef BitType* BitType_ptr;

// Imports
        class Imports;
        typedef Imports* Imports_ptr;

// Package
        class Package;
        typedef Package* Package_ptr;

// ParameterTo
        class ParameterTo;
        typedef ParameterTo* ParameterTo_ptr;

// TemplateType
        class TemplateType;
        typedef TemplateType* TemplateType_ptr;

// PreprocessorDirective
        class PreprocessorDirective;
        typedef PreprocessorDirective* PreprocessorDirective_ptr;

// MacroDirective
        class MacroDirective;
        typedef MacroDirective* MacroDirective_ptr;

// MacroUnit
        class MacroUnit;
        typedef MacroUnit* MacroUnit_ptr;

// ConditionalDirective
        class ConditionalDirective;
        typedef ConditionalDirective* ConditionalDirective_ptr;

// IncludeDirective
        class IncludeDirective;
        typedef IncludeDirective* IncludeDirective_ptr;

// VariantTo
        class VariantTo;
        typedef VariantTo* VariantTo_ptr;

// Expands
        class Expands;
        typedef Expands* Expands_ptr;

// Redefines
        class Redefines;
        typedef Redefines* Redefines_ptr;

// GeneratedFrom
        class GeneratedFrom;
        typedef GeneratedFrom* GeneratedFrom_ptr;

// Includes
        class Includes;
        typedef Includes* Includes_ptr;

// HasValue
        class HasValue;
        typedef HasValue* HasValue_ptr;

// Package & Factory
        class CodeFactory;
        typedef CodeFactory * CodeFactory_ptr;
        class CodePackage;
        typedef CodePackage * CodePackage_ptr;

        template< typename T, typename S >
        inline T* instanceOf(S* _s)
        {
            return dynamic_cast< T* >(_s);
        }

    } // code
} // kdm

#endif // _KDM_CODE_FORWARD_HPP

