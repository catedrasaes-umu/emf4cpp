// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/InterfaceDef.cpp
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

#include "InterfaceDef.hpp"
#include <idlmm/Container.hpp>
#include <idlmm/TypedefDef.hpp>
#include <idlmm/Contained.hpp>
#include <idlmm/InterfaceDef.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "idlmm/IdlmmPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::idlmm;

// Default constructor
InterfaceDef::InterfaceDef()
{

    m_derivesFrom.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::idlmm::InterfaceDef,
                    -1, false, false >(this,
                    ::idlmm::IdlmmPackage::_instance()->getInterfaceDef__derivesFrom()));

    /*PROTECTED REGION ID(InterfaceDefImpl__InterfaceDefImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

InterfaceDef::~InterfaceDef()
{
}

/*PROTECTED REGION ID(InterfaceDef.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::ecore::EBoolean InterfaceDef::isIsAbstract() const
{
    return m_isAbstract;
}

void InterfaceDef::setIsAbstract(::ecore::EBoolean _isAbstract)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_isAbstract = m_isAbstract;
#endif
    m_isAbstract = _isAbstract;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::idlmm::IdlmmPackage::_instance()->getInterfaceDef__isAbstract(),
                _old_isAbstract,
                m_isAbstract
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean InterfaceDef::isIsCustom() const
{
    return m_isCustom;
}

void InterfaceDef::setIsCustom(::ecore::EBoolean _isCustom)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_isCustom = m_isCustom;
#endif
    m_isCustom = _isCustom;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::idlmm::IdlmmPackage::_instance()->getInterfaceDef__isCustom(),
                _old_isCustom,
                m_isCustom
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean InterfaceDef::isIsTruncatable() const
{
    return m_isTruncatable;
}

void InterfaceDef::setIsTruncatable(::ecore::EBoolean _isTruncatable)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_isTruncatable = m_isTruncatable;
#endif
    m_isTruncatable = _isTruncatable;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::idlmm::IdlmmPackage::_instance()->getInterfaceDef__isTruncatable(),
                _old_isTruncatable,
                m_isTruncatable
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::idlmm::InterfaceDef >& InterfaceDef::getDerivesFrom() const
{
    return *m_derivesFrom;
}

::ecorecpp::mapping::EList< ::idlmm::InterfaceDef >& InterfaceDef::getDerivesFrom()
{
    return *m_derivesFrom;
}

