// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/AttributeDef.cpp
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

#include "AttributeDef.hpp"
#include <idlmm/Contained.hpp>
#include <idlmm/Typed.hpp>
#include <idlmm/Container.hpp>
#include <idlmm/IDLType.hpp>
#include <idlmm/TypedefDef.hpp>
#include <idlmm/ExceptionDef.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "idlmm/IdlmmPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::idlmm;

// Default constructor
AttributeDef::AttributeDef()
{

    m_getRaises.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::idlmm::ExceptionDef,
                    -1, false, false >(this, NULL));
    m_setRaises.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::idlmm::ExceptionDef,
                    -1, false, false >(this, NULL));

    /*PROTECTED REGION ID(AttributeDefImpl__AttributeDefImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AttributeDef::~AttributeDef()
{
}

/*PROTECTED REGION ID(AttributeDef.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes

::ecore::EBoolean AttributeDef::isIsReadonly() const
{
    return m_isReadonly;
}

void AttributeDef::setIsReadonly(::ecore::EBoolean _isReadonly)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_isReadonly = m_isReadonly;
#endif
    m_isReadonly = _isReadonly;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::idlmm::IdlmmPackage::_instance()->getAttributeDef__isReadonly(),
                _old_isReadonly,
                m_isReadonly
        );
        eNotify(&notification);
    }
#endif
}

// References
::ecorecpp::mapping::EList< ::idlmm::ExceptionDef >& AttributeDef::getGetRaises()
{
    return *m_getRaises;
}

::ecorecpp::mapping::EList< ::idlmm::ExceptionDef >& AttributeDef::getSetRaises()
{
    return *m_setRaises;
}

