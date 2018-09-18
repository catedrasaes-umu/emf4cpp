// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * tree/TreeNodeImpl.cpp
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
#include <tree/TreePackage.hpp>
#include <tree/TreeNode.hpp>
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

using namespace ::tree;

void TreeNode::_initialize()
{
    // Supertypes

    // References

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
    case ::tree::TreePackage::TREENODE__DATA:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_data);
    }
        return _any;
    case ::tree::TreePackage::TREENODE__PARENT:
    {
        if (m_parent)
            _any = ::ecore::as < ::ecore::EObject > (m_parent);
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
    case ::tree::TreePackage::TREENODE__DATA:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::tree::TreeNode::setData(_t0);
    }
        return;
    case ::tree::TreePackage::TREENODE__PARENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::tree::TreeNode_ptr _t1 = dynamic_cast< ::tree::TreeNode* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::tree::TreeNode >(_t0);*/
        ::tree::TreeNode::setParent(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean TreeNode::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::tree::TreePackage::TREENODE__DATA:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_data);
    case ::tree::TreePackage::TREENODE__PARENT:
        return (bool) m_parent;

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
            dynamic_cast< ::tree::TreePackage* >(::tree::TreePackage::_instance().get())->getTreeNode();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TreeNode::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::tree::TreePackage::TREENODE__PARENT:
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
    case ::tree::TreePackage::TREENODE__PARENT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

