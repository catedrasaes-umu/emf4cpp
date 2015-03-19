// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/UnaryOperation.cpp
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

#include "UnaryOperation.hpp"
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
UnaryOperation::UnaryOperation() :
    m_operator(0), m_operand(0)
{

    /*PROTECTED REGION ID(UnaryOperationImpl__UnaryOperationImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

UnaryOperation::~UnaryOperation()
{
    if (m_operator)
    {
        delete m_operator;
    }
}

/*PROTECTED REGION ID(UnaryOperation.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes

// References
::xpand3::Identifier_ptr UnaryOperation::getOperator()
{
    return m_operator;
}

void UnaryOperation::setOperator(::xpand3::Identifier_ptr _operator)
{
    ::xpand3::Identifier_ptr _old_operator = m_operator;

    m_operator = _operator;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getUnaryOperation__operator(),
                _old_operator,
                m_operator
        );
        eNotify(&notification);
    }
#endif

    delete _old_operator;
}

::xpand3::expression::AbstractExpression_ptr UnaryOperation::getOperand()
{
    return m_operand;
}

void UnaryOperation::setOperand(
        ::xpand3::expression::AbstractExpression_ptr _operand)
{
    ::xpand3::expression::AbstractExpression_ptr _old_operand = m_operand;

    m_operand = _operand;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getUnaryOperation__operand(),
                _old_operand,
                m_operand
        );
        eNotify(&notification);
    }
#endif

}

