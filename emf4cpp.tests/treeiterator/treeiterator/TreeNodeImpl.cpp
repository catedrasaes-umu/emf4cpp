// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * treeiterator/TreeNodeImpl.cpp
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

#include "TreeNode.hpp"
#include <treeiterator/TreeiteratorPackage.hpp>
#include <treeiterator/TreeNode.hpp>
#include <treeiterator/Leaf.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TreeNodeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::treeiterator;

void TreeNode::_initialize()
{
    // Supertypes

    // References
    for (size_t i = 0; i < m_children->size(); i++)
    {
        (*m_children)[i]->_initialize();
    }
    if (m_leaf)
    {
        m_leaf->_initialize();
    }

    /*PROTECTED REGION ID(TreeNodeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject TreeNode::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::treeiterator::TreeiteratorPackage::TREENODE__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::treeiterator::TreeiteratorPackage::TREENODE__CHILDREN:
    {
        _any = m_children->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::treeiterator::TreeiteratorPackage::TREENODE__LEAF:
    {
        if (m_leaf)
            _any = m_leaf->as< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void TreeNode::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::treeiterator::TreeiteratorPackage::TREENODE__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_name);
    }
        return;
    case ::treeiterator::TreeiteratorPackage::TREENODE__CHILDREN:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::treeiterator::TreeNode::getChildren().clear();
        ::treeiterator::TreeNode::getChildren().insert_all(*_t0);
    }
        return;
    case ::treeiterator::TreeiteratorPackage::TREENODE__LEAF:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::treeiterator::Leaf_ptr _t1 =
                dynamic_cast< ::treeiterator::Leaf* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::treeiterator::Leaf >(_t0);*/
        ::treeiterator::TreeNode::setLeaf(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean TreeNode::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::treeiterator::TreeiteratorPackage::TREENODE__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::treeiterator::TreeiteratorPackage::TREENODE__CHILDREN:
        return m_children && m_children->size();
    case ::treeiterator::TreeiteratorPackage::TREENODE__LEAF:
        return (bool) m_leaf;

    }
    throw "Error";
}

void TreeNode::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr TreeNode::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::treeiterator::TreeiteratorPackage* >(::treeiterator::TreeiteratorPackage::_instance().get())->getTreeNode();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TreeNode::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::treeiterator::TreeiteratorPackage::TREENODE__CHILDREN:
    {
    }
        return;
    case ::treeiterator::TreeiteratorPackage::TREENODE__LEAF:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TreeNode::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::treeiterator::TreeiteratorPackage::TREENODE__CHILDREN:
    {
    }
        return;
    case ::treeiterator::TreeiteratorPackage::TREENODE__LEAF:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

