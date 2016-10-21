// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * tree/TreePackage.hpp
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

#ifndef _TREEPACKAGE_HPP
#define _TREEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <tree_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <tree/dllTree.hpp>

namespace tree
{

class EXPORT_TREE_DLL TreePackage : public virtual ::ecore::EPackage
{
public:

    static TreePackage_ptr _instance();
    static TreePackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int LEAF = 0;

    static const int NONTERMINAL = 1;

    static const int TREENODE = 2;

    static const int TREENODE__DATA = 0;

    static const int TREENODE__PARENT = 1;

    static const int NONTERMINAL__CHILDREN = 2;

    // IDs for classifiers for class Leaf 

    static const int LEAF__DATA = TREENODE__DATA;

    static const int LEAF__PARENT = TREENODE__PARENT;

    // IDs for classifiers for class NonTerminal 

    static const int NONTERMINAL__DATA = TREENODE__DATA;

    static const int NONTERMINAL__PARENT = TREENODE__PARENT;

    // IDs for classifiers for class TreeNode 

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getTreeNode();

    virtual ::ecore::EClass_ptr getLeaf();

    virtual ::ecore::EClass_ptr getNonTerminal();

    // EStructuralFeatures methods

    virtual ::ecore::EAttribute_ptr getTreeNode__data();

    virtual ::ecore::EReference_ptr getTreeNode__parent();

    virtual ::ecore::EReference_ptr getNonTerminal__children();

protected:

    static std::unique_ptr< TreePackage, ::ecorecpp::PackageDeleter<TreePackage> > s_instance;

    TreePackage();

    // EClass instances 

    ::ecore::EClass_ptr m_TreeNodeEClass;

    ::ecore::EClass_ptr m_LeafEClass;

    ::ecore::EClass_ptr m_NonTerminalEClass;

    // EEnuminstances 

    // EDataType instances 

    // EStructuralFeatures instances

    ::ecore::EAttribute_ptr m_TreeNode__data;

    ::ecore::EReference_ptr m_TreeNode__parent;

    ::ecore::EReference_ptr m_NonTerminal__children;

};

}
 // tree

#endif // _TREEPACKAGE_HPP

