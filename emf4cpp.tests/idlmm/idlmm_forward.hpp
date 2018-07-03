// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm_forward.hpp
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
    typedef Container* Container_ptr;

// Contained
    class Contained;
    typedef Contained* Contained_ptr;

// InterfaceDef
    class InterfaceDef;
    typedef InterfaceDef* InterfaceDef_ptr;

// ModuleDef
    class ModuleDef;
    typedef ModuleDef* ModuleDef_ptr;

// IDLType
    class IDLType;
    typedef IDLType* IDLType_ptr;

// OperationDef
    class OperationDef;
    typedef OperationDef* OperationDef_ptr;

// AttributeDef
    class AttributeDef;
    typedef AttributeDef* AttributeDef_ptr;

// ConstantDef
    class ConstantDef;
    typedef ConstantDef* ConstantDef_ptr;

// Typed
    class Typed;
    typedef Typed* Typed_ptr;

// ParameterDef
    class ParameterDef;
    typedef ParameterDef* ParameterDef_ptr;

// PrimitiveDef
    class PrimitiveDef;
    typedef PrimitiveDef* PrimitiveDef_ptr;

// ExceptionDef
    class ExceptionDef;
    typedef ExceptionDef* ExceptionDef_ptr;

// Field
    class Field;
    typedef Field* Field_ptr;

// FixedDef
    class FixedDef;
    typedef FixedDef* FixedDef_ptr;

// WstringDef
    class WstringDef;
    typedef WstringDef* WstringDef_ptr;

// StringDef
    class StringDef;
    typedef StringDef* StringDef_ptr;

// AliasDef
    class AliasDef;
    typedef AliasDef* AliasDef_ptr;

// ArrayDef
    class ArrayDef;
    typedef ArrayDef* ArrayDef_ptr;

// SequenceDef
    class SequenceDef;
    typedef SequenceDef* SequenceDef_ptr;

// UnionField
    class UnionField;
    typedef UnionField* UnionField_ptr;

// TypedefDef
    class TypedefDef;
    typedef TypedefDef* TypedefDef_ptr;

// UnionDef
    class UnionDef;
    typedef UnionDef* UnionDef_ptr;

// EnumDef
    class EnumDef;
    typedef EnumDef* EnumDef_ptr;

// StructDef
    class StructDef;
    typedef StructDef* StructDef_ptr;

// TranslationUnit
    class TranslationUnit;
    typedef TranslationUnit* TranslationUnit_ptr;

// Include
    class Include;
    typedef Include* Include_ptr;

// EEnum

// ParameterMode
    enum class ParameterMode
    ;

// PrimitiveKind
    enum class PrimitiveKind
    ;

// Package & Factory
    class IdlmmFactory;
    typedef IdlmmFactory * IdlmmFactory_ptr;
    class IdlmmPackage;
    typedef IdlmmPackage * IdlmmPackage_ptr;

    template< typename T, typename S >
    inline T* instanceOf(S* _s)
    {
        return dynamic_cast< T* >(_s);
    }

} // idlmm

#endif // _IDLMM_FORWARD_HPP

