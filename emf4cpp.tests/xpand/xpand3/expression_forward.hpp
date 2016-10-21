// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression_forward.hpp
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

#ifndef _XPAND3_EXPRESSION_FORWARD_HPP
#define _XPAND3_EXPRESSION_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(xpand3_expression_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace xpand3
{
    namespace expression
    {

// EDataType

// EClass

// AbstractExpression
        class AbstractExpression;
        typedef AbstractExpression* AbstractExpression_ptr;

// BooleanOperation
        class BooleanOperation;
        typedef BooleanOperation* BooleanOperation_ptr;

// Cast
        class Cast;
        typedef Cast* Cast_ptr;

// ChainExpression
        class ChainExpression;
        typedef ChainExpression* ChainExpression_ptr;

// ConstructorCallExpression
        class ConstructorCallExpression;
        typedef ConstructorCallExpression* ConstructorCallExpression_ptr;

// FeatureCall
        class FeatureCall;
        typedef FeatureCall* FeatureCall_ptr;

// CollectionExpression
        class CollectionExpression;
        typedef CollectionExpression* CollectionExpression_ptr;

// OperationCall
        class OperationCall;
        typedef OperationCall* OperationCall_ptr;

// TypeSelectExpression
        class TypeSelectExpression;
        typedef TypeSelectExpression* TypeSelectExpression_ptr;

// GlobalVarExpression
        class GlobalVarExpression;
        typedef GlobalVarExpression* GlobalVarExpression_ptr;

// IfExpression
        class IfExpression;
        typedef IfExpression* IfExpression_ptr;

// LetExpression
        class LetExpression;
        typedef LetExpression* LetExpression_ptr;

// ListLiteral
        class ListLiteral;
        typedef ListLiteral* ListLiteral_ptr;

// Literal
        class Literal;
        typedef Literal* Literal_ptr;

// BooleanLiteral
        class BooleanLiteral;
        typedef BooleanLiteral* BooleanLiteral_ptr;

// IntegerLiteral
        class IntegerLiteral;
        typedef IntegerLiteral* IntegerLiteral_ptr;

// NullLiteral
        class NullLiteral;
        typedef NullLiteral* NullLiteral_ptr;

// RealLiteral
        class RealLiteral;
        typedef RealLiteral* RealLiteral_ptr;

// StringLiteral
        class StringLiteral;
        typedef StringLiteral* StringLiteral_ptr;

// SwitchExpression
        class SwitchExpression;
        typedef SwitchExpression* SwitchExpression_ptr;

// Case
        class Case;
        typedef Case* Case_ptr;

// BinaryOperation
        class BinaryOperation;
        typedef BinaryOperation* BinaryOperation_ptr;

// UnaryOperation
        class UnaryOperation;
        typedef UnaryOperation* UnaryOperation_ptr;

// EEnum

// Package & Factory
        class ExpressionFactory;
        typedef ExpressionFactory * ExpressionFactory_ptr;
        class ExpressionPackage;
        typedef ExpressionPackage * ExpressionPackage_ptr;

        template< typename T, typename S >
        inline T* instanceOf(S* _s)
        {
            return dynamic_cast< T* >(_s);
        }

    } // expression
} // xpand3

#endif // _XPAND3_EXPRESSION_FORWARD_HPP

