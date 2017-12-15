// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * treeiterator/TreeiteratorPackageImpl.cpp
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

#include <treeiterator/TreeiteratorPackage.hpp>
#include <treeiterator/TreeiteratorFactory.hpp>
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

using namespace ::treeiterator;

TreeiteratorPackage::TreeiteratorPackage()
{

    // Feature definitions of TreeNode
    m_TreeNode__name = boost::intrusive_ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_TreeNode__children = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_TreeNode__leaf = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Leaf
    m_Leaf__name = boost::intrusive_ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

}

void TreeiteratorPackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = TreeiteratorFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    // Create classes and their features

    // TreeNode
    m_TreeNodeEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_TreeNodeEClass->setClassifierID(TREENODE);
    m_TreeNodeEClass->setEPackage(_this());
    getEClassifiers().push_back(m_TreeNodeEClass);
    // m_TreeNode__name has already been allocated above
    m_TreeNode__name->setFeatureID(
            ::treeiterator::TreeiteratorPackage::TREENODE__NAME);
    m_TreeNodeEClass->getEStructuralFeatures().push_back(m_TreeNode__name);
    // m_TreeNode__children has already been allocated above
    m_TreeNode__children->setFeatureID(
            ::treeiterator::TreeiteratorPackage::TREENODE__CHILDREN);
    m_TreeNodeEClass->getEStructuralFeatures().push_back(m_TreeNode__children);
    // m_TreeNode__leaf has already been allocated above
    m_TreeNode__leaf->setFeatureID(
            ::treeiterator::TreeiteratorPackage::TREENODE__LEAF);
    m_TreeNodeEClass->getEStructuralFeatures().push_back(m_TreeNode__leaf);

    // Leaf
    m_LeafEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_LeafEClass->setClassifierID(LEAF);
    m_LeafEClass->setEPackage(_this());
    getEClassifiers().push_back(m_LeafEClass);
    // m_Leaf__name has already been allocated above
    m_Leaf__name->setFeatureID(::treeiterator::TreeiteratorPackage::LEAF__NAME);
    m_LeafEClass->getEStructuralFeatures().push_back(m_Leaf__name);

    // Create enums

    // Create data types

    // Initialize package
    setName("treeiterator");
    setNsPrefix("treeiterator");
    setNsURI("http://inchron.com/tests/treeiterator");

    // TODO: bounds for type parameters

    // Add supertypes to classes

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // TreeNode
    m_TreeNodeEClass->setName("TreeNode");
    m_TreeNodeEClass->setAbstract(false);
    m_TreeNodeEClass->setInterface(false);
    m_TreeNode__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_TreeNode__name->setName("name");
    m_TreeNode__name->setDefaultValueLiteral("");
    m_TreeNode__name->setLowerBound(0);
    m_TreeNode__name->setUpperBound(1);
    m_TreeNode__name->setTransient(false);
    m_TreeNode__name->setVolatile(false);
    m_TreeNode__name->setChangeable(true);
    m_TreeNode__name->setUnsettable(false);
    m_TreeNode__name->setID(false);
    m_TreeNode__name->setUnique(true);
    m_TreeNode__name->setDerived(false);
    m_TreeNode__name->setOrdered(true);
    m_TreeNode__children->setEType(m_TreeNodeEClass);
    m_TreeNode__children->setName("children");
    m_TreeNode__children->setDefaultValueLiteral("");
    m_TreeNode__children->setLowerBound(0);
    m_TreeNode__children->setUpperBound(-1);
    m_TreeNode__children->setTransient(false);
    m_TreeNode__children->setVolatile(false);
    m_TreeNode__children->setChangeable(true);
    m_TreeNode__children->setContainment(true);
    m_TreeNode__children->setResolveProxies(true);
    m_TreeNode__children->setUnique(true);
    m_TreeNode__children->setDerived(false);
    m_TreeNode__children->setOrdered(true);
    m_TreeNode__leaf->setEType(m_LeafEClass);
    m_TreeNode__leaf->setName("leaf");
    m_TreeNode__leaf->setDefaultValueLiteral("");
    m_TreeNode__leaf->setLowerBound(0);
    m_TreeNode__leaf->setUpperBound(1);
    m_TreeNode__leaf->setTransient(false);
    m_TreeNode__leaf->setVolatile(false);
    m_TreeNode__leaf->setChangeable(true);
    m_TreeNode__leaf->setContainment(true);
    m_TreeNode__leaf->setResolveProxies(true);
    m_TreeNode__leaf->setUnique(true);
    m_TreeNode__leaf->setDerived(false);
    m_TreeNode__leaf->setOrdered(true);
    // Leaf
    m_LeafEClass->setName("Leaf");
    m_LeafEClass->setAbstract(false);
    m_LeafEClass->setInterface(false);
    m_Leaf__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_Leaf__name->setName("name");
    m_Leaf__name->setDefaultValueLiteral("");
    m_Leaf__name->setLowerBound(0);
    m_Leaf__name->setUpperBound(1);
    m_Leaf__name->setTransient(false);
    m_Leaf__name->setVolatile(false);
    m_Leaf__name->setChangeable(true);
    m_Leaf__name->setUnsettable(false);
    m_Leaf__name->setID(false);
    m_Leaf__name->setUnique(true);
    m_Leaf__name->setDerived(false);
    m_Leaf__name->setOrdered(true);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr TreeiteratorPackage::getTreeNode()
{
    return m_TreeNodeEClass;
}
::ecore::EClass_ptr TreeiteratorPackage::getLeaf()
{
    return m_LeafEClass;
}

::ecore::EAttribute_ptr TreeiteratorPackage::getTreeNode__name()
{
    return m_TreeNode__name;
}
::ecore::EReference_ptr TreeiteratorPackage::getTreeNode__children()
{
    return m_TreeNode__children;
}
::ecore::EReference_ptr TreeiteratorPackage::getTreeNode__leaf()
{
    return m_TreeNode__leaf;
}
::ecore::EAttribute_ptr TreeiteratorPackage::getLeaf__name()
{
    return m_Leaf__name;
}

