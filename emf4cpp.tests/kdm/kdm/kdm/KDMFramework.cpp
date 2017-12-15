// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/KDMFramework.cpp
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

#include "KDMFramework.hpp"
#include <kdm/core/ModelElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/kdm/KdmPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(KDMFramework.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::kdm;

// Default constructor
KDMFramework::KDMFramework()
{

    m_audit.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::kdm::kdm::Audit_ptr,
                    -1, true, false >(this,
                    ::kdm::kdm::KdmPackage::_instance()->getKDMFramework__audit()));
    m_extensionFamily.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::kdm::ExtensionFamily_ptr, -1, true, false >(this,
                    ::kdm::kdm::KdmPackage::_instance()->getKDMFramework__extensionFamily()));

    /*PROTECTED REGION ID(KDMFrameworkImpl__KDMFrameworkImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

KDMFramework::~KDMFramework()
{
}

// Attributes

::kdm::core::String KDMFramework::getName() const
{
    return m_name;
}

void KDMFramework::setName(::kdm::core::String _name)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::String _old_name = m_name;
#endif
    m_name = _name;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::kdm::KdmPackage::_instance()->getKDMFramework__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::kdm::kdm::Audit_ptr >& KDMFramework::getAudit() const
{
    return *m_audit;
}

::ecorecpp::mapping::EList< ::kdm::kdm::Audit_ptr >& KDMFramework::getAudit()
{
    return *m_audit;
}

const ::ecorecpp::mapping::EList< ::kdm::kdm::ExtensionFamily_ptr >& KDMFramework::getExtensionFamily() const
{
    return *m_extensionFamily;
}

::ecorecpp::mapping::EList< ::kdm::kdm::ExtensionFamily_ptr >& KDMFramework::getExtensionFamily()
{
    return *m_extensionFamily;
}

