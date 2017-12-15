// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EReference.cpp
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

#include "EReference.hpp"
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EReference.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

// Default constructor
EReference::EReference() :
        m_resolveProxies(true), m_eOpposite(0), m_eReferenceType(0)
{

    m_eKeys.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::ecore::EAttribute_ptr, -1, false, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEReference__eKeys() :
                            ::ecore::EReference_ptr()));

    /*PROTECTED REGION ID(EReferenceImpl__EReferenceImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EReference::~EReference()
{
}

// Attributes

::ecore::EBoolean EReference::isContainment() const
{
    return m_containment;
}

void EReference::setContainment(::ecore::EBoolean _containment)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_containment = m_containment;
#endif
    m_containment = _containment;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEReference__containment(),
                _old_containment,
                m_containment
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean EReference::isContainer() const
{
    return m_container;
}

void EReference::setContainer(::ecore::EBoolean _container)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_container = m_container;
#endif
    m_container = _container;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEReference__container(),
                _old_container,
                m_container
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean EReference::isResolveProxies() const
{
    return m_resolveProxies;
}

void EReference::setResolveProxies(::ecore::EBoolean _resolveProxies)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_resolveProxies = m_resolveProxies;
#endif
    m_resolveProxies = _resolveProxies;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEReference__resolveProxies(),
                _old_resolveProxies,
                m_resolveProxies
        );
        eNotify(&notification);
    }
#endif
}

// References

::ecore::EReference_ptr EReference::getEOpposite() const
{
    return m_eOpposite;
}

void EReference::setEOpposite(::ecore::EReference_ptr _eOpposite)
{
    ::ecore::EReference_ptr _old_eOpposite = m_eOpposite;

    m_eOpposite = _eOpposite;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEReference__eOpposite(),
                _old_eOpposite,
                m_eOpposite
        );
        eNotify(&notification);
    }
#endif

}

::ecore::EClass_ptr EReference::getEReferenceType() const
{
    return m_eReferenceType;
}

void EReference::setEReferenceType(::ecore::EClass_ptr _eReferenceType)
{
    ::ecore::EClass_ptr _old_eReferenceType = m_eReferenceType;

    m_eReferenceType = _eReferenceType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEReference__eReferenceType(),
                _old_eReferenceType,
                m_eReferenceType
        );
        eNotify(&notification);
    }
#endif

}

const ::ecorecpp::mapping::EList< ::ecore::EAttribute_ptr >& EReference::getEKeys() const
{
    return *m_eKeys;
}

::ecorecpp::mapping::EList< ::ecore::EAttribute_ptr >& EReference::getEKeys()
{
    return *m_eKeys;
}

