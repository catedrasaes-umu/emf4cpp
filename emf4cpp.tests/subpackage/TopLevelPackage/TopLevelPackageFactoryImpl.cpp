// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/TopLevelPackageFactoryImpl.cpp
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

#include <TopLevelPackage/TopLevelPackageFactory.hpp>
#include <TopLevelPackage/TopLevelPackagePackage.hpp>
#include <TopLevelPackage/TopLevelClass.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::TopLevelPackage;

TopLevelPackageFactory::TopLevelPackageFactory()
{
}

::ecore::EObject_ptr TopLevelPackageFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case TopLevelPackagePackage::TOPLEVELCLASS:
        return createTopLevelClass();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject TopLevelPackageFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString TopLevelPackageFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

TopLevelClass_ptr TopLevelPackageFactory::createTopLevelClass()
{
    return new TopLevelClass();
}

