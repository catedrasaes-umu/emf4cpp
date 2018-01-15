// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/Typed.cpp
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

#include "Typed.hpp"
#include <idlmm/IDLType.hpp>
#include <idlmm/TypedefDef.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "idlmm/IdlmmPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Typed.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::idlmm;

// Default constructor
Typed::Typed() :
        m_containedType(0), m_sharedType(0)
{

    /*PROTECTED REGION ID(TypedImpl__TypedImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Typed::~Typed()
{
    if (m_containedType)
    {
        m_containedType.reset();
    }
}

// Attributes

// References

::idlmm::IDLType_ptr Typed::getContainedType() const
{
    return m_containedType;
}

void Typed::setContainedType(::idlmm::IDLType_ptr _containedType)
{
    if (m_containedType)
        m_containedType->_setEContainer(Typed_ptr(),
                ::idlmm::IdlmmPackage::_instance()->getTyped__containedType());
    if (_containedType)
        _containedType->_setEContainer(_this(),
                ::idlmm::IdlmmPackage::_instance()->getTyped__containedType());

#ifdef ECORECPP_NOTIFICATION_API
    ::idlmm::IDLType_ptr _old_containedType = m_containedType;
#endif
    m_containedType = _containedType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::idlmm::IdlmmPackage::_instance()->getTyped__containedType(),
                _old_containedType,
                m_containedType
        );
        eNotify(&notification);
    }
#endif
}

::idlmm::TypedefDef_ptr Typed::getSharedType() const
{
    return m_sharedType;
}

void Typed::setSharedType(::idlmm::TypedefDef_ptr _sharedType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::idlmm::TypedefDef_ptr _old_sharedType = m_sharedType;
#endif
    m_sharedType = _sharedType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::idlmm::IdlmmPackage::_instance()->getTyped__sharedType(),
                _old_sharedType,
                m_sharedType
        );
        eNotify(&notification);
    }
#endif
}

