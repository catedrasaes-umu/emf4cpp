// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/StatementFactoryImpl.cpp
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

#include <xpand3/statement/StatementFactory.hpp>
#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/statement/AbstractStatement.hpp>
#include <xpand3/statement/ExpandStatement.hpp>
#include <xpand3/statement/ExpressionStatement.hpp>
#include <xpand3/statement/ErrorStatement.hpp>
#include <xpand3/statement/AbstractStatementWithBody.hpp>
#include <xpand3/statement/FileStatement.hpp>
#include <xpand3/statement/ForEachStatement.hpp>
#include <xpand3/statement/IfStatement.hpp>
#include <xpand3/statement/LetStatement.hpp>
#include <xpand3/statement/ProtectStatement.hpp>
#include <xpand3/statement/TextStatement.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::xpand3::statement;

StatementFactory::StatementFactory()
{
}

::ecore::EObject_ptr StatementFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case StatementPackage::ABSTRACTSTATEMENT:
        return createAbstractStatement();
    case StatementPackage::EXPANDSTATEMENT:
        return createExpandStatement();
    case StatementPackage::EXPRESSIONSTATEMENT:
        return createExpressionStatement();
    case StatementPackage::ERRORSTATEMENT:
        return createErrorStatement();
    case StatementPackage::ABSTRACTSTATEMENTWITHBODY:
        return createAbstractStatementWithBody();
    case StatementPackage::FILESTATEMENT:
        return createFileStatement();
    case StatementPackage::FOREACHSTATEMENT:
        return createForEachStatement();
    case StatementPackage::IFSTATEMENT:
        return createIfStatement();
    case StatementPackage::LETSTATEMENT:
        return createLetStatement();
    case StatementPackage::PROTECTSTATEMENT:
        return createProtectStatement();
    case StatementPackage::TEXTSTATEMENT:
        return createTextStatement();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject StatementFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString StatementFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

AbstractStatement_ptr StatementFactory::createAbstractStatement()
{
    return new AbstractStatement();
}
ExpandStatement_ptr StatementFactory::createExpandStatement()
{
    return new ExpandStatement();
}
ExpressionStatement_ptr StatementFactory::createExpressionStatement()
{
    return new ExpressionStatement();
}
ErrorStatement_ptr StatementFactory::createErrorStatement()
{
    return new ErrorStatement();
}
AbstractStatementWithBody_ptr StatementFactory::createAbstractStatementWithBody()
{
    return new AbstractStatementWithBody();
}
FileStatement_ptr StatementFactory::createFileStatement()
{
    return new FileStatement();
}
ForEachStatement_ptr StatementFactory::createForEachStatement()
{
    return new ForEachStatement();
}
IfStatement_ptr StatementFactory::createIfStatement()
{
    return new IfStatement();
}
LetStatement_ptr StatementFactory::createLetStatement()
{
    return new LetStatement();
}
ProtectStatement_ptr StatementFactory::createProtectStatement()
{
    return new ProtectStatement();
}
TextStatement_ptr StatementFactory::createTextStatement()
{
    return new TextStatement();
}

