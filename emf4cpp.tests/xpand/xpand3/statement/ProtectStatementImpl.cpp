// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/ProtectStatementImpl.cpp
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

#include "ProtectStatement.hpp"
#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/statement/AbstractStatementWithBody.hpp>
#include <xpand3/statement/AbstractStatement.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::xpand3::statement;

/*PROTECTED REGION ID(ProtectStatementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void ProtectStatement::_initialize()
{
    // Supertypes
    ::xpand3::statement::AbstractStatementWithBody::_initialize();

    // References
    if (m_commentStart)
    {
        m_commentStart->_initialize();
    }
    if (m_commentEnd)
    {
        m_commentEnd->_initialize();
    }
    if (m_id)
    {
        m_id->_initialize();
    }

    /*PROTECTED REGION ID(ProtectStatementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ProtectStatement::eGet(::ecore::EInt _featureID,
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
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTSTART:
    {
        _any = static_cast< ::ecore::EObject* >(m_commentStart);
    }
        return _any;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTEND:
    {
        _any = static_cast< ::ecore::EObject* >(m_commentEnd);
    }
        return _any;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__ID:
    {
        _any = static_cast< ::ecore::EObject* >(m_id);
    }
        return _any;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__DISABLE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_disable);
    }
        return _any;

    }
    throw "Error";
}

void ProtectStatement::eSet(::ecore::EInt _featureID,
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
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTSTART:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::expression::AbstractExpression_ptr _t1 =
                dynamic_cast< ::xpand3::expression::AbstractExpression_ptr >(_t0);
        ::xpand3::statement::ProtectStatement::setCommentStart(_t1);
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTEND:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::expression::AbstractExpression_ptr _t1 =
                dynamic_cast< ::xpand3::expression::AbstractExpression_ptr >(_t0);
        ::xpand3::statement::ProtectStatement::setCommentEnd(_t1);
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__ID:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::expression::AbstractExpression_ptr _t1 =
                dynamic_cast< ::xpand3::expression::AbstractExpression_ptr >(_t0);
        ::xpand3::statement::ProtectStatement::setId(_t1);
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__DISABLE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, m_disable);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ProtectStatement::eIsSet(::ecore::EInt _featureID)
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
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTSTART:
        return m_commentStart;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTEND:
        return m_commentEnd;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__ID:
        return m_id;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__DISABLE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_disable);

    }
    throw "Error";
}

void ProtectStatement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ProtectStatement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::xpand3::statement::StatementPackage_ptr >(::xpand3::statement::StatementPackage::_instance())->getProtectStatement();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ProtectStatement::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::xpand3::statement::StatementPackage::ABSTRACTSTATEMENTWITHBODY__BODY:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTSTART:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTEND:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__ID:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ProtectStatement::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::xpand3::statement::StatementPackage::ABSTRACTSTATEMENTWITHBODY__BODY:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTSTART:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTEND:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__ID:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

