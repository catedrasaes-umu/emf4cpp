// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/SwitchExpression.cpp
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

#include "SwitchExpression.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/expression/Case.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/expression/ExpressionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::xpand3::expression;

// Default constructor
SwitchExpression::SwitchExpression() :
        m_switchExpr(0), m_defaultExpr(0)
{

    m_cases.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::xpand3::expression::Case, -1, true, false >(this,
                    ::xpand3::expression::ExpressionPackage::_instance()->getSwitchExpression__cases()));

    /*PROTECTED REGION ID(SwitchExpressionImpl__SwitchExpressionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

SwitchExpression::~SwitchExpression()
{
    if (m_switchExpr)
    {
        delete m_switchExpr;
    }
    if (m_defaultExpr)
    {
        delete m_defaultExpr;
    }
}

/*PROTECTED REGION ID(SwitchExpression.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
::xpand3::expression::AbstractExpression_ptr SwitchExpression::getSwitchExpr() const
{
    return m_switchExpr;
}

void SwitchExpression::setSwitchExpr(
        ::xpand3::expression::AbstractExpression_ptr _switchExpr)
{
    ::xpand3::expression::AbstractExpression_ptr _old_switchExpr = m_switchExpr;

    m_switchExpr = _switchExpr;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getSwitchExpression__switchExpr(),
                _old_switchExpr,
                m_switchExpr
        );
        eNotify(&notification);
    }
#endif

    delete _old_switchExpr;
    m_switchExpr->_setEContainer(this,
            ::xpand3::expression::ExpressionPackage::_instance()->getSwitchExpression__switchExpr());
}

::xpand3::expression::AbstractExpression_ptr SwitchExpression::getDefaultExpr() const
{
    return m_defaultExpr;
}

void SwitchExpression::setDefaultExpr(
        ::xpand3::expression::AbstractExpression_ptr _defaultExpr)
{
    ::xpand3::expression::AbstractExpression_ptr _old_defaultExpr =
            m_defaultExpr;

    m_defaultExpr = _defaultExpr;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getSwitchExpression__defaultExpr(),
                _old_defaultExpr,
                m_defaultExpr
        );
        eNotify(&notification);
    }
#endif

    delete _old_defaultExpr;
    m_defaultExpr->_setEContainer(this,
            ::xpand3::expression::ExpressionPackage::_instance()->getSwitchExpression__defaultExpr());
}

const ::ecorecpp::mapping::EList< ::xpand3::expression::Case >& SwitchExpression::getCases() const
{
    return *m_cases;
}

::ecorecpp::mapping::EList< ::xpand3::expression::Case >& SwitchExpression::getCases()
{
    return *m_cases;
}

