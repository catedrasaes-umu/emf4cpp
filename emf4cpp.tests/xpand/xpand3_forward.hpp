// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3_forward.hpp
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

#ifndef _XPAND3_FORWARD_HPP
#define _XPAND3_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(xpand3_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage
#include <xpand3/expression_forward.hpp>
#include <xpand3/statement_forward.hpp>
#include <xpand3/declaration_forward.hpp>

#include <ecore_forward.hpp> // for EDataTypes

namespace xpand3
{

// EDataType

// EClass

// SyntaxElement
    class SyntaxElement;
    typedef SyntaxElement* SyntaxElement_ptr;

// File
    class File;
    typedef File* File_ptr;

// ImportStatement
    class ImportStatement;
    typedef ImportStatement* ImportStatement_ptr;

// Identifier
    class Identifier;
    typedef Identifier* Identifier_ptr;

// DeclaredParameter
    class DeclaredParameter;
    typedef DeclaredParameter* DeclaredParameter_ptr;

// Package & Factory
    class Xpand3Factory;
    typedef Xpand3Factory * Xpand3Factory_ptr;
    class Xpand3Package;
    typedef Xpand3Package * Xpand3Package_ptr;

    template< typename T, typename S >
    inline T* instanceOf(S* _s)
    {
        return dynamic_cast< T* >(_s);
    }

} // xpand3

#endif // _XPAND3_FORWARD_HPP

