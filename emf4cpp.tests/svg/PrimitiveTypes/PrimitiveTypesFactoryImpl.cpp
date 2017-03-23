// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * PrimitiveTypes/PrimitiveTypesFactoryImpl.cpp
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

#include <PrimitiveTypes/PrimitiveTypesFactory.hpp>
#include <PrimitiveTypes/PrimitiveTypesPackage.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::PrimitiveTypes;

PrimitiveTypesFactory::PrimitiveTypesFactory()
{
}

::ecore::EObject_ptr PrimitiveTypesFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject PrimitiveTypesFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    case PrimitiveTypesPackage::BOOLEAN:
        return ::ecorecpp::mapping::string_traits < ::PrimitiveTypes::Boolean
                > ::fromString(_literalValue);
    case PrimitiveTypesPackage::INTEGER:
        return ::ecorecpp::mapping::string_traits < ::PrimitiveTypes::Integer
                > ::fromString(_literalValue);
    case PrimitiveTypesPackage::STRING:
        return ::ecorecpp::mapping::string_traits < ::PrimitiveTypes::String
                > ::fromString(_literalValue);
    case PrimitiveTypesPackage::DOUBLE:
        return ::ecorecpp::mapping::string_traits < ::PrimitiveTypes::Double
                > ::fromString(_literalValue);
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString PrimitiveTypesFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    case PrimitiveTypesPackage::BOOLEAN:
        return ::ecorecpp::mapping::string_traits < ::PrimitiveTypes::Boolean
                > ::toString(_instanceValue);
    case PrimitiveTypesPackage::INTEGER:
        return ::ecorecpp::mapping::string_traits < ::PrimitiveTypes::Integer
                > ::toString(_instanceValue);
    case PrimitiveTypesPackage::STRING:
        return ::ecorecpp::mapping::string_traits < ::PrimitiveTypes::String
                > ::toString(_instanceValue);
    case PrimitiveTypesPackage::DOUBLE:
        return ::ecorecpp::mapping::string_traits < ::PrimitiveTypes::Double
                > ::toString(_instanceValue);
    default:
        throw "IllegalArgumentException";
    }
}

