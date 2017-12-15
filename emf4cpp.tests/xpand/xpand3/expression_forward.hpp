// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression_forward.hpp
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
        using AbstractExpression_ptr = boost::intrusive_ptr<AbstractExpression>;

// BooleanOperation
        class BooleanOperation;
        using BooleanOperation_ptr = boost::intrusive_ptr<BooleanOperation>;

// Cast
        class Cast;
        using Cast_ptr = boost::intrusive_ptr<Cast>;

// ChainExpression
        class ChainExpression;
        using ChainExpression_ptr = boost::intrusive_ptr<ChainExpression>;

// ConstructorCallExpression
        class ConstructorCallExpression;
        using ConstructorCallExpression_ptr = boost::intrusive_ptr<ConstructorCallExpression>;

// FeatureCall
        class FeatureCall;
        using FeatureCall_ptr = boost::intrusive_ptr<FeatureCall>;

// CollectionExpression
        class CollectionExpression;
        using CollectionExpression_ptr = boost::intrusive_ptr<CollectionExpression>;

// OperationCall
        class OperationCall;
        using OperationCall_ptr = boost::intrusive_ptr<OperationCall>;

// TypeSelectExpression
        class TypeSelectExpression;
        using TypeSelectExpression_ptr = boost::intrusive_ptr<TypeSelectExpression>;

// GlobalVarExpression
        class GlobalVarExpression;
        using GlobalVarExpression_ptr = boost::intrusive_ptr<GlobalVarExpression>;

// IfExpression
        class IfExpression;
        using IfExpression_ptr = boost::intrusive_ptr<IfExpression>;

// LetExpression
        class LetExpression;
        using LetExpression_ptr = boost::intrusive_ptr<LetExpression>;

// ListLiteral
        class ListLiteral;
        using ListLiteral_ptr = boost::intrusive_ptr<ListLiteral>;

// Literal
        class Literal;
        using Literal_ptr = boost::intrusive_ptr<Literal>;

// BooleanLiteral
        class BooleanLiteral;
        using BooleanLiteral_ptr = boost::intrusive_ptr<BooleanLiteral>;

// IntegerLiteral
        class IntegerLiteral;
        using IntegerLiteral_ptr = boost::intrusive_ptr<IntegerLiteral>;

// NullLiteral
        class NullLiteral;
        using NullLiteral_ptr = boost::intrusive_ptr<NullLiteral>;

// RealLiteral
        class RealLiteral;
        using RealLiteral_ptr = boost::intrusive_ptr<RealLiteral>;

// StringLiteral
        class StringLiteral;
        using StringLiteral_ptr = boost::intrusive_ptr<StringLiteral>;

// SwitchExpression
        class SwitchExpression;
        using SwitchExpression_ptr = boost::intrusive_ptr<SwitchExpression>;

// Case
        class Case;
        using Case_ptr = boost::intrusive_ptr<Case>;

// BinaryOperation
        class BinaryOperation;
        using BinaryOperation_ptr = boost::intrusive_ptr<BinaryOperation>;

// UnaryOperation
        class UnaryOperation;
        using UnaryOperation_ptr = boost::intrusive_ptr<UnaryOperation>;

// EEnum

// Package & Factory
        class ExpressionFactory;
        using ExpressionFactory_ptr = boost::intrusive_ptr<ExpressionFactory>;
        class ExpressionPackage;
        using ExpressionPackage_ptr = boost::intrusive_ptr<ExpressionPackage>;

        template< typename T, typename S >
        inline boost::intrusive_ptr< T > instanceOf(const S& _s)
        {
            return boost::intrusive_ptr < T > (dynamic_cast< T* >(_s.get()));
        }

    } // expression
} // xpand3

#endif // _XPAND3_EXPRESSION_FORWARD_HPP

