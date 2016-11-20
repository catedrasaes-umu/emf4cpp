// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EEnumLiteral.cpp
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

#include "EEnumLiteral.hpp"
#include <ecore/ENamedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::ecore;

// Default constructor
EEnumLiteral::EEnumLiteral() :
        m_eEnum(0)
{

    /*PROTECTED REGION ID(EEnumLiteralImpl__EEnumLiteralImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EEnumLiteral::~EEnumLiteral()
{
}

/*PROTECTED REGION ID(EEnumLiteral.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::ecore::EInt EEnumLiteral::getValue() const
{
    return m_value;
}

void EEnumLiteral::setValue(::ecore::EInt _value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_value = m_value;
#endif
    m_value = _value;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEEnumLiteral__value(),
                _old_value,
                m_value
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EEnumerator EEnumLiteral::getInstance() const
{
    return m_instance;
}

void EEnumLiteral::setInstance(::ecore::EEnumerator _instance)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EEnumerator _old_instance = m_instance;
#endif
    m_instance = _instance;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEEnumLiteral__instance(),
                _old_instance,
                m_instance
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& EEnumLiteral::getLiteral() const
{
    return m_literal;
}

void EEnumLiteral::setLiteral(::ecore::EString const& _literal)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_literal = m_literal;
#endif
    m_literal = _literal;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEEnumLiteral__literal(),
                _old_literal,
                m_literal
        );
        eNotify(&notification);
    }
#endif
}

// References

::ecore::EEnum_ptr EEnumLiteral::getEEnum() const
{
    return m_eEnum;
}

::ecore::EEnum_ptr EEnumLiteral::basicgetEEnum()
{
    return m_eEnum;
}

void EEnumLiteral::basicsetEEnum(::ecore::EEnum_ptr _eEnum)
{
    ::ecore::EEnum_ptr _old_eEnum = m_eEnum;

    m_eEnum = _eEnum;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEEnumLiteral__eEnum(),
                _old_eEnum,
                m_eEnum
        );
        eNotify(&notification);
    }
#endif

}

void EEnumLiteral::setEEnum(::ecore::EEnum_ptr _eEnum)
{
    if (_eEnum != m_eEnum)
    {
        ::ecore::EJavaObject _this = static_cast< ::ecore::EObject_ptr >(this);
        if (m_eEnum != nullptr)
        {
            m_eEnum->_inverseRemove(::ecore::EcorePackage::EENUM__ELITERALS,
                    _this);
        }
        if (_eEnum != nullptr)
        {
            _eEnum->_inverseAdd(::ecore::EcorePackage::EENUM__ELITERALS, _this);
        }
        basicsetEEnum(_eEnum);
    }
}

