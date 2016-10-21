// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EClassifier.cpp
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

#include "EClassifier.hpp"
#include <ecore/ENamedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::ecore;

// Default constructor
EClassifier::EClassifier() :
        m_ePackage(0)
{

    m_eTypeParameters.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::ecore::ETypeParameter, -1, true, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEClassifier__eTypeParameters() :
                            nullptr));

    /*PROTECTED REGION ID(EClassifierImpl__EClassifierImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EClassifier::~EClassifier()
{
}

/*PROTECTED REGION ID(EClassifier.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::ecore::EString const& EClassifier::getInstanceClassName() const
{
    return m_instanceClassName;
}

void EClassifier::setInstanceClassName(
        ::ecore::EString const& _instanceClassName)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_instanceClassName = m_instanceClassName;
#endif
    m_instanceClassName = _instanceClassName;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEClassifier__instanceClassName(),
                _old_instanceClassName,
                m_instanceClassName
        );
        eNotify(&notification);
    }
#endif
}

int EClassifier::getInstanceClass() const
{
    return m_instanceClass;
}

void EClassifier::setInstanceClass(int _instanceClass)
{
#ifdef ECORECPP_NOTIFICATION_API
    int _old_instanceClass = m_instanceClass;
#endif
    m_instanceClass = _instanceClass;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEClassifier__instanceClass(),
                _old_instanceClass,
                m_instanceClass
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EJavaObject const& EClassifier::getDefaultValue() const
{
    return m_defaultValue;
}

void EClassifier::setDefaultValue(::ecore::EJavaObject const& _defaultValue)
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
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEClassifier__defaultValue(),
                _old_defaultValue,
                m_defaultValue
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& EClassifier::getInstanceTypeName() const
{
    return m_instanceTypeName;
}

void EClassifier::setInstanceTypeName(::ecore::EString const& _instanceTypeName)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_instanceTypeName = m_instanceTypeName;
#endif
    m_instanceTypeName = _instanceTypeName;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEClassifier__instanceTypeName(),
                _old_instanceTypeName,
                m_instanceTypeName
        );
        eNotify(&notification);
    }
#endif
}

// References
::ecore::EPackage_ptr EClassifier::getEPackage()
{
    return m_ePackage;
}

::ecore::EPackage_ptr EClassifier::basicgetEPackage()
{
    return m_ePackage;
}

void EClassifier::basicsetEPackage(::ecore::EPackage_ptr _ePackage)
{
    ::ecore::EPackage_ptr _old_ePackage = m_ePackage;

    m_ePackage = _ePackage;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEClassifier__ePackage(),
                _old_ePackage,
                m_ePackage
        );
        eNotify(&notification);
    }
#endif

}

void EClassifier::setEPackage(::ecore::EPackage_ptr _ePackage)
{
    if (_ePackage != m_ePackage)
    {
        ::ecore::EJavaObject _this = static_cast< ::ecore::EObject_ptr >(this);
        if (m_ePackage != nullptr)
        {
            m_ePackage->_inverseRemove(
                    ::ecore::EcorePackage::EPACKAGE__ECLASSIFIERS, _this);
        }
        if (_ePackage != nullptr)
        {
            _ePackage->_inverseAdd(
                    ::ecore::EcorePackage::EPACKAGE__ECLASSIFIERS, _this);
        }
        basicsetEPackage(_ePackage);
    }
}

::ecorecpp::mapping::EList< ::ecore::ETypeParameter >& EClassifier::getETypeParameters()
{
    return *m_eTypeParameters;
}

