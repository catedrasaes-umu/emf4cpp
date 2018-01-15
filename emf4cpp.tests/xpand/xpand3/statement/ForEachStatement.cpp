// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/ForEachStatement.cpp
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

#include "ForEachStatement.hpp"
#include <xpand3/statement/AbstractStatementWithBody.hpp>
#include <xpand3/statement/AbstractStatement.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/statement/StatementPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ForEachStatement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::statement;

// Default constructor
ForEachStatement::ForEachStatement() :
        m_target(0), m_separator(0), m_variable(0), m_iteratorName(0)
{

    /*PROTECTED REGION ID(ForEachStatementImpl__ForEachStatementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ForEachStatement::~ForEachStatement()
{
    if (m_target)
    {
        m_target.reset();
    }
    if (m_separator)
    {
        m_separator.reset();
    }
    if (m_variable)
    {
        m_variable.reset();
    }
    if (m_iteratorName)
    {
        m_iteratorName.reset();
    }
}

// Attributes

// References

::xpand3::expression::AbstractExpression_ptr ForEachStatement::getTarget() const
{
    return m_target;
}

void ForEachStatement::setTarget(
        ::xpand3::expression::AbstractExpression_ptr _target)
{
    if (m_target)
        m_target->_setEContainer(ForEachStatement_ptr(),
                ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__target());
    if (_target)
        _target->_setEContainer(_this(),
                ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__target());

#ifdef ECORECPP_NOTIFICATION_API
    ::xpand3::expression::AbstractExpression_ptr _old_target = m_target;
#endif
    m_target = _target;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__target(),
                _old_target,
                m_target
        );
        eNotify(&notification);
    }
#endif
}

::xpand3::expression::AbstractExpression_ptr ForEachStatement::getSeparator() const
{
    return m_separator;
}

void ForEachStatement::setSeparator(
        ::xpand3::expression::AbstractExpression_ptr _separator)
{
    if (m_separator)
        m_separator->_setEContainer(ForEachStatement_ptr(),
                ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__separator());
    if (_separator)
        _separator->_setEContainer(_this(),
                ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__separator());

#ifdef ECORECPP_NOTIFICATION_API
    ::xpand3::expression::AbstractExpression_ptr _old_separator = m_separator;
#endif
    m_separator = _separator;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__separator(),
                _old_separator,
                m_separator
        );
        eNotify(&notification);
    }
#endif
}

::xpand3::Identifier_ptr ForEachStatement::getVariable() const
{
    return m_variable;
}

void ForEachStatement::setVariable(::xpand3::Identifier_ptr _variable)
{
    if (m_variable)
        m_variable->_setEContainer(ForEachStatement_ptr(),
                ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__variable());
    if (_variable)
        _variable->_setEContainer(_this(),
                ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__variable());

#ifdef ECORECPP_NOTIFICATION_API
    ::xpand3::Identifier_ptr _old_variable = m_variable;
#endif
    m_variable = _variable;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__variable(),
                _old_variable,
                m_variable
        );
        eNotify(&notification);
    }
#endif
}

::xpand3::Identifier_ptr ForEachStatement::getIteratorName() const
{
    return m_iteratorName;
}

void ForEachStatement::setIteratorName(::xpand3::Identifier_ptr _iteratorName)
{
    if (m_iteratorName)
        m_iteratorName->_setEContainer(ForEachStatement_ptr(),
                ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__iteratorName());
    if (_iteratorName)
        _iteratorName->_setEContainer(_this(),
                ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__iteratorName());

#ifdef ECORECPP_NOTIFICATION_API
    ::xpand3::Identifier_ptr _old_iteratorName = m_iteratorName;
#endif
    m_iteratorName = _iteratorName;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__iteratorName(),
                _old_iteratorName,
                m_iteratorName
        );
        eNotify(&notification);
    }
#endif
}

