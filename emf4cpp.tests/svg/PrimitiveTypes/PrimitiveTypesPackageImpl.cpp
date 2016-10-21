// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * PrimitiveTypes/PrimitiveTypesPackageImpl.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON Gmbh 2016 <soeren.henning@inchron.com>
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

#include <PrimitiveTypes/PrimitiveTypesPackage.hpp>
#include <PrimitiveTypes/PrimitiveTypesFactory.hpp>
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

using namespace ::PrimitiveTypes;

PrimitiveTypesPackage::PrimitiveTypesPackage()
{

    /* Now one can safely ask for a feature definition of
     * a class, though it is not yet usable. */
    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = PrimitiveTypesFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    // Create classes and their features

    // Create enums

    // Create data types

    m_BooleanEDataType = new ::ecore::EDataType();
    m_BooleanEDataType->setClassifierID(BOOLEAN);
    m_BooleanEDataType->setEPackage(this);
    getEClassifiers().push_back(m_BooleanEDataType);

    m_IntegerEDataType = new ::ecore::EDataType();
    m_IntegerEDataType->setClassifierID(INTEGER);
    m_IntegerEDataType->setEPackage(this);
    getEClassifiers().push_back(m_IntegerEDataType);

    m_StringEDataType = new ::ecore::EDataType();
    m_StringEDataType->setClassifierID(STRING);
    m_StringEDataType->setEPackage(this);
    getEClassifiers().push_back(m_StringEDataType);

    m_DoubleEDataType = new ::ecore::EDataType();
    m_DoubleEDataType->setClassifierID(DOUBLE);
    m_DoubleEDataType->setEPackage(this);
    getEClassifiers().push_back(m_DoubleEDataType);

    // Initialize package
    setName("PrimitiveTypes");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes

    // TODO: Initialize data types

    // Boolean
    m_BooleanEDataType->setName("Boolean");
    m_BooleanEDataType->setSerializable(true);

    // Integer
    m_IntegerEDataType->setName("Integer");
    m_IntegerEDataType->setSerializable(true);

    // String
    m_StringEDataType->setName("String");
    m_StringEDataType->setSerializable(true);

    // Double
    m_DoubleEDataType->setName("Double");
    m_DoubleEDataType->setSerializable(true);

    _initialize();
}

::ecore::EDataType_ptr PrimitiveTypesPackage::getBoolean()
{
    return m_BooleanEDataType;
}
::ecore::EDataType_ptr PrimitiveTypesPackage::getInteger()
{
    return m_IntegerEDataType;
}
::ecore::EDataType_ptr PrimitiveTypesPackage::getString()
{
    return m_StringEDataType;
}
::ecore::EDataType_ptr PrimitiveTypesPackage::getDouble()
{
    return m_DoubleEDataType;
}

