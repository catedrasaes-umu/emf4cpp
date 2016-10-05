// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/SourcePackageImpl.cpp
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

#include <kdm/source/SourcePackage.hpp>
#include <kdm/source/SourceFactory.hpp>
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
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/core/KDMEntity.hpp>

using namespace ::kdm::source;

SourcePackage::SourcePackage()
{

    // Feature definitions of SourceRef
    m_SourceRef__language = new ::ecore::EAttribute();
    m_SourceRef__snippet = new ::ecore::EAttribute();
    m_SourceRef__region = new ::ecore::EReference();

    // Feature definitions of SourceRegion
    m_SourceRegion__startLine = new ::ecore::EAttribute();
    m_SourceRegion__startPosition = new ::ecore::EAttribute();
    m_SourceRegion__endLine = new ::ecore::EAttribute();
    m_SourceRegion__endPosition = new ::ecore::EAttribute();
    m_SourceRegion__language = new ::ecore::EAttribute();
    m_SourceRegion__path = new ::ecore::EAttribute();
    m_SourceRegion__file = new ::ecore::EReference();

    // Feature definitions of InventoryModel
    m_InventoryModel__inventoryElement = new ::ecore::EReference();

    // Feature definitions of AbstractInventoryElement
    m_AbstractInventoryElement__inventoryRelation = new ::ecore::EReference();

    // Feature definitions of InventoryItem
    m_InventoryItem__version = new ::ecore::EAttribute();
    m_InventoryItem__path = new ::ecore::EAttribute();

    // Feature definitions of SourceFile
    m_SourceFile__language = new ::ecore::EAttribute();
    m_SourceFile__encoding = new ::ecore::EAttribute();

    // Feature definitions of Image

    // Feature definitions of ResourceDescription

    // Feature definitions of Configuration

    // Feature definitions of InventoryContainer
    m_InventoryContainer__inventoryElement = new ::ecore::EReference();

    // Feature definitions of Directory
    m_Directory__path = new ::ecore::EAttribute();

    // Feature definitions of Project

    // Feature definitions of AbstractInventoryRelationship

    // Feature definitions of BinaryFile

    // Feature definitions of ExecutableFile

    // Feature definitions of DependsOn
    m_DependsOn__to = new ::ecore::EReference();
    m_DependsOn__from = new ::ecore::EReference();

    // Feature definitions of InventoryElement

    // Feature definitions of InventoryRelationship
    m_InventoryRelationship__to = new ::ecore::EReference();
    m_InventoryRelationship__from = new ::ecore::EReference();

    /* Now one can safely ask for a feature definition of
     * a class, though it is not yet usable. */
    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = SourceFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    // Create classes and their features

    // SourceRef
    m_SourceRefEClass = new ::ecore::EClass();
    m_SourceRefEClass->setClassifierID(SOURCEREF);
    m_SourceRefEClass->setEPackage(this);
    getEClassifiers().push_back(m_SourceRefEClass);
    // m_SourceRef__language has already been allocated above
    m_SourceRef__language->setFeatureID(
            ::kdm::source::SourcePackage::SOURCEREF__LANGUAGE);
    m_SourceRefEClass->getEStructuralFeatures().push_back(
            m_SourceRef__language);
    // m_SourceRef__snippet has already been allocated above
    m_SourceRef__snippet->setFeatureID(
            ::kdm::source::SourcePackage::SOURCEREF__SNIPPET);
    m_SourceRefEClass->getEStructuralFeatures().push_back(m_SourceRef__snippet);
    // m_SourceRef__region has already been allocated above
    m_SourceRef__region->setFeatureID(
            ::kdm::source::SourcePackage::SOURCEREF__REGION);
    m_SourceRefEClass->getEStructuralFeatures().push_back(m_SourceRef__region);

    // SourceRegion
    m_SourceRegionEClass = new ::ecore::EClass();
    m_SourceRegionEClass->setClassifierID(SOURCEREGION);
    m_SourceRegionEClass->setEPackage(this);
    getEClassifiers().push_back(m_SourceRegionEClass);
    // m_SourceRegion__startLine has already been allocated above
    m_SourceRegion__startLine->setFeatureID(
            ::kdm::source::SourcePackage::SOURCEREGION__STARTLINE);
    m_SourceRegionEClass->getEStructuralFeatures().push_back(
            m_SourceRegion__startLine);
    // m_SourceRegion__startPosition has already been allocated above
    m_SourceRegion__startPosition->setFeatureID(
            ::kdm::source::SourcePackage::SOURCEREGION__STARTPOSITION);
    m_SourceRegionEClass->getEStructuralFeatures().push_back(
            m_SourceRegion__startPosition);
    // m_SourceRegion__endLine has already been allocated above
    m_SourceRegion__endLine->setFeatureID(
            ::kdm::source::SourcePackage::SOURCEREGION__ENDLINE);
    m_SourceRegionEClass->getEStructuralFeatures().push_back(
            m_SourceRegion__endLine);
    // m_SourceRegion__endPosition has already been allocated above
    m_SourceRegion__endPosition->setFeatureID(
            ::kdm::source::SourcePackage::SOURCEREGION__ENDPOSITION);
    m_SourceRegionEClass->getEStructuralFeatures().push_back(
            m_SourceRegion__endPosition);
    // m_SourceRegion__language has already been allocated above
    m_SourceRegion__language->setFeatureID(
            ::kdm::source::SourcePackage::SOURCEREGION__LANGUAGE);
    m_SourceRegionEClass->getEStructuralFeatures().push_back(
            m_SourceRegion__language);
    // m_SourceRegion__path has already been allocated above
    m_SourceRegion__path->setFeatureID(
            ::kdm::source::SourcePackage::SOURCEREGION__PATH);
    m_SourceRegionEClass->getEStructuralFeatures().push_back(
            m_SourceRegion__path);
    // m_SourceRegion__file has already been allocated above
    m_SourceRegion__file->setFeatureID(
            ::kdm::source::SourcePackage::SOURCEREGION__FILE);
    m_SourceRegionEClass->getEStructuralFeatures().push_back(
            m_SourceRegion__file);

    // InventoryModel
    m_InventoryModelEClass = new ::ecore::EClass();
    m_InventoryModelEClass->setClassifierID(INVENTORYMODEL);
    m_InventoryModelEClass->setEPackage(this);
    getEClassifiers().push_back(m_InventoryModelEClass);
    // m_InventoryModel__inventoryElement has already been allocated above
    m_InventoryModel__inventoryElement->setFeatureID(
            ::kdm::source::SourcePackage::INVENTORYMODEL__INVENTORYELEMENT);
    m_InventoryModelEClass->getEStructuralFeatures().push_back(
            m_InventoryModel__inventoryElement);

    // AbstractInventoryElement
    m_AbstractInventoryElementEClass = new ::ecore::EClass();
    m_AbstractInventoryElementEClass->setClassifierID(ABSTRACTINVENTORYELEMENT);
    m_AbstractInventoryElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_AbstractInventoryElementEClass);
    // m_AbstractInventoryElement__inventoryRelation has already been allocated above
    m_AbstractInventoryElement__inventoryRelation->setFeatureID(
            ::kdm::source::SourcePackage::ABSTRACTINVENTORYELEMENT__INVENTORYRELATION);
    m_AbstractInventoryElementEClass->getEStructuralFeatures().push_back(
            m_AbstractInventoryElement__inventoryRelation);

    // InventoryItem
    m_InventoryItemEClass = new ::ecore::EClass();
    m_InventoryItemEClass->setClassifierID(INVENTORYITEM);
    m_InventoryItemEClass->setEPackage(this);
    getEClassifiers().push_back(m_InventoryItemEClass);
    // m_InventoryItem__version has already been allocated above
    m_InventoryItem__version->setFeatureID(
            ::kdm::source::SourcePackage::INVENTORYITEM__VERSION);
    m_InventoryItemEClass->getEStructuralFeatures().push_back(
            m_InventoryItem__version);
    // m_InventoryItem__path has already been allocated above
    m_InventoryItem__path->setFeatureID(
            ::kdm::source::SourcePackage::INVENTORYITEM__PATH);
    m_InventoryItemEClass->getEStructuralFeatures().push_back(
            m_InventoryItem__path);

    // SourceFile
    m_SourceFileEClass = new ::ecore::EClass();
    m_SourceFileEClass->setClassifierID(SOURCEFILE);
    m_SourceFileEClass->setEPackage(this);
    getEClassifiers().push_back(m_SourceFileEClass);
    // m_SourceFile__language has already been allocated above
    m_SourceFile__language->setFeatureID(
            ::kdm::source::SourcePackage::SOURCEFILE__LANGUAGE);
    m_SourceFileEClass->getEStructuralFeatures().push_back(
            m_SourceFile__language);
    // m_SourceFile__encoding has already been allocated above
    m_SourceFile__encoding->setFeatureID(
            ::kdm::source::SourcePackage::SOURCEFILE__ENCODING);
    m_SourceFileEClass->getEStructuralFeatures().push_back(
            m_SourceFile__encoding);

    // Image
    m_ImageEClass = new ::ecore::EClass();
    m_ImageEClass->setClassifierID(IMAGE);
    m_ImageEClass->setEPackage(this);
    getEClassifiers().push_back(m_ImageEClass);

    // ResourceDescription
    m_ResourceDescriptionEClass = new ::ecore::EClass();
    m_ResourceDescriptionEClass->setClassifierID(RESOURCEDESCRIPTION);
    m_ResourceDescriptionEClass->setEPackage(this);
    getEClassifiers().push_back(m_ResourceDescriptionEClass);

    // Configuration
    m_ConfigurationEClass = new ::ecore::EClass();
    m_ConfigurationEClass->setClassifierID(CONFIGURATION);
    m_ConfigurationEClass->setEPackage(this);
    getEClassifiers().push_back(m_ConfigurationEClass);

    // InventoryContainer
    m_InventoryContainerEClass = new ::ecore::EClass();
    m_InventoryContainerEClass->setClassifierID(INVENTORYCONTAINER);
    m_InventoryContainerEClass->setEPackage(this);
    getEClassifiers().push_back(m_InventoryContainerEClass);
    // m_InventoryContainer__inventoryElement has already been allocated above
    m_InventoryContainer__inventoryElement->setFeatureID(
            ::kdm::source::SourcePackage::INVENTORYCONTAINER__INVENTORYELEMENT);
    m_InventoryContainerEClass->getEStructuralFeatures().push_back(
            m_InventoryContainer__inventoryElement);

    // Directory
    m_DirectoryEClass = new ::ecore::EClass();
    m_DirectoryEClass->setClassifierID(DIRECTORY);
    m_DirectoryEClass->setEPackage(this);
    getEClassifiers().push_back(m_DirectoryEClass);
    // m_Directory__path has already been allocated above
    m_Directory__path->setFeatureID(
            ::kdm::source::SourcePackage::DIRECTORY__PATH);
    m_DirectoryEClass->getEStructuralFeatures().push_back(m_Directory__path);

    // Project
    m_ProjectEClass = new ::ecore::EClass();
    m_ProjectEClass->setClassifierID(PROJECT);
    m_ProjectEClass->setEPackage(this);
    getEClassifiers().push_back(m_ProjectEClass);

    // AbstractInventoryRelationship
    m_AbstractInventoryRelationshipEClass = new ::ecore::EClass();
    m_AbstractInventoryRelationshipEClass->setClassifierID(
            ABSTRACTINVENTORYRELATIONSHIP);
    m_AbstractInventoryRelationshipEClass->setEPackage(this);
    getEClassifiers().push_back(m_AbstractInventoryRelationshipEClass);

    // BinaryFile
    m_BinaryFileEClass = new ::ecore::EClass();
    m_BinaryFileEClass->setClassifierID(BINARYFILE);
    m_BinaryFileEClass->setEPackage(this);
    getEClassifiers().push_back(m_BinaryFileEClass);

    // ExecutableFile
    m_ExecutableFileEClass = new ::ecore::EClass();
    m_ExecutableFileEClass->setClassifierID(EXECUTABLEFILE);
    m_ExecutableFileEClass->setEPackage(this);
    getEClassifiers().push_back(m_ExecutableFileEClass);

    // DependsOn
    m_DependsOnEClass = new ::ecore::EClass();
    m_DependsOnEClass->setClassifierID(DEPENDSON);
    m_DependsOnEClass->setEPackage(this);
    getEClassifiers().push_back(m_DependsOnEClass);
    // m_DependsOn__to has already been allocated above
    m_DependsOn__to->setFeatureID(::kdm::source::SourcePackage::DEPENDSON__TO);
    m_DependsOnEClass->getEStructuralFeatures().push_back(m_DependsOn__to);
    // m_DependsOn__from has already been allocated above
    m_DependsOn__from->setFeatureID(
            ::kdm::source::SourcePackage::DEPENDSON__FROM);
    m_DependsOnEClass->getEStructuralFeatures().push_back(m_DependsOn__from);

    // InventoryElement
    m_InventoryElementEClass = new ::ecore::EClass();
    m_InventoryElementEClass->setClassifierID(INVENTORYELEMENT);
    m_InventoryElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_InventoryElementEClass);

    // InventoryRelationship
    m_InventoryRelationshipEClass = new ::ecore::EClass();
    m_InventoryRelationshipEClass->setClassifierID(INVENTORYRELATIONSHIP);
    m_InventoryRelationshipEClass->setEPackage(this);
    getEClassifiers().push_back(m_InventoryRelationshipEClass);
    // m_InventoryRelationship__to has already been allocated above
    m_InventoryRelationship__to->setFeatureID(
            ::kdm::source::SourcePackage::INVENTORYRELATIONSHIP__TO);
    m_InventoryRelationshipEClass->getEStructuralFeatures().push_back(
            m_InventoryRelationship__to);
    // m_InventoryRelationship__from has already been allocated above
    m_InventoryRelationship__from->setFeatureID(
            ::kdm::source::SourcePackage::INVENTORYRELATIONSHIP__FROM);
    m_InventoryRelationshipEClass->getEStructuralFeatures().push_back(
            m_InventoryRelationship__from);

    // Create enums

    // Create data types

    // Initialize package
    setName("source");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_SourceRefEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getElement());
    m_SourceRegionEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getElement());
    m_InventoryModelEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::kdm::KdmPackage* >(::kdm::kdm::KdmPackage::_instance())->getKDMModel());
    m_AbstractInventoryElementEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMEntity());
    m_InventoryItemEClass->getESuperTypes().push_back(
            m_AbstractInventoryElementEClass);
    m_SourceFileEClass->getESuperTypes().push_back(m_InventoryItemEClass);
    m_ImageEClass->getESuperTypes().push_back(m_InventoryItemEClass);
    m_ResourceDescriptionEClass->getESuperTypes().push_back(
            m_InventoryItemEClass);
    m_ConfigurationEClass->getESuperTypes().push_back(m_InventoryItemEClass);
    m_InventoryContainerEClass->getESuperTypes().push_back(
            m_AbstractInventoryElementEClass);
    m_DirectoryEClass->getESuperTypes().push_back(m_InventoryContainerEClass);
    m_ProjectEClass->getESuperTypes().push_back(m_InventoryContainerEClass);
    m_AbstractInventoryRelationshipEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMRelationship());
    m_BinaryFileEClass->getESuperTypes().push_back(m_InventoryItemEClass);
    m_ExecutableFileEClass->getESuperTypes().push_back(m_InventoryItemEClass);
    m_DependsOnEClass->getESuperTypes().push_back(
            m_AbstractInventoryRelationshipEClass);
    m_InventoryElementEClass->getESuperTypes().push_back(
            m_AbstractInventoryElementEClass);
    m_InventoryRelationshipEClass->getESuperTypes().push_back(
            m_AbstractInventoryRelationshipEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // SourceRef
    m_SourceRefEClass->setName("SourceRef");
    m_SourceRefEClass->setAbstract(false);
    m_SourceRefEClass->setInterface(false);
    m_SourceRef__language->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_SourceRef__language->setName("language");
    m_SourceRef__language->setDefaultValueLiteral("");
    m_SourceRef__language->setLowerBound(0);
    m_SourceRef__language->setUpperBound(1);
    m_SourceRef__language->setTransient(false);
    m_SourceRef__language->setVolatile(false);
    m_SourceRef__language->setChangeable(true);
    m_SourceRef__language->setUnsettable(false);
    m_SourceRef__language->setID(false);
    m_SourceRef__language->setUnique(false);
    m_SourceRef__language->setDerived(false);
    m_SourceRef__language->setOrdered(false);
    m_SourceRef__snippet->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_SourceRef__snippet->setName("snippet");
    m_SourceRef__snippet->setDefaultValueLiteral("");
    m_SourceRef__snippet->setLowerBound(0);
    m_SourceRef__snippet->setUpperBound(1);
    m_SourceRef__snippet->setTransient(false);
    m_SourceRef__snippet->setVolatile(false);
    m_SourceRef__snippet->setChangeable(true);
    m_SourceRef__snippet->setUnsettable(false);
    m_SourceRef__snippet->setID(false);
    m_SourceRef__snippet->setUnique(false);
    m_SourceRef__snippet->setDerived(false);
    m_SourceRef__snippet->setOrdered(false);
    m_SourceRef__region->setEType(m_SourceRegionEClass);
    m_SourceRef__region->setName("region");
    m_SourceRef__region->setDefaultValueLiteral("");
    m_SourceRef__region->setLowerBound(0);
    m_SourceRef__region->setUpperBound(-1);
    m_SourceRef__region->setTransient(false);
    m_SourceRef__region->setVolatile(false);
    m_SourceRef__region->setChangeable(true);
    m_SourceRef__region->setContainment(true);
    m_SourceRef__region->setResolveProxies(true);
    m_SourceRef__region->setUnique(true);
    m_SourceRef__region->setDerived(false);
    m_SourceRef__region->setOrdered(false);
    // SourceRegion
    m_SourceRegionEClass->setName("SourceRegion");
    m_SourceRegionEClass->setAbstract(false);
    m_SourceRegionEClass->setInterface(false);
    m_SourceRegion__startLine->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getInteger());
    m_SourceRegion__startLine->setName("startLine");
    m_SourceRegion__startLine->setDefaultValueLiteral("");
    m_SourceRegion__startLine->setLowerBound(0);
    m_SourceRegion__startLine->setUpperBound(1);
    m_SourceRegion__startLine->setTransient(false);
    m_SourceRegion__startLine->setVolatile(false);
    m_SourceRegion__startLine->setChangeable(true);
    m_SourceRegion__startLine->setUnsettable(false);
    m_SourceRegion__startLine->setID(false);
    m_SourceRegion__startLine->setUnique(false);
    m_SourceRegion__startLine->setDerived(false);
    m_SourceRegion__startLine->setOrdered(false);
    m_SourceRegion__startPosition->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getInteger());
    m_SourceRegion__startPosition->setName("startPosition");
    m_SourceRegion__startPosition->setDefaultValueLiteral("");
    m_SourceRegion__startPosition->setLowerBound(0);
    m_SourceRegion__startPosition->setUpperBound(1);
    m_SourceRegion__startPosition->setTransient(false);
    m_SourceRegion__startPosition->setVolatile(false);
    m_SourceRegion__startPosition->setChangeable(true);
    m_SourceRegion__startPosition->setUnsettable(false);
    m_SourceRegion__startPosition->setID(false);
    m_SourceRegion__startPosition->setUnique(false);
    m_SourceRegion__startPosition->setDerived(false);
    m_SourceRegion__startPosition->setOrdered(false);
    m_SourceRegion__endLine->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getInteger());
    m_SourceRegion__endLine->setName("endLine");
    m_SourceRegion__endLine->setDefaultValueLiteral("");
    m_SourceRegion__endLine->setLowerBound(0);
    m_SourceRegion__endLine->setUpperBound(1);
    m_SourceRegion__endLine->setTransient(false);
    m_SourceRegion__endLine->setVolatile(false);
    m_SourceRegion__endLine->setChangeable(true);
    m_SourceRegion__endLine->setUnsettable(false);
    m_SourceRegion__endLine->setID(false);
    m_SourceRegion__endLine->setUnique(false);
    m_SourceRegion__endLine->setDerived(false);
    m_SourceRegion__endLine->setOrdered(false);
    m_SourceRegion__endPosition->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getInteger());
    m_SourceRegion__endPosition->setName("endPosition");
    m_SourceRegion__endPosition->setDefaultValueLiteral("");
    m_SourceRegion__endPosition->setLowerBound(0);
    m_SourceRegion__endPosition->setUpperBound(1);
    m_SourceRegion__endPosition->setTransient(false);
    m_SourceRegion__endPosition->setVolatile(false);
    m_SourceRegion__endPosition->setChangeable(true);
    m_SourceRegion__endPosition->setUnsettable(false);
    m_SourceRegion__endPosition->setID(false);
    m_SourceRegion__endPosition->setUnique(false);
    m_SourceRegion__endPosition->setDerived(false);
    m_SourceRegion__endPosition->setOrdered(false);
    m_SourceRegion__language->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_SourceRegion__language->setName("language");
    m_SourceRegion__language->setDefaultValueLiteral("");
    m_SourceRegion__language->setLowerBound(0);
    m_SourceRegion__language->setUpperBound(1);
    m_SourceRegion__language->setTransient(false);
    m_SourceRegion__language->setVolatile(false);
    m_SourceRegion__language->setChangeable(true);
    m_SourceRegion__language->setUnsettable(false);
    m_SourceRegion__language->setID(false);
    m_SourceRegion__language->setUnique(false);
    m_SourceRegion__language->setDerived(false);
    m_SourceRegion__language->setOrdered(false);
    m_SourceRegion__path->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_SourceRegion__path->setName("path");
    m_SourceRegion__path->setDefaultValueLiteral("");
    m_SourceRegion__path->setLowerBound(0);
    m_SourceRegion__path->setUpperBound(1);
    m_SourceRegion__path->setTransient(false);
    m_SourceRegion__path->setVolatile(false);
    m_SourceRegion__path->setChangeable(true);
    m_SourceRegion__path->setUnsettable(false);
    m_SourceRegion__path->setID(false);
    m_SourceRegion__path->setUnique(false);
    m_SourceRegion__path->setDerived(false);
    m_SourceRegion__path->setOrdered(false);
    m_SourceRegion__file->setEType(m_SourceFileEClass);
    m_SourceRegion__file->setName("file");
    m_SourceRegion__file->setDefaultValueLiteral("");
    m_SourceRegion__file->setLowerBound(0);
    m_SourceRegion__file->setUpperBound(1);
    m_SourceRegion__file->setTransient(false);
    m_SourceRegion__file->setVolatile(false);
    m_SourceRegion__file->setChangeable(true);
    m_SourceRegion__file->setContainment(false);
    m_SourceRegion__file->setResolveProxies(true);
    m_SourceRegion__file->setUnique(true);
    m_SourceRegion__file->setDerived(false);
    m_SourceRegion__file->setOrdered(false);
    // InventoryModel
    m_InventoryModelEClass->setName("InventoryModel");
    m_InventoryModelEClass->setAbstract(false);
    m_InventoryModelEClass->setInterface(false);
    m_InventoryModel__inventoryElement->setEType(
            m_AbstractInventoryElementEClass);
    m_InventoryModel__inventoryElement->setName("inventoryElement");
    m_InventoryModel__inventoryElement->setDefaultValueLiteral("");
    m_InventoryModel__inventoryElement->setLowerBound(0);
    m_InventoryModel__inventoryElement->setUpperBound(-1);
    m_InventoryModel__inventoryElement->setTransient(false);
    m_InventoryModel__inventoryElement->setVolatile(false);
    m_InventoryModel__inventoryElement->setChangeable(true);
    m_InventoryModel__inventoryElement->setContainment(true);
    m_InventoryModel__inventoryElement->setResolveProxies(true);
    m_InventoryModel__inventoryElement->setUnique(true);
    m_InventoryModel__inventoryElement->setDerived(false);
    m_InventoryModel__inventoryElement->setOrdered(false);
    // AbstractInventoryElement
    m_AbstractInventoryElementEClass->setName("AbstractInventoryElement");
    m_AbstractInventoryElementEClass->setAbstract(true);
    m_AbstractInventoryElementEClass->setInterface(false);
    m_AbstractInventoryElement__inventoryRelation->setEType(
            m_AbstractInventoryRelationshipEClass);
    m_AbstractInventoryElement__inventoryRelation->setName("inventoryRelation");
    m_AbstractInventoryElement__inventoryRelation->setDefaultValueLiteral("");
    m_AbstractInventoryElement__inventoryRelation->setLowerBound(0);
    m_AbstractInventoryElement__inventoryRelation->setUpperBound(-1);
    m_AbstractInventoryElement__inventoryRelation->setTransient(false);
    m_AbstractInventoryElement__inventoryRelation->setVolatile(false);
    m_AbstractInventoryElement__inventoryRelation->setChangeable(true);
    m_AbstractInventoryElement__inventoryRelation->setContainment(true);
    m_AbstractInventoryElement__inventoryRelation->setResolveProxies(true);
    m_AbstractInventoryElement__inventoryRelation->setUnique(true);
    m_AbstractInventoryElement__inventoryRelation->setDerived(false);
    m_AbstractInventoryElement__inventoryRelation->setOrdered(false);
    // InventoryItem
    m_InventoryItemEClass->setName("InventoryItem");
    m_InventoryItemEClass->setAbstract(false);
    m_InventoryItemEClass->setInterface(false);
    m_InventoryItem__version->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_InventoryItem__version->setName("version");
    m_InventoryItem__version->setDefaultValueLiteral("");
    m_InventoryItem__version->setLowerBound(0);
    m_InventoryItem__version->setUpperBound(1);
    m_InventoryItem__version->setTransient(false);
    m_InventoryItem__version->setVolatile(false);
    m_InventoryItem__version->setChangeable(true);
    m_InventoryItem__version->setUnsettable(false);
    m_InventoryItem__version->setID(false);
    m_InventoryItem__version->setUnique(false);
    m_InventoryItem__version->setDerived(false);
    m_InventoryItem__version->setOrdered(false);
    m_InventoryItem__path->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_InventoryItem__path->setName("path");
    m_InventoryItem__path->setDefaultValueLiteral("");
    m_InventoryItem__path->setLowerBound(0);
    m_InventoryItem__path->setUpperBound(1);
    m_InventoryItem__path->setTransient(false);
    m_InventoryItem__path->setVolatile(false);
    m_InventoryItem__path->setChangeable(true);
    m_InventoryItem__path->setUnsettable(false);
    m_InventoryItem__path->setID(false);
    m_InventoryItem__path->setUnique(false);
    m_InventoryItem__path->setDerived(false);
    m_InventoryItem__path->setOrdered(false);
    // SourceFile
    m_SourceFileEClass->setName("SourceFile");
    m_SourceFileEClass->setAbstract(false);
    m_SourceFileEClass->setInterface(false);
    m_SourceFile__language->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_SourceFile__language->setName("language");
    m_SourceFile__language->setDefaultValueLiteral("");
    m_SourceFile__language->setLowerBound(0);
    m_SourceFile__language->setUpperBound(1);
    m_SourceFile__language->setTransient(false);
    m_SourceFile__language->setVolatile(false);
    m_SourceFile__language->setChangeable(true);
    m_SourceFile__language->setUnsettable(false);
    m_SourceFile__language->setID(false);
    m_SourceFile__language->setUnique(false);
    m_SourceFile__language->setDerived(false);
    m_SourceFile__language->setOrdered(false);
    m_SourceFile__encoding->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_SourceFile__encoding->setName("encoding");
    m_SourceFile__encoding->setDefaultValueLiteral("");
    m_SourceFile__encoding->setLowerBound(0);
    m_SourceFile__encoding->setUpperBound(1);
    m_SourceFile__encoding->setTransient(false);
    m_SourceFile__encoding->setVolatile(false);
    m_SourceFile__encoding->setChangeable(true);
    m_SourceFile__encoding->setUnsettable(false);
    m_SourceFile__encoding->setID(false);
    m_SourceFile__encoding->setUnique(false);
    m_SourceFile__encoding->setDerived(false);
    m_SourceFile__encoding->setOrdered(false);
    // Image
    m_ImageEClass->setName("Image");
    m_ImageEClass->setAbstract(false);
    m_ImageEClass->setInterface(false);
    // ResourceDescription
    m_ResourceDescriptionEClass->setName("ResourceDescription");
    m_ResourceDescriptionEClass->setAbstract(false);
    m_ResourceDescriptionEClass->setInterface(false);
    // Configuration
    m_ConfigurationEClass->setName("Configuration");
    m_ConfigurationEClass->setAbstract(false);
    m_ConfigurationEClass->setInterface(false);
    // InventoryContainer
    m_InventoryContainerEClass->setName("InventoryContainer");
    m_InventoryContainerEClass->setAbstract(false);
    m_InventoryContainerEClass->setInterface(false);
    m_InventoryContainer__inventoryElement->setEType(
            m_AbstractInventoryElementEClass);
    m_InventoryContainer__inventoryElement->setName("inventoryElement");
    m_InventoryContainer__inventoryElement->setDefaultValueLiteral("");
    m_InventoryContainer__inventoryElement->setLowerBound(0);
    m_InventoryContainer__inventoryElement->setUpperBound(-1);
    m_InventoryContainer__inventoryElement->setTransient(false);
    m_InventoryContainer__inventoryElement->setVolatile(false);
    m_InventoryContainer__inventoryElement->setChangeable(true);
    m_InventoryContainer__inventoryElement->setContainment(true);
    m_InventoryContainer__inventoryElement->setResolveProxies(true);
    m_InventoryContainer__inventoryElement->setUnique(true);
    m_InventoryContainer__inventoryElement->setDerived(false);
    m_InventoryContainer__inventoryElement->setOrdered(false);
    // Directory
    m_DirectoryEClass->setName("Directory");
    m_DirectoryEClass->setAbstract(false);
    m_DirectoryEClass->setInterface(false);
    m_Directory__path->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_Directory__path->setName("path");
    m_Directory__path->setDefaultValueLiteral("");
    m_Directory__path->setLowerBound(0);
    m_Directory__path->setUpperBound(1);
    m_Directory__path->setTransient(false);
    m_Directory__path->setVolatile(false);
    m_Directory__path->setChangeable(true);
    m_Directory__path->setUnsettable(false);
    m_Directory__path->setID(false);
    m_Directory__path->setUnique(false);
    m_Directory__path->setDerived(false);
    m_Directory__path->setOrdered(false);
    // Project
    m_ProjectEClass->setName("Project");
    m_ProjectEClass->setAbstract(false);
    m_ProjectEClass->setInterface(false);
    // AbstractInventoryRelationship
    m_AbstractInventoryRelationshipEClass->setName(
            "AbstractInventoryRelationship");
    m_AbstractInventoryRelationshipEClass->setAbstract(true);
    m_AbstractInventoryRelationshipEClass->setInterface(false);
    // BinaryFile
    m_BinaryFileEClass->setName("BinaryFile");
    m_BinaryFileEClass->setAbstract(false);
    m_BinaryFileEClass->setInterface(false);
    // ExecutableFile
    m_ExecutableFileEClass->setName("ExecutableFile");
    m_ExecutableFileEClass->setAbstract(false);
    m_ExecutableFileEClass->setInterface(false);
    // DependsOn
    m_DependsOnEClass->setName("DependsOn");
    m_DependsOnEClass->setAbstract(false);
    m_DependsOnEClass->setInterface(false);
    m_DependsOn__to->setEType(m_AbstractInventoryElementEClass);
    m_DependsOn__to->setName("to");
    m_DependsOn__to->setDefaultValueLiteral("");
    m_DependsOn__to->setLowerBound(1);
    m_DependsOn__to->setUpperBound(1);
    m_DependsOn__to->setTransient(false);
    m_DependsOn__to->setVolatile(false);
    m_DependsOn__to->setChangeable(true);
    m_DependsOn__to->setContainment(false);
    m_DependsOn__to->setResolveProxies(true);
    m_DependsOn__to->setUnique(true);
    m_DependsOn__to->setDerived(false);
    m_DependsOn__to->setOrdered(false);
    m_DependsOn__from->setEType(m_AbstractInventoryElementEClass);
    m_DependsOn__from->setName("from");
    m_DependsOn__from->setDefaultValueLiteral("");
    m_DependsOn__from->setLowerBound(1);
    m_DependsOn__from->setUpperBound(1);
    m_DependsOn__from->setTransient(false);
    m_DependsOn__from->setVolatile(false);
    m_DependsOn__from->setChangeable(true);
    m_DependsOn__from->setContainment(false);
    m_DependsOn__from->setResolveProxies(true);
    m_DependsOn__from->setUnique(true);
    m_DependsOn__from->setDerived(false);
    m_DependsOn__from->setOrdered(false);
    // InventoryElement
    m_InventoryElementEClass->setName("InventoryElement");
    m_InventoryElementEClass->setAbstract(false);
    m_InventoryElementEClass->setInterface(false);
    // InventoryRelationship
    m_InventoryRelationshipEClass->setName("InventoryRelationship");
    m_InventoryRelationshipEClass->setAbstract(false);
    m_InventoryRelationshipEClass->setInterface(false);
    m_InventoryRelationship__to->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMEntity());
    m_InventoryRelationship__to->setName("to");
    m_InventoryRelationship__to->setDefaultValueLiteral("");
    m_InventoryRelationship__to->setLowerBound(1);
    m_InventoryRelationship__to->setUpperBound(1);
    m_InventoryRelationship__to->setTransient(false);
    m_InventoryRelationship__to->setVolatile(false);
    m_InventoryRelationship__to->setChangeable(true);
    m_InventoryRelationship__to->setContainment(false);
    m_InventoryRelationship__to->setResolveProxies(true);
    m_InventoryRelationship__to->setUnique(true);
    m_InventoryRelationship__to->setDerived(false);
    m_InventoryRelationship__to->setOrdered(false);
    m_InventoryRelationship__from->setEType(m_AbstractInventoryElementEClass);
    m_InventoryRelationship__from->setName("from");
    m_InventoryRelationship__from->setDefaultValueLiteral("");
    m_InventoryRelationship__from->setLowerBound(1);
    m_InventoryRelationship__from->setUpperBound(1);
    m_InventoryRelationship__from->setTransient(false);
    m_InventoryRelationship__from->setVolatile(false);
    m_InventoryRelationship__from->setChangeable(true);
    m_InventoryRelationship__from->setContainment(false);
    m_InventoryRelationship__from->setResolveProxies(true);
    m_InventoryRelationship__from->setUnique(true);
    m_InventoryRelationship__from->setDerived(false);
    m_InventoryRelationship__from->setOrdered(false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr SourcePackage::getSourceRef()
{
    return m_SourceRefEClass;
}
::ecore::EClass_ptr SourcePackage::getSourceRegion()
{
    return m_SourceRegionEClass;
}
::ecore::EClass_ptr SourcePackage::getInventoryModel()
{
    return m_InventoryModelEClass;
}
::ecore::EClass_ptr SourcePackage::getAbstractInventoryElement()
{
    return m_AbstractInventoryElementEClass;
}
::ecore::EClass_ptr SourcePackage::getInventoryItem()
{
    return m_InventoryItemEClass;
}
::ecore::EClass_ptr SourcePackage::getSourceFile()
{
    return m_SourceFileEClass;
}
::ecore::EClass_ptr SourcePackage::getImage()
{
    return m_ImageEClass;
}
::ecore::EClass_ptr SourcePackage::getResourceDescription()
{
    return m_ResourceDescriptionEClass;
}
::ecore::EClass_ptr SourcePackage::getConfiguration()
{
    return m_ConfigurationEClass;
}
::ecore::EClass_ptr SourcePackage::getInventoryContainer()
{
    return m_InventoryContainerEClass;
}
::ecore::EClass_ptr SourcePackage::getDirectory()
{
    return m_DirectoryEClass;
}
::ecore::EClass_ptr SourcePackage::getProject()
{
    return m_ProjectEClass;
}
::ecore::EClass_ptr SourcePackage::getAbstractInventoryRelationship()
{
    return m_AbstractInventoryRelationshipEClass;
}
::ecore::EClass_ptr SourcePackage::getBinaryFile()
{
    return m_BinaryFileEClass;
}
::ecore::EClass_ptr SourcePackage::getExecutableFile()
{
    return m_ExecutableFileEClass;
}
::ecore::EClass_ptr SourcePackage::getDependsOn()
{
    return m_DependsOnEClass;
}
::ecore::EClass_ptr SourcePackage::getInventoryElement()
{
    return m_InventoryElementEClass;
}
::ecore::EClass_ptr SourcePackage::getInventoryRelationship()
{
    return m_InventoryRelationshipEClass;
}

::ecore::EReference_ptr SourcePackage::getElement__attribute()
{
    return m_Element__attribute;
}
::ecore::EReference_ptr SourcePackage::getElement__annotation()
{
    return m_Element__annotation;
}
::ecore::EReference_ptr SourcePackage::getSourceRef__region()
{
    return m_SourceRef__region;
}
::ecore::EAttribute_ptr SourcePackage::getSourceRef__language()
{
    return m_SourceRef__language;
}
::ecore::EAttribute_ptr SourcePackage::getSourceRef__snippet()
{
    return m_SourceRef__snippet;
}
::ecore::EReference_ptr SourcePackage::getSourceRegion__file()
{
    return m_SourceRegion__file;
}
::ecore::EAttribute_ptr SourcePackage::getSourceRegion__startLine()
{
    return m_SourceRegion__startLine;
}
::ecore::EAttribute_ptr SourcePackage::getSourceRegion__startPosition()
{
    return m_SourceRegion__startPosition;
}
::ecore::EAttribute_ptr SourcePackage::getSourceRegion__endLine()
{
    return m_SourceRegion__endLine;
}
::ecore::EAttribute_ptr SourcePackage::getSourceRegion__endPosition()
{
    return m_SourceRegion__endPosition;
}
::ecore::EAttribute_ptr SourcePackage::getSourceRegion__language()
{
    return m_SourceRegion__language;
}
::ecore::EAttribute_ptr SourcePackage::getSourceRegion__path()
{
    return m_SourceRegion__path;
}
::ecore::EReference_ptr SourcePackage::getModelElement__stereotype()
{
    return m_ModelElement__stereotype;
}
::ecore::EReference_ptr SourcePackage::getModelElement__taggedValue()
{
    return m_ModelElement__taggedValue;
}
::ecore::EReference_ptr SourcePackage::getKDMFramework__audit()
{
    return m_KDMFramework__audit;
}
::ecore::EReference_ptr SourcePackage::getKDMFramework__extensionFamily()
{
    return m_KDMFramework__extensionFamily;
}
::ecore::EAttribute_ptr SourcePackage::getKDMFramework__name()
{
    return m_KDMFramework__name;
}
::ecore::EReference_ptr SourcePackage::getInventoryModel__inventoryElement()
{
    return m_InventoryModel__inventoryElement;
}
::ecore::EAttribute_ptr SourcePackage::getKDMEntity__name()
{
    return m_KDMEntity__name;
}
::ecore::EReference_ptr SourcePackage::getAbstractInventoryElement__inventoryRelation()
{
    return m_AbstractInventoryElement__inventoryRelation;
}
::ecore::EAttribute_ptr SourcePackage::getInventoryItem__version()
{
    return m_InventoryItem__version;
}
::ecore::EAttribute_ptr SourcePackage::getInventoryItem__path()
{
    return m_InventoryItem__path;
}
::ecore::EAttribute_ptr SourcePackage::getSourceFile__language()
{
    return m_SourceFile__language;
}
::ecore::EAttribute_ptr SourcePackage::getSourceFile__encoding()
{
    return m_SourceFile__encoding;
}
::ecore::EReference_ptr SourcePackage::getInventoryContainer__inventoryElement()
{
    return m_InventoryContainer__inventoryElement;
}
::ecore::EAttribute_ptr SourcePackage::getDirectory__path()
{
    return m_Directory__path;
}
::ecore::EReference_ptr SourcePackage::getDependsOn__to()
{
    return m_DependsOn__to;
}
::ecore::EReference_ptr SourcePackage::getDependsOn__from()
{
    return m_DependsOn__from;
}
::ecore::EReference_ptr SourcePackage::getInventoryRelationship__to()
{
    return m_InventoryRelationship__to;
}
::ecore::EReference_ptr SourcePackage::getInventoryRelationship__from()
{
    return m_InventoryRelationship__from;
}

