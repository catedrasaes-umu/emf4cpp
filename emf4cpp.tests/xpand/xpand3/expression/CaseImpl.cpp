// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/CaseImpl.cpp
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

#include "Case.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/SyntaxElement.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CaseImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::expression;

void Case::_initialize()
{
    // Supertypes
    ::xpand3::SyntaxElement::_initialize();

    // References
    if (m_condition)
    {
        m_condition->_initialize();
    }
    if (m_thenPart)
    {
        m_thenPart->_initialize();
    }

    /*PROTECTED REGION ID(CaseImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Case::eGet(::ecore::EInt _featureID,
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
    case ::xpand3::expression::ExpressionPackage::CASE__CONDITION:
    {
        if (m_condition)
            _any = ::ecore::as < ::ecore::EObject > (m_condition);
    }
        return _any;
    case ::xpand3::expression::ExpressionPackage::CASE__THENPART:
    {
        if (m_thenPart)
            _any = ::ecore::as < ::ecore::EObject > (m_thenPart);
    }
        return _any;

    }
    throw "Error";
}

void Case::eSet(::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::xpand3::SyntaxElement::setLine(_t0);
    }
        return;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__START:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::xpand3::SyntaxElement::setStart(_t0);
    }
        return;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__END:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::xpand3::SyntaxElement::setEnd(_t0);
    }
        return;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::xpand3::SyntaxElement::setFileName(_t0);
    }
        return;
    case ::xpand3::expression::ExpressionPackage::CASE__CONDITION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::expression::AbstractExpression_ptr _t1 =
                dynamic_cast< ::xpand3::expression::AbstractExpression* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::xpand3::expression::AbstractExpression >(_t0);*/
        ::xpand3::expression::Case::setCondition(_t1);
    }
        return;
    case ::xpand3::expression::ExpressionPackage::CASE__THENPART:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::expression::AbstractExpression_ptr _t1 =
                dynamic_cast< ::xpand3::expression::AbstractExpression* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::xpand3::expression::AbstractExpression >(_t0);*/
        ::xpand3::expression::Case::setThenPart(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Case::eIsSet(::ecore::EInt _featureID)
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
    case ::xpand3::expression::ExpressionPackage::CASE__CONDITION:
        return (bool) m_condition;
    case ::xpand3::expression::ExpressionPackage::CASE__THENPART:
        return (bool) m_thenPart;

    }
    throw "Error";
}

void Case::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Case::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getCase();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Case::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::xpand3::expression::ExpressionPackage::CASE__CONDITION:
    {
    }
        return;
    case ::xpand3::expression::ExpressionPackage::CASE__THENPART:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Case::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::xpand3::expression::ExpressionPackage::CASE__CONDITION:
    {
    }
        return;
    case ::xpand3::expression::ExpressionPackage::CASE__THENPART:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

