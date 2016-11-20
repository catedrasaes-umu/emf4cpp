// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/conceptual/AbstractConceptualElement.cpp
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

#include "AbstractConceptualElement.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/conceptual/AbstractConceptualRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/conceptual/ConceptualPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::kdm::conceptual;

// Default constructor
AbstractConceptualElement::AbstractConceptualElement()
{

    m_source.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::source::SourceRef, -1, true, false >(this,
                    ::kdm::conceptual::ConceptualPackage::_instance()->getAbstractConceptualElement__source()));
    m_implementation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::kdm::core::KDMEntity,
                    -1, false, false >(this,
                    ::kdm::conceptual::ConceptualPackage::_instance()->getAbstractConceptualElement__implementation()));
    m_conceptualRelation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::conceptual::AbstractConceptualRelationship, -1, true,
                    false >(this,
                    ::kdm::conceptual::ConceptualPackage::_instance()->getAbstractConceptualElement__conceptualRelation()));
    m_abstraction.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::action::ActionElement, -1, true, false >(this,
                    ::kdm::conceptual::ConceptualPackage::_instance()->getAbstractConceptualElement__abstraction()));

    /*PROTECTED REGION ID(AbstractConceptualElementImpl__AbstractConceptualElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AbstractConceptualElement::~AbstractConceptualElement()
{
}

/*PROTECTED REGION ID(AbstractConceptualElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
const ::ecorecpp::mapping::EList< ::kdm::source::SourceRef >& AbstractConceptualElement::getSource() const
{
    return *m_source;
}

::ecorecpp::mapping::EList< ::kdm::source::SourceRef >& AbstractConceptualElement::getSource()
{
    return *m_source;
}

const ::ecorecpp::mapping::EList< ::kdm::core::KDMEntity >& AbstractConceptualElement::getImplementation() const
{
    return *m_implementation;
}

::ecorecpp::mapping::EList< ::kdm::core::KDMEntity >& AbstractConceptualElement::getImplementation()
{
    return *m_implementation;
}

const ::ecorecpp::mapping::EList<
        ::kdm::conceptual::AbstractConceptualRelationship >& AbstractConceptualElement::getConceptualRelation() const
{
    return *m_conceptualRelation;
}

::ecorecpp::mapping::EList< ::kdm::conceptual::AbstractConceptualRelationship >& AbstractConceptualElement::getConceptualRelation()
{
    return *m_conceptualRelation;
}

const ::ecorecpp::mapping::EList< ::kdm::action::ActionElement >& AbstractConceptualElement::getAbstraction() const
{
    return *m_abstraction;
}

::ecorecpp::mapping::EList< ::kdm::action::ActionElement >& AbstractConceptualElement::getAbstraction()
{
    return *m_abstraction;
}

