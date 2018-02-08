// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ResourceOptions/ResourceOptionsFactoryImpl.cpp
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

#include <ResourceOptions/ResourceOptionsFactory.hpp>
#include <ResourceOptions/ResourceOptionsPackage.hpp>
#include <ResourceOptions/ETypes.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::ResourceOptions;

ResourceOptionsFactory::ResourceOptionsFactory()
{
}

::ecore::EObject_ptr ResourceOptionsFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case ResourceOptionsPackage::ETYPES:
        return createETypes();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject ResourceOptionsFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString ResourceOptionsFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

ETypes_ptr ResourceOptionsFactory::createETypes()
{
    return boost::intrusive_ptr < ETypes > (new ETypes);
}

