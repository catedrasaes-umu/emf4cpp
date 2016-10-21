// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression.hpp
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

#ifndef XPAND3_EXPRESSION_HPP
#define XPAND3_EXPRESSION_HPP

#include "expression_forward.hpp"
#include <ecorecpp/mapping.hpp>

// EPackage

// EClass
#include "expression/AbstractExpression.hpp"
#include "expression/BooleanOperation.hpp"
#include "expression/Cast.hpp"
#include "expression/ChainExpression.hpp"
#include "expression/ConstructorCallExpression.hpp"
#include "expression/FeatureCall.hpp"
#include "expression/CollectionExpression.hpp"
#include "expression/OperationCall.hpp"
#include "expression/TypeSelectExpression.hpp"
#include "expression/GlobalVarExpression.hpp"
#include "expression/IfExpression.hpp"
#include "expression/LetExpression.hpp"
#include "expression/ListLiteral.hpp"
#include "expression/Literal.hpp"
#include "expression/BooleanLiteral.hpp"
#include "expression/IntegerLiteral.hpp"
#include "expression/NullLiteral.hpp"
#include "expression/RealLiteral.hpp"
#include "expression/StringLiteral.hpp"
#include "expression/SwitchExpression.hpp"
#include "expression/Case.hpp"
#include "expression/BinaryOperation.hpp"
#include "expression/UnaryOperation.hpp"

// Package & Factory
#include "xpand3/expression/ExpressionPackage.hpp"
#include "xpand3/expression/ExpressionFactory.hpp"

#endif // XPAND3_EXPRESSION_HPP
