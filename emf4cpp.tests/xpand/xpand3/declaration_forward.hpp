// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration_forward.hpp
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
        typedef AbstractDeclaration* AbstractDeclaration_ptr;

// AbstractNamedDeclaration
        class AbstractNamedDeclaration;
        typedef AbstractNamedDeclaration* AbstractNamedDeclaration_ptr;

// Definition
        class Definition;
        typedef Definition* Definition_ptr;

// Extension
        class Extension;
        typedef Extension* Extension_ptr;

// AbstractAspect
        class AbstractAspect;
        typedef AbstractAspect* AbstractAspect_ptr;

// ExtensionAspect
        class ExtensionAspect;
        typedef ExtensionAspect* ExtensionAspect_ptr;

// DefinitionAspect
        class DefinitionAspect;
        typedef DefinitionAspect* DefinitionAspect_ptr;

// Check
        class Check;
        typedef Check* Check_ptr;

// CreateExtension
        class CreateExtension;
        typedef CreateExtension* CreateExtension_ptr;

// JavaExtension
        class JavaExtension;
        typedef JavaExtension* JavaExtension_ptr;

// EEnum

// Package & Factory
        class DeclarationFactory;
        typedef DeclarationFactory * DeclarationFactory_ptr;
        class DeclarationPackage;
        typedef DeclarationPackage * DeclarationPackage_ptr;

        template< typename T, typename S >
        inline T* instanceOf(S* _s)
        {
            return dynamic_cast< T* >(_s);
        }

    } // declaration
} // xpand3

#endif // _XPAND3_DECLARATION_FORWARD_HPP

