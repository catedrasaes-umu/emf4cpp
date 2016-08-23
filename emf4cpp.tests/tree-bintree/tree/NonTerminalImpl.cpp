// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * tree/NonTerminalImpl.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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

#include "NonTerminal.hpp"
#include <tree/TreePackage.hpp>
#include <tree/TreeNode.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::tree;

/*PROTECTED REGION ID(NonTerminalImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void NonTerminal::_initialize()
{
    // Supertypes
    ::tree::TreeNode::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_children->size(); i++)
    {
        (*m_children)[i]->_initialize();
        (*m_children)[i]->_setEContainer(this,
                ::tree::TreePackage::_instance()->getNonTerminal__children());
    }

    /*PROTECTED REGION ID(NonTerminalImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject NonTerminal::eGet(::ecore::EInt _featureID,
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
        _any = static_cast< ::ecore::EObject* >(m_parent);
    }
        return _any;
    case ::tree::TreePackage::NONTERMINAL__CHILDREN:
    {
        _any = m_children->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void NonTerminal::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::tree::TreePackage::TREENODE__DATA:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_data);
    }
        return;
    case ::tree::TreePackage::TREENODE__PARENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::tree::TreeNode_ptr _t1 = dynamic_cast< ::tree::TreeNode_ptr >(_t0);
        ::tree::TreeNode::setParent(_t1);
    }
        return;
    case ::tree::TreePackage::NONTERMINAL__CHILDREN:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::tree::NonTerminal::getChildren().clear();
        ::tree::NonTerminal::getChildren().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean NonTerminal::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::tree::TreePackage::TREENODE__DATA:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_data);
    case ::tree::TreePackage::TREENODE__PARENT:
        return m_parent;
    case ::tree::TreePackage::NONTERMINAL__CHILDREN:
        return m_children && m_children->size();

    }
    throw "Error";
}

void NonTerminal::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr NonTerminal::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::tree::TreePackage_ptr >(::tree::TreePackage::_instance())->getNonTerminal();
    return _eclass;
}

