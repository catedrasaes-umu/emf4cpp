// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build/BuildPackageImpl.cpp
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

#include <kdm/build/BuildPackage.hpp>
#include <kdm/build/BuildFactory.hpp>
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
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>

using namespace ::kdm::build;

BuildPackage::BuildPackage()
{

    // Feature definitions of AbstractBuildElement
    m_AbstractBuildElement__buildRelation = new ::ecore::EReference();

    // Feature definitions of BuildResource
    m_BuildResource__implementation = new ::ecore::EReference();
    m_BuildResource__groupedBuild = new ::ecore::EReference();
    m_BuildResource__buildElement = new ::ecore::EReference();

    // Feature definitions of BuildDescription
    m_BuildDescription__text = new ::ecore::EAttribute();
    m_BuildDescription__source = new ::ecore::EReference();

    // Feature definitions of SymbolicLink

    // Feature definitions of AbstractBuildRelationship

    // Feature definitions of LinksTo
    m_LinksTo__to = new ::ecore::EReference();
    m_LinksTo__from = new ::ecore::EReference();

    // Feature definitions of Consumes
    m_Consumes__to = new ::ecore::EReference();
    m_Consumes__from = new ::ecore::EReference();

    // Feature definitions of BuildModel
    m_BuildModel__buildElement = new ::ecore::EReference();

    // Feature definitions of BuildComponent

    // Feature definitions of Supplier

    // Feature definitions of Tool

    // Feature definitions of BuildElement

    // Feature definitions of BuildRelationship
    m_BuildRelationship__to = new ::ecore::EReference();
    m_BuildRelationship__from = new ::ecore::EReference();

    // Feature definitions of SuppliedBy
    m_SuppliedBy__to = new ::ecore::EReference();
    m_SuppliedBy__from = new ::ecore::EReference();

    // Feature definitions of Library

    // Feature definitions of BuildStep

    // Feature definitions of Produces
    m_Produces__to = new ::ecore::EReference();
    m_Produces__from = new ::ecore::EReference();

    // Feature definitions of SupportedBy
    m_SupportedBy__to = new ::ecore::EReference();
    m_SupportedBy__from = new ::ecore::EReference();

    // Feature definitions of BuildProduct

    // Feature definitions of DescribedBy
    m_DescribedBy__to = new ::ecore::EReference();
    m_DescribedBy__from = new ::ecore::EReference();

    /* Now one can safely ask for a feature definition of
     * a class, though it is not yet usable. */
    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = BuildFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    // Create classes and their features

    // AbstractBuildElement
    m_AbstractBuildElementEClass = new ::ecore::EClass();
    m_AbstractBuildElementEClass->setClassifierID(ABSTRACTBUILDELEMENT);
    m_AbstractBuildElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_AbstractBuildElementEClass);
    // m_AbstractBuildElement__buildRelation has already been allocated above
    m_AbstractBuildElement__buildRelation->setFeatureID(
            ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__BUILDRELATION);
    m_AbstractBuildElementEClass->getEStructuralFeatures().push_back(
            m_AbstractBuildElement__buildRelation);

    // BuildResource
    m_BuildResourceEClass = new ::ecore::EClass();
    m_BuildResourceEClass->setClassifierID(BUILDRESOURCE);
    m_BuildResourceEClass->setEPackage(this);
    getEClassifiers().push_back(m_BuildResourceEClass);
    // m_BuildResource__implementation has already been allocated above
    m_BuildResource__implementation->setFeatureID(
            ::kdm::build::BuildPackage::BUILDRESOURCE__IMPLEMENTATION);
    m_BuildResourceEClass->getEStructuralFeatures().push_back(
            m_BuildResource__implementation);
    // m_BuildResource__groupedBuild has already been allocated above
    m_BuildResource__groupedBuild->setFeatureID(
            ::kdm::build::BuildPackage::BUILDRESOURCE__GROUPEDBUILD);
    m_BuildResourceEClass->getEStructuralFeatures().push_back(
            m_BuildResource__groupedBuild);
    // m_BuildResource__buildElement has already been allocated above
    m_BuildResource__buildElement->setFeatureID(
            ::kdm::build::BuildPackage::BUILDRESOURCE__BUILDELEMENT);
    m_BuildResourceEClass->getEStructuralFeatures().push_back(
            m_BuildResource__buildElement);

    // BuildDescription
    m_BuildDescriptionEClass = new ::ecore::EClass();
    m_BuildDescriptionEClass->setClassifierID(BUILDDESCRIPTION);
    m_BuildDescriptionEClass->setEPackage(this);
    getEClassifiers().push_back(m_BuildDescriptionEClass);
    // m_BuildDescription__text has already been allocated above
    m_BuildDescription__text->setFeatureID(
            ::kdm::build::BuildPackage::BUILDDESCRIPTION__TEXT);
    m_BuildDescriptionEClass->getEStructuralFeatures().push_back(
            m_BuildDescription__text);
    // m_BuildDescription__source has already been allocated above
    m_BuildDescription__source->setFeatureID(
            ::kdm::build::BuildPackage::BUILDDESCRIPTION__SOURCE);
    m_BuildDescriptionEClass->getEStructuralFeatures().push_back(
            m_BuildDescription__source);

    // SymbolicLink
    m_SymbolicLinkEClass = new ::ecore::EClass();
    m_SymbolicLinkEClass->setClassifierID(SYMBOLICLINK);
    m_SymbolicLinkEClass->setEPackage(this);
    getEClassifiers().push_back(m_SymbolicLinkEClass);

    // AbstractBuildRelationship
    m_AbstractBuildRelationshipEClass = new ::ecore::EClass();
    m_AbstractBuildRelationshipEClass->setClassifierID(
            ABSTRACTBUILDRELATIONSHIP);
    m_AbstractBuildRelationshipEClass->setEPackage(this);
    getEClassifiers().push_back(m_AbstractBuildRelationshipEClass);

    // LinksTo
    m_LinksToEClass = new ::ecore::EClass();
    m_LinksToEClass->setClassifierID(LINKSTO);
    m_LinksToEClass->setEPackage(this);
    getEClassifiers().push_back(m_LinksToEClass);
    // m_LinksTo__to has already been allocated above
    m_LinksTo__to->setFeatureID(::kdm::build::BuildPackage::LINKSTO__TO);
    m_LinksToEClass->getEStructuralFeatures().push_back(m_LinksTo__to);
    // m_LinksTo__from has already been allocated above
    m_LinksTo__from->setFeatureID(::kdm::build::BuildPackage::LINKSTO__FROM);
    m_LinksToEClass->getEStructuralFeatures().push_back(m_LinksTo__from);

    // Consumes
    m_ConsumesEClass = new ::ecore::EClass();
    m_ConsumesEClass->setClassifierID(CONSUMES);
    m_ConsumesEClass->setEPackage(this);
    getEClassifiers().push_back(m_ConsumesEClass);
    // m_Consumes__to has already been allocated above
    m_Consumes__to->setFeatureID(::kdm::build::BuildPackage::CONSUMES__TO);
    m_ConsumesEClass->getEStructuralFeatures().push_back(m_Consumes__to);
    // m_Consumes__from has already been allocated above
    m_Consumes__from->setFeatureID(::kdm::build::BuildPackage::CONSUMES__FROM);
    m_ConsumesEClass->getEStructuralFeatures().push_back(m_Consumes__from);

    // BuildModel
    m_BuildModelEClass = new ::ecore::EClass();
    m_BuildModelEClass->setClassifierID(BUILDMODEL);
    m_BuildModelEClass->setEPackage(this);
    getEClassifiers().push_back(m_BuildModelEClass);
    // m_BuildModel__buildElement has already been allocated above
    m_BuildModel__buildElement->setFeatureID(
            ::kdm::build::BuildPackage::BUILDMODEL__BUILDELEMENT);
    m_BuildModelEClass->getEStructuralFeatures().push_back(
            m_BuildModel__buildElement);

    // BuildComponent
    m_BuildComponentEClass = new ::ecore::EClass();
    m_BuildComponentEClass->setClassifierID(BUILDCOMPONENT);
    m_BuildComponentEClass->setEPackage(this);
    getEClassifiers().push_back(m_BuildComponentEClass);

    // Supplier
    m_SupplierEClass = new ::ecore::EClass();
    m_SupplierEClass->setClassifierID(SUPPLIER);
    m_SupplierEClass->setEPackage(this);
    getEClassifiers().push_back(m_SupplierEClass);

    // Tool
    m_ToolEClass = new ::ecore::EClass();
    m_ToolEClass->setClassifierID(TOOL);
    m_ToolEClass->setEPackage(this);
    getEClassifiers().push_back(m_ToolEClass);

    // BuildElement
    m_BuildElementEClass = new ::ecore::EClass();
    m_BuildElementEClass->setClassifierID(BUILDELEMENT);
    m_BuildElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_BuildElementEClass);

    // BuildRelationship
    m_BuildRelationshipEClass = new ::ecore::EClass();
    m_BuildRelationshipEClass->setClassifierID(BUILDRELATIONSHIP);
    m_BuildRelationshipEClass->setEPackage(this);
    getEClassifiers().push_back(m_BuildRelationshipEClass);
    // m_BuildRelationship__to has already been allocated above
    m_BuildRelationship__to->setFeatureID(
            ::kdm::build::BuildPackage::BUILDRELATIONSHIP__TO);
    m_BuildRelationshipEClass->getEStructuralFeatures().push_back(
            m_BuildRelationship__to);
    // m_BuildRelationship__from has already been allocated above
    m_BuildRelationship__from->setFeatureID(
            ::kdm::build::BuildPackage::BUILDRELATIONSHIP__FROM);
    m_BuildRelationshipEClass->getEStructuralFeatures().push_back(
            m_BuildRelationship__from);

    // SuppliedBy
    m_SuppliedByEClass = new ::ecore::EClass();
    m_SuppliedByEClass->setClassifierID(SUPPLIEDBY);
    m_SuppliedByEClass->setEPackage(this);
    getEClassifiers().push_back(m_SuppliedByEClass);
    // m_SuppliedBy__to has already been allocated above
    m_SuppliedBy__to->setFeatureID(::kdm::build::BuildPackage::SUPPLIEDBY__TO);
    m_SuppliedByEClass->getEStructuralFeatures().push_back(m_SuppliedBy__to);
    // m_SuppliedBy__from has already been allocated above
    m_SuppliedBy__from->setFeatureID(
            ::kdm::build::BuildPackage::SUPPLIEDBY__FROM);
    m_SuppliedByEClass->getEStructuralFeatures().push_back(m_SuppliedBy__from);

    // Library
    m_LibraryEClass = new ::ecore::EClass();
    m_LibraryEClass->setClassifierID(LIBRARY);
    m_LibraryEClass->setEPackage(this);
    getEClassifiers().push_back(m_LibraryEClass);

    // BuildStep
    m_BuildStepEClass = new ::ecore::EClass();
    m_BuildStepEClass->setClassifierID(BUILDSTEP);
    m_BuildStepEClass->setEPackage(this);
    getEClassifiers().push_back(m_BuildStepEClass);

    // Produces
    m_ProducesEClass = new ::ecore::EClass();
    m_ProducesEClass->setClassifierID(PRODUCES);
    m_ProducesEClass->setEPackage(this);
    getEClassifiers().push_back(m_ProducesEClass);
    // m_Produces__to has already been allocated above
    m_Produces__to->setFeatureID(::kdm::build::BuildPackage::PRODUCES__TO);
    m_ProducesEClass->getEStructuralFeatures().push_back(m_Produces__to);
    // m_Produces__from has already been allocated above
    m_Produces__from->setFeatureID(::kdm::build::BuildPackage::PRODUCES__FROM);
    m_ProducesEClass->getEStructuralFeatures().push_back(m_Produces__from);

    // SupportedBy
    m_SupportedByEClass = new ::ecore::EClass();
    m_SupportedByEClass->setClassifierID(SUPPORTEDBY);
    m_SupportedByEClass->setEPackage(this);
    getEClassifiers().push_back(m_SupportedByEClass);
    // m_SupportedBy__to has already been allocated above
    m_SupportedBy__to->setFeatureID(
            ::kdm::build::BuildPackage::SUPPORTEDBY__TO);
    m_SupportedByEClass->getEStructuralFeatures().push_back(m_SupportedBy__to);
    // m_SupportedBy__from has already been allocated above
    m_SupportedBy__from->setFeatureID(
            ::kdm::build::BuildPackage::SUPPORTEDBY__FROM);
    m_SupportedByEClass->getEStructuralFeatures().push_back(
            m_SupportedBy__from);

    // BuildProduct
    m_BuildProductEClass = new ::ecore::EClass();
    m_BuildProductEClass->setClassifierID(BUILDPRODUCT);
    m_BuildProductEClass->setEPackage(this);
    getEClassifiers().push_back(m_BuildProductEClass);

    // DescribedBy
    m_DescribedByEClass = new ::ecore::EClass();
    m_DescribedByEClass->setClassifierID(DESCRIBEDBY);
    m_DescribedByEClass->setEPackage(this);
    getEClassifiers().push_back(m_DescribedByEClass);
    // m_DescribedBy__to has already been allocated above
    m_DescribedBy__to->setFeatureID(
            ::kdm::build::BuildPackage::DESCRIBEDBY__TO);
    m_DescribedByEClass->getEStructuralFeatures().push_back(m_DescribedBy__to);
    // m_DescribedBy__from has already been allocated above
    m_DescribedBy__from->setFeatureID(
            ::kdm::build::BuildPackage::DESCRIBEDBY__FROM);
    m_DescribedByEClass->getEStructuralFeatures().push_back(
            m_DescribedBy__from);

    // Create enums

    // Create data types

    // Initialize package
    setName("build");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_AbstractBuildElementEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMEntity());
    m_BuildResourceEClass->getESuperTypes().push_back(
            m_AbstractBuildElementEClass);
    m_BuildDescriptionEClass->getESuperTypes().push_back(m_BuildResourceEClass);
    m_SymbolicLinkEClass->getESuperTypes().push_back(
            m_AbstractBuildElementEClass);
    m_AbstractBuildRelationshipEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMRelationship());
    m_LinksToEClass->getESuperTypes().push_back(
            m_AbstractBuildRelationshipEClass);
    m_ConsumesEClass->getESuperTypes().push_back(
            m_AbstractBuildRelationshipEClass);
    m_BuildModelEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::kdm::KdmPackage* >(::kdm::kdm::KdmPackage::_instance())->getKDMModel());
    m_BuildComponentEClass->getESuperTypes().push_back(m_BuildResourceEClass);
    m_SupplierEClass->getESuperTypes().push_back(m_AbstractBuildElementEClass);
    m_ToolEClass->getESuperTypes().push_back(m_AbstractBuildElementEClass);
    m_BuildElementEClass->getESuperTypes().push_back(
            m_AbstractBuildElementEClass);
    m_BuildRelationshipEClass->getESuperTypes().push_back(
            m_AbstractBuildRelationshipEClass);
    m_SuppliedByEClass->getESuperTypes().push_back(
            m_AbstractBuildRelationshipEClass);
    m_LibraryEClass->getESuperTypes().push_back(m_BuildResourceEClass);
    m_BuildStepEClass->getESuperTypes().push_back(m_BuildResourceEClass);
    m_ProducesEClass->getESuperTypes().push_back(
            m_AbstractBuildRelationshipEClass);
    m_SupportedByEClass->getESuperTypes().push_back(
            m_AbstractBuildRelationshipEClass);
    m_BuildProductEClass->getESuperTypes().push_back(m_BuildResourceEClass);
    m_DescribedByEClass->getESuperTypes().push_back(
            m_AbstractBuildRelationshipEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // AbstractBuildElement
    m_AbstractBuildElementEClass->setName("AbstractBuildElement");
    m_AbstractBuildElementEClass->setAbstract(true);
    m_AbstractBuildElementEClass->setInterface(false);
    m_AbstractBuildElement__buildRelation->setEType(
            m_AbstractBuildRelationshipEClass);
    m_AbstractBuildElement__buildRelation->setName("buildRelation");
    m_AbstractBuildElement__buildRelation->setDefaultValueLiteral("");
    m_AbstractBuildElement__buildRelation->setLowerBound(0);
    m_AbstractBuildElement__buildRelation->setUpperBound(-1);
    m_AbstractBuildElement__buildRelation->setTransient(false);
    m_AbstractBuildElement__buildRelation->setVolatile(false);
    m_AbstractBuildElement__buildRelation->setChangeable(true);
    m_AbstractBuildElement__buildRelation->setContainment(true);
    m_AbstractBuildElement__buildRelation->setResolveProxies(true);
    m_AbstractBuildElement__buildRelation->setUnique(true);
    m_AbstractBuildElement__buildRelation->setDerived(false);
    m_AbstractBuildElement__buildRelation->setOrdered(false);
    // BuildResource
    m_BuildResourceEClass->setName("BuildResource");
    m_BuildResourceEClass->setAbstract(false);
    m_BuildResourceEClass->setInterface(false);
    m_BuildResource__implementation->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMEntity());
    m_BuildResource__implementation->setName("implementation");
    m_BuildResource__implementation->setDefaultValueLiteral("");
    m_BuildResource__implementation->setLowerBound(0);
    m_BuildResource__implementation->setUpperBound(-1);
    m_BuildResource__implementation->setTransient(false);
    m_BuildResource__implementation->setVolatile(false);
    m_BuildResource__implementation->setChangeable(true);
    m_BuildResource__implementation->setContainment(false);
    m_BuildResource__implementation->setResolveProxies(true);
    m_BuildResource__implementation->setUnique(true);
    m_BuildResource__implementation->setDerived(false);
    m_BuildResource__implementation->setOrdered(false);
    m_BuildResource__groupedBuild->setEType(m_AbstractBuildElementEClass);
    m_BuildResource__groupedBuild->setName("groupedBuild");
    m_BuildResource__groupedBuild->setDefaultValueLiteral("");
    m_BuildResource__groupedBuild->setLowerBound(0);
    m_BuildResource__groupedBuild->setUpperBound(-1);
    m_BuildResource__groupedBuild->setTransient(false);
    m_BuildResource__groupedBuild->setVolatile(false);
    m_BuildResource__groupedBuild->setChangeable(true);
    m_BuildResource__groupedBuild->setContainment(false);
    m_BuildResource__groupedBuild->setResolveProxies(true);
    m_BuildResource__groupedBuild->setUnique(true);
    m_BuildResource__groupedBuild->setDerived(false);
    m_BuildResource__groupedBuild->setOrdered(false);
    m_BuildResource__buildElement->setEType(m_AbstractBuildElementEClass);
    m_BuildResource__buildElement->setName("buildElement");
    m_BuildResource__buildElement->setDefaultValueLiteral("");
    m_BuildResource__buildElement->setLowerBound(0);
    m_BuildResource__buildElement->setUpperBound(-1);
    m_BuildResource__buildElement->setTransient(false);
    m_BuildResource__buildElement->setVolatile(false);
    m_BuildResource__buildElement->setChangeable(true);
    m_BuildResource__buildElement->setContainment(true);
    m_BuildResource__buildElement->setResolveProxies(true);
    m_BuildResource__buildElement->setUnique(true);
    m_BuildResource__buildElement->setDerived(false);
    m_BuildResource__buildElement->setOrdered(false);
    // BuildDescription
    m_BuildDescriptionEClass->setName("BuildDescription");
    m_BuildDescriptionEClass->setAbstract(false);
    m_BuildDescriptionEClass->setInterface(false);
    m_BuildDescription__text->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_BuildDescription__text->setName("text");
    m_BuildDescription__text->setDefaultValueLiteral("");
    m_BuildDescription__text->setLowerBound(0);
    m_BuildDescription__text->setUpperBound(1);
    m_BuildDescription__text->setTransient(false);
    m_BuildDescription__text->setVolatile(false);
    m_BuildDescription__text->setChangeable(true);
    m_BuildDescription__text->setUnsettable(false);
    m_BuildDescription__text->setID(false);
    m_BuildDescription__text->setUnique(false);
    m_BuildDescription__text->setDerived(false);
    m_BuildDescription__text->setOrdered(false);
    m_BuildDescription__source->setEType(
            dynamic_cast< ::kdm::source::SourcePackage* >(::kdm::source::SourcePackage::_instance())->getSourceRef());
    m_BuildDescription__source->setName("source");
    m_BuildDescription__source->setDefaultValueLiteral("");
    m_BuildDescription__source->setLowerBound(0);
    m_BuildDescription__source->setUpperBound(-1);
    m_BuildDescription__source->setTransient(false);
    m_BuildDescription__source->setVolatile(false);
    m_BuildDescription__source->setChangeable(true);
    m_BuildDescription__source->setContainment(true);
    m_BuildDescription__source->setResolveProxies(true);
    m_BuildDescription__source->setUnique(true);
    m_BuildDescription__source->setDerived(false);
    m_BuildDescription__source->setOrdered(false);
    // SymbolicLink
    m_SymbolicLinkEClass->setName("SymbolicLink");
    m_SymbolicLinkEClass->setAbstract(false);
    m_SymbolicLinkEClass->setInterface(false);
    // AbstractBuildRelationship
    m_AbstractBuildRelationshipEClass->setName("AbstractBuildRelationship");
    m_AbstractBuildRelationshipEClass->setAbstract(true);
    m_AbstractBuildRelationshipEClass->setInterface(false);
    // LinksTo
    m_LinksToEClass->setName("LinksTo");
    m_LinksToEClass->setAbstract(false);
    m_LinksToEClass->setInterface(false);
    m_LinksTo__to->setEType(m_AbstractBuildElementEClass);
    m_LinksTo__to->setName("to");
    m_LinksTo__to->setDefaultValueLiteral("");
    m_LinksTo__to->setLowerBound(1);
    m_LinksTo__to->setUpperBound(1);
    m_LinksTo__to->setTransient(false);
    m_LinksTo__to->setVolatile(false);
    m_LinksTo__to->setChangeable(true);
    m_LinksTo__to->setContainment(false);
    m_LinksTo__to->setResolveProxies(true);
    m_LinksTo__to->setUnique(true);
    m_LinksTo__to->setDerived(false);
    m_LinksTo__to->setOrdered(false);
    m_LinksTo__from->setEType(m_SymbolicLinkEClass);
    m_LinksTo__from->setName("from");
    m_LinksTo__from->setDefaultValueLiteral("");
    m_LinksTo__from->setLowerBound(1);
    m_LinksTo__from->setUpperBound(1);
    m_LinksTo__from->setTransient(false);
    m_LinksTo__from->setVolatile(false);
    m_LinksTo__from->setChangeable(true);
    m_LinksTo__from->setContainment(false);
    m_LinksTo__from->setResolveProxies(true);
    m_LinksTo__from->setUnique(true);
    m_LinksTo__from->setDerived(false);
    m_LinksTo__from->setOrdered(false);
    // Consumes
    m_ConsumesEClass->setName("Consumes");
    m_ConsumesEClass->setAbstract(false);
    m_ConsumesEClass->setInterface(false);
    m_Consumes__to->setEType(m_AbstractBuildElementEClass);
    m_Consumes__to->setName("to");
    m_Consumes__to->setDefaultValueLiteral("");
    m_Consumes__to->setLowerBound(1);
    m_Consumes__to->setUpperBound(1);
    m_Consumes__to->setTransient(false);
    m_Consumes__to->setVolatile(false);
    m_Consumes__to->setChangeable(true);
    m_Consumes__to->setContainment(false);
    m_Consumes__to->setResolveProxies(true);
    m_Consumes__to->setUnique(true);
    m_Consumes__to->setDerived(false);
    m_Consumes__to->setOrdered(false);
    m_Consumes__from->setEType(m_BuildStepEClass);
    m_Consumes__from->setName("from");
    m_Consumes__from->setDefaultValueLiteral("");
    m_Consumes__from->setLowerBound(1);
    m_Consumes__from->setUpperBound(1);
    m_Consumes__from->setTransient(false);
    m_Consumes__from->setVolatile(false);
    m_Consumes__from->setChangeable(true);
    m_Consumes__from->setContainment(false);
    m_Consumes__from->setResolveProxies(true);
    m_Consumes__from->setUnique(true);
    m_Consumes__from->setDerived(false);
    m_Consumes__from->setOrdered(false);
    // BuildModel
    m_BuildModelEClass->setName("BuildModel");
    m_BuildModelEClass->setAbstract(false);
    m_BuildModelEClass->setInterface(false);
    m_BuildModel__buildElement->setEType(m_AbstractBuildElementEClass);
    m_BuildModel__buildElement->setName("buildElement");
    m_BuildModel__buildElement->setDefaultValueLiteral("");
    m_BuildModel__buildElement->setLowerBound(0);
    m_BuildModel__buildElement->setUpperBound(-1);
    m_BuildModel__buildElement->setTransient(false);
    m_BuildModel__buildElement->setVolatile(false);
    m_BuildModel__buildElement->setChangeable(true);
    m_BuildModel__buildElement->setContainment(true);
    m_BuildModel__buildElement->setResolveProxies(true);
    m_BuildModel__buildElement->setUnique(true);
    m_BuildModel__buildElement->setDerived(false);
    m_BuildModel__buildElement->setOrdered(false);
    // BuildComponent
    m_BuildComponentEClass->setName("BuildComponent");
    m_BuildComponentEClass->setAbstract(false);
    m_BuildComponentEClass->setInterface(false);
    // Supplier
    m_SupplierEClass->setName("Supplier");
    m_SupplierEClass->setAbstract(false);
    m_SupplierEClass->setInterface(false);
    // Tool
    m_ToolEClass->setName("Tool");
    m_ToolEClass->setAbstract(false);
    m_ToolEClass->setInterface(false);
    // BuildElement
    m_BuildElementEClass->setName("BuildElement");
    m_BuildElementEClass->setAbstract(false);
    m_BuildElementEClass->setInterface(false);
    // BuildRelationship
    m_BuildRelationshipEClass->setName("BuildRelationship");
    m_BuildRelationshipEClass->setAbstract(false);
    m_BuildRelationshipEClass->setInterface(false);
    m_BuildRelationship__to->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMEntity());
    m_BuildRelationship__to->setName("to");
    m_BuildRelationship__to->setDefaultValueLiteral("");
    m_BuildRelationship__to->setLowerBound(1);
    m_BuildRelationship__to->setUpperBound(1);
    m_BuildRelationship__to->setTransient(false);
    m_BuildRelationship__to->setVolatile(false);
    m_BuildRelationship__to->setChangeable(true);
    m_BuildRelationship__to->setContainment(false);
    m_BuildRelationship__to->setResolveProxies(true);
    m_BuildRelationship__to->setUnique(true);
    m_BuildRelationship__to->setDerived(false);
    m_BuildRelationship__to->setOrdered(false);
    m_BuildRelationship__from->setEType(m_AbstractBuildElementEClass);
    m_BuildRelationship__from->setName("from");
    m_BuildRelationship__from->setDefaultValueLiteral("");
    m_BuildRelationship__from->setLowerBound(1);
    m_BuildRelationship__from->setUpperBound(1);
    m_BuildRelationship__from->setTransient(false);
    m_BuildRelationship__from->setVolatile(false);
    m_BuildRelationship__from->setChangeable(true);
    m_BuildRelationship__from->setContainment(false);
    m_BuildRelationship__from->setResolveProxies(true);
    m_BuildRelationship__from->setUnique(true);
    m_BuildRelationship__from->setDerived(false);
    m_BuildRelationship__from->setOrdered(false);
    // SuppliedBy
    m_SuppliedByEClass->setName("SuppliedBy");
    m_SuppliedByEClass->setAbstract(false);
    m_SuppliedByEClass->setInterface(false);
    m_SuppliedBy__to->setEType(m_SupplierEClass);
    m_SuppliedBy__to->setName("to");
    m_SuppliedBy__to->setDefaultValueLiteral("");
    m_SuppliedBy__to->setLowerBound(1);
    m_SuppliedBy__to->setUpperBound(1);
    m_SuppliedBy__to->setTransient(false);
    m_SuppliedBy__to->setVolatile(false);
    m_SuppliedBy__to->setChangeable(true);
    m_SuppliedBy__to->setContainment(false);
    m_SuppliedBy__to->setResolveProxies(true);
    m_SuppliedBy__to->setUnique(true);
    m_SuppliedBy__to->setDerived(false);
    m_SuppliedBy__to->setOrdered(false);
    m_SuppliedBy__from->setEType(m_AbstractBuildElementEClass);
    m_SuppliedBy__from->setName("from");
    m_SuppliedBy__from->setDefaultValueLiteral("");
    m_SuppliedBy__from->setLowerBound(1);
    m_SuppliedBy__from->setUpperBound(1);
    m_SuppliedBy__from->setTransient(false);
    m_SuppliedBy__from->setVolatile(false);
    m_SuppliedBy__from->setChangeable(true);
    m_SuppliedBy__from->setContainment(false);
    m_SuppliedBy__from->setResolveProxies(true);
    m_SuppliedBy__from->setUnique(true);
    m_SuppliedBy__from->setDerived(false);
    m_SuppliedBy__from->setOrdered(false);
    // Library
    m_LibraryEClass->setName("Library");
    m_LibraryEClass->setAbstract(false);
    m_LibraryEClass->setInterface(false);
    // BuildStep
    m_BuildStepEClass->setName("BuildStep");
    m_BuildStepEClass->setAbstract(false);
    m_BuildStepEClass->setInterface(false);
    // Produces
    m_ProducesEClass->setName("Produces");
    m_ProducesEClass->setAbstract(false);
    m_ProducesEClass->setInterface(false);
    m_Produces__to->setEType(m_AbstractBuildElementEClass);
    m_Produces__to->setName("to");
    m_Produces__to->setDefaultValueLiteral("");
    m_Produces__to->setLowerBound(1);
    m_Produces__to->setUpperBound(1);
    m_Produces__to->setTransient(false);
    m_Produces__to->setVolatile(false);
    m_Produces__to->setChangeable(true);
    m_Produces__to->setContainment(false);
    m_Produces__to->setResolveProxies(true);
    m_Produces__to->setUnique(true);
    m_Produces__to->setDerived(false);
    m_Produces__to->setOrdered(false);
    m_Produces__from->setEType(m_BuildStepEClass);
    m_Produces__from->setName("from");
    m_Produces__from->setDefaultValueLiteral("");
    m_Produces__from->setLowerBound(1);
    m_Produces__from->setUpperBound(1);
    m_Produces__from->setTransient(false);
    m_Produces__from->setVolatile(false);
    m_Produces__from->setChangeable(true);
    m_Produces__from->setContainment(false);
    m_Produces__from->setResolveProxies(true);
    m_Produces__from->setUnique(true);
    m_Produces__from->setDerived(false);
    m_Produces__from->setOrdered(false);
    // SupportedBy
    m_SupportedByEClass->setName("SupportedBy");
    m_SupportedByEClass->setAbstract(false);
    m_SupportedByEClass->setInterface(false);
    m_SupportedBy__to->setEType(m_ToolEClass);
    m_SupportedBy__to->setName("to");
    m_SupportedBy__to->setDefaultValueLiteral("");
    m_SupportedBy__to->setLowerBound(1);
    m_SupportedBy__to->setUpperBound(1);
    m_SupportedBy__to->setTransient(false);
    m_SupportedBy__to->setVolatile(false);
    m_SupportedBy__to->setChangeable(true);
    m_SupportedBy__to->setContainment(false);
    m_SupportedBy__to->setResolveProxies(true);
    m_SupportedBy__to->setUnique(true);
    m_SupportedBy__to->setDerived(false);
    m_SupportedBy__to->setOrdered(false);
    m_SupportedBy__from->setEType(m_BuildStepEClass);
    m_SupportedBy__from->setName("from");
    m_SupportedBy__from->setDefaultValueLiteral("");
    m_SupportedBy__from->setLowerBound(1);
    m_SupportedBy__from->setUpperBound(1);
    m_SupportedBy__from->setTransient(false);
    m_SupportedBy__from->setVolatile(false);
    m_SupportedBy__from->setChangeable(true);
    m_SupportedBy__from->setContainment(false);
    m_SupportedBy__from->setResolveProxies(true);
    m_SupportedBy__from->setUnique(true);
    m_SupportedBy__from->setDerived(false);
    m_SupportedBy__from->setOrdered(false);
    // BuildProduct
    m_BuildProductEClass->setName("BuildProduct");
    m_BuildProductEClass->setAbstract(false);
    m_BuildProductEClass->setInterface(false);
    // DescribedBy
    m_DescribedByEClass->setName("DescribedBy");
    m_DescribedByEClass->setAbstract(false);
    m_DescribedByEClass->setInterface(false);
    m_DescribedBy__to->setEType(m_BuildDescriptionEClass);
    m_DescribedBy__to->setName("to");
    m_DescribedBy__to->setDefaultValueLiteral("");
    m_DescribedBy__to->setLowerBound(1);
    m_DescribedBy__to->setUpperBound(1);
    m_DescribedBy__to->setTransient(false);
    m_DescribedBy__to->setVolatile(false);
    m_DescribedBy__to->setChangeable(true);
    m_DescribedBy__to->setContainment(false);
    m_DescribedBy__to->setResolveProxies(true);
    m_DescribedBy__to->setUnique(true);
    m_DescribedBy__to->setDerived(false);
    m_DescribedBy__to->setOrdered(false);
    m_DescribedBy__from->setEType(m_BuildStepEClass);
    m_DescribedBy__from->setName("from");
    m_DescribedBy__from->setDefaultValueLiteral("");
    m_DescribedBy__from->setLowerBound(1);
    m_DescribedBy__from->setUpperBound(1);
    m_DescribedBy__from->setTransient(false);
    m_DescribedBy__from->setVolatile(false);
    m_DescribedBy__from->setChangeable(true);
    m_DescribedBy__from->setContainment(false);
    m_DescribedBy__from->setResolveProxies(true);
    m_DescribedBy__from->setUnique(true);
    m_DescribedBy__from->setDerived(false);
    m_DescribedBy__from->setOrdered(false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr BuildPackage::getAbstractBuildElement()
{
    return m_AbstractBuildElementEClass;
}
::ecore::EClass_ptr BuildPackage::getBuildResource()
{
    return m_BuildResourceEClass;
}
::ecore::EClass_ptr BuildPackage::getBuildDescription()
{
    return m_BuildDescriptionEClass;
}
::ecore::EClass_ptr BuildPackage::getSymbolicLink()
{
    return m_SymbolicLinkEClass;
}
::ecore::EClass_ptr BuildPackage::getAbstractBuildRelationship()
{
    return m_AbstractBuildRelationshipEClass;
}
::ecore::EClass_ptr BuildPackage::getLinksTo()
{
    return m_LinksToEClass;
}
::ecore::EClass_ptr BuildPackage::getConsumes()
{
    return m_ConsumesEClass;
}
::ecore::EClass_ptr BuildPackage::getBuildModel()
{
    return m_BuildModelEClass;
}
::ecore::EClass_ptr BuildPackage::getBuildComponent()
{
    return m_BuildComponentEClass;
}
::ecore::EClass_ptr BuildPackage::getSupplier()
{
    return m_SupplierEClass;
}
::ecore::EClass_ptr BuildPackage::getTool()
{
    return m_ToolEClass;
}
::ecore::EClass_ptr BuildPackage::getBuildElement()
{
    return m_BuildElementEClass;
}
::ecore::EClass_ptr BuildPackage::getBuildRelationship()
{
    return m_BuildRelationshipEClass;
}
::ecore::EClass_ptr BuildPackage::getSuppliedBy()
{
    return m_SuppliedByEClass;
}
::ecore::EClass_ptr BuildPackage::getLibrary()
{
    return m_LibraryEClass;
}
::ecore::EClass_ptr BuildPackage::getBuildStep()
{
    return m_BuildStepEClass;
}
::ecore::EClass_ptr BuildPackage::getProduces()
{
    return m_ProducesEClass;
}
::ecore::EClass_ptr BuildPackage::getSupportedBy()
{
    return m_SupportedByEClass;
}
::ecore::EClass_ptr BuildPackage::getBuildProduct()
{
    return m_BuildProductEClass;
}
::ecore::EClass_ptr BuildPackage::getDescribedBy()
{
    return m_DescribedByEClass;
}

::ecore::EReference_ptr BuildPackage::getElement__attribute()
{
    return m_Element__attribute;
}
::ecore::EReference_ptr BuildPackage::getElement__annotation()
{
    return m_Element__annotation;
}
::ecore::EReference_ptr BuildPackage::getModelElement__stereotype()
{
    return m_ModelElement__stereotype;
}
::ecore::EReference_ptr BuildPackage::getModelElement__taggedValue()
{
    return m_ModelElement__taggedValue;
}
::ecore::EAttribute_ptr BuildPackage::getKDMEntity__name()
{
    return m_KDMEntity__name;
}
::ecore::EReference_ptr BuildPackage::getAbstractBuildElement__buildRelation()
{
    return m_AbstractBuildElement__buildRelation;
}
::ecore::EReference_ptr BuildPackage::getBuildResource__implementation()
{
    return m_BuildResource__implementation;
}
::ecore::EReference_ptr BuildPackage::getBuildResource__groupedBuild()
{
    return m_BuildResource__groupedBuild;
}
::ecore::EReference_ptr BuildPackage::getBuildResource__buildElement()
{
    return m_BuildResource__buildElement;
}
::ecore::EReference_ptr BuildPackage::getBuildDescription__source()
{
    return m_BuildDescription__source;
}
::ecore::EAttribute_ptr BuildPackage::getBuildDescription__text()
{
    return m_BuildDescription__text;
}
::ecore::EReference_ptr BuildPackage::getLinksTo__to()
{
    return m_LinksTo__to;
}
::ecore::EReference_ptr BuildPackage::getLinksTo__from()
{
    return m_LinksTo__from;
}
::ecore::EReference_ptr BuildPackage::getConsumes__to()
{
    return m_Consumes__to;
}
::ecore::EReference_ptr BuildPackage::getConsumes__from()
{
    return m_Consumes__from;
}
::ecore::EReference_ptr BuildPackage::getKDMFramework__audit()
{
    return m_KDMFramework__audit;
}
::ecore::EReference_ptr BuildPackage::getKDMFramework__extensionFamily()
{
    return m_KDMFramework__extensionFamily;
}
::ecore::EAttribute_ptr BuildPackage::getKDMFramework__name()
{
    return m_KDMFramework__name;
}
::ecore::EReference_ptr BuildPackage::getBuildModel__buildElement()
{
    return m_BuildModel__buildElement;
}
::ecore::EReference_ptr BuildPackage::getBuildRelationship__to()
{
    return m_BuildRelationship__to;
}
::ecore::EReference_ptr BuildPackage::getBuildRelationship__from()
{
    return m_BuildRelationship__from;
}
::ecore::EReference_ptr BuildPackage::getSuppliedBy__to()
{
    return m_SuppliedBy__to;
}
::ecore::EReference_ptr BuildPackage::getSuppliedBy__from()
{
    return m_SuppliedBy__from;
}
::ecore::EReference_ptr BuildPackage::getProduces__to()
{
    return m_Produces__to;
}
::ecore::EReference_ptr BuildPackage::getProduces__from()
{
    return m_Produces__from;
}
::ecore::EReference_ptr BuildPackage::getSupportedBy__to()
{
    return m_SupportedBy__to;
}
::ecore::EReference_ptr BuildPackage::getSupportedBy__from()
{
    return m_SupportedBy__from;
}
::ecore::EReference_ptr BuildPackage::getDescribedBy__to()
{
    return m_DescribedBy__to;
}
::ecore::EReference_ptr BuildPackage::getDescribedBy__from()
{
    return m_DescribedBy__from;
}

