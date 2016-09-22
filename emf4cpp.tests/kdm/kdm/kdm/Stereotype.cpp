// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/Stereotype.cpp
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

#include "Stereotype.hpp"
#include <kdm/core/Element.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/TagDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/kdm/KdmPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::kdm::kdm;

// Default constructor
Stereotype::Stereotype()
{

    m_tag.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::kdm::TagDefinition, -1, true, false >(this, NULL));

    /*PROTECTED REGION ID(StereotypeImpl__StereotypeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Stereotype::~Stereotype()
{
}

/*PROTECTED REGION ID(Stereotype.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::kdm::core::String Stereotype::getName() const
{
    return m_name;
}

void Stereotype::setName(::kdm::core::String _name)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::String _old_name = m_name;
#endif
    m_name = _name;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::kdm::kdm::KdmPackage::_instance()->getStereotype__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

::kdm::core::String Stereotype::getType() const
{
    return m_type;
}

void Stereotype::setType(::kdm::core::String _type)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::String _old_type = m_type;
#endif
    m_type = _type;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::kdm::kdm::KdmPackage::_instance()->getStereotype__type(),
                _old_type,
                m_type
        );
        eNotify(&notification);
    }
#endif
}

// References
::ecorecpp::mapping::EList< ::kdm::kdm::TagDefinition >& Stereotype::getTag()
{
    return *m_tag;
}

