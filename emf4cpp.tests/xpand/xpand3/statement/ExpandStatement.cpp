// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/ExpandStatement.cpp
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

#include "ExpandStatement.hpp"
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
ExpandStatement::ExpandStatement() :
        m_separator(0), m_target(0), m_definition(0)
{

    m_parameters.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::xpand3::expression::AbstractExpression, -1, true, false >(
                    this,
                    ::xpand3::statement::StatementPackage::_instance()->getExpandStatement__parameters()));

    /*PROTECTED REGION ID(ExpandStatementImpl__ExpandStatementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ExpandStatement::~ExpandStatement()
{
    if (m_separator)
    {
        delete m_separator;
    }
    if (m_target)
    {
        delete m_target;
    }
    if (m_definition)
    {
        delete m_definition;
    }
}

/*PROTECTED REGION ID(ExpandStatement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::ecore::EBoolean ExpandStatement::isForeach() const
{
    return m_foreach;
}

void ExpandStatement::setForeach(::ecore::EBoolean _foreach)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_foreach = m_foreach;
#endif
    m_foreach = _foreach;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::statement::StatementPackage::_instance()->getExpandStatement__foreach(),
                _old_foreach,
                m_foreach
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::xpand3::expression::AbstractExpression >& ExpandStatement::getParameters() const
{
    return *m_parameters;
}

::ecorecpp::mapping::EList< ::xpand3::expression::AbstractExpression >& ExpandStatement::getParameters()
{
    return *m_parameters;
}

::xpand3::expression::AbstractExpression_ptr ExpandStatement::getSeparator() const
{
    return m_separator;
}

void ExpandStatement::setSeparator(
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
                (::ecore::EStructuralFeature_ptr) ::xpand3::statement::StatementPackage::_instance()->getExpandStatement__separator(),
                _old_separator,
                m_separator
        );
        eNotify(&notification);
    }
#endif

    delete _old_separator;
    m_separator->_setEContainer(this,
            ::xpand3::statement::StatementPackage::_instance()->getExpandStatement__separator());
}

::xpand3::expression::AbstractExpression_ptr ExpandStatement::getTarget() const
{
    return m_target;
}

void ExpandStatement::setTarget(
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
                (::ecore::EStructuralFeature_ptr) ::xpand3::statement::StatementPackage::_instance()->getExpandStatement__target(),
                _old_target,
                m_target
        );
        eNotify(&notification);
    }
#endif

    delete _old_target;
    m_target->_setEContainer(this,
            ::xpand3::statement::StatementPackage::_instance()->getExpandStatement__target());
}

::xpand3::Identifier_ptr ExpandStatement::getDefinition() const
{
    return m_definition;
}

void ExpandStatement::setDefinition(::xpand3::Identifier_ptr _definition)
{
    ::xpand3::Identifier_ptr _old_definition = m_definition;

    m_definition = _definition;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::statement::StatementPackage::_instance()->getExpandStatement__definition(),
                _old_definition,
                m_definition
        );
        eNotify(&notification);
    }
#endif

    delete _old_definition;
    m_definition->_setEContainer(this,
            ::xpand3::statement::StatementPackage::_instance()->getExpandStatement__definition());
}

