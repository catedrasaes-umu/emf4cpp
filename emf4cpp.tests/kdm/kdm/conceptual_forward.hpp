// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/conceptual_forward.hpp
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

#ifndef _KDM_CONCEPTUAL_FORWARD_HPP
#define _KDM_CONCEPTUAL_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(kdm_conceptual_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace kdm
{
    namespace conceptual
    {

// EDataType

// EClass

// ConceptualModel
        class ConceptualModel;
        using ConceptualModel_ptr = ::ecore::Ptr<ConceptualModel>;

// AbstractConceptualElement
        class AbstractConceptualElement;
        using AbstractConceptualElement_ptr = ::ecore::Ptr<AbstractConceptualElement>;

// TermUnit
        class TermUnit;
        using TermUnit_ptr = ::ecore::Ptr<TermUnit>;

// ConceptualContainer
        class ConceptualContainer;
        using ConceptualContainer_ptr = ::ecore::Ptr<ConceptualContainer>;

// FactUnit
        class FactUnit;
        using FactUnit_ptr = ::ecore::Ptr<FactUnit>;

// AbstractConceptualRelationship
        class AbstractConceptualRelationship;
        using AbstractConceptualRelationship_ptr = ::ecore::Ptr<AbstractConceptualRelationship>;

// ConceptualRelationship
        class ConceptualRelationship;
        using ConceptualRelationship_ptr = ::ecore::Ptr<ConceptualRelationship>;

// BehaviorUnit
        class BehaviorUnit;
        using BehaviorUnit_ptr = ::ecore::Ptr<BehaviorUnit>;

// RuleUnit
        class RuleUnit;
        using RuleUnit_ptr = ::ecore::Ptr<RuleUnit>;

// ScenarioUnit
        class ScenarioUnit;
        using ScenarioUnit_ptr = ::ecore::Ptr<ScenarioUnit>;

// ConceptualFlow
        class ConceptualFlow;
        using ConceptualFlow_ptr = ::ecore::Ptr<ConceptualFlow>;

// ConceptualElement
        class ConceptualElement;
        using ConceptualElement_ptr = ::ecore::Ptr<ConceptualElement>;

// ConceptualRole
        class ConceptualRole;
        using ConceptualRole_ptr = ::ecore::Ptr<ConceptualRole>;

// EEnum

// Package & Factory
        class ConceptualFactory;
        using ConceptualFactory_ptr = ::ecore::Ptr<ConceptualFactory>;
        class ConceptualPackage;
        using ConceptualPackage_ptr = ::ecore::Ptr<ConceptualPackage>;

    } // conceptual
} // kdm

#endif // _KDM_CONCEPTUAL_FORWARD_HPP

