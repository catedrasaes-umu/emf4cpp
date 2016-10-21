// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * CST/CSTFactoryImpl.cpp
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

#include <CST/CSTFactory.hpp>
#include <CST/CSTPackage.hpp>
#include <CST/Tree.hpp>
#include <CST/Element.hpp>
#include <CST/Node.hpp>
#include <CST/Leaf.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::CST;

CSTFactory::CSTFactory()
{
    s_instance.reset(this);
}

::ecore::EObject_ptr CSTFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case CSTPackage::TREE:
        return createTree();
    case CSTPackage::ELEMENT:
        return createElement();
    case CSTPackage::NODE:
        return createNode();
    case CSTPackage::LEAF:
        return createLeaf();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject CSTFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString CSTFactory::convertToString(::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

Tree_ptr CSTFactory::createTree()
{
    return new Tree();
}
Element_ptr CSTFactory::createElement()
{
    return new Element();
}
Node_ptr CSTFactory::createNode()
{
    return new Node();
}
Leaf_ptr CSTFactory::createLeaf()
{
    return new Leaf();
}

