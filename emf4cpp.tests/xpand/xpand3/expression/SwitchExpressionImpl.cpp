// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/SwitchExpressionImpl.cpp
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

#include "SwitchExpression.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/expression/Case.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::xpand3::expression;

/*PROTECTED REGION ID(SwitchExpressionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void SwitchExpression::_initialize()
{
    // Supertypes
    ::xpand3::expression::AbstractExpression::_initialize();

    // Rerefences
    if (m_switchExpr)
    {
        m_switchExpr->_initialize();
        m_switchExpr->_setEContainer(
                this,
                ::xpand3::expression::ExpressionPackage::_instance()->getSwitchExpression__switchExpr());
    }
    if (m_defaultExpr)
    {
        m_defaultExpr->_initialize();
        m_defaultExpr->_setEContainer(
                this,
                ::xpand3::expression::ExpressionPackage::_instance()->getSwitchExpression__defaultExpr());
    }
    for (size_t i = 0; i < m_cases->size(); i++)
    {
        (*m_cases)[i]->_initialize();
        (*m_cases)[i]->_setEContainer(
                this,
                ::xpand3::expression::ExpressionPackage::_instance()->getSwitchExpression__cases());
    }

    /*PROTECTED REGION ID(SwitchExpressionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject SwitchExpression::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EInt >::toAny(_any, m_line);
    }
        return _any;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__START:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EInt >::toAny(_any, m_start);
    }
        return _any;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__END:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EInt >::toAny(_any, m_end);
    }
        return _any;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::toAny(_any,
                m_fileName);
    }
        return _any;
    case ::xpand3::expression::ExpressionPackage::SWITCHEXPRESSION__SWITCHEXPR:
    {
        _any = static_cast< ::ecore::EObject* > (m_switchExpr);
    }
        return _any;
    case ::xpand3::expression::ExpressionPackage::SWITCHEXPRESSION__DEFAULTEXPR:
    {
        _any = static_cast< ::ecore::EObject* > (m_defaultExpr);
    }
        return _any;
    case ::xpand3::expression::ExpressionPackage::SWITCHEXPRESSION__CASES:
    {
        _any = m_cases->asEListOf< ::ecore::EObject > ();
    }
        return _any;

    }
    throw "Error";
}

void SwitchExpression::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EInt >::fromAny(_newValue,
                m_line);
    }
        return;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__START:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EInt >::fromAny(_newValue,
                m_start);
    }
        return;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__END:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EInt >::fromAny(_newValue,
                m_end);
    }
        return;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::fromAny(_newValue,
                m_fileName);
    }
        return;
    case ::xpand3::expression::ExpressionPackage::SWITCHEXPRESSION__SWITCHEXPR:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::xpand3::expression::AbstractExpression_ptr
                _t1 =
                        dynamic_cast< ::xpand3::expression::AbstractExpression_ptr > (_t0);
        ::xpand3::expression::SwitchExpression::setSwitchExpr(_t1);
    }
        return;
    case ::xpand3::expression::ExpressionPackage::SWITCHEXPRESSION__DEFAULTEXPR:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::xpand3::expression::AbstractExpression_ptr
                _t1 =
                        dynamic_cast< ::xpand3::expression::AbstractExpression_ptr > (_t0);
        ::xpand3::expression::SwitchExpression::setDefaultExpr(_t1);
    }
        return;
    case ::xpand3::expression::ExpressionPackage::SWITCHEXPRESSION__CASES:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::xpand3::expression::SwitchExpression::getCases().clear();
        ::xpand3::expression::SwitchExpression::getCases().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean SwitchExpression::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE:
        return ::ecorecpp::mapping::set_traits< ::ecore::EInt >::is_set(m_line);
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__START:
        return ::ecorecpp::mapping::set_traits< ::ecore::EInt >::is_set(m_start);
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__END:
        return ::ecorecpp::mapping::set_traits< ::ecore::EInt >::is_set(m_end);
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_fileName);
    case ::xpand3::expression::ExpressionPackage::SWITCHEXPRESSION__SWITCHEXPR:
        return m_switchExpr;
    case ::xpand3::expression::ExpressionPackage::SWITCHEXPRESSION__DEFAULTEXPR:
        return m_defaultExpr;
    case ::xpand3::expression::ExpressionPackage::SWITCHEXPRESSION__CASES:
        return m_cases && m_cases->size();

    }
    throw "Error";
}

void SwitchExpression::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr SwitchExpression::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::xpand3::expression::ExpressionPackage_ptr > (::xpand3::expression::ExpressionPackage::_instance())->getSwitchExpression();
    return _eclass;
}

