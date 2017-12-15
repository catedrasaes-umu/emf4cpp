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
        using AbstractDeclaration_ptr = boost::intrusive_ptr<AbstractDeclaration>;

// AbstractNamedDeclaration
        class AbstractNamedDeclaration;
        using AbstractNamedDeclaration_ptr = boost::intrusive_ptr<AbstractNamedDeclaration>;

// Definition
        class Definition;
        using Definition_ptr = boost::intrusive_ptr<Definition>;

// Extension
        class Extension;
        using Extension_ptr = boost::intrusive_ptr<Extension>;

// AbstractAspect
        class AbstractAspect;
        using AbstractAspect_ptr = boost::intrusive_ptr<AbstractAspect>;

// ExtensionAspect
        class ExtensionAspect;
        using ExtensionAspect_ptr = boost::intrusive_ptr<ExtensionAspect>;

// DefinitionAspect
        class DefinitionAspect;
        using DefinitionAspect_ptr = boost::intrusive_ptr<DefinitionAspect>;

// Check
        class Check;
        using Check_ptr = boost::intrusive_ptr<Check>;

// CreateExtension
        class CreateExtension;
        using CreateExtension_ptr = boost::intrusive_ptr<CreateExtension>;

// JavaExtension
        class JavaExtension;
        using JavaExtension_ptr = boost::intrusive_ptr<JavaExtension>;

// EEnum

// Package & Factory
        class DeclarationFactory;
        using DeclarationFactory_ptr = boost::intrusive_ptr<DeclarationFactory>;
        class DeclarationPackage;
        using DeclarationPackage_ptr = boost::intrusive_ptr<DeclarationPackage>;

        template< typename T, typename S >
        inline boost::intrusive_ptr< T > instanceOf(const S& _s)
        {
            return boost::intrusive_ptr < T > (dynamic_cast< T* >(_s.get()));
        }

    } // declaration
} // xpand3

#endif // _XPAND3_DECLARATION_FORWARD_HPP

