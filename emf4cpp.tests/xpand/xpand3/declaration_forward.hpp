// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration_forward.hpp
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

#ifndef _XPAND3_DECLARATION_FORWARD_HPP
#define _XPAND3_DECLARATION_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(xpand3_declaration_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace xpand3
{
    namespace declaration
    {

// EDataType

// EClass

// AbstractDeclaration
        class AbstractDeclaration;
        using AbstractDeclaration_ptr = ::ecore::Ptr<AbstractDeclaration>;

// AbstractNamedDeclaration
        class AbstractNamedDeclaration;
        using AbstractNamedDeclaration_ptr = ::ecore::Ptr<AbstractNamedDeclaration>;

// Definition
        class Definition;
        using Definition_ptr = ::ecore::Ptr<Definition>;

// Extension
        class Extension;
        using Extension_ptr = ::ecore::Ptr<Extension>;

// AbstractAspect
        class AbstractAspect;
        using AbstractAspect_ptr = ::ecore::Ptr<AbstractAspect>;

// ExtensionAspect
        class ExtensionAspect;
        using ExtensionAspect_ptr = ::ecore::Ptr<ExtensionAspect>;

// DefinitionAspect
        class DefinitionAspect;
        using DefinitionAspect_ptr = ::ecore::Ptr<DefinitionAspect>;

// Check
        class Check;
        using Check_ptr = ::ecore::Ptr<Check>;

// CreateExtension
        class CreateExtension;
        using CreateExtension_ptr = ::ecore::Ptr<CreateExtension>;

// JavaExtension
        class JavaExtension;
        using JavaExtension_ptr = ::ecore::Ptr<JavaExtension>;

// EEnum

// Package & Factory
        class DeclarationFactory;
        using DeclarationFactory_ptr = ::ecore::Ptr<DeclarationFactory>;
        class DeclarationPackage;
        using DeclarationPackage_ptr = ::ecore::Ptr<DeclarationPackage>;

    } // declaration
} // xpand3

#endif // _XPAND3_DECLARATION_FORWARD_HPP

