// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * myDsl/MyDslFactoryImpl.cpp
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

#include <myDsl/MyDslFactory.hpp>
#include <myDsl/MyDslPackage.hpp>
#include <myDsl/Model.hpp>
#include <myDsl/Import.hpp>
#include <myDsl/Type.hpp>
#include <myDsl/SimpleType.hpp>
#include <myDsl/Entity.hpp>
#include <myDsl/Property.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::myDsl;

MyDslFactory::MyDslFactory()
{
}

::ecore::EObject_ptr MyDslFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case MyDslPackage::MODEL:
        return createModel();
    case MyDslPackage::IMPORT:
        return createImport();
    case MyDslPackage::TYPE:
        return createType();
    case MyDslPackage::SIMPLETYPE:
        return createSimpleType();
    case MyDslPackage::ENTITY:
        return createEntity();
    case MyDslPackage::PROPERTY:
        return createProperty();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject MyDslFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString MyDslFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

Model_ptr MyDslFactory::createModel()
{
    return ::ecore::Ptr < Model > (new Model);
}
Import_ptr MyDslFactory::createImport()
{
    return ::ecore::Ptr < Import > (new Import);
}
Type_ptr MyDslFactory::createType()
{
    return ::ecore::Ptr < Type > (new Type);
}
SimpleType_ptr MyDslFactory::createSimpleType()
{
    return ::ecore::Ptr < SimpleType > (new SimpleType);
}
Entity_ptr MyDslFactory::createEntity()
{
    return ::ecore::Ptr < Entity > (new Entity);
}
Property_ptr MyDslFactory::createProperty()
{
    return ::ecore::Ptr < Property > (new Property);
}

