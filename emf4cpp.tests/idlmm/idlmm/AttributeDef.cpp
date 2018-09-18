// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/AttributeDef.cpp
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

/*PROTECTED REGION ID(AttributeDef.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::idlmm;

// Default constructor
AttributeDef::AttributeDef()
{

    m_getRaises.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::idlmm::ExceptionDef_ptr, -1, false, false >(this,
                    ::idlmm::IdlmmPackage::_instance()->getAttributeDef__getRaises()));
    m_setRaises.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::idlmm::ExceptionDef_ptr, -1, false, false >(this,
                    ::idlmm::IdlmmPackage::_instance()->getAttributeDef__setRaises()));

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
                _this(),
                ::idlmm::IdlmmPackage::_instance()->getAttributeDef__isReadonly(),
                _old_isReadonly,
                m_isReadonly
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::idlmm::ExceptionDef_ptr >& AttributeDef::getGetRaises() const
{
    return *m_getRaises;
}

::ecorecpp::mapping::EList< ::idlmm::ExceptionDef_ptr >& AttributeDef::getGetRaises()
{
    return *m_getRaises;
}

const ::ecorecpp::mapping::EList< ::idlmm::ExceptionDef_ptr >& AttributeDef::getSetRaises() const
{
    return *m_setRaises;
}

::ecorecpp::mapping::EList< ::idlmm::ExceptionDef_ptr >& AttributeDef::getSetRaises()
{
    return *m_setRaises;
}

