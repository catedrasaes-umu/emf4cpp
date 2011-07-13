// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * json/JsonFactoryImpl.cpp
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

#include <json/JsonFactory.hpp>
#include <json/JsonPackage.hpp>
#include <json/ObjectValue.hpp>
#include <json/NVPair.hpp>
#include <json/Value.hpp>
#include <json/StringValue.hpp>
#include <json/NumberValue.hpp>
#include <json/BooleanValue.hpp>
#include <json/ArrayValue.hpp>
#include <json/NullValue.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::json;

JsonFactory::JsonFactory()
{
    s_instance.reset(this);
}

::ecore::EObject_ptr JsonFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case JsonPackage::OBJECTVALUE:
        return createObjectValue();
    case JsonPackage::NVPAIR:
        return createNVPair();
    case JsonPackage::VALUE:
        return createValue();
    case JsonPackage::STRINGVALUE:
        return createStringValue();
    case JsonPackage::NUMBERVALUE:
        return createNumberValue();
    case JsonPackage::BOOLEANVALUE:
        return createBooleanValue();
    case JsonPackage::ARRAYVALUE:
        return createArrayValue();
    case JsonPackage::NULLVALUE:
        return createNullValue();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject JsonFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString JsonFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

ObjectValue_ptr JsonFactory::createObjectValue()
{
    return new ObjectValue();
}
NVPair_ptr JsonFactory::createNVPair()
{
    return new NVPair();
}
Value_ptr JsonFactory::createValue()
{
    return new Value();
}
StringValue_ptr JsonFactory::createStringValue()
{
    return new StringValue();
}
NumberValue_ptr JsonFactory::createNumberValue()
{
    return new NumberValue();
}
BooleanValue_ptr JsonFactory::createBooleanValue()
{
    return new BooleanValue();
}
ArrayValue_ptr JsonFactory::createArrayValue()
{
    return new ArrayValue();
}
NullValue_ptr JsonFactory::createNullValue()
{
    return new NullValue();
}

