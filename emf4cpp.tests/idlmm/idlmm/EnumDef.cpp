// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/EnumDef.cpp
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

#include "EnumDef.hpp"
#include <idlmm/TypedefDef.hpp>
#include <idlmm/Container.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "idlmm/IdlmmPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::idlmm;

// Default constructor
EnumDef::EnumDef()
{

    /*PROTECTED REGION ID(EnumDefImpl__EnumDefImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EnumDef::~EnumDef()
{
}

/*PROTECTED REGION ID(EnumDef.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
std::vector< ::ecore::EString > const& EnumDef::getMembers() const
{
    return m_members;
}

void EnumDef::setMembers(std::vector< ::ecore::EString > const& _members)
{
#ifdef ECORECPP_NOTIFICATION_API
    std::vector< ::ecore::EString > _old_members = m_members;
#endif
    m_members = _members;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::idlmm::IdlmmPackage::_instance()->getEnumDef__members(),
                _old_members,
                m_members
        );
        eNotify(&notification);
    }
#endif
}

void EnumDef::addMembers(::ecore::EString const& _new_element_in_members)
{
    m_members.push_back(_new_element_in_members);
}

void EnumDef::setMembersAt(size_t _position,
        ::ecore::EString const& _new_element_in_members)
{
    if (_position >= m_members.size())
        m_members.resize(_position + 1, 0);

    m_members[_position] = _new_element_in_members;
}

void EnumDef::deleteMembersAt(size_t _position)
{
    if (_position >= m_members.size())
        throw "Attribute counter out of bounds!";

    // TODO: This is not actually quite true
    if (_position == m_members.size() - 1)
        m_members.resize(_position);
}

// References

