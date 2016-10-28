// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/AbstractInventoryElement.cpp
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

#include "AbstractInventoryElement.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/AbstractInventoryRelationship.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/source/SourcePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::kdm::source;

// Default constructor
AbstractInventoryElement::AbstractInventoryElement()
{

    m_inventoryRelation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::source::AbstractInventoryRelationship, -1, true,
                    false >(this,
                    ::kdm::source::SourcePackage::_instance()->getAbstractInventoryElement__inventoryRelation()));

    /*PROTECTED REGION ID(AbstractInventoryElementImpl__AbstractInventoryElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AbstractInventoryElement::~AbstractInventoryElement()
{
}

/*PROTECTED REGION ID(AbstractInventoryElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
const ::ecorecpp::mapping::EList< ::kdm::source::AbstractInventoryRelationship >& AbstractInventoryElement::getInventoryRelation() const
{
    return *m_inventoryRelation;
}

::ecorecpp::mapping::EList< ::kdm::source::AbstractInventoryRelationship >& AbstractInventoryElement::getInventoryRelation()
{
    return *m_inventoryRelation;
}

