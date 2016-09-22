// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/ForEachStatementImpl.cpp
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

#include "ForEachStatement.hpp"
#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/statement/AbstractStatementWithBody.hpp>
#include <xpand3/statement/AbstractStatement.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::xpand3::statement;

/*PROTECTED REGION ID(ForEachStatementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void ForEachStatement::_initialize()
{
    // Supertypes
    ::xpand3::statement::AbstractStatementWithBody::_initialize();

    // Rerefences
    if (m_target)
    {
        m_target->_initialize();
        m_target->_setEContainer(this,
                ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__target());
    }
    if (m_separator)
    {
        m_separator->_initialize();
        m_separator->_setEContainer(this,
                ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__separator());
    }
    if (m_variable)
    {
        m_variable->_initialize();
        m_variable->_setEContainer(this,
                ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__variable());
    }
    if (m_iteratorName)
    {
        m_iteratorName->_initialize();
        m_iteratorName->_setEContainer(this,
                ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__iteratorName());
    }

    /*PROTECTED REGION ID(ForEachStatementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ForEachStatement::eGet(::ecore::EInt _featureID,
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
    case ::xpand3::statement::StatementPackage::ABSTRACTSTATEMENTWITHBODY__BODY:
    {
        _any = m_body->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__TARGET:
    {
        _any = static_cast< ::ecore::EObject* >(m_target);
    }
        return _any;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__SEPARATOR:
    {
        _any = static_cast< ::ecore::EObject* >(m_separator);
    }
        return _any;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__VARIABLE:
    {
        _any = static_cast< ::ecore::EObject* >(m_variable);
    }
        return _any;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__ITERATORNAME:
    {
        _any = static_cast< ::ecore::EObject* >(m_iteratorName);
    }
        return _any;

    }
    throw "Error";
}

void ForEachStatement::eSet(::ecore::EInt _featureID,
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
    case ::xpand3::statement::StatementPackage::ABSTRACTSTATEMENTWITHBODY__BODY:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::xpand3::statement::AbstractStatementWithBody::getBody().clear();
        ::xpand3::statement::AbstractStatementWithBody::getBody().insert_all(
                *_t0);
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__TARGET:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::expression::AbstractExpression_ptr _t1 =
                dynamic_cast< ::xpand3::expression::AbstractExpression_ptr >(_t0);
        ::xpand3::statement::ForEachStatement::setTarget(_t1);
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__SEPARATOR:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::expression::AbstractExpression_ptr _t1 =
                dynamic_cast< ::xpand3::expression::AbstractExpression_ptr >(_t0);
        ::xpand3::statement::ForEachStatement::setSeparator(_t1);
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__VARIABLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::Identifier_ptr _t1 =
                dynamic_cast< ::xpand3::Identifier_ptr >(_t0);
        ::xpand3::statement::ForEachStatement::setVariable(_t1);
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__ITERATORNAME:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::Identifier_ptr _t1 =
                dynamic_cast< ::xpand3::Identifier_ptr >(_t0);
        ::xpand3::statement::ForEachStatement::setIteratorName(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ForEachStatement::eIsSet(::ecore::EInt _featureID)
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
    case ::xpand3::statement::StatementPackage::ABSTRACTSTATEMENTWITHBODY__BODY:
        return m_body && m_body->size();
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__TARGET:
        return m_target;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__SEPARATOR:
        return m_separator;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__VARIABLE:
        return m_variable;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__ITERATORNAME:
        return m_iteratorName;

    }
    throw "Error";
}

void ForEachStatement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ForEachStatement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::xpand3::statement::StatementPackage_ptr >(::xpand3::statement::StatementPackage::_instance())->getForEachStatement();
    return _eclass;
}

