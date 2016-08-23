// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/platform/AbstractPlatformElement.cpp
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

#include "AbstractPlatformElement.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/platform/PlatformPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::kdm::platform;

// Default constructor
AbstractPlatformElement::AbstractPlatformElement()
{

    m_source.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::source::SourceRef, -1, true, false >(this, NULL));
    m_relation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::platform::AbstractPlatformRelationship, -1, true,
                    false >(this, NULL));
    m_abstraction.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::action::ActionElement, -1, true, false >(this,
                    NULL));
    m_implementation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::code::AbstractCodeElement, -1, false, false >(this,
                    NULL));

    /*PROTECTED REGION ID(AbstractPlatformElementImpl__AbstractPlatformElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AbstractPlatformElement::~AbstractPlatformElement()
{
}

/*PROTECTED REGION ID(AbstractPlatformElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
::ecorecpp::mapping::EList< ::kdm::source::SourceRef >& AbstractPlatformElement::getSource()
{
    return *m_source;
}

::ecorecpp::mapping::EList< ::kdm::platform::AbstractPlatformRelationship >& AbstractPlatformElement::getRelation()
{
    return *m_relation;
}

::ecorecpp::mapping::EList< ::kdm::action::ActionElement >& AbstractPlatformElement::getAbstraction()
{
    return *m_abstraction;
}

::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeElement >& AbstractPlatformElement::getImplementation()
{
    return *m_implementation;
}

