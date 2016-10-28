// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/CollectionExpression.cpp
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

#include "CollectionExpression.hpp"
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

using namespace ::xpand3::expression;

// Default constructor
CollectionExpression::CollectionExpression() :
        m_closure(0), m_eleName(0)
{

    /*PROTECTED REGION ID(CollectionExpressionImpl__CollectionExpressionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

CollectionExpression::~CollectionExpression()
{
    if (m_closure)
    {
        delete m_closure;
    }
    if (m_eleName)
    {
        delete m_eleName;
    }
}

/*PROTECTED REGION ID(CollectionExpression.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
::xpand3::expression::AbstractExpression_ptr CollectionExpression::getClosure() const
{
    return m_closure;
}

void CollectionExpression::setClosure(
        ::xpand3::expression::AbstractExpression_ptr _closure)
{
    ::xpand3::expression::AbstractExpression_ptr _old_closure = m_closure;

    m_closure = _closure;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getCollectionExpression__closure(),
                _old_closure,
                m_closure
        );
        eNotify(&notification);
    }
#endif

    delete _old_closure;
    m_closure->_setEContainer(this,
            ::xpand3::expression::ExpressionPackage::_instance()->getCollectionExpression__closure());
}

::xpand3::Identifier_ptr CollectionExpression::getEleName() const
{
    return m_eleName;
}

void CollectionExpression::setEleName(::xpand3::Identifier_ptr _eleName)
{
    ::xpand3::Identifier_ptr _old_eleName = m_eleName;

    m_eleName = _eleName;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getCollectionExpression__eleName(),
                _old_eleName,
                m_eleName
        );
        eNotify(&notification);
    }
#endif

    delete _old_eleName;
    m_eleName->_setEContainer(this,
            ::xpand3::expression::ExpressionPackage::_instance()->getCollectionExpression__eleName());
}

