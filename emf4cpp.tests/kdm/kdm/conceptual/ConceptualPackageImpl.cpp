// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/conceptual/ConceptualPackageImpl.cpp
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

#include <kdm/conceptual/ConceptualPackage.hpp>
#include <kdm/conceptual/ConceptualFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/core/CorePackage.hpp>
#include <kdm/source/SourcePackage.hpp>
#include <kdm/action/ActionPackage.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace ::kdm::conceptual;

ConceptualPackage::ConceptualPackage()
{

    // Feature definitions of ConceptualModel
    m_ConceptualModel__conceptualElement = new ::ecore::EReference();

    // Feature definitions of AbstractConceptualElement
    m_AbstractConceptualElement__source = new ::ecore::EReference();
    m_AbstractConceptualElement__implementation = new ::ecore::EReference();
    m_AbstractConceptualElement__conceptualRelation = new ::ecore::EReference();
    m_AbstractConceptualElement__abstraction = new ::ecore::EReference();

    // Feature definitions of TermUnit

    // Feature definitions of ConceptualContainer
    m_ConceptualContainer__conceptualElement = new ::ecore::EReference();

    // Feature definitions of FactUnit

    // Feature definitions of AbstractConceptualRelationship

    // Feature definitions of ConceptualRelationship
    m_ConceptualRelationship__to = new ::ecore::EReference();
    m_ConceptualRelationship__from = new ::ecore::EReference();

    // Feature definitions of BehaviorUnit

    // Feature definitions of RuleUnit

    // Feature definitions of ScenarioUnit

    // Feature definitions of ConceptualFlow
    m_ConceptualFlow__to = new ::ecore::EReference();
    m_ConceptualFlow__from = new ::ecore::EReference();

    // Feature definitions of ConceptualElement

    // Feature definitions of ConceptualRole
    m_ConceptualRole__conceptualElement = new ::ecore::EReference();

    /* Now one can safely ask for a feature definition of
     * a class, though it is not yet usable. */
    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = ConceptualFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    // Create classes and their features

    // ConceptualModel
    m_ConceptualModelEClass = new ::ecore::EClass();
    m_ConceptualModelEClass->setClassifierID(CONCEPTUALMODEL);
    m_ConceptualModelEClass->setEPackage(this);
    getEClassifiers().push_back(m_ConceptualModelEClass);
    // m_ConceptualModel__conceptualElement has already been allocated above
    m_ConceptualModel__conceptualElement->setFeatureID(
            ::kdm::conceptual::ConceptualPackage::CONCEPTUALMODEL__CONCEPTUALELEMENT);
    m_ConceptualModelEClass->getEStructuralFeatures().push_back(
            m_ConceptualModel__conceptualElement);

    // AbstractConceptualElement
    m_AbstractConceptualElementEClass = new ::ecore::EClass();
    m_AbstractConceptualElementEClass->setClassifierID(
            ABSTRACTCONCEPTUALELEMENT);
    m_AbstractConceptualElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_AbstractConceptualElementEClass);
    // m_AbstractConceptualElement__source has already been allocated above
    m_AbstractConceptualElement__source->setFeatureID(
            ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__SOURCE);
    m_AbstractConceptualElementEClass->getEStructuralFeatures().push_back(
            m_AbstractConceptualElement__source);
    // m_AbstractConceptualElement__implementation has already been allocated above
    m_AbstractConceptualElement__implementation->setFeatureID(
            ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__IMPLEMENTATION);
    m_AbstractConceptualElementEClass->getEStructuralFeatures().push_back(
            m_AbstractConceptualElement__implementation);
    // m_AbstractConceptualElement__conceptualRelation has already been allocated above
    m_AbstractConceptualElement__conceptualRelation->setFeatureID(
            ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__CONCEPTUALRELATION);
    m_AbstractConceptualElementEClass->getEStructuralFeatures().push_back(
            m_AbstractConceptualElement__conceptualRelation);
    // m_AbstractConceptualElement__abstraction has already been allocated above
    m_AbstractConceptualElement__abstraction->setFeatureID(
            ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__ABSTRACTION);
    m_AbstractConceptualElementEClass->getEStructuralFeatures().push_back(
            m_AbstractConceptualElement__abstraction);

    // TermUnit
    m_TermUnitEClass = new ::ecore::EClass();
    m_TermUnitEClass->setClassifierID(TERMUNIT);
    m_TermUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_TermUnitEClass);

    // ConceptualContainer
    m_ConceptualContainerEClass = new ::ecore::EClass();
    m_ConceptualContainerEClass->setClassifierID(CONCEPTUALCONTAINER);
    m_ConceptualContainerEClass->setEPackage(this);
    getEClassifiers().push_back(m_ConceptualContainerEClass);
    // m_ConceptualContainer__conceptualElement has already been allocated above
    m_ConceptualContainer__conceptualElement->setFeatureID(
            ::kdm::conceptual::ConceptualPackage::CONCEPTUALCONTAINER__CONCEPTUALELEMENT);
    m_ConceptualContainerEClass->getEStructuralFeatures().push_back(
            m_ConceptualContainer__conceptualElement);

    // FactUnit
    m_FactUnitEClass = new ::ecore::EClass();
    m_FactUnitEClass->setClassifierID(FACTUNIT);
    m_FactUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_FactUnitEClass);

    // AbstractConceptualRelationship
    m_AbstractConceptualRelationshipEClass = new ::ecore::EClass();
    m_AbstractConceptualRelationshipEClass->setClassifierID(
            ABSTRACTCONCEPTUALRELATIONSHIP);
    m_AbstractConceptualRelationshipEClass->setEPackage(this);
    getEClassifiers().push_back(m_AbstractConceptualRelationshipEClass);

    // ConceptualRelationship
    m_ConceptualRelationshipEClass = new ::ecore::EClass();
    m_ConceptualRelationshipEClass->setClassifierID(CONCEPTUALRELATIONSHIP);
    m_ConceptualRelationshipEClass->setEPackage(this);
    getEClassifiers().push_back(m_ConceptualRelationshipEClass);
    // m_ConceptualRelationship__to has already been allocated above
    m_ConceptualRelationship__to->setFeatureID(
            ::kdm::conceptual::ConceptualPackage::CONCEPTUALRELATIONSHIP__TO);
    m_ConceptualRelationshipEClass->getEStructuralFeatures().push_back(
            m_ConceptualRelationship__to);
    // m_ConceptualRelationship__from has already been allocated above
    m_ConceptualRelationship__from->setFeatureID(
            ::kdm::conceptual::ConceptualPackage::CONCEPTUALRELATIONSHIP__FROM);
    m_ConceptualRelationshipEClass->getEStructuralFeatures().push_back(
            m_ConceptualRelationship__from);

    // BehaviorUnit
    m_BehaviorUnitEClass = new ::ecore::EClass();
    m_BehaviorUnitEClass->setClassifierID(BEHAVIORUNIT);
    m_BehaviorUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_BehaviorUnitEClass);

    // RuleUnit
    m_RuleUnitEClass = new ::ecore::EClass();
    m_RuleUnitEClass->setClassifierID(RULEUNIT);
    m_RuleUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_RuleUnitEClass);

    // ScenarioUnit
    m_ScenarioUnitEClass = new ::ecore::EClass();
    m_ScenarioUnitEClass->setClassifierID(SCENARIOUNIT);
    m_ScenarioUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_ScenarioUnitEClass);

    // ConceptualFlow
    m_ConceptualFlowEClass = new ::ecore::EClass();
    m_ConceptualFlowEClass->setClassifierID(CONCEPTUALFLOW);
    m_ConceptualFlowEClass->setEPackage(this);
    getEClassifiers().push_back(m_ConceptualFlowEClass);
    // m_ConceptualFlow__to has already been allocated above
    m_ConceptualFlow__to->setFeatureID(
            ::kdm::conceptual::ConceptualPackage::CONCEPTUALFLOW__TO);
    m_ConceptualFlowEClass->getEStructuralFeatures().push_back(
            m_ConceptualFlow__to);
    // m_ConceptualFlow__from has already been allocated above
    m_ConceptualFlow__from->setFeatureID(
            ::kdm::conceptual::ConceptualPackage::CONCEPTUALFLOW__FROM);
    m_ConceptualFlowEClass->getEStructuralFeatures().push_back(
            m_ConceptualFlow__from);

    // ConceptualElement
    m_ConceptualElementEClass = new ::ecore::EClass();
    m_ConceptualElementEClass->setClassifierID(CONCEPTUALELEMENT);
    m_ConceptualElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_ConceptualElementEClass);

    // ConceptualRole
    m_ConceptualRoleEClass = new ::ecore::EClass();
    m_ConceptualRoleEClass->setClassifierID(CONCEPTUALROLE);
    m_ConceptualRoleEClass->setEPackage(this);
    getEClassifiers().push_back(m_ConceptualRoleEClass);
    // m_ConceptualRole__conceptualElement has already been allocated above
    m_ConceptualRole__conceptualElement->setFeatureID(
            ::kdm::conceptual::ConceptualPackage::CONCEPTUALROLE__CONCEPTUALELEMENT);
    m_ConceptualRoleEClass->getEStructuralFeatures().push_back(
            m_ConceptualRole__conceptualElement);

    // Create enums

    // Create data types

    // Initialize package
    setName("conceptual");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_ConceptualModelEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::kdm::KdmPackage* >(::kdm::kdm::KdmPackage::_instance())->getKDMModel());
    m_AbstractConceptualElementEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMEntity());
    m_TermUnitEClass->getESuperTypes().push_back(
            m_AbstractConceptualElementEClass);
    m_ConceptualContainerEClass->getESuperTypes().push_back(
            m_AbstractConceptualElementEClass);
    m_FactUnitEClass->getESuperTypes().push_back(m_ConceptualContainerEClass);
    m_AbstractConceptualRelationshipEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMRelationship());
    m_ConceptualRelationshipEClass->getESuperTypes().push_back(
            m_AbstractConceptualRelationshipEClass);
    m_BehaviorUnitEClass->getESuperTypes().push_back(
            m_ConceptualContainerEClass);
    m_RuleUnitEClass->getESuperTypes().push_back(m_ConceptualContainerEClass);
    m_ScenarioUnitEClass->getESuperTypes().push_back(
            m_ConceptualContainerEClass);
    m_ConceptualFlowEClass->getESuperTypes().push_back(
            m_AbstractConceptualRelationshipEClass);
    m_ConceptualElementEClass->getESuperTypes().push_back(
            m_AbstractConceptualElementEClass);
    m_ConceptualRoleEClass->getESuperTypes().push_back(
            m_AbstractConceptualElementEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // ConceptualModel
    m_ConceptualModelEClass->setName("ConceptualModel");
    m_ConceptualModelEClass->setAbstract(false);
    m_ConceptualModelEClass->setInterface(false);
    m_ConceptualModel__conceptualElement->setEType(
            m_AbstractConceptualElementEClass);
    m_ConceptualModel__conceptualElement->setName("conceptualElement");
    m_ConceptualModel__conceptualElement->setDefaultValueLiteral("");
    m_ConceptualModel__conceptualElement->setLowerBound(0);
    m_ConceptualModel__conceptualElement->setUpperBound(-1);
    m_ConceptualModel__conceptualElement->setTransient(false);
    m_ConceptualModel__conceptualElement->setVolatile(false);
    m_ConceptualModel__conceptualElement->setChangeable(true);
    m_ConceptualModel__conceptualElement->setContainment(true);
    m_ConceptualModel__conceptualElement->setResolveProxies(true);
    m_ConceptualModel__conceptualElement->setUnique(true);
    m_ConceptualModel__conceptualElement->setDerived(false);
    m_ConceptualModel__conceptualElement->setOrdered(false);
    // AbstractConceptualElement
    m_AbstractConceptualElementEClass->setName("AbstractConceptualElement");
    m_AbstractConceptualElementEClass->setAbstract(true);
    m_AbstractConceptualElementEClass->setInterface(false);
    m_AbstractConceptualElement__source->setEType(
            dynamic_cast< ::kdm::source::SourcePackage* >(::kdm::source::SourcePackage::_instance())->getSourceRef());
    m_AbstractConceptualElement__source->setName("source");
    m_AbstractConceptualElement__source->setDefaultValueLiteral("");
    m_AbstractConceptualElement__source->setLowerBound(0);
    m_AbstractConceptualElement__source->setUpperBound(-1);
    m_AbstractConceptualElement__source->setTransient(false);
    m_AbstractConceptualElement__source->setVolatile(false);
    m_AbstractConceptualElement__source->setChangeable(true);
    m_AbstractConceptualElement__source->setContainment(true);
    m_AbstractConceptualElement__source->setResolveProxies(true);
    m_AbstractConceptualElement__source->setUnique(true);
    m_AbstractConceptualElement__source->setDerived(false);
    m_AbstractConceptualElement__source->setOrdered(false);
    m_AbstractConceptualElement__implementation->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMEntity());
    m_AbstractConceptualElement__implementation->setName("implementation");
    m_AbstractConceptualElement__implementation->setDefaultValueLiteral("");
    m_AbstractConceptualElement__implementation->setLowerBound(0);
    m_AbstractConceptualElement__implementation->setUpperBound(-1);
    m_AbstractConceptualElement__implementation->setTransient(false);
    m_AbstractConceptualElement__implementation->setVolatile(false);
    m_AbstractConceptualElement__implementation->setChangeable(true);
    m_AbstractConceptualElement__implementation->setContainment(false);
    m_AbstractConceptualElement__implementation->setResolveProxies(true);
    m_AbstractConceptualElement__implementation->setUnique(true);
    m_AbstractConceptualElement__implementation->setDerived(false);
    m_AbstractConceptualElement__implementation->setOrdered(false);
    m_AbstractConceptualElement__conceptualRelation->setEType(
            m_AbstractConceptualRelationshipEClass);
    m_AbstractConceptualElement__conceptualRelation->setName(
            "conceptualRelation");
    m_AbstractConceptualElement__conceptualRelation->setDefaultValueLiteral("");
    m_AbstractConceptualElement__conceptualRelation->setLowerBound(0);
    m_AbstractConceptualElement__conceptualRelation->setUpperBound(-1);
    m_AbstractConceptualElement__conceptualRelation->setTransient(false);
    m_AbstractConceptualElement__conceptualRelation->setVolatile(false);
    m_AbstractConceptualElement__conceptualRelation->setChangeable(true);
    m_AbstractConceptualElement__conceptualRelation->setContainment(true);
    m_AbstractConceptualElement__conceptualRelation->setResolveProxies(true);
    m_AbstractConceptualElement__conceptualRelation->setUnique(true);
    m_AbstractConceptualElement__conceptualRelation->setDerived(false);
    m_AbstractConceptualElement__conceptualRelation->setOrdered(false);
    m_AbstractConceptualElement__abstraction->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getActionElement());
    m_AbstractConceptualElement__abstraction->setName("abstraction");
    m_AbstractConceptualElement__abstraction->setDefaultValueLiteral("");
    m_AbstractConceptualElement__abstraction->setLowerBound(0);
    m_AbstractConceptualElement__abstraction->setUpperBound(-1);
    m_AbstractConceptualElement__abstraction->setTransient(false);
    m_AbstractConceptualElement__abstraction->setVolatile(false);
    m_AbstractConceptualElement__abstraction->setChangeable(true);
    m_AbstractConceptualElement__abstraction->setContainment(true);
    m_AbstractConceptualElement__abstraction->setResolveProxies(true);
    m_AbstractConceptualElement__abstraction->setUnique(true);
    m_AbstractConceptualElement__abstraction->setDerived(false);
    m_AbstractConceptualElement__abstraction->setOrdered(false);
    // TermUnit
    m_TermUnitEClass->setName("TermUnit");
    m_TermUnitEClass->setAbstract(false);
    m_TermUnitEClass->setInterface(false);
    // ConceptualContainer
    m_ConceptualContainerEClass->setName("ConceptualContainer");
    m_ConceptualContainerEClass->setAbstract(false);
    m_ConceptualContainerEClass->setInterface(false);
    m_ConceptualContainer__conceptualElement->setEType(
            m_AbstractConceptualElementEClass);
    m_ConceptualContainer__conceptualElement->setName("conceptualElement");
    m_ConceptualContainer__conceptualElement->setDefaultValueLiteral("");
    m_ConceptualContainer__conceptualElement->setLowerBound(0);
    m_ConceptualContainer__conceptualElement->setUpperBound(-1);
    m_ConceptualContainer__conceptualElement->setTransient(false);
    m_ConceptualContainer__conceptualElement->setVolatile(false);
    m_ConceptualContainer__conceptualElement->setChangeable(true);
    m_ConceptualContainer__conceptualElement->setContainment(true);
    m_ConceptualContainer__conceptualElement->setResolveProxies(true);
    m_ConceptualContainer__conceptualElement->setUnique(true);
    m_ConceptualContainer__conceptualElement->setDerived(false);
    m_ConceptualContainer__conceptualElement->setOrdered(false);
    // FactUnit
    m_FactUnitEClass->setName("FactUnit");
    m_FactUnitEClass->setAbstract(false);
    m_FactUnitEClass->setInterface(false);
    // AbstractConceptualRelationship
    m_AbstractConceptualRelationshipEClass->setName(
            "AbstractConceptualRelationship");
    m_AbstractConceptualRelationshipEClass->setAbstract(true);
    m_AbstractConceptualRelationshipEClass->setInterface(false);
    // ConceptualRelationship
    m_ConceptualRelationshipEClass->setName("ConceptualRelationship");
    m_ConceptualRelationshipEClass->setAbstract(false);
    m_ConceptualRelationshipEClass->setInterface(false);
    m_ConceptualRelationship__to->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMEntity());
    m_ConceptualRelationship__to->setName("to");
    m_ConceptualRelationship__to->setDefaultValueLiteral("");
    m_ConceptualRelationship__to->setLowerBound(1);
    m_ConceptualRelationship__to->setUpperBound(1);
    m_ConceptualRelationship__to->setTransient(false);
    m_ConceptualRelationship__to->setVolatile(false);
    m_ConceptualRelationship__to->setChangeable(true);
    m_ConceptualRelationship__to->setContainment(false);
    m_ConceptualRelationship__to->setResolveProxies(true);
    m_ConceptualRelationship__to->setUnique(true);
    m_ConceptualRelationship__to->setDerived(false);
    m_ConceptualRelationship__to->setOrdered(false);
    m_ConceptualRelationship__from->setEType(m_AbstractConceptualElementEClass);
    m_ConceptualRelationship__from->setName("from");
    m_ConceptualRelationship__from->setDefaultValueLiteral("");
    m_ConceptualRelationship__from->setLowerBound(1);
    m_ConceptualRelationship__from->setUpperBound(1);
    m_ConceptualRelationship__from->setTransient(false);
    m_ConceptualRelationship__from->setVolatile(false);
    m_ConceptualRelationship__from->setChangeable(true);
    m_ConceptualRelationship__from->setContainment(false);
    m_ConceptualRelationship__from->setResolveProxies(true);
    m_ConceptualRelationship__from->setUnique(true);
    m_ConceptualRelationship__from->setDerived(false);
    m_ConceptualRelationship__from->setOrdered(false);
    // BehaviorUnit
    m_BehaviorUnitEClass->setName("BehaviorUnit");
    m_BehaviorUnitEClass->setAbstract(false);
    m_BehaviorUnitEClass->setInterface(false);
    // RuleUnit
    m_RuleUnitEClass->setName("RuleUnit");
    m_RuleUnitEClass->setAbstract(false);
    m_RuleUnitEClass->setInterface(false);
    // ScenarioUnit
    m_ScenarioUnitEClass->setName("ScenarioUnit");
    m_ScenarioUnitEClass->setAbstract(false);
    m_ScenarioUnitEClass->setInterface(false);
    // ConceptualFlow
    m_ConceptualFlowEClass->setName("ConceptualFlow");
    m_ConceptualFlowEClass->setAbstract(false);
    m_ConceptualFlowEClass->setInterface(false);
    m_ConceptualFlow__to->setEType(m_ConceptualContainerEClass);
    m_ConceptualFlow__to->setName("to");
    m_ConceptualFlow__to->setDefaultValueLiteral("");
    m_ConceptualFlow__to->setLowerBound(1);
    m_ConceptualFlow__to->setUpperBound(1);
    m_ConceptualFlow__to->setTransient(false);
    m_ConceptualFlow__to->setVolatile(false);
    m_ConceptualFlow__to->setChangeable(true);
    m_ConceptualFlow__to->setContainment(false);
    m_ConceptualFlow__to->setResolveProxies(true);
    m_ConceptualFlow__to->setUnique(true);
    m_ConceptualFlow__to->setDerived(false);
    m_ConceptualFlow__to->setOrdered(false);
    m_ConceptualFlow__from->setEType(m_ConceptualContainerEClass);
    m_ConceptualFlow__from->setName("from");
    m_ConceptualFlow__from->setDefaultValueLiteral("");
    m_ConceptualFlow__from->setLowerBound(1);
    m_ConceptualFlow__from->setUpperBound(1);
    m_ConceptualFlow__from->setTransient(false);
    m_ConceptualFlow__from->setVolatile(false);
    m_ConceptualFlow__from->setChangeable(true);
    m_ConceptualFlow__from->setContainment(false);
    m_ConceptualFlow__from->setResolveProxies(true);
    m_ConceptualFlow__from->setUnique(true);
    m_ConceptualFlow__from->setDerived(false);
    m_ConceptualFlow__from->setOrdered(false);
    // ConceptualElement
    m_ConceptualElementEClass->setName("ConceptualElement");
    m_ConceptualElementEClass->setAbstract(false);
    m_ConceptualElementEClass->setInterface(false);
    // ConceptualRole
    m_ConceptualRoleEClass->setName("ConceptualRole");
    m_ConceptualRoleEClass->setAbstract(false);
    m_ConceptualRoleEClass->setInterface(false);
    m_ConceptualRole__conceptualElement->setEType(
            m_AbstractConceptualElementEClass);
    m_ConceptualRole__conceptualElement->setName("conceptualElement");
    m_ConceptualRole__conceptualElement->setDefaultValueLiteral("");
    m_ConceptualRole__conceptualElement->setLowerBound(1);
    m_ConceptualRole__conceptualElement->setUpperBound(1);
    m_ConceptualRole__conceptualElement->setTransient(false);
    m_ConceptualRole__conceptualElement->setVolatile(false);
    m_ConceptualRole__conceptualElement->setChangeable(true);
    m_ConceptualRole__conceptualElement->setContainment(false);
    m_ConceptualRole__conceptualElement->setResolveProxies(true);
    m_ConceptualRole__conceptualElement->setUnique(true);
    m_ConceptualRole__conceptualElement->setDerived(false);
    m_ConceptualRole__conceptualElement->setOrdered(false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr ConceptualPackage::getConceptualModel()
{
    return m_ConceptualModelEClass;
}
::ecore::EClass_ptr ConceptualPackage::getAbstractConceptualElement()
{
    return m_AbstractConceptualElementEClass;
}
::ecore::EClass_ptr ConceptualPackage::getTermUnit()
{
    return m_TermUnitEClass;
}
::ecore::EClass_ptr ConceptualPackage::getConceptualContainer()
{
    return m_ConceptualContainerEClass;
}
::ecore::EClass_ptr ConceptualPackage::getFactUnit()
{
    return m_FactUnitEClass;
}
::ecore::EClass_ptr ConceptualPackage::getAbstractConceptualRelationship()
{
    return m_AbstractConceptualRelationshipEClass;
}
::ecore::EClass_ptr ConceptualPackage::getConceptualRelationship()
{
    return m_ConceptualRelationshipEClass;
}
::ecore::EClass_ptr ConceptualPackage::getBehaviorUnit()
{
    return m_BehaviorUnitEClass;
}
::ecore::EClass_ptr ConceptualPackage::getRuleUnit()
{
    return m_RuleUnitEClass;
}
::ecore::EClass_ptr ConceptualPackage::getScenarioUnit()
{
    return m_ScenarioUnitEClass;
}
::ecore::EClass_ptr ConceptualPackage::getConceptualFlow()
{
    return m_ConceptualFlowEClass;
}
::ecore::EClass_ptr ConceptualPackage::getConceptualElement()
{
    return m_ConceptualElementEClass;
}
::ecore::EClass_ptr ConceptualPackage::getConceptualRole()
{
    return m_ConceptualRoleEClass;
}

::ecore::EReference_ptr ConceptualPackage::getElement__attribute()
{
    return m_Element__attribute;
}
::ecore::EReference_ptr ConceptualPackage::getElement__annotation()
{
    return m_Element__annotation;
}
::ecore::EReference_ptr ConceptualPackage::getModelElement__stereotype()
{
    return m_ModelElement__stereotype;
}
::ecore::EReference_ptr ConceptualPackage::getModelElement__taggedValue()
{
    return m_ModelElement__taggedValue;
}
::ecore::EReference_ptr ConceptualPackage::getKDMFramework__audit()
{
    return m_KDMFramework__audit;
}
::ecore::EReference_ptr ConceptualPackage::getKDMFramework__extensionFamily()
{
    return m_KDMFramework__extensionFamily;
}
::ecore::EAttribute_ptr ConceptualPackage::getKDMFramework__name()
{
    return m_KDMFramework__name;
}
::ecore::EReference_ptr ConceptualPackage::getConceptualModel__conceptualElement()
{
    return m_ConceptualModel__conceptualElement;
}
::ecore::EAttribute_ptr ConceptualPackage::getKDMEntity__name()
{
    return m_KDMEntity__name;
}
::ecore::EReference_ptr ConceptualPackage::getAbstractConceptualElement__source()
{
    return m_AbstractConceptualElement__source;
}
::ecore::EReference_ptr ConceptualPackage::getAbstractConceptualElement__implementation()
{
    return m_AbstractConceptualElement__implementation;
}
::ecore::EReference_ptr ConceptualPackage::getAbstractConceptualElement__conceptualRelation()
{
    return m_AbstractConceptualElement__conceptualRelation;
}
::ecore::EReference_ptr ConceptualPackage::getAbstractConceptualElement__abstraction()
{
    return m_AbstractConceptualElement__abstraction;
}
::ecore::EReference_ptr ConceptualPackage::getConceptualContainer__conceptualElement()
{
    return m_ConceptualContainer__conceptualElement;
}
::ecore::EReference_ptr ConceptualPackage::getConceptualRelationship__to()
{
    return m_ConceptualRelationship__to;
}
::ecore::EReference_ptr ConceptualPackage::getConceptualRelationship__from()
{
    return m_ConceptualRelationship__from;
}
::ecore::EReference_ptr ConceptualPackage::getConceptualFlow__to()
{
    return m_ConceptualFlow__to;
}
::ecore::EReference_ptr ConceptualPackage::getConceptualFlow__from()
{
    return m_ConceptualFlow__from;
}
::ecore::EReference_ptr ConceptualPackage::getConceptualRole__conceptualElement()
{
    return m_ConceptualRole__conceptualElement;
}

