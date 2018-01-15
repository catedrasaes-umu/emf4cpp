// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * treeiterator/TreeNode.cpp
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
#include <treeiterator/TreeNode.hpp>
#include <treeiterator/Leaf.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "treeiterator/TreeiteratorPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TreeNode.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::treeiterator;

// Default constructor
TreeNode::TreeNode() :
        m_leaf(0)
{

    m_children.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::treeiterator::TreeNode_ptr, -1, true, false >(this,
                    ::treeiterator::TreeiteratorPackage::_instance()->getTreeNode__children()));

    /*PROTECTED REGION ID(TreeNodeImpl__TreeNodeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

TreeNode::~TreeNode()
{
    if (m_leaf)
    {
        m_leaf.reset();
    }
}

// Attributes

::ecore::EString const& TreeNode::getName() const
{
    return m_name;
}

void TreeNode::setName(::ecore::EString const& _name)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_name = m_name;
#endif
    m_name = _name;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::treeiterator::TreeiteratorPackage::_instance()->getTreeNode__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::treeiterator::TreeNode_ptr >& TreeNode::getChildren() const
{
    return *m_children;
}

::ecorecpp::mapping::EList< ::treeiterator::TreeNode_ptr >& TreeNode::getChildren()
{
    return *m_children;
}

::treeiterator::Leaf_ptr TreeNode::getLeaf() const
{
    return m_leaf;
}

void TreeNode::setLeaf(::treeiterator::Leaf_ptr _leaf)
{
    if (m_leaf)
        m_leaf->_setEContainer(TreeNode_ptr(),
                ::treeiterator::TreeiteratorPackage::_instance()->getTreeNode__leaf());
    if (_leaf)
        _leaf->_setEContainer(_this(),
                ::treeiterator::TreeiteratorPackage::_instance()->getTreeNode__leaf());

#ifdef ECORECPP_NOTIFICATION_API
    ::treeiterator::Leaf_ptr _old_leaf = m_leaf;
#endif
    m_leaf = _leaf;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::treeiterator::TreeiteratorPackage::_instance()->getTreeNode__leaf(),
                _old_leaf,
                m_leaf
        );
        eNotify(&notification);
    }
#endif
}

