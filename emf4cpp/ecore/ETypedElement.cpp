// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/ETypedElement.cpp
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

#include "ETypedElement.hpp"
#include <ecore/ENamedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::ecore;

// Default constructor
ETypedElement::ETypedElement() :
        m_ordered(true), m_unique(true), m_upperBound(1), m_eType(0), m_eGenericType(
                0)
{

    /*PROTECTED REGION ID(ETypedElementImpl__ETypedElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ETypedElement::~ETypedElement()
{
    if (m_eGenericType)
    {
        delete m_eGenericType;
    }
}

/*PROTECTED REGION ID(ETypedElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::ecore::EBoolean ETypedElement::isOrdered() const
{
    return m_ordered;
}

void ETypedElement::setOrdered(::ecore::EBoolean _ordered)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_ordered = m_ordered;
#endif
    m_ordered = _ordered;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getETypedElement__ordered(),
                _old_ordered,
                m_ordered
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean ETypedElement::isUnique() const
{
    return m_unique;
}

void ETypedElement::setUnique(::ecore::EBoolean _unique)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_unique = m_unique;
#endif
    m_unique = _unique;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getETypedElement__unique(),
                _old_unique,
                m_unique
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EInt ETypedElement::getLowerBound() const
{
    return m_lowerBound;
}

void ETypedElement::setLowerBound(::ecore::EInt _lowerBound)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_lowerBound = m_lowerBound;
#endif
    m_lowerBound = _lowerBound;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getETypedElement__lowerBound(),
                _old_lowerBound,
                m_lowerBound
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EInt ETypedElement::getUpperBound() const
{
    return m_upperBound;
}

void ETypedElement::setUpperBound(::ecore::EInt _upperBound)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_upperBound = m_upperBound;
#endif
    m_upperBound = _upperBound;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getETypedElement__upperBound(),
                _old_upperBound,
                m_upperBound
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean ETypedElement::isMany() const
{
    return m_many;
}

void ETypedElement::setMany(::ecore::EBoolean _many)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_many = m_many;
#endif
    m_many = _many;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getETypedElement__many(),
                _old_many,
                m_many
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean ETypedElement::isRequired() const
{
    return m_required;
}

void ETypedElement::setRequired(::ecore::EBoolean _required)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_required = m_required;
#endif
    m_required = _required;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getETypedElement__required(),
                _old_required,
                m_required
        );
        eNotify(&notification);
    }
#endif
}

// References

::ecore::EClassifier_ptr ETypedElement::getEType() const
{
    return m_eType;
}

void ETypedElement::setEType(::ecore::EClassifier_ptr _eType)
{
    ::ecore::EClassifier_ptr _old_eType = m_eType;

    m_eType = _eType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getETypedElement__eType(),
                _old_eType,
                m_eType
        );
        eNotify(&notification);
    }
#endif

}

::ecore::EGenericType_ptr ETypedElement::getEGenericType() const
{
    return m_eGenericType;
}

void ETypedElement::setEGenericType(::ecore::EGenericType_ptr _eGenericType)
{
    ::ecore::EGenericType_ptr _old_eGenericType = m_eGenericType;

    m_eGenericType = _eGenericType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getETypedElement__eGenericType(),
                _old_eGenericType,
                m_eGenericType
        );
        eNotify(&notification);
    }
#endif

    delete _old_eGenericType;
    m_eGenericType->_setEContainer(this,
            ::ecore::EcorePackage::_instance()->getETypedElement__eGenericType());
}

