// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EStructuralFeature.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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

#include "EStructuralFeature.hpp"
#include <ecore/ETypedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::ecore;

// Default constructor
EStructuralFeature::EStructuralFeature() :
        m_changeable(true), m_eContainingClass(0)
{

    /*PROTECTED REGION ID(EStructuralFeatureImpl__EStructuralFeatureImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EStructuralFeature::~EStructuralFeature()
{
}

/*PROTECTED REGION ID(EStructuralFeature.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::ecore::EBoolean EStructuralFeature::isChangeable() const
{
    return m_changeable;
}

void EStructuralFeature::setChangeable(::ecore::EBoolean _changeable)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_changeable = m_changeable;
#endif
    m_changeable = _changeable;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEStructuralFeature__changeable(),
                _old_changeable,
                m_changeable
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean EStructuralFeature::isVolatile() const
{
    return m_volatile;
}

void EStructuralFeature::setVolatile(::ecore::EBoolean _volatile)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_volatile = m_volatile;
#endif
    m_volatile = _volatile;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEStructuralFeature__volatile(),
                _old_volatile,
                m_volatile
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean EStructuralFeature::isTransient() const
{
    return m_transient;
}

void EStructuralFeature::setTransient(::ecore::EBoolean _transient)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_transient = m_transient;
#endif
    m_transient = _transient;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEStructuralFeature__transient(),
                _old_transient,
                m_transient
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& EStructuralFeature::getDefaultValueLiteral() const
{
    return m_defaultValueLiteral;
}

void EStructuralFeature::setDefaultValueLiteral(
        ::ecore::EString const& _defaultValueLiteral)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_defaultValueLiteral = m_defaultValueLiteral;
#endif
    m_defaultValueLiteral = _defaultValueLiteral;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEStructuralFeature__defaultValueLiteral(),
                _old_defaultValueLiteral,
                m_defaultValueLiteral
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EJavaObject const& EStructuralFeature::getDefaultValue() const
{
    return m_defaultValue;
}

void EStructuralFeature::setDefaultValue(
        ::ecore::EJavaObject const& _defaultValue)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EJavaObject _old_defaultValue = m_defaultValue;
#endif
    m_defaultValue = _defaultValue;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEStructuralFeature__defaultValue(),
                _old_defaultValue,
                m_defaultValue
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean EStructuralFeature::isUnsettable() const
{
    return m_unsettable;
}

void EStructuralFeature::setUnsettable(::ecore::EBoolean _unsettable)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_unsettable = m_unsettable;
#endif
    m_unsettable = _unsettable;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEStructuralFeature__unsettable(),
                _old_unsettable,
                m_unsettable
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean EStructuralFeature::isDerived() const
{
    return m_derived;
}

void EStructuralFeature::setDerived(::ecore::EBoolean _derived)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_derived = m_derived;
#endif
    m_derived = _derived;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEStructuralFeature__derived(),
                _old_derived,
                m_derived
        );
        eNotify(&notification);
    }
#endif
}

// References
::ecore::EClass_ptr EStructuralFeature::getEContainingClass()
{
    return m_eContainingClass;
}

::ecore::EClass_ptr EStructuralFeature::basicgetEContainingClass()
{
    return m_eContainingClass;
}

void EStructuralFeature::basicsetEContainingClass(
        ::ecore::EClass_ptr _eContainingClass)
{
    ::ecore::EClass_ptr _old_eContainingClass = m_eContainingClass;

    m_eContainingClass = _eContainingClass;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEStructuralFeature__eContainingClass(),
                _old_eContainingClass,
                m_eContainingClass
        );
        eNotify(&notification);
    }
#endif

}

void EStructuralFeature::setEContainingClass(
        ::ecore::EClass_ptr _eContainingClass)
{
    if (_eContainingClass != m_eContainingClass)
    {
        ::ecore::EJavaObject _this = static_cast< ::ecore::EObject_ptr >(this);
        if (m_eContainingClass != nullptr)
        {
            m_eContainingClass->_inverseRemove(
                    ::ecore::EcorePackage::ECLASS__ESTRUCTURALFEATURES, _this);
        }
        if (_eContainingClass != nullptr)
        {
            _eContainingClass->_inverseAdd(
                    ::ecore::EcorePackage::ECLASS__ESTRUCTURALFEATURES, _this);
        }
        basicsetEContainingClass(_eContainingClass);
    }
}

