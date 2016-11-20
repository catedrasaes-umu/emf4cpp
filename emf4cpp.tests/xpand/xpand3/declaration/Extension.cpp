// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/Extension.cpp
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

#include "Extension.hpp"
#include <xpand3/declaration/AbstractNamedDeclaration.hpp>
#include <xpand3/File.hpp>
#include <xpand3/DeclaredParameter.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/declaration/DeclarationPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::xpand3::declaration;

// Default constructor
Extension::Extension() :
        m_body(0), m_returnType(0)
{

    /*PROTECTED REGION ID(ExtensionImpl__ExtensionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Extension::~Extension()
{
    if (m_body)
    {
        delete m_body;
    }
    if (m_returnType)
    {
        delete m_returnType;
    }
}

/*PROTECTED REGION ID(Extension.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::ecore::EBoolean Extension::isCached() const
{
    return m_cached;
}

void Extension::setCached(::ecore::EBoolean _cached)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_cached = m_cached;
#endif
    m_cached = _cached;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::declaration::DeclarationPackage::_instance()->getExtension__cached(),
                _old_cached,
                m_cached
        );
        eNotify(&notification);
    }
#endif
}

// References

::xpand3::expression::AbstractExpression_ptr Extension::getBody() const
{
    return m_body;
}

void Extension::setBody(::xpand3::expression::AbstractExpression_ptr _body)
{
    ::xpand3::expression::AbstractExpression_ptr _old_body = m_body;

    m_body = _body;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::declaration::DeclarationPackage::_instance()->getExtension__body(),
                _old_body,
                m_body
        );
        eNotify(&notification);
    }
#endif

    delete _old_body;
    m_body->_setEContainer(this,
            ::xpand3::declaration::DeclarationPackage::_instance()->getExtension__body());
}

::xpand3::Identifier_ptr Extension::getReturnType() const
{
    return m_returnType;
}

void Extension::setReturnType(::xpand3::Identifier_ptr _returnType)
{
    ::xpand3::Identifier_ptr _old_returnType = m_returnType;

    m_returnType = _returnType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::declaration::DeclarationPackage::_instance()->getExtension__returnType(),
                _old_returnType,
                m_returnType
        );
        eNotify(&notification);
    }
#endif

    delete _old_returnType;
    m_returnType->_setEContainer(this,
            ::xpand3::declaration::DeclarationPackage::_instance()->getExtension__returnType());
}

