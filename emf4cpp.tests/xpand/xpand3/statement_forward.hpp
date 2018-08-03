// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement_forward.hpp
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
        using AbstractStatement_ptr = ::ecore::Ptr<AbstractStatement>;

// ExpandStatement
        class ExpandStatement;
        using ExpandStatement_ptr = ::ecore::Ptr<ExpandStatement>;

// ExpressionStatement
        class ExpressionStatement;
        using ExpressionStatement_ptr = ::ecore::Ptr<ExpressionStatement>;

// ErrorStatement
        class ErrorStatement;
        using ErrorStatement_ptr = ::ecore::Ptr<ErrorStatement>;

// AbstractStatementWithBody
        class AbstractStatementWithBody;
        using AbstractStatementWithBody_ptr = ::ecore::Ptr<AbstractStatementWithBody>;

// FileStatement
        class FileStatement;
        using FileStatement_ptr = ::ecore::Ptr<FileStatement>;

// ForEachStatement
        class ForEachStatement;
        using ForEachStatement_ptr = ::ecore::Ptr<ForEachStatement>;

// IfStatement
        class IfStatement;
        using IfStatement_ptr = ::ecore::Ptr<IfStatement>;

// LetStatement
        class LetStatement;
        using LetStatement_ptr = ::ecore::Ptr<LetStatement>;

// ProtectStatement
        class ProtectStatement;
        using ProtectStatement_ptr = ::ecore::Ptr<ProtectStatement>;

// TextStatement
        class TextStatement;
        using TextStatement_ptr = ::ecore::Ptr<TextStatement>;

// EEnum

// Package & Factory
        class StatementFactory;
        using StatementFactory_ptr = ::ecore::Ptr<StatementFactory>;
        class StatementPackage;
        using StatementPackage_ptr = ::ecore::Ptr<StatementPackage>;

    } // statement
} // xpand3

#endif // _XPAND3_STATEMENT_FORWARD_HPP

