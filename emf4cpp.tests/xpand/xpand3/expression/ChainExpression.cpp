// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/ChainExpression.cpp
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

#include "ChainExpression.hpp"
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
ChainExpression::ChainExpression() :
        m_first(0), m_next(0)
{

    /*PROTECTED REGION ID(ChainExpressionImpl__ChainExpressionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ChainExpression::~ChainExpression()
{
    if (m_first)
    {
        delete m_first;
    }
    if (m_next)
    {
        delete m_next;
    }
}

/*PROTECTED REGION ID(ChainExpression.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
::xpand3::expression::AbstractExpression_ptr ChainExpression::getFirst() const
{
    return m_first;
}

void ChainExpression::setFirst(
        ::xpand3::expression::AbstractExpression_ptr _first)
{
    ::xpand3::expression::AbstractExpression_ptr _old_first = m_first;

    m_first = _first;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getChainExpression__first(),
                _old_first,
                m_first
        );
        eNotify(&notification);
    }
#endif

    delete _old_first;
    m_first->_setEContainer(this,
            ::xpand3::expression::ExpressionPackage::_instance()->getChainExpression__first());
}

::xpand3::expression::AbstractExpression_ptr ChainExpression::getNext() const
{
    return m_next;
}

void ChainExpression::setNext(
        ::xpand3::expression::AbstractExpression_ptr _next)
{
    ::xpand3::expression::AbstractExpression_ptr _old_next = m_next;

    m_next = _next;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getChainExpression__next(),
                _old_next,
                m_next
        );
        eNotify(&notification);
    }
#endif

    delete _old_next;
    m_next->_setEContainer(this,
            ::xpand3::expression::ExpressionPackage::_instance()->getChainExpression__next());
}

