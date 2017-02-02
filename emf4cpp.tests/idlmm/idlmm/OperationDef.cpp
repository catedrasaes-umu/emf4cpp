// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/OperationDef.cpp
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

#include "OperationDef.hpp"
#include <idlmm/Contained.hpp>
#include <idlmm/Typed.hpp>
#include <idlmm/Container.hpp>
#include <idlmm/IDLType.hpp>
#include <idlmm/TypedefDef.hpp>
#include <idlmm/ParameterDef.hpp>
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
OperationDef::OperationDef()
{

    m_parameters.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::idlmm::ParameterDef,
                    -1, true, false >(this,
                    ::idlmm::IdlmmPackage::_instance()->getOperationDef__parameters()));
    m_canRaise.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::idlmm::ExceptionDef,
                    -1, false, false >(this,
                    ::idlmm::IdlmmPackage::_instance()->getOperationDef__canRaise()));

    /*PROTECTED REGION ID(OperationDefImpl__OperationDefImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

OperationDef::~OperationDef()
{
}

/*PROTECTED REGION ID(OperationDef.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::ecore::EBoolean OperationDef::isIsOneway() const
{
    return m_isOneway;
}

void OperationDef::setIsOneway(::ecore::EBoolean _isOneway)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_isOneway = m_isOneway;
#endif
    m_isOneway = _isOneway;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::idlmm::IdlmmPackage::_instance()->getOperationDef__isOneway(),
                _old_isOneway,
                m_isOneway
        );
        eNotify(&notification);
    }
#endif
}

std::vector< ::ecore::EString > const& OperationDef::getContexts() const
{
    return m_contexts;
}

void OperationDef::setContexts(std::vector< ::ecore::EString > const& _contexts)
{
#ifdef ECORECPP_NOTIFICATION_API
    std::vector< ::ecore::EString > _old_contexts = m_contexts;
#endif
    m_contexts = _contexts;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::idlmm::IdlmmPackage::_instance()->getOperationDef__contexts(),
                _old_contexts,
                m_contexts
        );
        eNotify(&notification);
    }
#endif
}

void OperationDef::addContexts(::ecore::EString const& _new_element_in_contexts)
{
    m_contexts.push_back(_new_element_in_contexts);
}

void OperationDef::setContextsAt(size_t _position,
        ::ecore::EString const& _new_element_in_contexts)
{
    if (_position >= m_contexts.size())
        m_contexts.resize(_position + 1, ::ecore::EString());

    m_contexts[_position] = _new_element_in_contexts;
}

void OperationDef::deleteContextsAt(size_t _position)
{
    if (_position >= m_contexts.size())
        throw "Attribute counter out of bounds!";

    // TODO: This is not actually quite true
    if (_position == m_contexts.size() - 1)
        m_contexts.resize(_position);
}

// References

const ::ecorecpp::mapping::EList< ::idlmm::ParameterDef >& OperationDef::getParameters() const
{
    return *m_parameters;
}

::ecorecpp::mapping::EList< ::idlmm::ParameterDef >& OperationDef::getParameters()
{
    return *m_parameters;
}

const ::ecorecpp::mapping::EList< ::idlmm::ExceptionDef >& OperationDef::getCanRaise() const
{
    return *m_canRaise;
}

::ecorecpp::mapping::EList< ::idlmm::ExceptionDef >& OperationDef::getCanRaise()
{
    return *m_canRaise;
}

