// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/ExpressionStatement.cpp
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

#include "ExpressionStatement.hpp"
#include <xpand3/statement/AbstractStatement.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/statement/StatementPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ExpressionStatement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::statement;

// Default constructor
ExpressionStatement::ExpressionStatement() :
        m_expression(0)
{

    /*PROTECTED REGION ID(ExpressionStatementImpl__ExpressionStatementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ExpressionStatement::~ExpressionStatement()
{
    if (m_expression)
    {
        m_expression.reset();
    }
}

// Attributes

// References

::xpand3::expression::AbstractExpression_ptr ExpressionStatement::getExpression() const
{
    return m_expression;
}

void ExpressionStatement::setExpression(
        ::xpand3::expression::AbstractExpression_ptr _expression)
{
    ::xpand3::expression::AbstractExpression_ptr _old_expression = m_expression;

    m_expression = _expression;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::statement::StatementPackage::_instance()->getExpressionStatement__expression(),
                _old_expression,
                m_expression
        );
        eNotify(&notification);
    }
#endif

    if (_old_expression)
        _old_expression->_setEContainer(ExpressionStatement_ptr(),
                ::xpand3::statement::StatementPackage::_instance()->getExpressionStatement__expression());
    m_expression->_setEContainer(_this(),
            ::xpand3::statement::StatementPackage::_instance()->getExpressionStatement__expression());
}

