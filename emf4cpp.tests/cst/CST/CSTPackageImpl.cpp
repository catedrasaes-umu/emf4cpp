// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * CST/CSTPackageImpl.cpp
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

#include <CST/CSTPackage.hpp>
#include <CST/CSTFactory.hpp>
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

using namespace ::CST;

CSTPackage::CSTPackage()
{

    // Feature definitions of Tree

    // Feature definitions of Element
    m_Element__kind = new ::ecore::EAttribute();

    // Feature definitions of Node
    m_Node__children = new ::ecore::EReference();

    // Feature definitions of Leaf
    m_Leaf__value = new ::ecore::EAttribute();
    m_Leaf__pos = new ::ecore::EAttribute();
    m_Leaf__line = new ::ecore::EAttribute();

    /* Now one can safely ask for a feature definition of
     * a class, though it is not yet usable. */
    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = CSTFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    // Create classes and their features

    // Tree
    m_TreeEClass = new ::ecore::EClass();
    m_TreeEClass->setClassifierID(TREE);
    m_TreeEClass->setEPackage(this);
    getEClassifiers().push_back(m_TreeEClass);

    // Element
    m_ElementEClass = new ::ecore::EClass();
    m_ElementEClass->setClassifierID(ELEMENT);
    m_ElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_ElementEClass);
    // m_Element__kind has already been allocated above
    m_Element__kind->setFeatureID(::CST::CSTPackage::ELEMENT__KIND);
    m_ElementEClass->getEStructuralFeatures().push_back(m_Element__kind);

    // Node
    m_NodeEClass = new ::ecore::EClass();
    m_NodeEClass->setClassifierID(NODE);
    m_NodeEClass->setEPackage(this);
    getEClassifiers().push_back(m_NodeEClass);
    // m_Node__children has already been allocated above
    m_Node__children->setFeatureID(::CST::CSTPackage::NODE__CHILDREN);
    m_NodeEClass->getEStructuralFeatures().push_back(m_Node__children);

    // Leaf
    m_LeafEClass = new ::ecore::EClass();
    m_LeafEClass->setClassifierID(LEAF);
    m_LeafEClass->setEPackage(this);
    getEClassifiers().push_back(m_LeafEClass);
    // m_Leaf__value has already been allocated above
    m_Leaf__value->setFeatureID(::CST::CSTPackage::LEAF__VALUE);
    m_LeafEClass->getEStructuralFeatures().push_back(m_Leaf__value);
    // m_Leaf__pos has already been allocated above
    m_Leaf__pos->setFeatureID(::CST::CSTPackage::LEAF__POS);
    m_LeafEClass->getEStructuralFeatures().push_back(m_Leaf__pos);
    // m_Leaf__line has already been allocated above
    m_Leaf__line->setFeatureID(::CST::CSTPackage::LEAF__LINE);
    m_LeafEClass->getEStructuralFeatures().push_back(m_Leaf__line);

    // Create enums

    // Create data types

    // Initialize package
    setName("CST");
    setNsPrefix("CST");
    setNsURI("http://gts.inf.um.es/modernization/cst");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_TreeEClass->getESuperTypes().push_back(m_NodeEClass);
    m_NodeEClass->getESuperTypes().push_back(m_ElementEClass);
    m_LeafEClass->getESuperTypes().push_back(m_ElementEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // Tree
    m_TreeEClass->setName("Tree");
    m_TreeEClass->setAbstract(false);
    m_TreeEClass->setInterface(false);
    // Element
    m_ElementEClass->setName("Element");
    m_ElementEClass->setAbstract(false);
    m_ElementEClass->setInterface(false);
    m_Element__kind->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEString());
    m_Element__kind->setName("kind");
    m_Element__kind->setDefaultValueLiteral("");
    m_Element__kind->setLowerBound(0);
    m_Element__kind->setUpperBound(1);
    m_Element__kind->setTransient(false);
    m_Element__kind->setVolatile(false);
    m_Element__kind->setChangeable(true);
    m_Element__kind->setUnsettable(false);
    m_Element__kind->setID(false);
    m_Element__kind->setUnique(true);
    m_Element__kind->setDerived(false);
    m_Element__kind->setOrdered(true);
    // Node
    m_NodeEClass->setName("Node");
    m_NodeEClass->setAbstract(false);
    m_NodeEClass->setInterface(false);
    m_Node__children->setEType(m_ElementEClass);
    m_Node__children->setName("children");
    m_Node__children->setDefaultValueLiteral("");
    m_Node__children->setLowerBound(0);
    m_Node__children->setUpperBound(-1);
    m_Node__children->setTransient(false);
    m_Node__children->setVolatile(false);
    m_Node__children->setChangeable(true);
    m_Node__children->setContainment(true);
    m_Node__children->setResolveProxies(true);
    m_Node__children->setUnique(true);
    m_Node__children->setDerived(false);
    m_Node__children->setOrdered(true);
    // Leaf
    m_LeafEClass->setName("Leaf");
    m_LeafEClass->setAbstract(false);
    m_LeafEClass->setInterface(false);
    m_Leaf__value->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEString());
    m_Leaf__value->setName("value");
    m_Leaf__value->setDefaultValueLiteral("");
    m_Leaf__value->setLowerBound(0);
    m_Leaf__value->setUpperBound(1);
    m_Leaf__value->setTransient(false);
    m_Leaf__value->setVolatile(false);
    m_Leaf__value->setChangeable(true);
    m_Leaf__value->setUnsettable(false);
    m_Leaf__value->setID(false);
    m_Leaf__value->setUnique(true);
    m_Leaf__value->setDerived(false);
    m_Leaf__value->setOrdered(true);
    m_Leaf__pos->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEInt());
    m_Leaf__pos->setName("pos");
    m_Leaf__pos->setDefaultValueLiteral("");
    m_Leaf__pos->setLowerBound(0);
    m_Leaf__pos->setUpperBound(1);
    m_Leaf__pos->setTransient(false);
    m_Leaf__pos->setVolatile(false);
    m_Leaf__pos->setChangeable(true);
    m_Leaf__pos->setUnsettable(false);
    m_Leaf__pos->setID(false);
    m_Leaf__pos->setUnique(true);
    m_Leaf__pos->setDerived(false);
    m_Leaf__pos->setOrdered(true);
    m_Leaf__line->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEInt());
    m_Leaf__line->setName("line");
    m_Leaf__line->setDefaultValueLiteral("");
    m_Leaf__line->setLowerBound(0);
    m_Leaf__line->setUpperBound(1);
    m_Leaf__line->setTransient(false);
    m_Leaf__line->setVolatile(false);
    m_Leaf__line->setChangeable(true);
    m_Leaf__line->setUnsettable(false);
    m_Leaf__line->setID(false);
    m_Leaf__line->setUnique(true);
    m_Leaf__line->setDerived(false);
    m_Leaf__line->setOrdered(true);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr CSTPackage::getTree()
{
    return m_TreeEClass;
}
::ecore::EClass_ptr CSTPackage::getElement()
{
    return m_ElementEClass;
}
::ecore::EClass_ptr CSTPackage::getNode()
{
    return m_NodeEClass;
}
::ecore::EClass_ptr CSTPackage::getLeaf()
{
    return m_LeafEClass;
}

::ecore::EAttribute_ptr CSTPackage::getElement__kind()
{
    return m_Element__kind;
}
::ecore::EReference_ptr CSTPackage::getNode__children()
{
    return m_Node__children;
}
::ecore::EAttribute_ptr CSTPackage::getLeaf__value()
{
    return m_Leaf__value;
}
::ecore::EAttribute_ptr CSTPackage::getLeaf__pos()
{
    return m_Leaf__pos;
}
::ecore::EAttribute_ptr CSTPackage::getLeaf__line()
{
    return m_Leaf__line;
}

