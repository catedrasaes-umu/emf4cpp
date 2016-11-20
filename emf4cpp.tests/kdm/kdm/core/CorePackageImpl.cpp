// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/core/CorePackageImpl.cpp
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

#include <kdm/core/CorePackage.hpp>
#include <kdm/core/CoreFactory.hpp>
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
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>

using namespace ::kdm::core;

CorePackage::CorePackage()
{

    // Feature definitions of Element
    m_Element__attribute = new ::ecore::EReference();
    m_Element__annotation = new ::ecore::EReference();

    // Feature definitions of ModelElement
    m_ModelElement__stereotype = new ::ecore::EReference();
    m_ModelElement__taggedValue = new ::ecore::EReference();

    // Feature definitions of KDMEntity
    m_KDMEntity__name = new ::ecore::EAttribute();

    // Feature definitions of KDMRelationship

    // Feature definitions of AggregatedRelationship
    m_AggregatedRelationship__density = new ::ecore::EAttribute();
    m_AggregatedRelationship__from = new ::ecore::EReference();
    m_AggregatedRelationship__to = new ::ecore::EReference();
    m_AggregatedRelationship__relation = new ::ecore::EReference();

    /* Now one can safely ask for a feature definition of
     * a class, though it is not yet usable. */
    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = CoreFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    ::ecore::EOperation_ptr _op;
    ::ecore::EParameter_ptr _pa;

    // Create classes and their features

    // Element
    m_ElementEClass = new ::ecore::EClass();
    m_ElementEClass->setClassifierID(ELEMENT);
    m_ElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_ElementEClass);
    // m_Element__attribute has already been allocated above
    m_Element__attribute->setFeatureID(
            ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE);
    m_ElementEClass->getEStructuralFeatures().push_back(m_Element__attribute);
    // m_Element__annotation has already been allocated above
    m_Element__annotation->setFeatureID(
            ::kdm::core::CorePackage::ELEMENT__ANNOTATION);
    m_ElementEClass->getEStructuralFeatures().push_back(m_Element__annotation);

    // ModelElement
    m_ModelElementEClass = new ::ecore::EClass();
    m_ModelElementEClass->setClassifierID(MODELELEMENT);
    m_ModelElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_ModelElementEClass);
    // m_ModelElement__stereotype has already been allocated above
    m_ModelElement__stereotype->setFeatureID(
            ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE);
    m_ModelElementEClass->getEStructuralFeatures().push_back(
            m_ModelElement__stereotype);
    // m_ModelElement__taggedValue has already been allocated above
    m_ModelElement__taggedValue->setFeatureID(
            ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE);
    m_ModelElementEClass->getEStructuralFeatures().push_back(
            m_ModelElement__taggedValue);

    // KDMEntity
    m_KDMEntityEClass = new ::ecore::EClass();
    m_KDMEntityEClass->setClassifierID(KDMENTITY);
    m_KDMEntityEClass->setEPackage(this);
    getEClassifiers().push_back(m_KDMEntityEClass);
    // m_KDMEntity__name has already been allocated above
    m_KDMEntity__name->setFeatureID(::kdm::core::CorePackage::KDMENTITY__NAME);
    m_KDMEntityEClass->getEStructuralFeatures().push_back(m_KDMEntity__name);

    // KDMRelationship
    m_KDMRelationshipEClass = new ::ecore::EClass();
    m_KDMRelationshipEClass->setClassifierID(KDMRELATIONSHIP);
    m_KDMRelationshipEClass->setEPackage(this);
    getEClassifiers().push_back(m_KDMRelationshipEClass);

    // AggregatedRelationship
    m_AggregatedRelationshipEClass = new ::ecore::EClass();
    m_AggregatedRelationshipEClass->setClassifierID(AGGREGATEDRELATIONSHIP);
    m_AggregatedRelationshipEClass->setEPackage(this);
    getEClassifiers().push_back(m_AggregatedRelationshipEClass);
    // m_AggregatedRelationship__density has already been allocated above
    m_AggregatedRelationship__density->setFeatureID(
            ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__DENSITY);
    m_AggregatedRelationshipEClass->getEStructuralFeatures().push_back(
            m_AggregatedRelationship__density);
    // m_AggregatedRelationship__from has already been allocated above
    m_AggregatedRelationship__from->setFeatureID(
            ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__FROM);
    m_AggregatedRelationshipEClass->getEStructuralFeatures().push_back(
            m_AggregatedRelationship__from);
    // m_AggregatedRelationship__to has already been allocated above
    m_AggregatedRelationship__to->setFeatureID(
            ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__TO);
    m_AggregatedRelationshipEClass->getEStructuralFeatures().push_back(
            m_AggregatedRelationship__to);
    // m_AggregatedRelationship__relation has already been allocated above
    m_AggregatedRelationship__relation->setFeatureID(
            ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__RELATION);
    m_AggregatedRelationshipEClass->getEStructuralFeatures().push_back(
            m_AggregatedRelationship__relation);

    // Create enums

    // Create data types

    m_StringEDataType = new ::ecore::EDataType();
    m_StringEDataType->setClassifierID(STRING);
    m_StringEDataType->setEPackage(this);
    getEClassifiers().push_back(m_StringEDataType);

    m_IntegerEDataType = new ::ecore::EDataType();
    m_IntegerEDataType->setClassifierID(INTEGER);
    m_IntegerEDataType->setEPackage(this);
    getEClassifiers().push_back(m_IntegerEDataType);

    m_BooleanEDataType = new ::ecore::EDataType();
    m_BooleanEDataType->setClassifierID(BOOLEAN);
    m_BooleanEDataType->setEPackage(this);
    getEClassifiers().push_back(m_BooleanEDataType);

    // Initialize package
    setName("core");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_ModelElementEClass->getESuperTypes().push_back(m_ElementEClass);
    m_KDMEntityEClass->getESuperTypes().push_back(m_ModelElementEClass);
    m_KDMRelationshipEClass->getESuperTypes().push_back(m_ModelElementEClass);
    m_AggregatedRelationshipEClass->getESuperTypes().push_back(
            m_ModelElementEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // Element
    m_ElementEClass->setName("Element");
    m_ElementEClass->setAbstract(true);
    m_ElementEClass->setInterface(false);
    m_Element__attribute->setEType(
            dynamic_cast< ::kdm::kdm::KdmPackage* >(::kdm::kdm::KdmPackage::_instance())->getAttribute());
    m_Element__attribute->setName("attribute");
    m_Element__attribute->setDefaultValueLiteral("");
    m_Element__attribute->setLowerBound(0);
    m_Element__attribute->setUpperBound(-1);
    m_Element__attribute->setTransient(false);
    m_Element__attribute->setVolatile(false);
    m_Element__attribute->setChangeable(true);
    m_Element__attribute->setContainment(true);
    m_Element__attribute->setResolveProxies(true);
    m_Element__attribute->setUnique(true);
    m_Element__attribute->setDerived(false);
    m_Element__attribute->setOrdered(false);
    m_Element__annotation->setEType(
            dynamic_cast< ::kdm::kdm::KdmPackage* >(::kdm::kdm::KdmPackage::_instance())->getAnnotation());
    m_Element__annotation->setName("annotation");
    m_Element__annotation->setDefaultValueLiteral("");
    m_Element__annotation->setLowerBound(0);
    m_Element__annotation->setUpperBound(-1);
    m_Element__annotation->setTransient(false);
    m_Element__annotation->setVolatile(false);
    m_Element__annotation->setChangeable(true);
    m_Element__annotation->setContainment(true);
    m_Element__annotation->setResolveProxies(true);
    m_Element__annotation->setUnique(true);
    m_Element__annotation->setDerived(false);
    m_Element__annotation->setOrdered(false);
    // ModelElement
    m_ModelElementEClass->setName("ModelElement");
    m_ModelElementEClass->setAbstract(true);
    m_ModelElementEClass->setInterface(false);
    m_ModelElement__stereotype->setEType(
            dynamic_cast< ::kdm::kdm::KdmPackage* >(::kdm::kdm::KdmPackage::_instance())->getStereotype());
    m_ModelElement__stereotype->setName("stereotype");
    m_ModelElement__stereotype->setDefaultValueLiteral("");
    m_ModelElement__stereotype->setLowerBound(0);
    m_ModelElement__stereotype->setUpperBound(-1);
    m_ModelElement__stereotype->setTransient(false);
    m_ModelElement__stereotype->setVolatile(false);
    m_ModelElement__stereotype->setChangeable(true);
    m_ModelElement__stereotype->setContainment(false);
    m_ModelElement__stereotype->setResolveProxies(true);
    m_ModelElement__stereotype->setUnique(true);
    m_ModelElement__stereotype->setDerived(false);
    m_ModelElement__stereotype->setOrdered(false);
    m_ModelElement__taggedValue->setEType(
            dynamic_cast< ::kdm::kdm::KdmPackage* >(::kdm::kdm::KdmPackage::_instance())->getExtendedValue());
    m_ModelElement__taggedValue->setName("taggedValue");
    m_ModelElement__taggedValue->setDefaultValueLiteral("");
    m_ModelElement__taggedValue->setLowerBound(0);
    m_ModelElement__taggedValue->setUpperBound(-1);
    m_ModelElement__taggedValue->setTransient(false);
    m_ModelElement__taggedValue->setVolatile(false);
    m_ModelElement__taggedValue->setChangeable(true);
    m_ModelElement__taggedValue->setContainment(true);
    m_ModelElement__taggedValue->setResolveProxies(true);
    m_ModelElement__taggedValue->setUnique(true);
    m_ModelElement__taggedValue->setDerived(false);
    m_ModelElement__taggedValue->setOrdered(false);
    // KDMEntity
    m_KDMEntityEClass->setName("KDMEntity");
    m_KDMEntityEClass->setAbstract(true);
    m_KDMEntityEClass->setInterface(false);
    m_KDMEntity__name->setEType(m_StringEDataType);
    m_KDMEntity__name->setName("name");
    m_KDMEntity__name->setDefaultValueLiteral("");
    m_KDMEntity__name->setLowerBound(0);
    m_KDMEntity__name->setUpperBound(1);
    m_KDMEntity__name->setTransient(false);
    m_KDMEntity__name->setVolatile(false);
    m_KDMEntity__name->setChangeable(true);
    m_KDMEntity__name->setUnsettable(false);
    m_KDMEntity__name->setID(false);
    m_KDMEntity__name->setUnique(false);
    m_KDMEntity__name->setDerived(false);
    m_KDMEntity__name->setOrdered(false);
    _op = new ::ecore::EOperation();
    _op->setName("createAggregation");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_KDMEntityEClass);
    _pa->setName("otherEntity");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_KDMEntityEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setName("deleteAggregation");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_AggregatedRelationshipEClass);
    _pa->setName("aggregation");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_KDMEntityEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_KDMRelationshipEClass);
    _op->setName("getInbound");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_KDMEntityEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_KDMRelationshipEClass);
    _op->setName("getOutbound");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_KDMEntityEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_KDMRelationshipEClass);
    _op->setName("getOwnedRelation");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_KDMEntityEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_AggregatedRelationshipEClass);
    _op->setName("getInAggregated");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_KDMEntityEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_AggregatedRelationshipEClass);
    _op->setName("getOutAggregated");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_KDMEntityEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_KDMEntityEClass);
    _op->setName("getOwner");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_KDMEntityEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_KDMEntityEClass);
    _op->setName("getOwnedElement");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_KDMEntityEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_KDMEntityEClass);
    _op->setName("getGroup");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_KDMEntityEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_KDMEntityEClass);
    _op->setName("getGroupedElement");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_KDMEntityEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(
            dynamic_cast< ::kdm::kdm::KdmPackage* >(::kdm::kdm::KdmPackage::_instance())->getKDMModel());
    _op->setName("getModel");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_KDMEntityEClass->getEOperations().push_back(_op);
    // KDMRelationship
    m_KDMRelationshipEClass->setName("KDMRelationship");
    m_KDMRelationshipEClass->setAbstract(true);
    m_KDMRelationshipEClass->setInterface(false);
    _op = new ::ecore::EOperation();
    _op->setEType(m_KDMEntityEClass);
    _op->setName("getTo");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_KDMRelationshipEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_KDMEntityEClass);
    _op->setName("getFrom");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_KDMRelationshipEClass->getEOperations().push_back(_op);
    // AggregatedRelationship
    m_AggregatedRelationshipEClass->setName("AggregatedRelationship");
    m_AggregatedRelationshipEClass->setAbstract(false);
    m_AggregatedRelationshipEClass->setInterface(false);
    m_AggregatedRelationship__density->setEType(m_IntegerEDataType);
    m_AggregatedRelationship__density->setName("density");
    m_AggregatedRelationship__density->setDefaultValueLiteral("");
    m_AggregatedRelationship__density->setLowerBound(0);
    m_AggregatedRelationship__density->setUpperBound(1);
    m_AggregatedRelationship__density->setTransient(false);
    m_AggregatedRelationship__density->setVolatile(false);
    m_AggregatedRelationship__density->setChangeable(true);
    m_AggregatedRelationship__density->setUnsettable(false);
    m_AggregatedRelationship__density->setID(false);
    m_AggregatedRelationship__density->setUnique(false);
    m_AggregatedRelationship__density->setDerived(false);
    m_AggregatedRelationship__density->setOrdered(false);
    m_AggregatedRelationship__from->setEType(m_KDMEntityEClass);
    m_AggregatedRelationship__from->setName("from");
    m_AggregatedRelationship__from->setDefaultValueLiteral("");
    m_AggregatedRelationship__from->setLowerBound(1);
    m_AggregatedRelationship__from->setUpperBound(1);
    m_AggregatedRelationship__from->setTransient(false);
    m_AggregatedRelationship__from->setVolatile(false);
    m_AggregatedRelationship__from->setChangeable(true);
    m_AggregatedRelationship__from->setContainment(false);
    m_AggregatedRelationship__from->setResolveProxies(true);
    m_AggregatedRelationship__from->setUnique(true);
    m_AggregatedRelationship__from->setDerived(false);
    m_AggregatedRelationship__from->setOrdered(false);
    m_AggregatedRelationship__to->setEType(m_KDMEntityEClass);
    m_AggregatedRelationship__to->setName("to");
    m_AggregatedRelationship__to->setDefaultValueLiteral("");
    m_AggregatedRelationship__to->setLowerBound(1);
    m_AggregatedRelationship__to->setUpperBound(1);
    m_AggregatedRelationship__to->setTransient(false);
    m_AggregatedRelationship__to->setVolatile(false);
    m_AggregatedRelationship__to->setChangeable(true);
    m_AggregatedRelationship__to->setContainment(false);
    m_AggregatedRelationship__to->setResolveProxies(true);
    m_AggregatedRelationship__to->setUnique(true);
    m_AggregatedRelationship__to->setDerived(false);
    m_AggregatedRelationship__to->setOrdered(false);
    m_AggregatedRelationship__relation->setEType(m_KDMRelationshipEClass);
    m_AggregatedRelationship__relation->setName("relation");
    m_AggregatedRelationship__relation->setDefaultValueLiteral("");
    m_AggregatedRelationship__relation->setLowerBound(0);
    m_AggregatedRelationship__relation->setUpperBound(-1);
    m_AggregatedRelationship__relation->setTransient(false);
    m_AggregatedRelationship__relation->setVolatile(false);
    m_AggregatedRelationship__relation->setChangeable(true);
    m_AggregatedRelationship__relation->setContainment(false);
    m_AggregatedRelationship__relation->setResolveProxies(true);
    m_AggregatedRelationship__relation->setUnique(true);
    m_AggregatedRelationship__relation->setDerived(false);
    m_AggregatedRelationship__relation->setOrdered(false);

    // TODO: Initialize data types

    // String
    m_StringEDataType->setName("String");
    m_StringEDataType->setSerializable(true);

    // Integer
    m_IntegerEDataType->setName("Integer");
    m_IntegerEDataType->setSerializable(true);

    // Boolean
    m_BooleanEDataType->setName("Boolean");
    m_BooleanEDataType->setSerializable(true);

    _initialize();
}

::ecore::EClass_ptr CorePackage::getElement()
{
    return m_ElementEClass;
}
::ecore::EClass_ptr CorePackage::getModelElement()
{
    return m_ModelElementEClass;
}
::ecore::EClass_ptr CorePackage::getKDMEntity()
{
    return m_KDMEntityEClass;
}
::ecore::EClass_ptr CorePackage::getKDMRelationship()
{
    return m_KDMRelationshipEClass;
}
::ecore::EClass_ptr CorePackage::getAggregatedRelationship()
{
    return m_AggregatedRelationshipEClass;
}
::ecore::EDataType_ptr CorePackage::getString()
{
    return m_StringEDataType;
}
::ecore::EDataType_ptr CorePackage::getInteger()
{
    return m_IntegerEDataType;
}
::ecore::EDataType_ptr CorePackage::getBoolean()
{
    return m_BooleanEDataType;
}

::ecore::EReference_ptr CorePackage::getElement__attribute()
{
    return m_Element__attribute;
}
::ecore::EReference_ptr CorePackage::getElement__annotation()
{
    return m_Element__annotation;
}
::ecore::EReference_ptr CorePackage::getModelElement__stereotype()
{
    return m_ModelElement__stereotype;
}
::ecore::EReference_ptr CorePackage::getModelElement__taggedValue()
{
    return m_ModelElement__taggedValue;
}
::ecore::EAttribute_ptr CorePackage::getKDMEntity__name()
{
    return m_KDMEntity__name;
}
::ecore::EReference_ptr CorePackage::getAggregatedRelationship__from()
{
    return m_AggregatedRelationship__from;
}
::ecore::EReference_ptr CorePackage::getAggregatedRelationship__to()
{
    return m_AggregatedRelationship__to;
}
::ecore::EReference_ptr CorePackage::getAggregatedRelationship__relation()
{
    return m_AggregatedRelationship__relation;
}
::ecore::EAttribute_ptr CorePackage::getAggregatedRelationship__density()
{
    return m_AggregatedRelationship__density;
}

