// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/FeatureCall.cpp
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

#include "FeatureCall.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/expression/ExpressionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(FeatureCall.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::expression;

// Default constructor
FeatureCall::FeatureCall() :
        m_target(0), m_name(0)
{

    /*PROTECTED REGION ID(FeatureCallImpl__FeatureCallImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

FeatureCall::~FeatureCall()
{
    if (m_target)
    {
        delete m_target;
    }
    if (m_name)
    {
        delete m_name;
    }
}

// Attributes

// References

::xpand3::expression::AbstractExpression_ptr FeatureCall::getTarget() const
{
    return m_target;
}

void FeatureCall::setTarget(
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
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getFeatureCall__target(),
                _old_target,
                m_target
        );
        eNotify(&notification);
    }
#endif

    delete _old_target;
    m_target->_setEContainer(this,
            ::xpand3::expression::ExpressionPackage::_instance()->getFeatureCall__target());
}

::xpand3::Identifier_ptr FeatureCall::getName() const
{
    return m_name;
}

void FeatureCall::setName(::xpand3::Identifier_ptr _name)
{
    ::xpand3::Identifier_ptr _old_name = m_name;

    m_name = _name;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getFeatureCall__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif

    delete _old_name;
    m_name->_setEContainer(this,
            ::xpand3::expression::ExpressionPackage::_instance()->getFeatureCall__name());
}

