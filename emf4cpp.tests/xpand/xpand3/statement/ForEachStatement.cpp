// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/ForEachStatement.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON Gmbh 2016 <soeren.henning@inchron.com>
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
        delete m_target;
    }
    if (m_separator)
    {
        delete m_separator;
    }
    if (m_variable)
    {
        delete m_variable;
    }
    if (m_iteratorName)
    {
        delete m_iteratorName;
    }
}

/*PROTECTED REGION ID(ForEachStatement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
::xpand3::expression::AbstractExpression_ptr ForEachStatement::getTarget()
{
    return m_target;
}

void ForEachStatement::setTarget(
        ::xpand3::expression::AbstractExpression_ptr _target)
{
    ::xpand3::expression::AbstractExpression_ptr _old_target = m_target;

    m_target = _target;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__target(),
                _old_target,
                m_target
        );
        eNotify(&notification);
    }
#endif

    delete _old_target;
    m_target->_setEContainer(this,
            ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__target());
}

::xpand3::expression::AbstractExpression_ptr ForEachStatement::getSeparator()
{
    return m_separator;
}

void ForEachStatement::setSeparator(
        ::xpand3::expression::AbstractExpression_ptr _separator)
{
    ::xpand3::expression::AbstractExpression_ptr _old_separator = m_separator;

    m_separator = _separator;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__separator(),
                _old_separator,
                m_separator
        );
        eNotify(&notification);
    }
#endif

    delete _old_separator;
    m_separator->_setEContainer(this,
            ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__separator());
}

::xpand3::Identifier_ptr ForEachStatement::getVariable()
{
    return m_variable;
}

void ForEachStatement::setVariable(::xpand3::Identifier_ptr _variable)
{
    ::xpand3::Identifier_ptr _old_variable = m_variable;

    m_variable = _variable;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__variable(),
                _old_variable,
                m_variable
        );
        eNotify(&notification);
    }
#endif

    delete _old_variable;
    m_variable->_setEContainer(this,
            ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__variable());
}

::xpand3::Identifier_ptr ForEachStatement::getIteratorName()
{
    return m_iteratorName;
}

void ForEachStatement::setIteratorName(::xpand3::Identifier_ptr _iteratorName)
{
    ::xpand3::Identifier_ptr _old_iteratorName = m_iteratorName;

    m_iteratorName = _iteratorName;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__iteratorName(),
                _old_iteratorName,
                m_iteratorName
        );
        eNotify(&notification);
    }
#endif

    delete _old_iteratorName;
    m_iteratorName->_setEContainer(this,
            ::xpand3::statement::StatementPackage::_instance()->getForEachStatement__iteratorName());
}

