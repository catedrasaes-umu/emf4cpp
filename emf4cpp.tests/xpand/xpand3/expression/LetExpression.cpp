// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/LetExpression.cpp
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

#include "LetExpression.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/expression/ExpressionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(LetExpression.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::expression;

// Default constructor
LetExpression::LetExpression() :
        m_varExpression(0), m_targetExpression(0), m_varName(0)
{

    /*PROTECTED REGION ID(LetExpressionImpl__LetExpressionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

LetExpression::~LetExpression()
{
    if (m_varExpression)
    {
        delete m_varExpression;
    }
    if (m_targetExpression)
    {
        delete m_targetExpression;
    }
    if (m_varName)
    {
        delete m_varName;
    }
}

// Attributes

// References

::xpand3::expression::AbstractExpression_ptr LetExpression::getVarExpression() const
{
    return m_varExpression;
}

void LetExpression::setVarExpression(
        ::xpand3::expression::AbstractExpression_ptr _varExpression)
{
    ::xpand3::expression::AbstractExpression_ptr _old_varExpression =
            m_varExpression;

    m_varExpression = _varExpression;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getLetExpression__varExpression(),
                _old_varExpression,
                m_varExpression
        );
        eNotify(&notification);
    }
#endif

    delete _old_varExpression;
    m_varExpression->_setEContainer(this,
            ::xpand3::expression::ExpressionPackage::_instance()->getLetExpression__varExpression());
}

::xpand3::expression::AbstractExpression_ptr LetExpression::getTargetExpression() const
{
    return m_targetExpression;
}

void LetExpression::setTargetExpression(
        ::xpand3::expression::AbstractExpression_ptr _targetExpression)
{
    ::xpand3::expression::AbstractExpression_ptr _old_targetExpression =
            m_targetExpression;

    m_targetExpression = _targetExpression;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getLetExpression__targetExpression(),
                _old_targetExpression,
                m_targetExpression
        );
        eNotify(&notification);
    }
#endif

    delete _old_targetExpression;
    m_targetExpression->_setEContainer(this,
            ::xpand3::expression::ExpressionPackage::_instance()->getLetExpression__targetExpression());
}

::xpand3::Identifier_ptr LetExpression::getVarName() const
{
    return m_varName;
}

void LetExpression::setVarName(::xpand3::Identifier_ptr _varName)
{
    ::xpand3::Identifier_ptr _old_varName = m_varName;

    m_varName = _varName;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getLetExpression__varName(),
                _old_varName,
                m_varName
        );
        eNotify(&notification);
    }
#endif

    delete _old_varName;
    m_varName->_setEContainer(this,
            ::xpand3::expression::ExpressionPackage::_instance()->getLetExpression__varName());
}

