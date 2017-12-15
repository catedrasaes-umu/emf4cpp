// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/Level1/Level2/Level3/Level3PackageImpl.cpp
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

#include <TopLevelPackage/Level1/Level2/Level3/Level3Package.hpp>
#include <TopLevelPackage/Level1/Level2/Level3/Level3Factory.hpp>
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

using namespace ::TopLevelPackage::Level1::Level2::Level3;

Level3Package::Level3Package()
{

    // Feature definitions of Level3Class

}

void Level3Package::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = Level3Factory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    // Create classes and their features

    // Level3Class
    m_Level3ClassEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_Level3ClassEClass->setClassifierID(LEVEL3CLASS);
    m_Level3ClassEClass->setEPackage(_this());
    getEClassifiers().push_back(m_Level3ClassEClass);

    // Create enums

    // Create data types

    // Initialize package
    setName("Level3");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // Level3Class
    m_Level3ClassEClass->setName("Level3Class");
    m_Level3ClassEClass->setAbstract(false);
    m_Level3ClassEClass->setInterface(false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr Level3Package::getLevel3Class()
{
    return m_Level3ClassEClass;
}

