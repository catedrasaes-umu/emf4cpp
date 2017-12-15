// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3_forward.hpp
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
    using SyntaxElement_ptr = boost::intrusive_ptr<SyntaxElement>;

// File
    class File;
    using File_ptr = boost::intrusive_ptr<File>;

// ImportStatement
    class ImportStatement;
    using ImportStatement_ptr = boost::intrusive_ptr<ImportStatement>;

// Identifier
    class Identifier;
    using Identifier_ptr = boost::intrusive_ptr<Identifier>;

// DeclaredParameter
    class DeclaredParameter;
    using DeclaredParameter_ptr = boost::intrusive_ptr<DeclaredParameter>;

// EEnum

// Package & Factory
    class Xpand3Factory;
    using Xpand3Factory_ptr = boost::intrusive_ptr<Xpand3Factory>;
    class Xpand3Package;
    using Xpand3Package_ptr = boost::intrusive_ptr<Xpand3Package>;

    template< typename T, typename S >
    inline boost::intrusive_ptr< T > instanceOf(const S& _s)
    {
        return boost::intrusive_ptr < T > (dynamic_cast< T* >(_s.get()));
    }

} // xpand3

#endif // _XPAND3_FORWARD_HPP

