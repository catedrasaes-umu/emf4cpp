// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/DeclaredParameter.cpp
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

#include "DeclaredParameter.hpp"
#include <xpand3/SyntaxElement.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/Xpand3Package.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(DeclaredParameter.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3;

// Default constructor
DeclaredParameter::DeclaredParameter() :
        m_name(0), m_type(0)
{

    /*PROTECTED REGION ID(DeclaredParameterImpl__DeclaredParameterImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

DeclaredParameter::~DeclaredParameter()
{
    if (m_name)
    {
        delete m_name;
    }
    if (m_type)
    {
        delete m_type;
    }
}

// Attributes

// References

::xpand3::Identifier_ptr DeclaredParameter::getName() const
{
    return m_name;
}

void DeclaredParameter::setName(::xpand3::Identifier_ptr _name)
{
    ::xpand3::Identifier_ptr _old_name = m_name;

    m_name = _name;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::Xpand3Package::_instance()->getDeclaredParameter__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif

    delete _old_name;
    m_name->_setEContainer(this,
            ::xpand3::Xpand3Package::_instance()->getDeclaredParameter__name());
}

::xpand3::Identifier_ptr DeclaredParameter::getType() const
{
    return m_type;
}

void DeclaredParameter::setType(::xpand3::Identifier_ptr _type)
{
    ::xpand3::Identifier_ptr _old_type = m_type;

    m_type = _type;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::Xpand3Package::_instance()->getDeclaredParameter__type(),
                _old_type,
                m_type
        );
        eNotify(&notification);
    }
#endif

    delete _old_type;
    m_type->_setEContainer(this,
            ::xpand3::Xpand3Package::_instance()->getDeclaredParameter__type());
}

