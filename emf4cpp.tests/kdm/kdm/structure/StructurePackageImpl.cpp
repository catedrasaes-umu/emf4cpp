// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/structure/StructurePackageImpl.cpp
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

#include <kdm/structure/StructurePackage.hpp>
#include <kdm/structure/StructureFactory.hpp>
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
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>

using namespace ::kdm::structure;

StructurePackage::StructurePackage()
{

    // Feature definitions of AbstractStructureElement
    m_AbstractStructureElement__aggregated = boost::intrusive_ptr
            < ::ecore::EReference > (new ::ecore::EReference);
    m_AbstractStructureElement__implementation = boost::intrusive_ptr
            < ::ecore::EReference > (new ::ecore::EReference);
    m_AbstractStructureElement__structureElement = boost::intrusive_ptr
            < ::ecore::EReference > (new ::ecore::EReference);
    m_AbstractStructureElement__structureRelationship = boost::intrusive_ptr
            < ::ecore::EReference > (new ::ecore::EReference);

    // Feature definitions of Subsystem

    // Feature definitions of Layer

    // Feature definitions of StructureModel
    m_StructureModel__structureElement = boost::intrusive_ptr
            < ::ecore::EReference > (new ::ecore::EReference);

    // Feature definitions of Component

    // Feature definitions of SoftwareSystem

    // Feature definitions of AbstractStructureRelationship

    // Feature definitions of StructureRelationship
    m_StructureRelationship__to = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_StructureRelationship__from = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ArchitectureView

    // Feature definitions of StructureElement

}

void StructurePackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = StructureFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    // Create classes and their features

    // AbstractStructureElement
    m_AbstractStructureElementEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AbstractStructureElementEClass->setClassifierID(ABSTRACTSTRUCTUREELEMENT);
    m_AbstractStructureElementEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AbstractStructureElementEClass);
    // m_AbstractStructureElement__aggregated has already been allocated above
    m_AbstractStructureElement__aggregated->setFeatureID(
            ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__AGGREGATED);
    m_AbstractStructureElementEClass->getEStructuralFeatures().push_back(
            m_AbstractStructureElement__aggregated);
    // m_AbstractStructureElement__implementation has already been allocated above
    m_AbstractStructureElement__implementation->setFeatureID(
            ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__IMPLEMENTATION);
    m_AbstractStructureElementEClass->getEStructuralFeatures().push_back(
            m_AbstractStructureElement__implementation);
    // m_AbstractStructureElement__structureElement has already been allocated above
    m_AbstractStructureElement__structureElement->setFeatureID(
            ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__STRUCTUREELEMENT);
    m_AbstractStructureElementEClass->getEStructuralFeatures().push_back(
            m_AbstractStructureElement__structureElement);
    // m_AbstractStructureElement__structureRelationship has already been allocated above
    m_AbstractStructureElement__structureRelationship->setFeatureID(
            ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__STRUCTURERELATIONSHIP);
    m_AbstractStructureElementEClass->getEStructuralFeatures().push_back(
            m_AbstractStructureElement__structureRelationship);

    // Subsystem
    m_SubsystemEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_SubsystemEClass->setClassifierID(SUBSYSTEM);
    m_SubsystemEClass->setEPackage(_this());
    getEClassifiers().push_back(m_SubsystemEClass);

    // Layer
    m_LayerEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_LayerEClass->setClassifierID(LAYER);
    m_LayerEClass->setEPackage(_this());
    getEClassifiers().push_back(m_LayerEClass);

    // StructureModel
    m_StructureModelEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_StructureModelEClass->setClassifierID(STRUCTUREMODEL);
    m_StructureModelEClass->setEPackage(_this());
    getEClassifiers().push_back(m_StructureModelEClass);
    // m_StructureModel__structureElement has already been allocated above
    m_StructureModel__structureElement->setFeatureID(
            ::kdm::structure::StructurePackage::STRUCTUREMODEL__STRUCTUREELEMENT);
    m_StructureModelEClass->getEStructuralFeatures().push_back(
            m_StructureModel__structureElement);

    // Component
    m_ComponentEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ComponentEClass->setClassifierID(COMPONENT);
    m_ComponentEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ComponentEClass);

    // SoftwareSystem
    m_SoftwareSystemEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_SoftwareSystemEClass->setClassifierID(SOFTWARESYSTEM);
    m_SoftwareSystemEClass->setEPackage(_this());
    getEClassifiers().push_back(m_SoftwareSystemEClass);

    // AbstractStructureRelationship
    m_AbstractStructureRelationshipEClass = boost::intrusive_ptr
            < ::ecore::EClass > (new ::ecore::EClass);
    m_AbstractStructureRelationshipEClass->setClassifierID(
            ABSTRACTSTRUCTURERELATIONSHIP);
    m_AbstractStructureRelationshipEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AbstractStructureRelationshipEClass);

    // StructureRelationship
    m_StructureRelationshipEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_StructureRelationshipEClass->setClassifierID(STRUCTURERELATIONSHIP);
    m_StructureRelationshipEClass->setEPackage(_this());
    getEClassifiers().push_back(m_StructureRelationshipEClass);
    // m_StructureRelationship__to has already been allocated above
    m_StructureRelationship__to->setFeatureID(
            ::kdm::structure::StructurePackage::STRUCTURERELATIONSHIP__TO);
    m_StructureRelationshipEClass->getEStructuralFeatures().push_back(
            m_StructureRelationship__to);
    // m_StructureRelationship__from has already been allocated above
    m_StructureRelationship__from->setFeatureID(
            ::kdm::structure::StructurePackage::STRUCTURERELATIONSHIP__FROM);
    m_StructureRelationshipEClass->getEStructuralFeatures().push_back(
            m_StructureRelationship__from);

    // ArchitectureView
    m_ArchitectureViewEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ArchitectureViewEClass->setClassifierID(ARCHITECTUREVIEW);
    m_ArchitectureViewEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ArchitectureViewEClass);

    // StructureElement
    m_StructureElementEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_StructureElementEClass->setClassifierID(STRUCTUREELEMENT);
    m_StructureElementEClass->setEPackage(_this());
    getEClassifiers().push_back(m_StructureElementEClass);

    // Create enums

    // Create data types

    // Initialize package
    setName("structure");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_AbstractStructureElementEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance().get())->getKDMEntity());
    m_SubsystemEClass->getESuperTypes().push_back(
            m_AbstractStructureElementEClass);
    m_LayerEClass->getESuperTypes().push_back(m_AbstractStructureElementEClass);
    m_StructureModelEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::kdm::KdmPackage* >(::kdm::kdm::KdmPackage::_instance().get())->getKDMModel());
    m_ComponentEClass->getESuperTypes().push_back(
            m_AbstractStructureElementEClass);
    m_SoftwareSystemEClass->getESuperTypes().push_back(
            m_AbstractStructureElementEClass);
    m_AbstractStructureRelationshipEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance().get())->getKDMRelationship());
    m_StructureRelationshipEClass->getESuperTypes().push_back(
            m_AbstractStructureRelationshipEClass);
    m_ArchitectureViewEClass->getESuperTypes().push_back(
            m_AbstractStructureElementEClass);
    m_StructureElementEClass->getESuperTypes().push_back(
            m_AbstractStructureElementEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // AbstractStructureElement
    m_AbstractStructureElementEClass->setName("AbstractStructureElement");
    m_AbstractStructureElementEClass->setAbstract(true);
    m_AbstractStructureElementEClass->setInterface(false);
    m_AbstractStructureElement__aggregated->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance().get())->getAggregatedRelationship());
    m_AbstractStructureElement__aggregated->setName("aggregated");
    m_AbstractStructureElement__aggregated->setDefaultValueLiteral("");
    m_AbstractStructureElement__aggregated->setLowerBound(0);
    m_AbstractStructureElement__aggregated->setUpperBound(-1);
    m_AbstractStructureElement__aggregated->setTransient(false);
    m_AbstractStructureElement__aggregated->setVolatile(false);
    m_AbstractStructureElement__aggregated->setChangeable(true);
    m_AbstractStructureElement__aggregated->setContainment(true);
    m_AbstractStructureElement__aggregated->setResolveProxies(true);
    m_AbstractStructureElement__aggregated->setUnique(true);
    m_AbstractStructureElement__aggregated->setDerived(false);
    m_AbstractStructureElement__aggregated->setOrdered(false);
    m_AbstractStructureElement__implementation->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance().get())->getKDMEntity());
    m_AbstractStructureElement__implementation->setName("implementation");
    m_AbstractStructureElement__implementation->setDefaultValueLiteral("");
    m_AbstractStructureElement__implementation->setLowerBound(0);
    m_AbstractStructureElement__implementation->setUpperBound(-1);
    m_AbstractStructureElement__implementation->setTransient(false);
    m_AbstractStructureElement__implementation->setVolatile(false);
    m_AbstractStructureElement__implementation->setChangeable(true);
    m_AbstractStructureElement__implementation->setContainment(false);
    m_AbstractStructureElement__implementation->setResolveProxies(true);
    m_AbstractStructureElement__implementation->setUnique(true);
    m_AbstractStructureElement__implementation->setDerived(false);
    m_AbstractStructureElement__implementation->setOrdered(false);
    m_AbstractStructureElement__structureElement->setEType(
            m_AbstractStructureElementEClass);
    m_AbstractStructureElement__structureElement->setName("structureElement");
    m_AbstractStructureElement__structureElement->setDefaultValueLiteral("");
    m_AbstractStructureElement__structureElement->setLowerBound(0);
    m_AbstractStructureElement__structureElement->setUpperBound(-1);
    m_AbstractStructureElement__structureElement->setTransient(false);
    m_AbstractStructureElement__structureElement->setVolatile(false);
    m_AbstractStructureElement__structureElement->setChangeable(true);
    m_AbstractStructureElement__structureElement->setContainment(true);
    m_AbstractStructureElement__structureElement->setResolveProxies(true);
    m_AbstractStructureElement__structureElement->setUnique(true);
    m_AbstractStructureElement__structureElement->setDerived(false);
    m_AbstractStructureElement__structureElement->setOrdered(false);
    m_AbstractStructureElement__structureRelationship->setEType(
            m_AbstractStructureRelationshipEClass);
    m_AbstractStructureElement__structureRelationship->setName(
            "structureRelationship");
    m_AbstractStructureElement__structureRelationship->setDefaultValueLiteral(
            "");
    m_AbstractStructureElement__structureRelationship->setLowerBound(0);
    m_AbstractStructureElement__structureRelationship->setUpperBound(-1);
    m_AbstractStructureElement__structureRelationship->setTransient(false);
    m_AbstractStructureElement__structureRelationship->setVolatile(false);
    m_AbstractStructureElement__structureRelationship->setChangeable(true);
    m_AbstractStructureElement__structureRelationship->setContainment(true);
    m_AbstractStructureElement__structureRelationship->setResolveProxies(true);
    m_AbstractStructureElement__structureRelationship->setUnique(true);
    m_AbstractStructureElement__structureRelationship->setDerived(false);
    m_AbstractStructureElement__structureRelationship->setOrdered(false);
    // Subsystem
    m_SubsystemEClass->setName("Subsystem");
    m_SubsystemEClass->setAbstract(false);
    m_SubsystemEClass->setInterface(false);
    // Layer
    m_LayerEClass->setName("Layer");
    m_LayerEClass->setAbstract(false);
    m_LayerEClass->setInterface(false);
    // StructureModel
    m_StructureModelEClass->setName("StructureModel");
    m_StructureModelEClass->setAbstract(false);
    m_StructureModelEClass->setInterface(false);
    m_StructureModel__structureElement->setEType(
            m_AbstractStructureElementEClass);
    m_StructureModel__structureElement->setName("structureElement");
    m_StructureModel__structureElement->setDefaultValueLiteral("");
    m_StructureModel__structureElement->setLowerBound(0);
    m_StructureModel__structureElement->setUpperBound(-1);
    m_StructureModel__structureElement->setTransient(false);
    m_StructureModel__structureElement->setVolatile(false);
    m_StructureModel__structureElement->setChangeable(true);
    m_StructureModel__structureElement->setContainment(true);
    m_StructureModel__structureElement->setResolveProxies(true);
    m_StructureModel__structureElement->setUnique(true);
    m_StructureModel__structureElement->setDerived(false);
    m_StructureModel__structureElement->setOrdered(false);
    // Component
    m_ComponentEClass->setName("Component");
    m_ComponentEClass->setAbstract(false);
    m_ComponentEClass->setInterface(false);
    // SoftwareSystem
    m_SoftwareSystemEClass->setName("SoftwareSystem");
    m_SoftwareSystemEClass->setAbstract(false);
    m_SoftwareSystemEClass->setInterface(false);
    // AbstractStructureRelationship
    m_AbstractStructureRelationshipEClass->setName(
            "AbstractStructureRelationship");
    m_AbstractStructureRelationshipEClass->setAbstract(true);
    m_AbstractStructureRelationshipEClass->setInterface(false);
    // StructureRelationship
    m_StructureRelationshipEClass->setName("StructureRelationship");
    m_StructureRelationshipEClass->setAbstract(false);
    m_StructureRelationshipEClass->setInterface(false);
    m_StructureRelationship__to->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance().get())->getKDMEntity());
    m_StructureRelationship__to->setName("to");
    m_StructureRelationship__to->setDefaultValueLiteral("");
    m_StructureRelationship__to->setLowerBound(1);
    m_StructureRelationship__to->setUpperBound(1);
    m_StructureRelationship__to->setTransient(false);
    m_StructureRelationship__to->setVolatile(false);
    m_StructureRelationship__to->setChangeable(true);
    m_StructureRelationship__to->setContainment(false);
    m_StructureRelationship__to->setResolveProxies(true);
    m_StructureRelationship__to->setUnique(true);
    m_StructureRelationship__to->setDerived(false);
    m_StructureRelationship__to->setOrdered(false);
    m_StructureRelationship__from->setEType(m_AbstractStructureElementEClass);
    m_StructureRelationship__from->setName("from");
    m_StructureRelationship__from->setDefaultValueLiteral("");
    m_StructureRelationship__from->setLowerBound(1);
    m_StructureRelationship__from->setUpperBound(1);
    m_StructureRelationship__from->setTransient(false);
    m_StructureRelationship__from->setVolatile(false);
    m_StructureRelationship__from->setChangeable(true);
    m_StructureRelationship__from->setContainment(false);
    m_StructureRelationship__from->setResolveProxies(true);
    m_StructureRelationship__from->setUnique(true);
    m_StructureRelationship__from->setDerived(false);
    m_StructureRelationship__from->setOrdered(false);
    // ArchitectureView
    m_ArchitectureViewEClass->setName("ArchitectureView");
    m_ArchitectureViewEClass->setAbstract(false);
    m_ArchitectureViewEClass->setInterface(false);
    // StructureElement
    m_StructureElementEClass->setName("StructureElement");
    m_StructureElementEClass->setAbstract(false);
    m_StructureElementEClass->setInterface(false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr StructurePackage::getAbstractStructureElement()
{
    return m_AbstractStructureElementEClass;
}
::ecore::EClass_ptr StructurePackage::getSubsystem()
{
    return m_SubsystemEClass;
}
::ecore::EClass_ptr StructurePackage::getLayer()
{
    return m_LayerEClass;
}
::ecore::EClass_ptr StructurePackage::getStructureModel()
{
    return m_StructureModelEClass;
}
::ecore::EClass_ptr StructurePackage::getComponent()
{
    return m_ComponentEClass;
}
::ecore::EClass_ptr StructurePackage::getSoftwareSystem()
{
    return m_SoftwareSystemEClass;
}
::ecore::EClass_ptr StructurePackage::getAbstractStructureRelationship()
{
    return m_AbstractStructureRelationshipEClass;
}
::ecore::EClass_ptr StructurePackage::getStructureRelationship()
{
    return m_StructureRelationshipEClass;
}
::ecore::EClass_ptr StructurePackage::getArchitectureView()
{
    return m_ArchitectureViewEClass;
}
::ecore::EClass_ptr StructurePackage::getStructureElement()
{
    return m_StructureElementEClass;
}

::ecore::EReference_ptr StructurePackage::getElement__attribute()
{
    return m_Element__attribute;
}
::ecore::EReference_ptr StructurePackage::getElement__annotation()
{
    return m_Element__annotation;
}
::ecore::EReference_ptr StructurePackage::getModelElement__stereotype()
{
    return m_ModelElement__stereotype;
}
::ecore::EReference_ptr StructurePackage::getModelElement__taggedValue()
{
    return m_ModelElement__taggedValue;
}
::ecore::EAttribute_ptr StructurePackage::getKDMEntity__name()
{
    return m_KDMEntity__name;
}
::ecore::EReference_ptr StructurePackage::getAbstractStructureElement__aggregated()
{
    return m_AbstractStructureElement__aggregated;
}
::ecore::EReference_ptr StructurePackage::getAbstractStructureElement__implementation()
{
    return m_AbstractStructureElement__implementation;
}
::ecore::EReference_ptr StructurePackage::getAbstractStructureElement__structureElement()
{
    return m_AbstractStructureElement__structureElement;
}
::ecore::EReference_ptr StructurePackage::getAbstractStructureElement__structureRelationship()
{
    return m_AbstractStructureElement__structureRelationship;
}
::ecore::EReference_ptr StructurePackage::getKDMFramework__audit()
{
    return m_KDMFramework__audit;
}
::ecore::EReference_ptr StructurePackage::getKDMFramework__extensionFamily()
{
    return m_KDMFramework__extensionFamily;
}
::ecore::EAttribute_ptr StructurePackage::getKDMFramework__name()
{
    return m_KDMFramework__name;
}
::ecore::EReference_ptr StructurePackage::getStructureModel__structureElement()
{
    return m_StructureModel__structureElement;
}
::ecore::EReference_ptr StructurePackage::getStructureRelationship__to()
{
    return m_StructureRelationship__to;
}
::ecore::EReference_ptr StructurePackage::getStructureRelationship__from()
{
    return m_StructureRelationship__from;
}

