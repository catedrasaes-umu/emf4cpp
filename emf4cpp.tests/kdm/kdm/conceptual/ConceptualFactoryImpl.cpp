// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/conceptual/ConceptualFactoryImpl.cpp
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

#include <kdm/conceptual/ConceptualFactory.hpp>
#include <kdm/conceptual/ConceptualPackage.hpp>
#include <kdm/conceptual/ConceptualModel.hpp>
#include <kdm/conceptual/AbstractConceptualElement.hpp>
#include <kdm/conceptual/TermUnit.hpp>
#include <kdm/conceptual/ConceptualContainer.hpp>
#include <kdm/conceptual/FactUnit.hpp>
#include <kdm/conceptual/AbstractConceptualRelationship.hpp>
#include <kdm/conceptual/ConceptualRelationship.hpp>
#include <kdm/conceptual/BehaviorUnit.hpp>
#include <kdm/conceptual/RuleUnit.hpp>
#include <kdm/conceptual/ScenarioUnit.hpp>
#include <kdm/conceptual/ConceptualFlow.hpp>
#include <kdm/conceptual/ConceptualElement.hpp>
#include <kdm/conceptual/ConceptualRole.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::conceptual;

ConceptualFactory::ConceptualFactory()
{
}

::ecore::EObject_ptr ConceptualFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case ConceptualPackage::CONCEPTUALMODEL:
        return createConceptualModel();
    case ConceptualPackage::ABSTRACTCONCEPTUALELEMENT:
        return createAbstractConceptualElement();
    case ConceptualPackage::TERMUNIT:
        return createTermUnit();
    case ConceptualPackage::CONCEPTUALCONTAINER:
        return createConceptualContainer();
    case ConceptualPackage::FACTUNIT:
        return createFactUnit();
    case ConceptualPackage::ABSTRACTCONCEPTUALRELATIONSHIP:
        return createAbstractConceptualRelationship();
    case ConceptualPackage::CONCEPTUALRELATIONSHIP:
        return createConceptualRelationship();
    case ConceptualPackage::BEHAVIORUNIT:
        return createBehaviorUnit();
    case ConceptualPackage::RULEUNIT:
        return createRuleUnit();
    case ConceptualPackage::SCENARIOUNIT:
        return createScenarioUnit();
    case ConceptualPackage::CONCEPTUALFLOW:
        return createConceptualFlow();
    case ConceptualPackage::CONCEPTUALELEMENT:
        return createConceptualElement();
    case ConceptualPackage::CONCEPTUALROLE:
        return createConceptualRole();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject ConceptualFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString ConceptualFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

ConceptualModel_ptr ConceptualFactory::createConceptualModel()
{
    return ::ecore::Ptr < ConceptualModel > (new ConceptualModel);
}
AbstractConceptualElement_ptr ConceptualFactory::createAbstractConceptualElement()
{
    return ::ecore::Ptr < AbstractConceptualElement
            > (new AbstractConceptualElement);
}
TermUnit_ptr ConceptualFactory::createTermUnit()
{
    return ::ecore::Ptr < TermUnit > (new TermUnit);
}
ConceptualContainer_ptr ConceptualFactory::createConceptualContainer()
{
    return ::ecore::Ptr < ConceptualContainer > (new ConceptualContainer);
}
FactUnit_ptr ConceptualFactory::createFactUnit()
{
    return ::ecore::Ptr < FactUnit > (new FactUnit);
}
AbstractConceptualRelationship_ptr ConceptualFactory::createAbstractConceptualRelationship()
{
    return ::ecore::Ptr < AbstractConceptualRelationship
            > (new AbstractConceptualRelationship);
}
ConceptualRelationship_ptr ConceptualFactory::createConceptualRelationship()
{
    return ::ecore::Ptr < ConceptualRelationship > (new ConceptualRelationship);
}
BehaviorUnit_ptr ConceptualFactory::createBehaviorUnit()
{
    return ::ecore::Ptr < BehaviorUnit > (new BehaviorUnit);
}
RuleUnit_ptr ConceptualFactory::createRuleUnit()
{
    return ::ecore::Ptr < RuleUnit > (new RuleUnit);
}
ScenarioUnit_ptr ConceptualFactory::createScenarioUnit()
{
    return ::ecore::Ptr < ScenarioUnit > (new ScenarioUnit);
}
ConceptualFlow_ptr ConceptualFactory::createConceptualFlow()
{
    return ::ecore::Ptr < ConceptualFlow > (new ConceptualFlow);
}
ConceptualElement_ptr ConceptualFactory::createConceptualElement()
{
    return ::ecore::Ptr < ConceptualElement > (new ConceptualElement);
}
ConceptualRole_ptr ConceptualFactory::createConceptualRole()
{
    return ::ecore::Ptr < ConceptualRole > (new ConceptualRole);
}

