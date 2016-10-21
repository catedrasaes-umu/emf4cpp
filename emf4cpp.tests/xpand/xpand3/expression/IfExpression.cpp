// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/IfExpression.cpp
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

#include "IfExpression.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/expression/ExpressionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::xpand3::expression;

// Default constructor
IfExpression::IfExpression() :
        m_condition(0), m_thenPart(0), m_elsePart(0)
{

    /*PROTECTED REGION ID(IfExpressionImpl__IfExpressionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

IfExpression::~IfExpression()
{
    if (m_condition)
    {
        delete m_condition;
    }
    if (m_thenPart)
    {
        delete m_thenPart;
    }
    if (m_elsePart)
    {
        delete m_elsePart;
    }
}

/*PROTECTED REGION ID(IfExpression.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
::xpand3::expression::AbstractExpression_ptr IfExpression::getCondition()
{
    return m_condition;
}

void IfExpression::setCondition(
        ::xpand3::expression::AbstractExpression_ptr _condition)
{
    ::xpand3::expression::AbstractExpression_ptr _old_condition = m_condition;

    m_condition = _condition;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getIfExpression__condition(),
                _old_condition,
                m_condition
        );
        eNotify(&notification);
    }
#endif

    delete _old_condition;
    m_condition->_setEContainer(this,
            ::xpand3::expression::ExpressionPackage::_instance()->getIfExpression__condition());
}

::xpand3::expression::AbstractExpression_ptr IfExpression::getThenPart()
{
    return m_thenPart;
}

void IfExpression::setThenPart(
        ::xpand3::expression::AbstractExpression_ptr _thenPart)
{
    ::xpand3::expression::AbstractExpression_ptr _old_thenPart = m_thenPart;

    m_thenPart = _thenPart;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getIfExpression__thenPart(),
                _old_thenPart,
                m_thenPart
        );
        eNotify(&notification);
    }
#endif

    delete _old_thenPart;
    m_thenPart->_setEContainer(this,
            ::xpand3::expression::ExpressionPackage::_instance()->getIfExpression__thenPart());
}

::xpand3::expression::AbstractExpression_ptr IfExpression::getElsePart()
{
    return m_elsePart;
}

void IfExpression::setElsePart(
        ::xpand3::expression::AbstractExpression_ptr _elsePart)
{
    ::xpand3::expression::AbstractExpression_ptr _old_elsePart = m_elsePart;

    m_elsePart = _elsePart;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getIfExpression__elsePart(),
                _old_elsePart,
                m_elsePart
        );
        eNotify(&notification);
    }
#endif

    delete _old_elsePart;
    m_elsePart->_setEContainer(this,
            ::xpand3::expression::ExpressionPackage::_instance()->getIfExpression__elsePart());
}

