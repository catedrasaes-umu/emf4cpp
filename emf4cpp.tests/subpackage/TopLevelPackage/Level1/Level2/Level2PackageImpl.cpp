// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/Level1/Level2/Level2PackageImpl.cpp
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

#include <TopLevelPackage/Level1/Level2/Level2Package.hpp>
#include <TopLevelPackage/Level1/Level2/Level2Factory.hpp>
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

using namespace ::TopLevelPackage::Level1::Level2;

Level2Package::Level2Package()
{

    // Feature definitions of Level2Class

    /* Now one can safely ask for a feature definition of
     * a class, though it is not yet usable. */
    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = Level2Factory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    // Create classes and their features

    // Level2Class
    m_Level2ClassEClass = new ::ecore::EClass();
    m_Level2ClassEClass->setClassifierID(LEVEL2CLASS);
    m_Level2ClassEClass->setEPackage(this);
    getEClassifiers().push_back(m_Level2ClassEClass);

    // Create enums

    // Create data types

    getESubpackages().push_back(
            ::TopLevelPackage::Level1::Level2::Level3::Level3Package::_getInstanceAndRemoveOwnership());

    // Initialize package
    setName("Level2");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // Level2Class
    m_Level2ClassEClass->setName("Level2Class");
    m_Level2ClassEClass->setAbstract(false);
    m_Level2ClassEClass->setInterface(false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr Level2Package::getLevel2Class()
{
    return m_Level2ClassEClass;
}

