// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/TagDefinition.cpp
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

#include "TagDefinition.hpp"
#include <kdm/core/Element.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/kdm/KdmPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::kdm::kdm;

// Default constructor
TagDefinition::TagDefinition()
{

    /*PROTECTED REGION ID(TagDefinitionImpl__TagDefinitionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

TagDefinition::~TagDefinition()
{
}

/*PROTECTED REGION ID(TagDefinition.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::kdm::core::String TagDefinition::getTag() const
{
    return m_tag;
}

void TagDefinition::setTag(::kdm::core::String _tag)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::String _old_tag = m_tag;
#endif
    m_tag = _tag;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::kdm::kdm::KdmPackage::_instance()->getTagDefinition__tag(),
                _old_tag,
                m_tag
        );
        eNotify(&notification);
    }
#endif
}

::kdm::core::String TagDefinition::getType() const
{
    return m_type;
}

void TagDefinition::setType(::kdm::core::String _type)
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
                (::ecore::EStructuralFeature_ptr) ::kdm::kdm::KdmPackage::_instance()->getTagDefinition__type(),
                _old_type,
                m_type
        );
        eNotify(&notification);
    }
#endif
}

// References

