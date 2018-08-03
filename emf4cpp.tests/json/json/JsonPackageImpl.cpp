// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * json/JsonPackageImpl.cpp
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

#include <json/JsonPackage.hpp>
#include <json/JsonFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EcorePackage.hpp>

using namespace ::json;

JsonPackage::JsonPackage()
{

    // Feature definitions of ObjectValue
    m_ObjectValue__members = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of NVPair
    m_NVPair__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_NVPair__value = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Value

    // Feature definitions of StringValue
    m_StringValue__value = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of NumberValue
    m_NumberValue__value = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of BooleanValue
    m_BooleanValue__value = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of ArrayValue
    m_ArrayValue__values = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of NullValue

}

void JsonPackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = JsonFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    // Create classes and their features

    // ObjectValue
    m_ObjectValueEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ObjectValueEClass->setClassifierID(OBJECTVALUE);
    m_ObjectValueEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ObjectValueEClass);
    // m_ObjectValue__members has already been allocated above
    m_ObjectValue__members->setFeatureID(
            ::json::JsonPackage::OBJECTVALUE__MEMBERS);
    m_ObjectValueEClass->getEStructuralFeatures().push_back(
            m_ObjectValue__members);

    // NVPair
    m_NVPairEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_NVPairEClass->setClassifierID(NVPAIR);
    m_NVPairEClass->setEPackage(_this());
    getEClassifiers().push_back(m_NVPairEClass);
    // m_NVPair__name has already been allocated above
    m_NVPair__name->setFeatureID(::json::JsonPackage::NVPAIR__NAME);
    m_NVPairEClass->getEStructuralFeatures().push_back(m_NVPair__name);
    // m_NVPair__value has already been allocated above
    m_NVPair__value->setFeatureID(::json::JsonPackage::NVPAIR__VALUE);
    m_NVPairEClass->getEStructuralFeatures().push_back(m_NVPair__value);

    // Value
    m_ValueEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_ValueEClass->setClassifierID(VALUE);
    m_ValueEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ValueEClass);

    // StringValue
    m_StringValueEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_StringValueEClass->setClassifierID(STRINGVALUE);
    m_StringValueEClass->setEPackage(_this());
    getEClassifiers().push_back(m_StringValueEClass);
    // m_StringValue__value has already been allocated above
    m_StringValue__value->setFeatureID(::json::JsonPackage::STRINGVALUE__VALUE);
    m_StringValueEClass->getEStructuralFeatures().push_back(
            m_StringValue__value);

    // NumberValue
    m_NumberValueEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_NumberValueEClass->setClassifierID(NUMBERVALUE);
    m_NumberValueEClass->setEPackage(_this());
    getEClassifiers().push_back(m_NumberValueEClass);
    // m_NumberValue__value has already been allocated above
    m_NumberValue__value->setFeatureID(::json::JsonPackage::NUMBERVALUE__VALUE);
    m_NumberValueEClass->getEStructuralFeatures().push_back(
            m_NumberValue__value);

    // BooleanValue
    m_BooleanValueEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_BooleanValueEClass->setClassifierID(BOOLEANVALUE);
    m_BooleanValueEClass->setEPackage(_this());
    getEClassifiers().push_back(m_BooleanValueEClass);
    // m_BooleanValue__value has already been allocated above
    m_BooleanValue__value->setFeatureID(
            ::json::JsonPackage::BOOLEANVALUE__VALUE);
    m_BooleanValueEClass->getEStructuralFeatures().push_back(
            m_BooleanValue__value);

    // ArrayValue
    m_ArrayValueEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_ArrayValueEClass->setClassifierID(ARRAYVALUE);
    m_ArrayValueEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ArrayValueEClass);
    // m_ArrayValue__values has already been allocated above
    m_ArrayValue__values->setFeatureID(::json::JsonPackage::ARRAYVALUE__VALUES);
    m_ArrayValueEClass->getEStructuralFeatures().push_back(
            m_ArrayValue__values);

    // NullValue
    m_NullValueEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_NullValueEClass->setClassifierID(NULLVALUE);
    m_NullValueEClass->setEPackage(_this());
    getEClassifiers().push_back(m_NullValueEClass);

    // Create enums

    // Create data types

    // Initialize package
    setName("json");
    setNsPrefix("json");
    setNsURI("http://json/1.0");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_ObjectValueEClass->getESuperTypes().push_back(m_ValueEClass);
    m_StringValueEClass->getESuperTypes().push_back(m_ValueEClass);
    m_NumberValueEClass->getESuperTypes().push_back(m_ValueEClass);
    m_BooleanValueEClass->getESuperTypes().push_back(m_ValueEClass);
    m_ArrayValueEClass->getESuperTypes().push_back(m_ValueEClass);
    m_NullValueEClass->getESuperTypes().push_back(m_ValueEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // ObjectValue
    m_ObjectValueEClass->setName("ObjectValue");
    m_ObjectValueEClass->setAbstract(false);
    m_ObjectValueEClass->setInterface(false);
    m_ObjectValue__members->setEType(m_NVPairEClass);
    m_ObjectValue__members->setName("members");
    m_ObjectValue__members->setDefaultValueLiteral("");
    m_ObjectValue__members->setLowerBound(1);
    m_ObjectValue__members->setUpperBound(-1);
    m_ObjectValue__members->setTransient(false);
    m_ObjectValue__members->setVolatile(false);
    m_ObjectValue__members->setChangeable(true);
    m_ObjectValue__members->setContainment(true);
    m_ObjectValue__members->setResolveProxies(true);
    m_ObjectValue__members->setUnique(true);
    m_ObjectValue__members->setDerived(false);
    m_ObjectValue__members->setOrdered(true);
    // NVPair
    m_NVPairEClass->setName("NVPair");
    m_NVPairEClass->setAbstract(false);
    m_NVPairEClass->setInterface(false);
    m_NVPair__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_NVPair__name->setName("name");
    m_NVPair__name->setDefaultValueLiteral("");
    m_NVPair__name->setLowerBound(0);
    m_NVPair__name->setUpperBound(1);
    m_NVPair__name->setTransient(false);
    m_NVPair__name->setVolatile(false);
    m_NVPair__name->setChangeable(true);
    m_NVPair__name->setUnsettable(false);
    m_NVPair__name->setID(false);
    m_NVPair__name->setUnique(true);
    m_NVPair__name->setDerived(false);
    m_NVPair__name->setOrdered(true);
    m_NVPair__value->setEType(m_ValueEClass);
    m_NVPair__value->setName("value");
    m_NVPair__value->setDefaultValueLiteral("");
    m_NVPair__value->setLowerBound(1);
    m_NVPair__value->setUpperBound(1);
    m_NVPair__value->setTransient(false);
    m_NVPair__value->setVolatile(false);
    m_NVPair__value->setChangeable(true);
    m_NVPair__value->setContainment(true);
    m_NVPair__value->setResolveProxies(true);
    m_NVPair__value->setUnique(true);
    m_NVPair__value->setDerived(false);
    m_NVPair__value->setOrdered(true);
    // Value
    m_ValueEClass->setName("Value");
    m_ValueEClass->setAbstract(true);
    m_ValueEClass->setInterface(false);
    // StringValue
    m_StringValueEClass->setName("StringValue");
    m_StringValueEClass->setAbstract(false);
    m_StringValueEClass->setInterface(false);
    m_StringValue__value->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_StringValue__value->setName("value");
    m_StringValue__value->setDefaultValueLiteral("");
    m_StringValue__value->setLowerBound(0);
    m_StringValue__value->setUpperBound(1);
    m_StringValue__value->setTransient(false);
    m_StringValue__value->setVolatile(false);
    m_StringValue__value->setChangeable(true);
    m_StringValue__value->setUnsettable(false);
    m_StringValue__value->setID(false);
    m_StringValue__value->setUnique(true);
    m_StringValue__value->setDerived(false);
    m_StringValue__value->setOrdered(true);
    // NumberValue
    m_NumberValueEClass->setName("NumberValue");
    m_NumberValueEClass->setAbstract(false);
    m_NumberValueEClass->setInterface(false);
    m_NumberValue__value->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEDouble());
    m_NumberValue__value->setName("value");
    m_NumberValue__value->setDefaultValueLiteral("");
    m_NumberValue__value->setLowerBound(0);
    m_NumberValue__value->setUpperBound(1);
    m_NumberValue__value->setTransient(false);
    m_NumberValue__value->setVolatile(false);
    m_NumberValue__value->setChangeable(true);
    m_NumberValue__value->setUnsettable(false);
    m_NumberValue__value->setID(false);
    m_NumberValue__value->setUnique(true);
    m_NumberValue__value->setDerived(false);
    m_NumberValue__value->setOrdered(true);
    // BooleanValue
    m_BooleanValueEClass->setName("BooleanValue");
    m_BooleanValueEClass->setAbstract(false);
    m_BooleanValueEClass->setInterface(false);
    m_BooleanValue__value->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBoolean());
    m_BooleanValue__value->setName("value");
    m_BooleanValue__value->setDefaultValueLiteral("");
    m_BooleanValue__value->setLowerBound(0);
    m_BooleanValue__value->setUpperBound(1);
    m_BooleanValue__value->setTransient(false);
    m_BooleanValue__value->setVolatile(false);
    m_BooleanValue__value->setChangeable(true);
    m_BooleanValue__value->setUnsettable(false);
    m_BooleanValue__value->setID(false);
    m_BooleanValue__value->setUnique(true);
    m_BooleanValue__value->setDerived(false);
    m_BooleanValue__value->setOrdered(true);
    // ArrayValue
    m_ArrayValueEClass->setName("ArrayValue");
    m_ArrayValueEClass->setAbstract(false);
    m_ArrayValueEClass->setInterface(false);
    m_ArrayValue__values->setEType(m_ValueEClass);
    m_ArrayValue__values->setName("values");
    m_ArrayValue__values->setDefaultValueLiteral("");
    m_ArrayValue__values->setLowerBound(0);
    m_ArrayValue__values->setUpperBound(-1);
    m_ArrayValue__values->setTransient(false);
    m_ArrayValue__values->setVolatile(false);
    m_ArrayValue__values->setChangeable(true);
    m_ArrayValue__values->setContainment(true);
    m_ArrayValue__values->setResolveProxies(true);
    m_ArrayValue__values->setUnique(true);
    m_ArrayValue__values->setDerived(false);
    m_ArrayValue__values->setOrdered(true);
    // NullValue
    m_NullValueEClass->setName("NullValue");
    m_NullValueEClass->setAbstract(false);
    m_NullValueEClass->setInterface(false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr JsonPackage::getObjectValue()
{
    return m_ObjectValueEClass;
}
::ecore::EClass_ptr JsonPackage::getNVPair()
{
    return m_NVPairEClass;
}
::ecore::EClass_ptr JsonPackage::getValue()
{
    return m_ValueEClass;
}
::ecore::EClass_ptr JsonPackage::getStringValue()
{
    return m_StringValueEClass;
}
::ecore::EClass_ptr JsonPackage::getNumberValue()
{
    return m_NumberValueEClass;
}
::ecore::EClass_ptr JsonPackage::getBooleanValue()
{
    return m_BooleanValueEClass;
}
::ecore::EClass_ptr JsonPackage::getArrayValue()
{
    return m_ArrayValueEClass;
}
::ecore::EClass_ptr JsonPackage::getNullValue()
{
    return m_NullValueEClass;
}

::ecore::EReference_ptr JsonPackage::getObjectValue__members()
{
    return m_ObjectValue__members;
}
::ecore::EAttribute_ptr JsonPackage::getNVPair__name()
{
    return m_NVPair__name;
}
::ecore::EReference_ptr JsonPackage::getNVPair__value()
{
    return m_NVPair__value;
}
::ecore::EAttribute_ptr JsonPackage::getStringValue__value()
{
    return m_StringValue__value;
}
::ecore::EAttribute_ptr JsonPackage::getNumberValue__value()
{
    return m_NumberValue__value;
}
::ecore::EAttribute_ptr JsonPackage::getBooleanValue__value()
{
    return m_BooleanValue__value;
}
::ecore::EReference_ptr JsonPackage::getArrayValue__values()
{
    return m_ArrayValue__values;
}

