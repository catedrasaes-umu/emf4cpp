// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/structure/AbstractStructureElement.cpp
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

#include "AbstractStructureElement.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/structure/AbstractStructureElement.hpp>
#include <kdm/structure/AbstractStructureRelationship.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/structure/StructurePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::kdm::structure;

// Default constructor
AbstractStructureElement::AbstractStructureElement()
{

    m_aggregated.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::core::AggregatedRelationship, -1, true, false >(
                    this, NULL));
    m_implementation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::core::KDMEntity, -1, false, false >(this, NULL));
    m_structureElement.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::structure::AbstractStructureElement, -1, true, false >(
                    this, NULL));
    m_structureRelationship.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::structure::AbstractStructureRelationship, -1, true,
                    false >(this, NULL));

    /*PROTECTED REGION ID(AbstractStructureElementImpl__AbstractStructureElementImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AbstractStructureElement::~AbstractStructureElement()
{
}

/*PROTECTED REGION ID(AbstractStructureElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes

// References
::ecorecpp::mapping::EList< ::kdm::core::AggregatedRelationship >& AbstractStructureElement::getAggregated()
{
    return *m_aggregated;
}

::ecorecpp::mapping::EList< ::kdm::core::KDMEntity >& AbstractStructureElement::getImplementation()
{
    return *m_implementation;
}

::ecorecpp::mapping::EList< ::kdm::structure::AbstractStructureElement >& AbstractStructureElement::getStructureElement()
{
    return *m_structureElement;
}

::ecorecpp::mapping::EList< ::kdm::structure::AbstractStructureRelationship >& AbstractStructureElement::getStructureRelationship()
{
    return *m_structureRelationship;
}

