// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement_forward.hpp
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

#ifndef _XPAND3_STATEMENT_FORWARD_HPP
#define _XPAND3_STATEMENT_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(xpand3_statement_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace xpand3
{
    namespace statement
    {

// EDataType

// EClass

// AbstractStatement
        class AbstractStatement;
        typedef AbstractStatement* AbstractStatement_ptr;

// ExpandStatement
        class ExpandStatement;
        typedef ExpandStatement* ExpandStatement_ptr;

// ExpressionStatement
        class ExpressionStatement;
        typedef ExpressionStatement* ExpressionStatement_ptr;

// ErrorStatement
        class ErrorStatement;
        typedef ErrorStatement* ErrorStatement_ptr;

// AbstractStatementWithBody
        class AbstractStatementWithBody;
        typedef AbstractStatementWithBody* AbstractStatementWithBody_ptr;

// FileStatement
        class FileStatement;
        typedef FileStatement* FileStatement_ptr;

// ForEachStatement
        class ForEachStatement;
        typedef ForEachStatement* ForEachStatement_ptr;

// IfStatement
        class IfStatement;
        typedef IfStatement* IfStatement_ptr;

// LetStatement
        class LetStatement;
        typedef LetStatement* LetStatement_ptr;

// ProtectStatement
        class ProtectStatement;
        typedef ProtectStatement* ProtectStatement_ptr;

// TextStatement
        class TextStatement;
        typedef TextStatement* TextStatement_ptr;

// EEnum

// Package & Factory
        class StatementFactory;
        typedef StatementFactory * StatementFactory_ptr;
        class StatementPackage;
        typedef StatementPackage * StatementPackage_ptr;

        template< typename T, typename S >
        inline T* instanceOf(S* _s)
        {
            return dynamic_cast< T* >(_s);
        }

    } // statement
} // xpand3

#endif // _XPAND3_STATEMENT_FORWARD_HPP

