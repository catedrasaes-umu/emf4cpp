// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * tree/TreePackageImpl.cpp
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

#include <tree/TreePackage.hpp>
#include <tree/TreeFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EcorePackage.hpp>

using namespace ::tree;

TreePackage::TreePackage()
{

    // Feature definitions of TreeNode
    m_TreeNode__data = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_TreeNode__parent = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Leaf

    // Feature definitions of NonTerminal
    m_NonTerminal__children = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

}

void TreePackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = TreeFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    // Create classes and their features

    // TreeNode
    m_TreeNodeEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_TreeNodeEClass->setClassifierID(TREENODE);
    m_TreeNodeEClass->setEPackage(_this());
    getEClassifiers().push_back(m_TreeNodeEClass);
    // m_TreeNode__data has already been allocated above
    m_TreeNode__data->setFeatureID(::tree::TreePackage::TREENODE__DATA);
    m_TreeNodeEClass->getEStructuralFeatures().push_back(m_TreeNode__data);
    // m_TreeNode__parent has already been allocated above
    m_TreeNode__parent->setFeatureID(::tree::TreePackage::TREENODE__PARENT);
    m_TreeNodeEClass->getEStructuralFeatures().push_back(m_TreeNode__parent);

    // Leaf
    m_LeafEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_LeafEClass->setClassifierID(LEAF);
    m_LeafEClass->setEPackage(_this());
    getEClassifiers().push_back(m_LeafEClass);

    // NonTerminal
    m_NonTerminalEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_NonTerminalEClass->setClassifierID(NONTERMINAL);
    m_NonTerminalEClass->setEPackage(_this());
    getEClassifiers().push_back(m_NonTerminalEClass);
    // m_NonTerminal__children has already been allocated above
    m_NonTerminal__children->setFeatureID(
            ::tree::TreePackage::NONTERMINAL__CHILDREN);
    m_NonTerminalEClass->getEStructuralFeatures().push_back(
            m_NonTerminal__children);

    // Create enums

    // Create data types

    // Initialize package
    setName("tree");
    setNsPrefix("tree");
    setNsURI("http://www.eclipse.org/emf/2002/Tree");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_LeafEClass->getESuperTypes().push_back(m_TreeNodeEClass);
    m_NonTerminalEClass->getESuperTypes().push_back(m_TreeNodeEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // TreeNode
    m_TreeNodeEClass->setName("TreeNode");
    m_TreeNodeEClass->setAbstract(true);
    m_TreeNodeEClass->setInterface(false);
    m_TreeNode__data->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_TreeNode__data->setName("data");
    m_TreeNode__data->setDefaultValueLiteral("");
    m_TreeNode__data->setLowerBound(0);
    m_TreeNode__data->setUpperBound(1);
    m_TreeNode__data->setTransient(false);
    m_TreeNode__data->setVolatile(false);
    m_TreeNode__data->setChangeable(true);
    m_TreeNode__data->setUnsettable(false);
    m_TreeNode__data->setID(false);
    m_TreeNode__data->setUnique(true);
    m_TreeNode__data->setDerived(false);
    m_TreeNode__data->setOrdered(true);
    m_TreeNode__parent->setEType(m_TreeNodeEClass);
    m_TreeNode__parent->setName("parent");
    m_TreeNode__parent->setDefaultValueLiteral("");
    m_TreeNode__parent->setLowerBound(0);
    m_TreeNode__parent->setUpperBound(1);
    m_TreeNode__parent->setTransient(true);
    m_TreeNode__parent->setVolatile(false);
    m_TreeNode__parent->setChangeable(true);
    m_TreeNode__parent->setContainment(false);
    m_TreeNode__parent->setResolveProxies(true);
    m_TreeNode__parent->setUnique(true);
    m_TreeNode__parent->setDerived(false);
    m_TreeNode__parent->setOrdered(true);
    // Leaf
    m_LeafEClass->setName("Leaf");
    m_LeafEClass->setAbstract(false);
    m_LeafEClass->setInterface(false);
    // NonTerminal
    m_NonTerminalEClass->setName("NonTerminal");
    m_NonTerminalEClass->setAbstract(false);
    m_NonTerminalEClass->setInterface(false);
    m_NonTerminal__children->setEType(m_TreeNodeEClass);
    m_NonTerminal__children->setName("children");
    m_NonTerminal__children->setDefaultValueLiteral("");
    m_NonTerminal__children->setLowerBound(0);
    m_NonTerminal__children->setUpperBound(-1);
    m_NonTerminal__children->setTransient(false);
    m_NonTerminal__children->setVolatile(false);
    m_NonTerminal__children->setChangeable(true);
    m_NonTerminal__children->setContainment(true);
    m_NonTerminal__children->setResolveProxies(true);
    m_NonTerminal__children->setUnique(true);
    m_NonTerminal__children->setDerived(false);
    m_NonTerminal__children->setOrdered(true);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr TreePackage::getTreeNode()
{
    return m_TreeNodeEClass;
}
::ecore::EClass_ptr TreePackage::getLeaf()
{
    return m_LeafEClass;
}
::ecore::EClass_ptr TreePackage::getNonTerminal()
{
    return m_NonTerminalEClass;
}

::ecore::EAttribute_ptr TreePackage::getTreeNode__data()
{
    return m_TreeNode__data;
}
::ecore::EReference_ptr TreePackage::getTreeNode__parent()
{
    return m_TreeNode__parent;
}
::ecore::EReference_ptr TreePackage::getNonTerminal__children()
{
    return m_NonTerminal__children;
}

