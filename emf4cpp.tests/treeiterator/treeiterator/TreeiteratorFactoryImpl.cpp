// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * treeiterator/TreeiteratorFactoryImpl.cpp
 * This file was created by EMF4CPP 2.0.5 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
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
    s_instance.reset(this);
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
    return new TreeNode();
}
Leaf_ptr TreeiteratorFactory::createLeaf()
{
    return new Leaf();
}

