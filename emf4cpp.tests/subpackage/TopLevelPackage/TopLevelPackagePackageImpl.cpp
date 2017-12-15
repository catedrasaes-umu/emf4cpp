// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/TopLevelPackagePackageImpl.cpp
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

#include <TopLevelPackage/TopLevelPackagePackage.hpp>
#include <TopLevelPackage/TopLevelPackageFactory.hpp>
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

using namespace ::TopLevelPackage;

TopLevelPackagePackage::TopLevelPackagePackage()
{

    // Feature definitions of TopLevelClass

}

void TopLevelPackagePackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = TopLevelPackageFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    // Create classes and their features

    // TopLevelClass
    m_TopLevelClassEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_TopLevelClassEClass->setClassifierID(TOPLEVELCLASS);
    m_TopLevelClassEClass->setEPackage(_this());
    getEClassifiers().push_back(m_TopLevelClassEClass);

    // Create enums

    // Create data types

    getESubpackages().push_back(
            ::TopLevelPackage::Level1::Level1Package::_getInstanceAndRemoveOwnership());

    // Initialize package
    setName("TopLevelPackage");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // TopLevelClass
    m_TopLevelClassEClass->setName("TopLevelClass");
    m_TopLevelClassEClass->setAbstract(false);
    m_TopLevelClassEClass->setInterface(false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr TopLevelPackagePackage::getTopLevelClass()
{
    return m_TopLevelClassEClass;
}

