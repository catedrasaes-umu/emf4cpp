// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/LetStatement.cpp
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

#include "LetStatement.hpp"
#include <xpand3/statement/AbstractStatementWithBody.hpp>
#include <xpand3/statement/AbstractStatement.hpp>
#include <xpand3/Identifier.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/statement/StatementPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(LetStatement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::statement;

// Default constructor
LetStatement::LetStatement() :
        m_varName(0), m_varValue(0)
{

    /*PROTECTED REGION ID(LetStatementImpl__LetStatementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

LetStatement::~LetStatement()
{
    if (m_varName)
    {
        m_varName.reset();
    }
    if (m_varValue)
    {
        m_varValue.reset();
    }
}

// Attributes

// References

::xpand3::Identifier_ptr LetStatement::getVarName() const
{
    return m_varName;
}

void LetStatement::setVarName(::xpand3::Identifier_ptr _varName)
{
    ::xpand3::Identifier_ptr _old_varName = m_varName;

    m_varName = _varName;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::statement::StatementPackage::_instance()->getLetStatement__varName(),
                _old_varName,
                m_varName
        );
        eNotify(&notification);
    }
#endif

    if (_old_varName)
        _old_varName->_setEContainer(LetStatement_ptr(),
                ::xpand3::statement::StatementPackage::_instance()->getLetStatement__varName());
    m_varName->_setEContainer(_this(),
            ::xpand3::statement::StatementPackage::_instance()->getLetStatement__varName());
}

::xpand3::expression::AbstractExpression_ptr LetStatement::getVarValue() const
{
    return m_varValue;
}

void LetStatement::setVarValue(
        ::xpand3::expression::AbstractExpression_ptr _varValue)
{
    ::xpand3::expression::AbstractExpression_ptr _old_varValue = m_varValue;

    m_varValue = _varValue;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::statement::StatementPackage::_instance()->getLetStatement__varValue(),
                _old_varValue,
                m_varValue
        );
        eNotify(&notification);
    }
#endif

    if (_old_varValue)
        _old_varValue->_setEContainer(LetStatement_ptr(),
                ::xpand3::statement::StatementPackage::_instance()->getLetStatement__varValue());
    m_varValue->_setEContainer(_this(),
            ::xpand3::statement::StatementPackage::_instance()->getLetStatement__varValue());
}

