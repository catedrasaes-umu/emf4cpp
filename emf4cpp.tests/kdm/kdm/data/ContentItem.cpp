// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/data/ContentItem.cpp
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

#include "ContentItem.hpp"
#include <kdm/data/AbstractContentElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/data/ComplexContentType.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/data/DataPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ContentItem.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::data;

// Default constructor
ContentItem::ContentItem() :
        m_type(0)
{

    m_contentElement.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::data::AbstractContentElement_ptr, -1, true, false >(
                    this,
                    ::kdm::data::DataPackage::_instance()->getContentItem__contentElement()));

    /*PROTECTED REGION ID(ContentItemImpl__ContentItemImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ContentItem::~ContentItem()
{
}

// Attributes

// References

::kdm::data::ComplexContentType_ptr ContentItem::getType() const
{
    return m_type;
}

void ContentItem::setType(::kdm::data::ComplexContentType_ptr _type)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::data::ComplexContentType_ptr _old_type = m_type;
#endif
    m_type = _type;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::data::DataPackage::_instance()->getContentItem__type(),
                _old_type,
                m_type
        );
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::kdm::data::AbstractContentElement_ptr >& ContentItem::getContentElement() const
{
    return *m_contentElement;
}

::ecorecpp::mapping::EList< ::kdm::data::AbstractContentElement_ptr >& ContentItem::getContentElement()
{
    return *m_contentElement;
}

