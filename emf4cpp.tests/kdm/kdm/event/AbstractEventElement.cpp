// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/event/AbstractEventElement.cpp
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

#include "AbstractEventElement.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/event/AbstractEventRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/event/EventPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AbstractEventElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::event;

// Default constructor
AbstractEventElement::AbstractEventElement()
{

    m_source.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::source::SourceRef, -1, true, false >(this,
                    ::kdm::event::EventPackage::_instance()->getAbstractEventElement__source()));
    m_eventRelation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::event::AbstractEventRelationship, -1, true, false >(
                    this,
                    ::kdm::event::EventPackage::_instance()->getAbstractEventElement__eventRelation()));
    m_abstraction.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::action::ActionElement, -1, true, false >(this,
                    ::kdm::event::EventPackage::_instance()->getAbstractEventElement__abstraction()));
    m_implementation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::code::AbstractCodeElement, -1, false, false >(this,
                    ::kdm::event::EventPackage::_instance()->getAbstractEventElement__implementation()));

    /*PROTECTED REGION ID(AbstractEventElementImpl__AbstractEventElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AbstractEventElement::~AbstractEventElement()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::kdm::source::SourceRef >& AbstractEventElement::getSource() const
{
    return *m_source;
}

::ecorecpp::mapping::EList< ::kdm::source::SourceRef >& AbstractEventElement::getSource()
{
    return *m_source;
}

const ::ecorecpp::mapping::EList< ::kdm::event::AbstractEventRelationship >& AbstractEventElement::getEventRelation() const
{
    return *m_eventRelation;
}

::ecorecpp::mapping::EList< ::kdm::event::AbstractEventRelationship >& AbstractEventElement::getEventRelation()
{
    return *m_eventRelation;
}

const ::ecorecpp::mapping::EList< ::kdm::action::ActionElement >& AbstractEventElement::getAbstraction() const
{
    return *m_abstraction;
}

::ecorecpp::mapping::EList< ::kdm::action::ActionElement >& AbstractEventElement::getAbstraction()
{
    return *m_abstraction;
}

const ::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeElement >& AbstractEventElement::getImplementation() const
{
    return *m_implementation;
}

::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeElement >& AbstractEventElement::getImplementation()
{
    return *m_implementation;
}

