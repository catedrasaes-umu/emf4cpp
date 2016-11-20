// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/UnionField.cpp
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

#include "UnionField.hpp"
#include <idlmm/Typed.hpp>
#include <idlmm/IDLType.hpp>
#include <idlmm/TypedefDef.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "idlmm/IdlmmPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::idlmm;

// Default constructor
UnionField::UnionField()
{

    /*PROTECTED REGION ID(UnionFieldImpl__UnionFieldImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

UnionField::~UnionField()
{
}

/*PROTECTED REGION ID(UnionField.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::ecore::EString const& UnionField::getIdentifier() const
{
    return m_identifier;
}

void UnionField::setIdentifier(::ecore::EString const& _identifier)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_identifier = m_identifier;
#endif
    m_identifier = _identifier;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::idlmm::IdlmmPackage::_instance()->getUnionField__identifier(),
                _old_identifier,
                m_identifier
        );
        eNotify(&notification);
    }
#endif
}

std::vector< ::idlmm::EAny > const& UnionField::getLabel() const
{
    return m_label;
}

void UnionField::setLabel(std::vector< ::idlmm::EAny > _label)
{
#ifdef ECORECPP_NOTIFICATION_API
    std::vector< ::idlmm::EAny > _old_label = m_label;
#endif
    m_label = _label;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::idlmm::IdlmmPackage::_instance()->getUnionField__label(),
                _old_label,
                m_label
        );
        eNotify(&notification);
    }
#endif
}

void UnionField::addLabel(::idlmm::EAny const& _new_element_in_label)
{
    m_label.push_back(_new_element_in_label);
}

void UnionField::setLabelAt(size_t _position,
        ::idlmm::EAny const& _new_element_in_label)
{
    if (_position >= m_label.size())
        m_label.resize(_position + 1, 0);

    m_label[_position] = _new_element_in_label;
}

void UnionField::deleteLabelAt(size_t _position)
{
    if (_position >= m_label.size())
        throw "Attribute counter out of bounds!";

    // TODO: This is not actually quite true
    if (_position == m_label.size() - 1)
        m_label.resize(_position);
}

// References

