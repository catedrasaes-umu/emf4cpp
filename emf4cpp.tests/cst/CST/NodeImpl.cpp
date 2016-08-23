// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * CST/NodeImpl.cpp
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

#include "Node.hpp"
#include <CST/CSTPackage.hpp>
#include <CST/Element.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::CST;

/*PROTECTED REGION ID(NodeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Node::_initialize()
{
    // Supertypes
    ::CST::Element::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_children->size(); i++)
    {
        (*m_children)[i]->_initialize();
        (*m_children)[i]->_setEContainer(this,
                ::CST::CSTPackage::_instance()->getNode__children());
    }

    /*PROTECTED REGION ID(NodeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Node::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::CST::CSTPackage::ELEMENT__KIND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_kind);
    }
        return _any;
    case ::CST::CSTPackage::NODE__CHILDREN:
    {
        _any = m_children->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void Node::eSet(::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::CST::CSTPackage::ELEMENT__KIND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_kind);
    }
        return;
    case ::CST::CSTPackage::NODE__CHILDREN:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::CST::Node::getChildren().clear();
        ::CST::Node::getChildren().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Node::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::CST::CSTPackage::ELEMENT__KIND:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_kind);
    case ::CST::CSTPackage::NODE__CHILDREN:
        return m_children && m_children->size();

    }
    throw "Error";
}

void Node::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Node::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::CST::CSTPackage_ptr >(::CST::CSTPackage::_instance())->getNode();
    return _eclass;
}

