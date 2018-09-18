// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * treeiterator/TreeiteratorFactoryImpl.cpp
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

#include <treeiterator/TreeiteratorFactory.hpp>
#include <treeiterator/TreeiteratorPackage.hpp>
#include <treeiterator/TreeNode.hpp>
#include <treeiterator/Leaf.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::treeiterator;

TreeiteratorFactory::TreeiteratorFactory()
{
}

::ecore::EObject_ptr TreeiteratorFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case TreeiteratorPackage::TREENODE:
        return createTreeNode();
    case TreeiteratorPackage::LEAF:
        return createLeaf();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject TreeiteratorFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString TreeiteratorFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

TreeNode_ptr TreeiteratorFactory::createTreeNode()
{
    return ::ecore::Ptr < TreeNode > (new TreeNode);
}
Leaf_ptr TreeiteratorFactory::createLeaf()
{
    return ::ecore::Ptr < Leaf > (new Leaf);
}

