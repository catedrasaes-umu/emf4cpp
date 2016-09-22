// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * enduserlicense/EnduserlicensePackageImpl.cpp
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

#include <enduserlicense/EnduserlicensePackage.hpp>
#include <enduserlicense/EnduserlicenseFactory.hpp>
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

using namespace ::enduserlicense;

EnduserlicensePackage::EnduserlicensePackage()
{

    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = EnduserlicenseFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    // Create classes and their features

    // Create enums

    // Create data types

    // Initialize package
    setName("enduserlicense");
    setNsPrefix("enduserlicense");
    setNsURI("http:///com.example.enduserlicense.ecore");

    // TODO: bounds for type parameters

    // Add supertypes to classes

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes

    // TODO: Initialize data types

    _initialize();
}

