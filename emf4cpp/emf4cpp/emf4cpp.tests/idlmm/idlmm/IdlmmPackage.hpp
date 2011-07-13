// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/IdlmmPackage.hpp
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

#ifndef _IDLMMPACKAGE_HPP
#define _IDLMMPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <idlmm_forward.hpp>

namespace idlmm
{

    class IdlmmPackage: public virtual ::ecore::EPackage
    {
    public:

        static IdlmmPackage_ptr _instance();

        // IDs for classifiers

        static const int ALIASDEF = 0;

        static const int ARRAYDEF = 1;

        static const int ATTRIBUTEDEF = 2;

        static const int CONSTANTDEF = 3;

        static const int CONTAINED = 4;

        static const int CONTAINER = 5;

        static const int EANY = 6;

        static const int ENUMDEF = 7;

        static const int ETYPECODE = 8;

        static const int EXCEPTIONDEF = 9;

        static const int FIELD = 10;

        static const int FIXEDDEF = 11;

        static const int IDLTYPE = 12;

        static const int INCLUDE = 13;

        static const int INTERFACEDEF = 14;

        static const int MODULEDEF = 15;

        static const int OPERATIONDEF = 16;

        static const int PARAMETERDEF = 17;

        static const int PARAMETERMODE = 18;

        static const int PRIMITIVEDEF = 19;

        static const int PRIMITIVEKIND = 20;

        static const int SEQUENCEDEF = 21;

        static const int STRINGDEF = 22;

        static const int STRUCTDEF = 23;

        static const int TRANSLATIONUNIT = 24;

        static const int TYPED = 25;

        static const int TYPEDEFDEF = 26;

        static const int UNIONDEF = 27;

        static const int UNIONFIELD = 28;

        static const int WSTRINGDEF = 29;

        static const int CONTAINER__CONTAINS = 0;

        static const int CONTAINED__IDENTIFIER = 1;

        static const int CONTAINED__REPOSITORYID = 2;

        static const int CONTAINED__VERSION = 3;

        static const int CONTAINED__ABSOLUTENAME = 4;

        static const int CONTAINED__DEFINEDIN = 5;

        static const int INTERFACEDEF__ISABSTRACT = 6;

        static const int INTERFACEDEF__ISCUSTOM = 7;

        static const int INTERFACEDEF__ISTRUNCATABLE = 8;

        static const int INTERFACEDEF__DERIVESFROM = 9;

        static const int MODULEDEF__PREFIX = 10;

        static const int IDLTYPE__TYPECODE = 11;

        static const int OPERATIONDEF__PARAMETERS = 12;

        static const int OPERATIONDEF__ISONEWAY = 13;

        static const int OPERATIONDEF__CONTEXTS = 14;

        static const int OPERATIONDEF__CANRAISE = 15;

        static const int ATTRIBUTEDEF__GETRAISES = 16;

        static const int ATTRIBUTEDEF__SETRAISES = 17;

        static const int ATTRIBUTEDEF__ISREADONLY = 18;

        static const int CONSTANTDEF__CONSTVALUE = 19;

        static const int TYPED__CONTAINEDTYPE = 20;

        static const int TYPED__SHAREDTYPE = 21;

        static const int PARAMETERDEF__IDENTIFIER = 22;

        static const int PARAMETERDEF__DIRECTION = 23;

        static const int PRIMITIVEDEF__KIND = 24;

        static const int EXCEPTIONDEF__TYPECODE = 25;

        static const int EXCEPTIONDEF__MEMBERS = 26;

        static const int FIELD__IDENTIFIER = 27;

        static const int FIXEDDEF__DIGITS = 28;

        static const int FIXEDDEF__SCALE = 29;

        static const int WSTRINGDEF__BOUND = 30;

        static const int STRINGDEF__BOUND = 31;

        static const int ARRAYDEF__BOUND = 32;

        static const int SEQUENCEDEF__BOUND = 33;

        static const int UNIONFIELD__IDENTIFIER = 34;

        static const int UNIONFIELD__LABEL = 35;

        static const int UNIONDEF__UNIONMEMBERS = 36;

        static const int UNIONDEF__CONTAINEDDISCRIM = 37;

        static const int UNIONDEF__SHAREDDISCRIM = 38;

        static const int ENUMDEF__MEMBERS = 39;

        static const int STRUCTDEF__MEMBERS = 40;

        static const int TRANSLATIONUNIT__CONTAINS = 41;

        static const int TRANSLATIONUNIT__IDENTIFIER = 42;

        static const int TRANSLATIONUNIT__INCLUDES = 43;

        static const int INCLUDE__IMPORTURI = 44;

        // IDs for classifiers for class AliasDef 

        static const int ALIASDEF__CONTAINEDTYPE = TYPED__CONTAINEDTYPE;

        static const int ALIASDEF__SHAREDTYPE = TYPED__SHAREDTYPE;

        static const int ALIASDEF__TYPECODE = IDLTYPE__TYPECODE;

        static const int ALIASDEF__IDENTIFIER = CONTAINED__IDENTIFIER;

        static const int ALIASDEF__REPOSITORYID = CONTAINED__REPOSITORYID;

        static const int ALIASDEF__VERSION = CONTAINED__VERSION;

        static const int ALIASDEF__ABSOLUTENAME = CONTAINED__ABSOLUTENAME;

        static const int ALIASDEF__DEFINEDIN = CONTAINED__DEFINEDIN;

        // IDs for classifiers for class ArrayDef 

        static const int ARRAYDEF__CONTAINEDTYPE = TYPED__CONTAINEDTYPE;

        static const int ARRAYDEF__SHAREDTYPE = TYPED__SHAREDTYPE;

        static const int ARRAYDEF__TYPECODE = IDLTYPE__TYPECODE;

        // IDs for classifiers for class AttributeDef 

        static const int ATTRIBUTEDEF__IDENTIFIER = CONTAINED__IDENTIFIER;

        static const int ATTRIBUTEDEF__REPOSITORYID = CONTAINED__REPOSITORYID;

        static const int ATTRIBUTEDEF__VERSION = CONTAINED__VERSION;

        static const int ATTRIBUTEDEF__ABSOLUTENAME = CONTAINED__ABSOLUTENAME;

        static const int ATTRIBUTEDEF__DEFINEDIN = CONTAINED__DEFINEDIN;

        static const int ATTRIBUTEDEF__CONTAINEDTYPE = TYPED__CONTAINEDTYPE;

        static const int ATTRIBUTEDEF__SHAREDTYPE = TYPED__SHAREDTYPE;

        // IDs for classifiers for class ConstantDef 

        static const int CONSTANTDEF__IDENTIFIER = CONTAINED__IDENTIFIER;

        static const int CONSTANTDEF__REPOSITORYID = CONTAINED__REPOSITORYID;

        static const int CONSTANTDEF__VERSION = CONTAINED__VERSION;

        static const int CONSTANTDEF__ABSOLUTENAME = CONTAINED__ABSOLUTENAME;

        static const int CONSTANTDEF__DEFINEDIN = CONTAINED__DEFINEDIN;

        static const int CONSTANTDEF__CONTAINEDTYPE = TYPED__CONTAINEDTYPE;

        static const int CONSTANTDEF__SHAREDTYPE = TYPED__SHAREDTYPE;

        // IDs for classifiers for class Contained 


        // IDs for classifiers for class Container 

        static const int CONTAINER__IDENTIFIER = CONTAINED__IDENTIFIER;

        static const int CONTAINER__REPOSITORYID = CONTAINED__REPOSITORYID;

        static const int CONTAINER__VERSION = CONTAINED__VERSION;

        static const int CONTAINER__ABSOLUTENAME = CONTAINED__ABSOLUTENAME;

        static const int CONTAINER__DEFINEDIN = CONTAINED__DEFINEDIN;

        // IDs for classifiers for class EnumDef 

        static const int ENUMDEF__TYPECODE = IDLTYPE__TYPECODE;

        static const int ENUMDEF__IDENTIFIER = CONTAINED__IDENTIFIER;

        static const int ENUMDEF__REPOSITORYID = CONTAINED__REPOSITORYID;

        static const int ENUMDEF__VERSION = CONTAINED__VERSION;

        static const int ENUMDEF__ABSOLUTENAME = CONTAINED__ABSOLUTENAME;

        static const int ENUMDEF__DEFINEDIN = CONTAINED__DEFINEDIN;

        // IDs for classifiers for class ExceptionDef 

        static const int EXCEPTIONDEF__IDENTIFIER = CONTAINED__IDENTIFIER;

        static const int EXCEPTIONDEF__REPOSITORYID = CONTAINED__REPOSITORYID;

        static const int EXCEPTIONDEF__VERSION = CONTAINED__VERSION;

        static const int EXCEPTIONDEF__ABSOLUTENAME = CONTAINED__ABSOLUTENAME;

        static const int EXCEPTIONDEF__DEFINEDIN = CONTAINED__DEFINEDIN;

        // IDs for classifiers for class Field 

        static const int FIELD__CONTAINEDTYPE = TYPED__CONTAINEDTYPE;

        static const int FIELD__SHAREDTYPE = TYPED__SHAREDTYPE;

        // IDs for classifiers for class FixedDef 

        static const int FIXEDDEF__TYPECODE = IDLTYPE__TYPECODE;

        // IDs for classifiers for class IDLType 


        // IDs for classifiers for class Include 


        // IDs for classifiers for class InterfaceDef 

        static const int INTERFACEDEF__IDENTIFIER = CONTAINED__IDENTIFIER;

        static const int INTERFACEDEF__REPOSITORYID = CONTAINED__REPOSITORYID;

        static const int INTERFACEDEF__VERSION = CONTAINED__VERSION;

        static const int INTERFACEDEF__ABSOLUTENAME = CONTAINED__ABSOLUTENAME;

        static const int INTERFACEDEF__DEFINEDIN = CONTAINED__DEFINEDIN;

        static const int INTERFACEDEF__CONTAINS = CONTAINER__CONTAINS;

        static const int INTERFACEDEF__TYPECODE = IDLTYPE__TYPECODE;

        // IDs for classifiers for class ModuleDef 

        static const int MODULEDEF__IDENTIFIER = CONTAINED__IDENTIFIER;

        static const int MODULEDEF__REPOSITORYID = CONTAINED__REPOSITORYID;

        static const int MODULEDEF__VERSION = CONTAINED__VERSION;

        static const int MODULEDEF__ABSOLUTENAME = CONTAINED__ABSOLUTENAME;

        static const int MODULEDEF__DEFINEDIN = CONTAINED__DEFINEDIN;

        static const int MODULEDEF__CONTAINS = CONTAINER__CONTAINS;

        // IDs for classifiers for class OperationDef 

        static const int OPERATIONDEF__IDENTIFIER = CONTAINED__IDENTIFIER;

        static const int OPERATIONDEF__REPOSITORYID = CONTAINED__REPOSITORYID;

        static const int OPERATIONDEF__VERSION = CONTAINED__VERSION;

        static const int OPERATIONDEF__ABSOLUTENAME = CONTAINED__ABSOLUTENAME;

        static const int OPERATIONDEF__DEFINEDIN = CONTAINED__DEFINEDIN;

        static const int OPERATIONDEF__CONTAINEDTYPE = TYPED__CONTAINEDTYPE;

        static const int OPERATIONDEF__SHAREDTYPE = TYPED__SHAREDTYPE;

        // IDs for classifiers for class ParameterDef 

        static const int PARAMETERDEF__CONTAINEDTYPE = TYPED__CONTAINEDTYPE;

        static const int PARAMETERDEF__SHAREDTYPE = TYPED__SHAREDTYPE;

        // IDs for classifiers for class PrimitiveDef 

        static const int PRIMITIVEDEF__TYPECODE = IDLTYPE__TYPECODE;

        // IDs for classifiers for class SequenceDef 

        static const int SEQUENCEDEF__CONTAINEDTYPE = TYPED__CONTAINEDTYPE;

        static const int SEQUENCEDEF__SHAREDTYPE = TYPED__SHAREDTYPE;

        static const int SEQUENCEDEF__TYPECODE = IDLTYPE__TYPECODE;

        // IDs for classifiers for class StringDef 

        static const int STRINGDEF__TYPECODE = IDLTYPE__TYPECODE;

        // IDs for classifiers for class StructDef 

        static const int STRUCTDEF__TYPECODE = IDLTYPE__TYPECODE;

        static const int STRUCTDEF__IDENTIFIER = CONTAINED__IDENTIFIER;

        static const int STRUCTDEF__REPOSITORYID = CONTAINED__REPOSITORYID;

        static const int STRUCTDEF__VERSION = CONTAINED__VERSION;

        static const int STRUCTDEF__ABSOLUTENAME = CONTAINED__ABSOLUTENAME;

        static const int STRUCTDEF__DEFINEDIN = CONTAINED__DEFINEDIN;

        // IDs for classifiers for class TranslationUnit 


        // IDs for classifiers for class Typed 


        // IDs for classifiers for class TypedefDef 

        static const int TYPEDEFDEF__TYPECODE = IDLTYPE__TYPECODE;

        static const int TYPEDEFDEF__IDENTIFIER = CONTAINED__IDENTIFIER;

        static const int TYPEDEFDEF__REPOSITORYID = CONTAINED__REPOSITORYID;

        static const int TYPEDEFDEF__VERSION = CONTAINED__VERSION;

        static const int TYPEDEFDEF__ABSOLUTENAME = CONTAINED__ABSOLUTENAME;

        static const int TYPEDEFDEF__DEFINEDIN = CONTAINED__DEFINEDIN;

        // IDs for classifiers for class UnionDef 

        static const int UNIONDEF__TYPECODE = IDLTYPE__TYPECODE;

        static const int UNIONDEF__IDENTIFIER = CONTAINED__IDENTIFIER;

        static const int UNIONDEF__REPOSITORYID = CONTAINED__REPOSITORYID;

        static const int UNIONDEF__VERSION = CONTAINED__VERSION;

        static const int UNIONDEF__ABSOLUTENAME = CONTAINED__ABSOLUTENAME;

        static const int UNIONDEF__DEFINEDIN = CONTAINED__DEFINEDIN;

        // IDs for classifiers for class UnionField 

        static const int UNIONFIELD__CONTAINEDTYPE = TYPED__CONTAINEDTYPE;

        static const int UNIONFIELD__SHAREDTYPE = TYPED__SHAREDTYPE;

        // IDs for classifiers for class WstringDef 

        static const int WSTRINGDEF__TYPECODE = IDLTYPE__TYPECODE;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getContainer();

        virtual ::ecore::EClass_ptr getContained();

        virtual ::ecore::EClass_ptr getInterfaceDef();

        virtual ::ecore::EClass_ptr getModuleDef();

        virtual ::ecore::EClass_ptr getIDLType();

        virtual ::ecore::EClass_ptr getOperationDef();

        virtual ::ecore::EClass_ptr getAttributeDef();

        virtual ::ecore::EClass_ptr getConstantDef();

        virtual ::ecore::EClass_ptr getTyped();

        virtual ::ecore::EClass_ptr getParameterDef();

        virtual ::ecore::EEnum_ptr getParameterMode();

        virtual ::ecore::EClass_ptr getPrimitiveDef();

        virtual ::ecore::EEnum_ptr getPrimitiveKind();

        virtual ::ecore::EClass_ptr getExceptionDef();

        virtual ::ecore::EDataType_ptr getEAny();

        virtual ::ecore::EDataType_ptr getETypeCode();

        virtual ::ecore::EClass_ptr getField();

        virtual ::ecore::EClass_ptr getFixedDef();

        virtual ::ecore::EClass_ptr getWstringDef();

        virtual ::ecore::EClass_ptr getStringDef();

        virtual ::ecore::EClass_ptr getAliasDef();

        virtual ::ecore::EClass_ptr getArrayDef();

        virtual ::ecore::EClass_ptr getSequenceDef();

        virtual ::ecore::EClass_ptr getUnionField();

        virtual ::ecore::EClass_ptr getTypedefDef();

        virtual ::ecore::EClass_ptr getUnionDef();

        virtual ::ecore::EClass_ptr getEnumDef();

        virtual ::ecore::EClass_ptr getStructDef();

        virtual ::ecore::EClass_ptr getTranslationUnit();

        virtual ::ecore::EClass_ptr getInclude();

        // EStructuralFeatures methods

        virtual ::ecore::EAttribute_ptr getContained__identifier();

        virtual ::ecore::EAttribute_ptr getContained__repositoryId();

        virtual ::ecore::EAttribute_ptr getContained__version();

        virtual ::ecore::EAttribute_ptr getContained__absoluteName();

        virtual ::ecore::EReference_ptr getContained__definedIn();

        virtual ::ecore::EReference_ptr getContainer__contains();

        virtual ::ecore::EAttribute_ptr getIDLType__typeCode();

        virtual ::ecore::EAttribute_ptr getInterfaceDef__isAbstract();

        virtual ::ecore::EAttribute_ptr getInterfaceDef__isCustom();

        virtual ::ecore::EAttribute_ptr getInterfaceDef__isTruncatable();

        virtual ::ecore::EReference_ptr getInterfaceDef__derivesFrom();

        virtual ::ecore::EAttribute_ptr getModuleDef__prefix();

        virtual ::ecore::EReference_ptr getTyped__containedType();

        virtual ::ecore::EReference_ptr getTyped__sharedType();

        virtual ::ecore::EReference_ptr getOperationDef__parameters();

        virtual ::ecore::EAttribute_ptr getOperationDef__isOneway();

        virtual ::ecore::EAttribute_ptr getOperationDef__contexts();

        virtual ::ecore::EReference_ptr getOperationDef__canRaise();

        virtual ::ecore::EReference_ptr getAttributeDef__getRaises();

        virtual ::ecore::EReference_ptr getAttributeDef__setRaises();

        virtual ::ecore::EAttribute_ptr getAttributeDef__isReadonly();

        virtual ::ecore::EAttribute_ptr getConstantDef__constValue();

        virtual ::ecore::EAttribute_ptr getParameterDef__identifier();

        virtual ::ecore::EAttribute_ptr getParameterDef__direction();

        virtual ::ecore::EAttribute_ptr getPrimitiveDef__kind();

        virtual ::ecore::EAttribute_ptr getExceptionDef__typeCode();

        virtual ::ecore::EReference_ptr getExceptionDef__members();

        virtual ::ecore::EAttribute_ptr getField__identifier();

        virtual ::ecore::EAttribute_ptr getFixedDef__digits();

        virtual ::ecore::EAttribute_ptr getFixedDef__scale();

        virtual ::ecore::EAttribute_ptr getWstringDef__bound();

        virtual ::ecore::EAttribute_ptr getStringDef__bound();

        virtual ::ecore::EAttribute_ptr getArrayDef__bound();

        virtual ::ecore::EAttribute_ptr getSequenceDef__bound();

        virtual ::ecore::EAttribute_ptr getUnionField__identifier();

        virtual ::ecore::EAttribute_ptr getUnionField__label();

        virtual ::ecore::EReference_ptr getUnionDef__unionMembers();

        virtual ::ecore::EReference_ptr getUnionDef__containedDiscrim();

        virtual ::ecore::EReference_ptr getUnionDef__sharedDiscrim();

        virtual ::ecore::EAttribute_ptr getEnumDef__members();

        virtual ::ecore::EReference_ptr getStructDef__members();

        virtual ::ecore::EReference_ptr getTranslationUnit__contains();

        virtual ::ecore::EAttribute_ptr getTranslationUnit__identifier();

        virtual ::ecore::EReference_ptr getTranslationUnit__includes();

        virtual ::ecore::EAttribute_ptr getInclude__importURI();

    protected:

        static std::auto_ptr< IdlmmPackage > s_instance;

        IdlmmPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_ContainerEClass;

        ::ecore::EClass_ptr m_ContainedEClass;

        ::ecore::EClass_ptr m_InterfaceDefEClass;

        ::ecore::EClass_ptr m_ModuleDefEClass;

        ::ecore::EClass_ptr m_IDLTypeEClass;

        ::ecore::EClass_ptr m_OperationDefEClass;

        ::ecore::EClass_ptr m_AttributeDefEClass;

        ::ecore::EClass_ptr m_ConstantDefEClass;

        ::ecore::EClass_ptr m_TypedEClass;

        ::ecore::EClass_ptr m_ParameterDefEClass;

        ::ecore::EClass_ptr m_PrimitiveDefEClass;

        ::ecore::EClass_ptr m_ExceptionDefEClass;

        ::ecore::EClass_ptr m_FieldEClass;

        ::ecore::EClass_ptr m_FixedDefEClass;

        ::ecore::EClass_ptr m_WstringDefEClass;

        ::ecore::EClass_ptr m_StringDefEClass;

        ::ecore::EClass_ptr m_AliasDefEClass;

        ::ecore::EClass_ptr m_ArrayDefEClass;

        ::ecore::EClass_ptr m_SequenceDefEClass;

        ::ecore::EClass_ptr m_UnionFieldEClass;

        ::ecore::EClass_ptr m_TypedefDefEClass;

        ::ecore::EClass_ptr m_UnionDefEClass;

        ::ecore::EClass_ptr m_EnumDefEClass;

        ::ecore::EClass_ptr m_StructDefEClass;

        ::ecore::EClass_ptr m_TranslationUnitEClass;

        ::ecore::EClass_ptr m_IncludeEClass;

        // EEnuminstances 

        ::ecore::EEnum_ptr m_ParameterModeEEnum;

        ::ecore::EEnum_ptr m_PrimitiveKindEEnum;

        // EDataType instances 

        ::ecore::EDataType_ptr m_EAnyEDataType;

        ::ecore::EDataType_ptr m_ETypeCodeEDataType;

        // EStructuralFeatures instances

        ::ecore::EAttribute_ptr m_Contained__identifier;

        ::ecore::EAttribute_ptr m_Contained__repositoryId;

        ::ecore::EAttribute_ptr m_Contained__version;

        ::ecore::EAttribute_ptr m_Contained__absoluteName;

        ::ecore::EReference_ptr m_Contained__definedIn;

        ::ecore::EReference_ptr m_Container__contains;

        ::ecore::EAttribute_ptr m_IDLType__typeCode;

        ::ecore::EAttribute_ptr m_InterfaceDef__isAbstract;

        ::ecore::EAttribute_ptr m_InterfaceDef__isCustom;

        ::ecore::EAttribute_ptr m_InterfaceDef__isTruncatable;

        ::ecore::EReference_ptr m_InterfaceDef__derivesFrom;

        ::ecore::EAttribute_ptr m_ModuleDef__prefix;

        ::ecore::EReference_ptr m_Typed__containedType;

        ::ecore::EReference_ptr m_Typed__sharedType;

        ::ecore::EReference_ptr m_OperationDef__parameters;

        ::ecore::EAttribute_ptr m_OperationDef__isOneway;

        ::ecore::EAttribute_ptr m_OperationDef__contexts;

        ::ecore::EReference_ptr m_OperationDef__canRaise;

        ::ecore::EReference_ptr m_AttributeDef__getRaises;

        ::ecore::EReference_ptr m_AttributeDef__setRaises;

        ::ecore::EAttribute_ptr m_AttributeDef__isReadonly;

        ::ecore::EAttribute_ptr m_ConstantDef__constValue;

        ::ecore::EAttribute_ptr m_ParameterDef__identifier;

        ::ecore::EAttribute_ptr m_ParameterDef__direction;

        ::ecore::EAttribute_ptr m_PrimitiveDef__kind;

        ::ecore::EAttribute_ptr m_ExceptionDef__typeCode;

        ::ecore::EReference_ptr m_ExceptionDef__members;

        ::ecore::EAttribute_ptr m_Field__identifier;

        ::ecore::EAttribute_ptr m_FixedDef__digits;

        ::ecore::EAttribute_ptr m_FixedDef__scale;

        ::ecore::EAttribute_ptr m_WstringDef__bound;

        ::ecore::EAttribute_ptr m_StringDef__bound;

        ::ecore::EAttribute_ptr m_ArrayDef__bound;

        ::ecore::EAttribute_ptr m_SequenceDef__bound;

        ::ecore::EAttribute_ptr m_UnionField__identifier;

        ::ecore::EAttribute_ptr m_UnionField__label;

        ::ecore::EReference_ptr m_UnionDef__unionMembers;

        ::ecore::EReference_ptr m_UnionDef__containedDiscrim;

        ::ecore::EReference_ptr m_UnionDef__sharedDiscrim;

        ::ecore::EAttribute_ptr m_EnumDef__members;

        ::ecore::EReference_ptr m_StructDef__members;

        ::ecore::EReference_ptr m_TranslationUnit__contains;

        ::ecore::EAttribute_ptr m_TranslationUnit__identifier;

        ::ecore::EReference_ptr m_TranslationUnit__includes;

        ::ecore::EAttribute_ptr m_Include__importURI;

    };

} // idlmm


#endif // _IDLMMPACKAGE_HPP
