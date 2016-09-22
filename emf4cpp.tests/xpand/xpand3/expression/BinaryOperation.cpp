// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/BinaryOperation.cpp
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

#include "BinaryOperation.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/expression/ExpressionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::xpand3::expression;

// Default constructor
BinaryOperation::BinaryOperation() :
        m_left(0), m_right(0), m_operator(0)
{

    /*PROTECTED REGION ID(BinaryOperationImpl__BinaryOperationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

BinaryOperation::~BinaryOperation()
{
    if (m_left)
    {
        delete m_left;
    }
    if (m_right)
    {
        delete m_right;
    }
    if (m_operator)
    {
        delete m_operator;
    }
}

/*PROTECTED REGION ID(BinaryOperation.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
::xpand3::expression::AbstractExpression_ptr BinaryOperation::getLeft()
{
    return m_left;
}

void BinaryOperation::setLeft(
        ::xpand3::expression::AbstractExpression_ptr _left)
{
    ::xpand3::expression::AbstractExpression_ptr _old_left = m_left;

    m_left = _left;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getBinaryOperation__left(),
                _old_left,
                m_left
        );
        eNotify(&notification);
    }
#endif

    delete _old_left;
}

::xpand3::expression::AbstractExpression_ptr BinaryOperation::getRight()
{
    return m_right;
}

void BinaryOperation::setRight(
        ::xpand3::expression::AbstractExpression_ptr _right)
{
    ::xpand3::expression::AbstractExpression_ptr _old_right = m_right;

    m_right = _right;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getBinaryOperation__right(),
                _old_right,
                m_right
        );
        eNotify(&notification);
    }
#endif

    delete _old_right;
}

::xpand3::Identifier_ptr BinaryOperation::getOperator()
{
    return m_operator;
}

void BinaryOperation::setOperator(::xpand3::Identifier_ptr _operator)
{
    ::xpand3::Identifier_ptr _old_operator = m_operator;

    m_operator = _operator;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getBinaryOperation__operator(),
                _old_operator,
                m_operator
        );
        eNotify(&notification);
    }
#endif

    delete _old_operator;
}

