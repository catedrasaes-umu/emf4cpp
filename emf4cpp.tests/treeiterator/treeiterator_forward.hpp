// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * treeiterator_forward.hpp
 * This file was created by EMF4CPP 2.0.5 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _TREEITERATOR_FORWARD_HPP
#define _TREEITERATOR_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(treeiterator_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace treeiterator
{

// EDataType

// EClass

// TreeNode
    class TreeNode;
    typedef TreeNode* TreeNode_ptr;

// Leaf
    class Leaf;
    typedef Leaf* Leaf_ptr;

// EEnum

// Package & Factory
    class TreeiteratorFactory;
    typedef TreeiteratorFactory * TreeiteratorFactory_ptr;
    class TreeiteratorPackage;
    typedef TreeiteratorPackage * TreeiteratorPackage_ptr;

    template< typename T, typename S >
    inline T* instanceOf(S* _s)
    {
        return dynamic_cast< T* >(_s);
    }

} // treeiterator

#endif // _TREEITERATOR_FORWARD_HPP

