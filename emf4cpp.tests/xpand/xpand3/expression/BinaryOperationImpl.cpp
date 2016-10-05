// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/BinaryOperationImpl.cpp
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

#include "BinaryOperation.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::xpand3::expression;

/*PROTECTED REGION ID(BinaryOperationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void BinaryOperation::_initialize()
{
    // Supertypes
    ::xpand3::expression::AbstractExpression::_initialize();

    // References
    if (m_left)
    {
        m_left->_initialize();
    }
    if (m_right)
    {
        m_right->_initialize();
    }
    if (m_operator)
    {
        m_operator->_initialize();
    }

    /*PROTECTED REGION ID(BinaryOperationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject BinaryOperation::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt > ::toAny(_any, m_line);
    }
        return _any;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__START:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_start);
    }
        return _any;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__END:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt > ::toAny(_any, m_end);
    }
        return _any;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_fileName);
    }
        return _any;
    case ::xpand3::expression::ExpressionPackage::BINARYOPERATION__LEFT:
    {
        _any = static_cast< ::ecore::EObject* >(m_left);
    }
        return _any;
    case ::xpand3::expression::ExpressionPackage::BINARYOPERATION__RIGHT:
    {
        _any = static_cast< ::ecore::EObject* >(m_right);
    }
        return _any;
    case ::xpand3::expression::ExpressionPackage::BINARYOPERATION__OPERATOR:
    {
        _any = static_cast< ::ecore::EObject* >(m_operator);
    }
        return _any;

    }
    throw "Error";
}

void BinaryOperation::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, m_line);
    }
        return;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__START:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, m_start);
    }
        return;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__END:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, m_end);
    }
        return;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_fileName);
    }
        return;
    case ::xpand3::expression::ExpressionPackage::BINARYOPERATION__LEFT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::expression::AbstractExpression_ptr _t1 =
                dynamic_cast< ::xpand3::expression::AbstractExpression_ptr >(_t0);
        ::xpand3::expression::BinaryOperation::setLeft(_t1);
    }
        return;
    case ::xpand3::expression::ExpressionPackage::BINARYOPERATION__RIGHT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::expression::AbstractExpression_ptr _t1 =
                dynamic_cast< ::xpand3::expression::AbstractExpression_ptr >(_t0);
        ::xpand3::expression::BinaryOperation::setRight(_t1);
    }
        return;
    case ::xpand3::expression::ExpressionPackage::BINARYOPERATION__OPERATOR:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::Identifier_ptr _t1 =
                dynamic_cast< ::xpand3::Identifier_ptr >(_t0);
        ::xpand3::expression::BinaryOperation::setOperator(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean BinaryOperation::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(m_line);
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__START:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(m_start);
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__END:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt > ::is_set(m_end);
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_fileName);
    case ::xpand3::expression::ExpressionPackage::BINARYOPERATION__LEFT:
        return m_left;
    case ::xpand3::expression::ExpressionPackage::BINARYOPERATION__RIGHT:
        return m_right;
    case ::xpand3::expression::ExpressionPackage::BINARYOPERATION__OPERATOR:
        return m_operator;

    }
    throw "Error";
}

void BinaryOperation::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr BinaryOperation::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::xpand3::expression::ExpressionPackage_ptr >(::xpand3::expression::ExpressionPackage::_instance())->getBinaryOperation();
    return _eclass;
}

