// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/core/AggregatedRelationship.cpp
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

#include "AggregatedRelationship.hpp"
#include <kdm/core/ModelElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/core/CorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AggregatedRelationship.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::core;

// Default constructor
AggregatedRelationship::AggregatedRelationship() :
        m_from(0), m_to(0)
{

    m_relation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::core::KDMRelationship, -1, false, false >(this,
                    ::kdm::core::CorePackage::_instance()->getAggregatedRelationship__relation()));

    /*PROTECTED REGION ID(AggregatedRelationshipImpl__AggregatedRelationshipImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AggregatedRelationship::~AggregatedRelationship()
{
}

// Attributes

::kdm::core::Integer AggregatedRelationship::getDensity() const
{
    return m_density;
}

void AggregatedRelationship::setDensity(::kdm::core::Integer _density)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::Integer _old_density = m_density;
#endif
    m_density = _density;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::kdm::core::CorePackage::_instance()->getAggregatedRelationship__density(),
                _old_density,
                m_density
        );
        eNotify(&notification);
    }
#endif
}

// References

::kdm::core::KDMEntity_ptr AggregatedRelationship::getFrom() const
{
    return m_from;
}

void AggregatedRelationship::setFrom(::kdm::core::KDMEntity_ptr _from)
{
    ::kdm::core::KDMEntity_ptr _old_from = m_from;

    m_from = _from;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::kdm::core::CorePackage::_instance()->getAggregatedRelationship__from(),
                _old_from,
                m_from
        );
        eNotify(&notification);
    }
#endif

}

::kdm::core::KDMEntity_ptr AggregatedRelationship::getTo() const
{
    return m_to;
}

void AggregatedRelationship::setTo(::kdm::core::KDMEntity_ptr _to)
{
    ::kdm::core::KDMEntity_ptr _old_to = m_to;

    m_to = _to;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::kdm::core::CorePackage::_instance()->getAggregatedRelationship__to(),
                _old_to,
                m_to
        );
        eNotify(&notification);
    }
#endif

}

const ::ecorecpp::mapping::EList< ::kdm::core::KDMRelationship >& AggregatedRelationship::getRelation() const
{
    return *m_relation;
}

::ecorecpp::mapping::EList< ::kdm::core::KDMRelationship >& AggregatedRelationship::getRelation()
{
    return *m_relation;
}

