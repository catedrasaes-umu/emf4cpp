// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * treeiterator/TreeNode.cpp
 * This file was created by EMF4CPP 2.0.5 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
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

using namespace ::treeiterator;

// Default constructor
TreeNode::TreeNode() :
        m_leaf(0)
{

    m_children.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::treeiterator::TreeNode, -1, true, false >(this,
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
        delete m_leaf;
    }
}

/*PROTECTED REGION ID(TreeNode.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

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
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::treeiterator::TreeiteratorPackage::_instance()->getTreeNode__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::treeiterator::TreeNode >& TreeNode::getChildren() const
{
    return *m_children;
}

::ecorecpp::mapping::EList< ::treeiterator::TreeNode >& TreeNode::getChildren()
{
    return *m_children;
}

::treeiterator::Leaf_ptr TreeNode::getLeaf() const
{
    return m_leaf;
}

void TreeNode::setLeaf(::treeiterator::Leaf_ptr _leaf)
{
    ::treeiterator::Leaf_ptr _old_leaf = m_leaf;

    m_leaf = _leaf;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::treeiterator::TreeiteratorPackage::_instance()->getTreeNode__leaf(),
                _old_leaf,
                m_leaf
        );
        eNotify(&notification);
    }
#endif

    delete _old_leaf;
    m_leaf->_setEContainer(this,
            ::treeiterator::TreeiteratorPackage::_instance()->getTreeNode__leaf());
}

