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
        using ConceptualModel_ptr = boost::intrusive_ptr<ConceptualModel>;

// AbstractConceptualElement
        class AbstractConceptualElement;
        using AbstractConceptualElement_ptr = boost::intrusive_ptr<AbstractConceptualElement>;

// TermUnit
        class TermUnit;
        using TermUnit_ptr = boost::intrusive_ptr<TermUnit>;

// ConceptualContainer
        class ConceptualContainer;
        using ConceptualContainer_ptr = boost::intrusive_ptr<ConceptualContainer>;

// FactUnit
        class FactUnit;
        using FactUnit_ptr = boost::intrusive_ptr<FactUnit>;

// AbstractConceptualRelationship
        class AbstractConceptualRelationship;
        using AbstractConceptualRelationship_ptr = boost::intrusive_ptr<AbstractConceptualRelationship>;

// ConceptualRelationship
        class ConceptualRelationship;
        using ConceptualRelationship_ptr = boost::intrusive_ptr<ConceptualRelationship>;

// BehaviorUnit
        class BehaviorUnit;
        using BehaviorUnit_ptr = boost::intrusive_ptr<BehaviorUnit>;

// RuleUnit
        class RuleUnit;
        using RuleUnit_ptr = boost::intrusive_ptr<RuleUnit>;

// ScenarioUnit
        class ScenarioUnit;
        using ScenarioUnit_ptr = boost::intrusive_ptr<ScenarioUnit>;

// ConceptualFlow
        class ConceptualFlow;
        using ConceptualFlow_ptr = boost::intrusive_ptr<ConceptualFlow>;

// ConceptualElement
        class ConceptualElement;
        using ConceptualElement_ptr = boost::intrusive_ptr<ConceptualElement>;

// ConceptualRole
        class ConceptualRole;
        using ConceptualRole_ptr = boost::intrusive_ptr<ConceptualRole>;

// EEnum

// Package & Factory
        class ConceptualFactory;
        using ConceptualFactory_ptr = boost::intrusive_ptr<ConceptualFactory>;
        class ConceptualPackage;
        using ConceptualPackage_ptr = boost::intrusive_ptr<ConceptualPackage>;

        template< typename T, typename S >
        inline boost::intrusive_ptr< T > instanceOf(const S& _s)
        {
            return boost::intrusive_ptr < T > (dynamic_cast< T* >(_s.get()));
        }

    } // conceptual
} // kdm

#endif // _KDM_CONCEPTUAL_FORWARD_HPP

