// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/Xpand3FactoryImpl.cpp
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

#include <xpand3/Xpand3Factory.hpp>
#include <xpand3/Xpand3Package.hpp>
#include <xpand3/SyntaxElement.hpp>
#include <xpand3/File.hpp>
#include <xpand3/ImportStatement.hpp>
#include <xpand3/Identifier.hpp>
#include <xpand3/DeclaredParameter.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::xpand3;

Xpand3Factory::Xpand3Factory()
{
    s_instance.reset(this);
}

::ecore::EObject_ptr Xpand3Factory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case Xpand3Package::SYNTAXELEMENT:
        return createSyntaxElement();
    case Xpand3Package::FILE:
        return createFile();
    case Xpand3Package::IMPORTSTATEMENT:
        return createImportStatement();
    case Xpand3Package::IDENTIFIER:
        return createIdentifier();
    case Xpand3Package::DECLAREDPARAMETER:
        return createDeclaredParameter();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject Xpand3Factory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString Xpand3Factory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

SyntaxElement_ptr Xpand3Factory::createSyntaxElement()
{
    return new SyntaxElement();
}
File_ptr Xpand3Factory::createFile()
{
    return new File();
}
ImportStatement_ptr Xpand3Factory::createImportStatement()
{
    return new ImportStatement();
}
Identifier_ptr Xpand3Factory::createIdentifier()
{
    return new Identifier();
}
DeclaredParameter_ptr Xpand3Factory::createDeclaredParameter()
{
    return new DeclaredParameter();
}

