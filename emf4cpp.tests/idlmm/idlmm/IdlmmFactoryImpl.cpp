// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/IdlmmFactoryImpl.cpp
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

#include <idlmm/IdlmmFactory.hpp>
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Container.hpp>
#include <idlmm/Contained.hpp>
#include <idlmm/InterfaceDef.hpp>
#include <idlmm/ModuleDef.hpp>
#include <idlmm/IDLType.hpp>
#include <idlmm/OperationDef.hpp>
#include <idlmm/AttributeDef.hpp>
#include <idlmm/ConstantDef.hpp>
#include <idlmm/Typed.hpp>
#include <idlmm/ParameterDef.hpp>
#include <idlmm/PrimitiveDef.hpp>
#include <idlmm/ExceptionDef.hpp>
#include <idlmm/Field.hpp>
#include <idlmm/FixedDef.hpp>
#include <idlmm/WstringDef.hpp>
#include <idlmm/StringDef.hpp>
#include <idlmm/AliasDef.hpp>
#include <idlmm/ArrayDef.hpp>
#include <idlmm/SequenceDef.hpp>
#include <idlmm/UnionField.hpp>
#include <idlmm/TypedefDef.hpp>
#include <idlmm/UnionDef.hpp>
#include <idlmm/EnumDef.hpp>
#include <idlmm/StructDef.hpp>
#include <idlmm/TranslationUnit.hpp>
#include <idlmm/Include.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::idlmm;

IdlmmFactory::IdlmmFactory()
{
}

::ecore::EObject_ptr IdlmmFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case IdlmmPackage::CONTAINER:
        return createContainer();
    case IdlmmPackage::CONTAINED:
        return createContained();
    case IdlmmPackage::INTERFACEDEF:
        return createInterfaceDef();
    case IdlmmPackage::MODULEDEF:
        return createModuleDef();
    case IdlmmPackage::IDLTYPE:
        return createIDLType();
    case IdlmmPackage::OPERATIONDEF:
        return createOperationDef();
    case IdlmmPackage::ATTRIBUTEDEF:
        return createAttributeDef();
    case IdlmmPackage::CONSTANTDEF:
        return createConstantDef();
    case IdlmmPackage::TYPED:
        return createTyped();
    case IdlmmPackage::PARAMETERDEF:
        return createParameterDef();
    case IdlmmPackage::PRIMITIVEDEF:
        return createPrimitiveDef();
    case IdlmmPackage::EXCEPTIONDEF:
        return createExceptionDef();
    case IdlmmPackage::FIELD:
        return createField();
    case IdlmmPackage::FIXEDDEF:
        return createFixedDef();
    case IdlmmPackage::WSTRINGDEF:
        return createWstringDef();
    case IdlmmPackage::STRINGDEF:
        return createStringDef();
    case IdlmmPackage::ALIASDEF:
        return createAliasDef();
    case IdlmmPackage::ARRAYDEF:
        return createArrayDef();
    case IdlmmPackage::SEQUENCEDEF:
        return createSequenceDef();
    case IdlmmPackage::UNIONFIELD:
        return createUnionField();
    case IdlmmPackage::TYPEDEFDEF:
        return createTypedefDef();
    case IdlmmPackage::UNIONDEF:
        return createUnionDef();
    case IdlmmPackage::ENUMDEF:
        return createEnumDef();
    case IdlmmPackage::STRUCTDEF:
        return createStructDef();
    case IdlmmPackage::TRANSLATIONUNIT:
        return createTranslationUnit();
    case IdlmmPackage::INCLUDE:
        return createInclude();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject IdlmmFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    case IdlmmPackage::PARAMETERMODE:
    {
        ::ecore::EJavaObject _any;
        IdlmmPackage_ptr _epkg =
                dynamic_cast< ::idlmm::IdlmmPackage* >(getEPackage().get());
        return _epkg->getParameterMode()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case IdlmmPackage::PRIMITIVEKIND:
    {
        ::ecore::EJavaObject _any;
        IdlmmPackage_ptr _epkg =
                dynamic_cast< ::idlmm::IdlmmPackage* >(getEPackage().get());
        return _epkg->getPrimitiveKind()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case IdlmmPackage::EANY:
        return ::ecorecpp::mapping::string_traits < ::idlmm::EAny
                > ::fromString(_literalValue);
    case IdlmmPackage::ETYPECODE:
        return ::ecorecpp::mapping::string_traits < ::idlmm::ETypeCode
                > ::fromString(_literalValue);
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString IdlmmFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    case IdlmmPackage::PARAMETERMODE:
    {
        IdlmmPackage_ptr _epkg = ::idlmm::instanceOf < ::idlmm::IdlmmPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getParameterMode()->getEEnumLiteral(_value)->getName();
    }
    case IdlmmPackage::PRIMITIVEKIND:
    {
        IdlmmPackage_ptr _epkg = ::idlmm::instanceOf < ::idlmm::IdlmmPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getPrimitiveKind()->getEEnumLiteral(_value)->getName();
    }
    case IdlmmPackage::EANY:
        return ::ecorecpp::mapping::string_traits < ::idlmm::EAny
                > ::toString(_instanceValue);
    case IdlmmPackage::ETYPECODE:
        return ::ecorecpp::mapping::string_traits < ::idlmm::ETypeCode
                > ::toString(_instanceValue);
    default:
        throw "IllegalArgumentException";
    }
}

Container_ptr IdlmmFactory::createContainer()
{
    return boost::intrusive_ptr < Container > (new Container);
}
Contained_ptr IdlmmFactory::createContained()
{
    return boost::intrusive_ptr < Contained > (new Contained);
}
InterfaceDef_ptr IdlmmFactory::createInterfaceDef()
{
    return boost::intrusive_ptr < InterfaceDef > (new InterfaceDef);
}
ModuleDef_ptr IdlmmFactory::createModuleDef()
{
    return boost::intrusive_ptr < ModuleDef > (new ModuleDef);
}
IDLType_ptr IdlmmFactory::createIDLType()
{
    return boost::intrusive_ptr < IDLType > (new IDLType);
}
OperationDef_ptr IdlmmFactory::createOperationDef()
{
    return boost::intrusive_ptr < OperationDef > (new OperationDef);
}
AttributeDef_ptr IdlmmFactory::createAttributeDef()
{
    return boost::intrusive_ptr < AttributeDef > (new AttributeDef);
}
ConstantDef_ptr IdlmmFactory::createConstantDef()
{
    return boost::intrusive_ptr < ConstantDef > (new ConstantDef);
}
Typed_ptr IdlmmFactory::createTyped()
{
    return boost::intrusive_ptr < Typed > (new Typed);
}
ParameterDef_ptr IdlmmFactory::createParameterDef()
{
    return boost::intrusive_ptr < ParameterDef > (new ParameterDef);
}
PrimitiveDef_ptr IdlmmFactory::createPrimitiveDef()
{
    return boost::intrusive_ptr < PrimitiveDef > (new PrimitiveDef);
}
ExceptionDef_ptr IdlmmFactory::createExceptionDef()
{
    return boost::intrusive_ptr < ExceptionDef > (new ExceptionDef);
}
Field_ptr IdlmmFactory::createField()
{
    return boost::intrusive_ptr < Field > (new Field);
}
FixedDef_ptr IdlmmFactory::createFixedDef()
{
    return boost::intrusive_ptr < FixedDef > (new FixedDef);
}
WstringDef_ptr IdlmmFactory::createWstringDef()
{
    return boost::intrusive_ptr < WstringDef > (new WstringDef);
}
StringDef_ptr IdlmmFactory::createStringDef()
{
    return boost::intrusive_ptr < StringDef > (new StringDef);
}
AliasDef_ptr IdlmmFactory::createAliasDef()
{
    return boost::intrusive_ptr < AliasDef > (new AliasDef);
}
ArrayDef_ptr IdlmmFactory::createArrayDef()
{
    return boost::intrusive_ptr < ArrayDef > (new ArrayDef);
}
SequenceDef_ptr IdlmmFactory::createSequenceDef()
{
    return boost::intrusive_ptr < SequenceDef > (new SequenceDef);
}
UnionField_ptr IdlmmFactory::createUnionField()
{
    return boost::intrusive_ptr < UnionField > (new UnionField);
}
TypedefDef_ptr IdlmmFactory::createTypedefDef()
{
    return boost::intrusive_ptr < TypedefDef > (new TypedefDef);
}
UnionDef_ptr IdlmmFactory::createUnionDef()
{
    return boost::intrusive_ptr < UnionDef > (new UnionDef);
}
EnumDef_ptr IdlmmFactory::createEnumDef()
{
    return boost::intrusive_ptr < EnumDef > (new EnumDef);
}
StructDef_ptr IdlmmFactory::createStructDef()
{
    return boost::intrusive_ptr < StructDef > (new StructDef);
}
TranslationUnit_ptr IdlmmFactory::createTranslationUnit()
{
    return boost::intrusive_ptr < TranslationUnit > (new TranslationUnit);
}
Include_ptr IdlmmFactory::createInclude()
{
    return boost::intrusive_ptr < Include > (new Include);
}

