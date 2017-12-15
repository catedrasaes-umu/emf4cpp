// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * bintree/BinTreeNode.cpp
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

#include "BinTreeNode.hpp"
#include <bintree/BinTreeNode.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "bintree/BintreePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(BinTreeNode.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::bintree;

// Default constructor
BinTreeNode::BinTreeNode() :
        m_parent(0), m_left(0), m_right(0)
{

    /*PROTECTED REGION ID(BinTreeNodeImpl__BinTreeNodeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

BinTreeNode::~BinTreeNode()
{
    if (m_left)
    {
        m_left.reset();
    }
    if (m_right)
    {
        m_right.reset();
    }
}

// Attributes

::ecore::EString const& BinTreeNode::getData() const
{
    return m_data;
}

void BinTreeNode::setData(::ecore::EString const& _data)
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
                _this(),
                ::bintree::BintreePackage::_instance()->getBinTreeNode__data(),
                _old_data,
                m_data
        );
        eNotify(&notification);
    }
#endif
}

// References

::bintree::BinTreeNode_ptr BinTreeNode::getParent() const
{
    return m_parent;
}

void BinTreeNode::setParent(::bintree::BinTreeNode_ptr _parent)
{
    ::bintree::BinTreeNode_ptr _old_parent = m_parent;

    m_parent = _parent;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::bintree::BintreePackage::_instance()->getBinTreeNode__parent(),
                _old_parent,
                m_parent
        );
        eNotify(&notification);
    }
#endif

}

::bintree::BinTreeNode_ptr BinTreeNode::getLeft() const
{
    return m_left;
}

void BinTreeNode::setLeft(::bintree::BinTreeNode_ptr _left)
{
    ::bintree::BinTreeNode_ptr _old_left = m_left;

    m_left = _left;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::bintree::BintreePackage::_instance()->getBinTreeNode__left(),
                _old_left,
                m_left
        );
        eNotify(&notification);
    }
#endif

    if (_old_left)
        _old_left->_setEContainer(BinTreeNode_ptr(),
                ::bintree::BintreePackage::_instance()->getBinTreeNode__left());
    m_left->_setEContainer(_this(),
            ::bintree::BintreePackage::_instance()->getBinTreeNode__left());
}

::bintree::BinTreeNode_ptr BinTreeNode::getRight() const
{
    return m_right;
}

void BinTreeNode::setRight(::bintree::BinTreeNode_ptr _right)
{
    ::bintree::BinTreeNode_ptr _old_right = m_right;

    m_right = _right;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::bintree::BintreePackage::_instance()->getBinTreeNode__right(),
                _old_right,
                m_right
        );
        eNotify(&notification);
    }
#endif

    if (_old_right)
        _old_right->_setEContainer(BinTreeNode_ptr(),
                ::bintree::BintreePackage::_instance()->getBinTreeNode__right());
    m_right->_setEContainer(_this(),
            ::bintree::BintreePackage::_instance()->getBinTreeNode__right());
}

