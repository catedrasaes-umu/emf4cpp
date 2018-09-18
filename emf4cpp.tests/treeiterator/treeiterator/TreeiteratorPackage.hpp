// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * treeiterator/TreeiteratorPackage.hpp
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

#ifndef _TREEITERATORPACKAGE_HPP
#define _TREEITERATORPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <treeiterator_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <treeiterator/dllTreeiterator.hpp>

namespace treeiterator
{

class EXPORT_TREEITERATOR_DLL TreeiteratorPackage : public virtual ::ecore::EPackage
{
public:

    static TreeiteratorPackage_ptr _instance();
    static TreeiteratorPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int LEAF = 0;

    static const int TREENODE = 1;

    static const int TREENODE__NAME = 0;

    static const int TREENODE__CHILDREN = 1;

    static const int TREENODE__LEAF = 2;

    static const int LEAF__NAME = 3;

    // IDs for classifiers for class Leaf 

    // IDs for classifiers for class TreeNode 

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getTreeNode();

    virtual ::ecore::EClass_ptr getLeaf();

    // EStructuralFeatures methods

    virtual ::ecore::EAttribute_ptr getTreeNode__name();

    virtual ::ecore::EReference_ptr getTreeNode__children();

    virtual ::ecore::EReference_ptr getTreeNode__leaf();

    virtual ::ecore::EAttribute_ptr getLeaf__name();

protected:

    static ::ecore::Ptr< TreeiteratorPackage > s_instance;

    TreeiteratorPackage();
    void _initPackage();

    // EClass instances 

    ::ecore::EClass_ptr m_TreeNodeEClass;

    ::ecore::EClass_ptr m_LeafEClass;

    // EEnuminstances 

    // EDataType instances 

    // EStructuralFeatures instances

    ::ecore::EAttribute_ptr m_TreeNode__name;

    ::ecore::EReference_ptr m_TreeNode__children;

    ::ecore::EReference_ptr m_TreeNode__leaf;

    ::ecore::EAttribute_ptr m_Leaf__name;

};

}
 // treeiterator

#endif // _TREEITERATORPACKAGE_HPP

