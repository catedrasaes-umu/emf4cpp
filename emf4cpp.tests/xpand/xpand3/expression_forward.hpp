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
        using AbstractExpression_ptr = ::ecore::Ptr<AbstractExpression>;

// BooleanOperation
        class BooleanOperation;
        using BooleanOperation_ptr = ::ecore::Ptr<BooleanOperation>;

// Cast
        class Cast;
        using Cast_ptr = ::ecore::Ptr<Cast>;

// ChainExpression
        class ChainExpression;
        using ChainExpression_ptr = ::ecore::Ptr<ChainExpression>;

// ConstructorCallExpression
        class ConstructorCallExpression;
        using ConstructorCallExpression_ptr = ::ecore::Ptr<ConstructorCallExpression>;

// FeatureCall
        class FeatureCall;
        using FeatureCall_ptr = ::ecore::Ptr<FeatureCall>;

// CollectionExpression
        class CollectionExpression;
        using CollectionExpression_ptr = ::ecore::Ptr<CollectionExpression>;

// OperationCall
        class OperationCall;
        using OperationCall_ptr = ::ecore::Ptr<OperationCall>;

// TypeSelectExpression
        class TypeSelectExpression;
        using TypeSelectExpression_ptr = ::ecore::Ptr<TypeSelectExpression>;

// GlobalVarExpression
        class GlobalVarExpression;
        using GlobalVarExpression_ptr = ::ecore::Ptr<GlobalVarExpression>;

// IfExpression
        class IfExpression;
        using IfExpression_ptr = ::ecore::Ptr<IfExpression>;

// LetExpression
        class LetExpression;
        using LetExpression_ptr = ::ecore::Ptr<LetExpression>;

// ListLiteral
        class ListLiteral;
        using ListLiteral_ptr = ::ecore::Ptr<ListLiteral>;

// Literal
        class Literal;
        using Literal_ptr = ::ecore::Ptr<Literal>;

// BooleanLiteral
        class BooleanLiteral;
        using BooleanLiteral_ptr = ::ecore::Ptr<BooleanLiteral>;

// IntegerLiteral
        class IntegerLiteral;
        using IntegerLiteral_ptr = ::ecore::Ptr<IntegerLiteral>;

// NullLiteral
        class NullLiteral;
        using NullLiteral_ptr = ::ecore::Ptr<NullLiteral>;

// RealLiteral
        class RealLiteral;
        using RealLiteral_ptr = ::ecore::Ptr<RealLiteral>;

// StringLiteral
        class StringLiteral;
        using StringLiteral_ptr = ::ecore::Ptr<StringLiteral>;

// SwitchExpression
        class SwitchExpression;
        using SwitchExpression_ptr = ::ecore::Ptr<SwitchExpression>;

// Case
        class Case;
        using Case_ptr = ::ecore::Ptr<Case>;

// BinaryOperation
        class BinaryOperation;
        using BinaryOperation_ptr = ::ecore::Ptr<BinaryOperation>;

// UnaryOperation
        class UnaryOperation;
        using UnaryOperation_ptr = ::ecore::Ptr<UnaryOperation>;

// EEnum

// Package & Factory
        class ExpressionFactory;
        using ExpressionFactory_ptr = ::ecore::Ptr<ExpressionFactory>;
        class ExpressionPackage;
        using ExpressionPackage_ptr = ::ecore::Ptr<ExpressionPackage>;

    } // expression
} // xpand3

#endif // _XPAND3_EXPRESSION_FORWARD_HPP

