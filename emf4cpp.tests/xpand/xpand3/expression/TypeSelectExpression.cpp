// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/TypeSelectExpression.cpp
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

#include "TypeSelectExpression.hpp"
#include <xpand3/expression/FeatureCall.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/expression/ExpressionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TypeSelectExpression.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::expression;

// Default constructor
TypeSelectExpression::TypeSelectExpression() :
        m_typeLiteral(0)
{

    /*PROTECTED REGION ID(TypeSelectExpressionImpl__TypeSelectExpressionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

TypeSelectExpression::~TypeSelectExpression()
{
    if (m_typeLiteral)
    {
        m_typeLiteral.reset();
    }
}

// Attributes

// References

::xpand3::Identifier_ptr TypeSelectExpression::getTypeLiteral() const
{
    return m_typeLiteral;
}

void TypeSelectExpression::setTypeLiteral(::xpand3::Identifier_ptr _typeLiteral)
{
    ::xpand3::Identifier_ptr _old_typeLiteral = m_typeLiteral;

    m_typeLiteral = _typeLiteral;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::expression::ExpressionPackage::_instance()->getTypeSelectExpression__typeLiteral(),
                _old_typeLiteral,
                m_typeLiteral
        );
        eNotify(&notification);
    }
#endif

    if (_old_typeLiteral)
        _old_typeLiteral->_setEContainer(TypeSelectExpression_ptr(),
                ::xpand3::expression::ExpressionPackage::_instance()->getTypeSelectExpression__typeLiteral());
    m_typeLiteral->_setEContainer(_this(),
            ::xpand3::expression::ExpressionPackage::_instance()->getTypeSelectExpression__typeLiteral());
}

