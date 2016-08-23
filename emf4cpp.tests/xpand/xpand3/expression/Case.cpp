// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/Case.cpp
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

#include "Case.hpp"
#include <xpand3/SyntaxElement.hpp>
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
Case::Case() :
        m_condition(0), m_thenPart(0)
{

    /*PROTECTED REGION ID(CaseImpl__CaseImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Case::~Case()
{
    if (m_condition)
    {
        delete m_condition;
    }
    if (m_thenPart)
    {
        delete m_thenPart;
    }
}

/*PROTECTED REGION ID(Case.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
::xpand3::expression::AbstractExpression_ptr Case::getCondition()
{
    return m_condition;
}

void Case::setCondition(::xpand3::expression::AbstractExpression_ptr _condition)
{
    ::xpand3::expression::AbstractExpression_ptr _old_condition = m_condition;

    m_condition = _condition;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getCase__condition(),
                _old_condition,
                m_condition
        );
        eNotify(&notification);
    }
#endif

    delete _old_condition;
}

::xpand3::expression::AbstractExpression_ptr Case::getThenPart()
{
    return m_thenPart;
}

void Case::setThenPart(::xpand3::expression::AbstractExpression_ptr _thenPart)
{
    ::xpand3::expression::AbstractExpression_ptr _old_thenPart = m_thenPart;

    m_thenPart = _thenPart;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getCase__thenPart(),
                _old_thenPart,
                m_thenPart
        );
        eNotify(&notification);
    }
#endif

    delete _old_thenPart;
}

