// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * treeiterator/TreeiteratorPackage.hpp
 * This file was created by EMF4CPP 2.0.5 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
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

    static std::unique_ptr< TreeiteratorPackage, ::ecorecpp::PackageDeleter<TreeiteratorPackage> > s_instance;

    TreeiteratorPackage();

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

