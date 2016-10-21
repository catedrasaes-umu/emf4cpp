// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/conceptual_forward.hpp
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
        typedef ConceptualModel* ConceptualModel_ptr;

// AbstractConceptualElement
        class AbstractConceptualElement;
        typedef AbstractConceptualElement* AbstractConceptualElement_ptr;

// TermUnit
        class TermUnit;
        typedef TermUnit* TermUnit_ptr;

// ConceptualContainer
        class ConceptualContainer;
        typedef ConceptualContainer* ConceptualContainer_ptr;

// FactUnit
        class FactUnit;
        typedef FactUnit* FactUnit_ptr;

// AbstractConceptualRelationship
        class AbstractConceptualRelationship;
        typedef AbstractConceptualRelationship* AbstractConceptualRelationship_ptr;

// ConceptualRelationship
        class ConceptualRelationship;
        typedef ConceptualRelationship* ConceptualRelationship_ptr;

// BehaviorUnit
        class BehaviorUnit;
        typedef BehaviorUnit* BehaviorUnit_ptr;

// RuleUnit
        class RuleUnit;
        typedef RuleUnit* RuleUnit_ptr;

// ScenarioUnit
        class ScenarioUnit;
        typedef ScenarioUnit* ScenarioUnit_ptr;

// ConceptualFlow
        class ConceptualFlow;
        typedef ConceptualFlow* ConceptualFlow_ptr;

// ConceptualElement
        class ConceptualElement;
        typedef ConceptualElement* ConceptualElement_ptr;

// ConceptualRole
        class ConceptualRole;
        typedef ConceptualRole* ConceptualRole_ptr;

// EEnum

// Package & Factory
        class ConceptualFactory;
        typedef ConceptualFactory * ConceptualFactory_ptr;
        class ConceptualPackage;
        typedef ConceptualPackage * ConceptualPackage_ptr;

        template< typename T, typename S >
        inline T* instanceOf(S* _s)
        {
            return dynamic_cast< T* >(_s);
        }

    } // conceptual
} // kdm

#endif // _KDM_CONCEPTUAL_FORWARD_HPP

