// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/conceptual.hpp
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

#ifndef KDM_CONCEPTUAL_HPP
#define KDM_CONCEPTUAL_HPP

#include "conceptual_forward.hpp"
#include <ecorecpp/mapping.hpp>

// EPackage

// EClass
#include "conceptual/ConceptualModel.hpp"
#include "conceptual/AbstractConceptualElement.hpp"
#include "conceptual/TermUnit.hpp"
#include "conceptual/ConceptualContainer.hpp"
#include "conceptual/FactUnit.hpp"
#include "conceptual/AbstractConceptualRelationship.hpp"
#include "conceptual/ConceptualRelationship.hpp"
#include "conceptual/BehaviorUnit.hpp"
#include "conceptual/RuleUnit.hpp"
#include "conceptual/ScenarioUnit.hpp"
#include "conceptual/ConceptualFlow.hpp"
#include "conceptual/ConceptualElement.hpp"
#include "conceptual/ConceptualRole.hpp"

// Package & Factory
#include "kdm/conceptual/ConceptualPackage.hpp"
#include "kdm/conceptual/ConceptualFactory.hpp"

#endif // KDM_CONCEPTUAL_HPP
