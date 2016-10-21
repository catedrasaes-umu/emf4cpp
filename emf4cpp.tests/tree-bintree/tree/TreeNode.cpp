// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * tree/TreeNode.cpp
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

#include "TreeNode.hpp"
#include <tree/TreeNode.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "tree/TreePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::tree;

// Default constructor
TreeNode::TreeNode() :
        m_parent(0)
{

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
}

/*PROTECTED REGION ID(TreeNode.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::ecore::EString const& TreeNode::getData() const
{
    return m_data;
}

void TreeNode::setData(::ecore::EString const& _data)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_data = m_data;
#endif
    m_data = _data;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::tree::TreePackage::_instance()->getTreeNode__data(),
                _old_data,
                m_data
        );
        eNotify(&notification);
    }
#endif
}

// References
::tree::TreeNode_ptr TreeNode::getParent()
{
    return m_parent;
}

void TreeNode::setParent(::tree::TreeNode_ptr _parent)
{
    ::tree::TreeNode_ptr _old_parent = m_parent;

    m_parent = _parent;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::tree::TreePackage::_instance()->getTreeNode__parent(),
                _old_parent,
                m_parent
        );
        eNotify(&notification);
    }
#endif

}

