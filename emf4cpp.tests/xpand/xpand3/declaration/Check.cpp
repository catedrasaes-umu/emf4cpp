// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/Check.cpp
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

#include "Check.hpp"
#include <xpand3/declaration/AbstractDeclaration.hpp>
#include <xpand3/File.hpp>
#include <xpand3/DeclaredParameter.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/declaration/DeclarationPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::xpand3::declaration;

// Default constructor
Check::Check() :
        m_msg(0), m_constraint(0)
{

    /*PROTECTED REGION ID(CheckImpl__CheckImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Check::~Check()
{
    if (m_msg)
    {
        delete m_msg;
    }
    if (m_constraint)
    {
        delete m_constraint;
    }
}

/*PROTECTED REGION ID(Check.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::ecore::EBoolean Check::isErrorSeverity() const
{
    return m_errorSeverity;
}

void Check::setErrorSeverity(::ecore::EBoolean _errorSeverity)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_errorSeverity = m_errorSeverity;
#endif
    m_errorSeverity = _errorSeverity;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::declaration::DeclarationPackage::_instance()->getCheck__errorSeverity(),
                _old_errorSeverity,
                m_errorSeverity
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& Check::getFeature() const
{
    return m_feature;
}

void Check::setFeature(::ecore::EString const& _feature)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_feature = m_feature;
#endif
    m_feature = _feature;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::declaration::DeclarationPackage::_instance()->getCheck__feature(),
                _old_feature,
                m_feature
        );
        eNotify(&notification);
    }
#endif
}

// References

::xpand3::expression::AbstractExpression_ptr Check::getMsg() const
{
    return m_msg;
}

void Check::setMsg(::xpand3::expression::AbstractExpression_ptr _msg)
{
    ::xpand3::expression::AbstractExpression_ptr _old_msg = m_msg;

    m_msg = _msg;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::declaration::DeclarationPackage::_instance()->getCheck__msg(),
                _old_msg,
                m_msg
        );
        eNotify(&notification);
    }
#endif

    delete _old_msg;
    m_msg->_setEContainer(this,
            ::xpand3::declaration::DeclarationPackage::_instance()->getCheck__msg());
}

::xpand3::expression::AbstractExpression_ptr Check::getConstraint() const
{
    return m_constraint;
}

void Check::setConstraint(
        ::xpand3::expression::AbstractExpression_ptr _constraint)
{
    ::xpand3::expression::AbstractExpression_ptr _old_constraint = m_constraint;

    m_constraint = _constraint;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::declaration::DeclarationPackage::_instance()->getCheck__constraint(),
                _old_constraint,
                m_constraint
        );
        eNotify(&notification);
    }
#endif

    delete _old_constraint;
    m_constraint->_setEContainer(this,
            ::xpand3::declaration::DeclarationPackage::_instance()->getCheck__constraint());
}

