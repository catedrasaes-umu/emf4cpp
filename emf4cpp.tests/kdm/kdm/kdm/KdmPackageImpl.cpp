// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/KdmPackageImpl.cpp
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

#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/kdm/KdmFactory.hpp>
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
#include <kdm/core/CorePackage.hpp>
#include <kdm/core/ModelElement.hpp>

using namespace ::kdm::kdm;

KdmPackage::KdmPackage()
{

    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = KdmFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    // Create classes and their features

    // KDMFramework
    m_KDMFrameworkEClass = new ::ecore::EClass();
    m_KDMFrameworkEClass->setClassifierID(KDMFRAMEWORK);
    m_KDMFrameworkEClass->setEPackage(this);
    getEClassifiers().push_back(m_KDMFrameworkEClass);
    m_KDMFramework__name = new ::ecore::EAttribute();
    m_KDMFramework__name->setFeatureID(
            ::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME);
    m_KDMFrameworkEClass->getEStructuralFeatures().push_back(
            m_KDMFramework__name);
    m_KDMFramework__audit = new ::ecore::EReference();
    m_KDMFramework__audit->setFeatureID(
            ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT);
    m_KDMFrameworkEClass->getEStructuralFeatures().push_back(
            m_KDMFramework__audit);
    m_KDMFramework__extensionFamily = new ::ecore::EReference();
    m_KDMFramework__extensionFamily->setFeatureID(
            ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY);
    m_KDMFrameworkEClass->getEStructuralFeatures().push_back(
            m_KDMFramework__extensionFamily);

    // KDMModel
    m_KDMModelEClass = new ::ecore::EClass();
    m_KDMModelEClass->setClassifierID(KDMMODEL);
    m_KDMModelEClass->setEPackage(this);
    getEClassifiers().push_back(m_KDMModelEClass);

    // Audit
    m_AuditEClass = new ::ecore::EClass();
    m_AuditEClass->setClassifierID(AUDIT);
    m_AuditEClass->setEPackage(this);
    getEClassifiers().push_back(m_AuditEClass);
    m_Audit__description = new ::ecore::EAttribute();
    m_Audit__description->setFeatureID(
            ::kdm::kdm::KdmPackage::AUDIT__DESCRIPTION);
    m_AuditEClass->getEStructuralFeatures().push_back(m_Audit__description);
    m_Audit__author = new ::ecore::EAttribute();
    m_Audit__author->setFeatureID(::kdm::kdm::KdmPackage::AUDIT__AUTHOR);
    m_AuditEClass->getEStructuralFeatures().push_back(m_Audit__author);
    m_Audit__date = new ::ecore::EAttribute();
    m_Audit__date->setFeatureID(::kdm::kdm::KdmPackage::AUDIT__DATE);
    m_AuditEClass->getEStructuralFeatures().push_back(m_Audit__date);

    // Segment
    m_SegmentEClass = new ::ecore::EClass();
    m_SegmentEClass->setClassifierID(SEGMENT);
    m_SegmentEClass->setEPackage(this);
    getEClassifiers().push_back(m_SegmentEClass);
    m_Segment__segment = new ::ecore::EReference();
    m_Segment__segment->setFeatureID(::kdm::kdm::KdmPackage::SEGMENT__SEGMENT);
    m_SegmentEClass->getEStructuralFeatures().push_back(m_Segment__segment);
    m_Segment__model = new ::ecore::EReference();
    m_Segment__model->setFeatureID(::kdm::kdm::KdmPackage::SEGMENT__MODEL);
    m_SegmentEClass->getEStructuralFeatures().push_back(m_Segment__model);

    // Attribute
    m_AttributeEClass = new ::ecore::EClass();
    m_AttributeEClass->setClassifierID(ATTRIBUTE);
    m_AttributeEClass->setEPackage(this);
    getEClassifiers().push_back(m_AttributeEClass);
    m_Attribute__tag = new ::ecore::EAttribute();
    m_Attribute__tag->setFeatureID(::kdm::kdm::KdmPackage::ATTRIBUTE__TAG);
    m_AttributeEClass->getEStructuralFeatures().push_back(m_Attribute__tag);
    m_Attribute__value = new ::ecore::EAttribute();
    m_Attribute__value->setFeatureID(::kdm::kdm::KdmPackage::ATTRIBUTE__VALUE);
    m_AttributeEClass->getEStructuralFeatures().push_back(m_Attribute__value);

    // Annotation
    m_AnnotationEClass = new ::ecore::EClass();
    m_AnnotationEClass->setClassifierID(ANNOTATION);
    m_AnnotationEClass->setEPackage(this);
    getEClassifiers().push_back(m_AnnotationEClass);
    m_Annotation__text = new ::ecore::EAttribute();
    m_Annotation__text->setFeatureID(::kdm::kdm::KdmPackage::ANNOTATION__TEXT);
    m_AnnotationEClass->getEStructuralFeatures().push_back(m_Annotation__text);

    // TagDefinition
    m_TagDefinitionEClass = new ::ecore::EClass();
    m_TagDefinitionEClass->setClassifierID(TAGDEFINITION);
    m_TagDefinitionEClass->setEPackage(this);
    getEClassifiers().push_back(m_TagDefinitionEClass);
    m_TagDefinition__tag = new ::ecore::EAttribute();
    m_TagDefinition__tag->setFeatureID(
            ::kdm::kdm::KdmPackage::TAGDEFINITION__TAG);
    m_TagDefinitionEClass->getEStructuralFeatures().push_back(
            m_TagDefinition__tag);
    m_TagDefinition__type = new ::ecore::EAttribute();
    m_TagDefinition__type->setFeatureID(
            ::kdm::kdm::KdmPackage::TAGDEFINITION__TYPE);
    m_TagDefinitionEClass->getEStructuralFeatures().push_back(
            m_TagDefinition__type);

    // ExtendedValue
    m_ExtendedValueEClass = new ::ecore::EClass();
    m_ExtendedValueEClass->setClassifierID(EXTENDEDVALUE);
    m_ExtendedValueEClass->setEPackage(this);
    getEClassifiers().push_back(m_ExtendedValueEClass);
    m_ExtendedValue__tag = new ::ecore::EReference();
    m_ExtendedValue__tag->setFeatureID(
            ::kdm::kdm::KdmPackage::EXTENDEDVALUE__TAG);
    m_ExtendedValueEClass->getEStructuralFeatures().push_back(
            m_ExtendedValue__tag);

    // Stereotype
    m_StereotypeEClass = new ::ecore::EClass();
    m_StereotypeEClass->setClassifierID(STEREOTYPE);
    m_StereotypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_StereotypeEClass);
    m_Stereotype__name = new ::ecore::EAttribute();
    m_Stereotype__name->setFeatureID(::kdm::kdm::KdmPackage::STEREOTYPE__NAME);
    m_StereotypeEClass->getEStructuralFeatures().push_back(m_Stereotype__name);
    m_Stereotype__type = new ::ecore::EAttribute();
    m_Stereotype__type->setFeatureID(::kdm::kdm::KdmPackage::STEREOTYPE__TYPE);
    m_StereotypeEClass->getEStructuralFeatures().push_back(m_Stereotype__type);
    m_Stereotype__tag = new ::ecore::EReference();
    m_Stereotype__tag->setFeatureID(::kdm::kdm::KdmPackage::STEREOTYPE__TAG);
    m_StereotypeEClass->getEStructuralFeatures().push_back(m_Stereotype__tag);

    // ExtensionFamily
    m_ExtensionFamilyEClass = new ::ecore::EClass();
    m_ExtensionFamilyEClass->setClassifierID(EXTENSIONFAMILY);
    m_ExtensionFamilyEClass->setEPackage(this);
    getEClassifiers().push_back(m_ExtensionFamilyEClass);
    m_ExtensionFamily__name = new ::ecore::EAttribute();
    m_ExtensionFamily__name->setFeatureID(
            ::kdm::kdm::KdmPackage::EXTENSIONFAMILY__NAME);
    m_ExtensionFamilyEClass->getEStructuralFeatures().push_back(
            m_ExtensionFamily__name);
    m_ExtensionFamily__stereotype = new ::ecore::EReference();
    m_ExtensionFamily__stereotype->setFeatureID(
            ::kdm::kdm::KdmPackage::EXTENSIONFAMILY__STEREOTYPE);
    m_ExtensionFamilyEClass->getEStructuralFeatures().push_back(
            m_ExtensionFamily__stereotype);

    // TaggedRef
    m_TaggedRefEClass = new ::ecore::EClass();
    m_TaggedRefEClass->setClassifierID(TAGGEDREF);
    m_TaggedRefEClass->setEPackage(this);
    getEClassifiers().push_back(m_TaggedRefEClass);
    m_TaggedRef__reference = new ::ecore::EReference();
    m_TaggedRef__reference->setFeatureID(
            ::kdm::kdm::KdmPackage::TAGGEDREF__REFERENCE);
    m_TaggedRefEClass->getEStructuralFeatures().push_back(
            m_TaggedRef__reference);

    // TaggedValue
    m_TaggedValueEClass = new ::ecore::EClass();
    m_TaggedValueEClass->setClassifierID(TAGGEDVALUE);
    m_TaggedValueEClass->setEPackage(this);
    getEClassifiers().push_back(m_TaggedValueEClass);
    m_TaggedValue__value = new ::ecore::EAttribute();
    m_TaggedValue__value->setFeatureID(
            ::kdm::kdm::KdmPackage::TAGGEDVALUE__VALUE);
    m_TaggedValueEClass->getEStructuralFeatures().push_back(
            m_TaggedValue__value);

    // Create enums


    // Create data types


    // Initialize package
    setName("kdm");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_KDMFrameworkEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getModelElement());
    m_KDMModelEClass->getESuperTypes().push_back(m_KDMFrameworkEClass);
    m_AuditEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getElement());
    m_SegmentEClass->getESuperTypes().push_back(m_KDMFrameworkEClass);
    m_AttributeEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getElement());
    m_AnnotationEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getElement());
    m_TagDefinitionEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getElement());
    m_ExtendedValueEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getElement());
    m_StereotypeEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getElement());
    m_ExtensionFamilyEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getElement());
    m_TaggedRefEClass->getESuperTypes().push_back(m_ExtendedValueEClass);
    m_TaggedValueEClass->getESuperTypes().push_back(m_ExtendedValueEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // KDMFramework
    m_KDMFrameworkEClass->setName("KDMFramework");
    m_KDMFrameworkEClass->setAbstract(true);
    m_KDMFrameworkEClass->setInterface(false);
    m_KDMFramework__name->setEType(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getString());
    m_KDMFramework__name->setName("name");
    m_KDMFramework__name->setDefaultValueLiteral("");
    m_KDMFramework__name->setLowerBound(0);
    m_KDMFramework__name->setUpperBound(1);
    m_KDMFramework__name->setTransient(false);
    m_KDMFramework__name->setVolatile(false);
    m_KDMFramework__name->setChangeable(true);
    m_KDMFramework__name->setUnsettable(false);
    m_KDMFramework__name->setID(false);
    m_KDMFramework__name->setUnique(false);
    m_KDMFramework__name->setDerived(false);
    m_KDMFramework__name->setOrdered(false);
    m_KDMFramework__audit->setEType(m_AuditEClass);
    m_KDMFramework__audit->setName("audit");
    m_KDMFramework__audit->setDefaultValueLiteral("");
    m_KDMFramework__audit->setLowerBound(0);
    m_KDMFramework__audit->setUpperBound(-1);
    m_KDMFramework__audit->setTransient(false);
    m_KDMFramework__audit->setVolatile(false);
    m_KDMFramework__audit->setChangeable(true);
    m_KDMFramework__audit->setContainment(true);
    m_KDMFramework__audit->setResolveProxies(true);
    m_KDMFramework__audit->setUnique(true);
    m_KDMFramework__audit->setDerived(false);
    m_KDMFramework__audit->setOrdered(false);
    m_KDMFramework__extensionFamily->setEType(m_ExtensionFamilyEClass);
    m_KDMFramework__extensionFamily->setName("extensionFamily");
    m_KDMFramework__extensionFamily->setDefaultValueLiteral("");
    m_KDMFramework__extensionFamily->setLowerBound(0);
    m_KDMFramework__extensionFamily->setUpperBound(-1);
    m_KDMFramework__extensionFamily->setTransient(false);
    m_KDMFramework__extensionFamily->setVolatile(false);
    m_KDMFramework__extensionFamily->setChangeable(true);
    m_KDMFramework__extensionFamily->setContainment(true);
    m_KDMFramework__extensionFamily->setResolveProxies(true);
    m_KDMFramework__extensionFamily->setUnique(true);
    m_KDMFramework__extensionFamily->setDerived(false);
    m_KDMFramework__extensionFamily->setOrdered(false);
    // KDMModel
    m_KDMModelEClass->setName("KDMModel");
    m_KDMModelEClass->setAbstract(true);
    m_KDMModelEClass->setInterface(false);
    // Audit
    m_AuditEClass->setName("Audit");
    m_AuditEClass->setAbstract(false);
    m_AuditEClass->setInterface(false);
    m_Audit__description->setEType(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getString());
    m_Audit__description->setName("description");
    m_Audit__description->setDefaultValueLiteral("");
    m_Audit__description->setLowerBound(0);
    m_Audit__description->setUpperBound(1);
    m_Audit__description->setTransient(false);
    m_Audit__description->setVolatile(false);
    m_Audit__description->setChangeable(true);
    m_Audit__description->setUnsettable(false);
    m_Audit__description->setID(false);
    m_Audit__description->setUnique(false);
    m_Audit__description->setDerived(false);
    m_Audit__description->setOrdered(false);
    m_Audit__author->setEType(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getString());
    m_Audit__author->setName("author");
    m_Audit__author->setDefaultValueLiteral("");
    m_Audit__author->setLowerBound(0);
    m_Audit__author->setUpperBound(1);
    m_Audit__author->setTransient(false);
    m_Audit__author->setVolatile(false);
    m_Audit__author->setChangeable(true);
    m_Audit__author->setUnsettable(false);
    m_Audit__author->setID(false);
    m_Audit__author->setUnique(false);
    m_Audit__author->setDerived(false);
    m_Audit__author->setOrdered(false);
    m_Audit__date->setEType(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getString());
    m_Audit__date->setName("date");
    m_Audit__date->setDefaultValueLiteral("");
    m_Audit__date->setLowerBound(0);
    m_Audit__date->setUpperBound(1);
    m_Audit__date->setTransient(false);
    m_Audit__date->setVolatile(false);
    m_Audit__date->setChangeable(true);
    m_Audit__date->setUnsettable(false);
    m_Audit__date->setID(false);
    m_Audit__date->setUnique(false);
    m_Audit__date->setDerived(false);
    m_Audit__date->setOrdered(false);
    // Segment
    m_SegmentEClass->setName("Segment");
    m_SegmentEClass->setAbstract(false);
    m_SegmentEClass->setInterface(false);
    m_Segment__segment->setEType(m_SegmentEClass);
    m_Segment__segment->setName("segment");
    m_Segment__segment->setDefaultValueLiteral("");
    m_Segment__segment->setLowerBound(0);
    m_Segment__segment->setUpperBound(-1);
    m_Segment__segment->setTransient(false);
    m_Segment__segment->setVolatile(false);
    m_Segment__segment->setChangeable(true);
    m_Segment__segment->setContainment(true);
    m_Segment__segment->setResolveProxies(true);
    m_Segment__segment->setUnique(true);
    m_Segment__segment->setDerived(false);
    m_Segment__segment->setOrdered(false);
    m_Segment__model->setEType(m_KDMModelEClass);
    m_Segment__model->setName("model");
    m_Segment__model->setDefaultValueLiteral("");
    m_Segment__model->setLowerBound(0);
    m_Segment__model->setUpperBound(-1);
    m_Segment__model->setTransient(false);
    m_Segment__model->setVolatile(false);
    m_Segment__model->setChangeable(true);
    m_Segment__model->setContainment(true);
    m_Segment__model->setResolveProxies(true);
    m_Segment__model->setUnique(true);
    m_Segment__model->setDerived(false);
    m_Segment__model->setOrdered(false);
    // Attribute
    m_AttributeEClass->setName("Attribute");
    m_AttributeEClass->setAbstract(false);
    m_AttributeEClass->setInterface(false);
    m_Attribute__tag->setEType(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getString());
    m_Attribute__tag->setName("tag");
    m_Attribute__tag->setDefaultValueLiteral("");
    m_Attribute__tag->setLowerBound(0);
    m_Attribute__tag->setUpperBound(1);
    m_Attribute__tag->setTransient(false);
    m_Attribute__tag->setVolatile(false);
    m_Attribute__tag->setChangeable(true);
    m_Attribute__tag->setUnsettable(false);
    m_Attribute__tag->setID(false);
    m_Attribute__tag->setUnique(false);
    m_Attribute__tag->setDerived(false);
    m_Attribute__tag->setOrdered(false);
    m_Attribute__value->setEType(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getString());
    m_Attribute__value->setName("value");
    m_Attribute__value->setDefaultValueLiteral("");
    m_Attribute__value->setLowerBound(0);
    m_Attribute__value->setUpperBound(1);
    m_Attribute__value->setTransient(false);
    m_Attribute__value->setVolatile(false);
    m_Attribute__value->setChangeable(true);
    m_Attribute__value->setUnsettable(false);
    m_Attribute__value->setID(false);
    m_Attribute__value->setUnique(false);
    m_Attribute__value->setDerived(false);
    m_Attribute__value->setOrdered(false);
    // Annotation
    m_AnnotationEClass->setName("Annotation");
    m_AnnotationEClass->setAbstract(false);
    m_AnnotationEClass->setInterface(false);
    m_Annotation__text->setEType(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getString());
    m_Annotation__text->setName("text");
    m_Annotation__text->setDefaultValueLiteral("");
    m_Annotation__text->setLowerBound(0);
    m_Annotation__text->setUpperBound(1);
    m_Annotation__text->setTransient(false);
    m_Annotation__text->setVolatile(false);
    m_Annotation__text->setChangeable(true);
    m_Annotation__text->setUnsettable(false);
    m_Annotation__text->setID(false);
    m_Annotation__text->setUnique(false);
    m_Annotation__text->setDerived(false);
    m_Annotation__text->setOrdered(false);
    // TagDefinition
    m_TagDefinitionEClass->setName("TagDefinition");
    m_TagDefinitionEClass->setAbstract(false);
    m_TagDefinitionEClass->setInterface(false);
    m_TagDefinition__tag->setEType(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getString());
    m_TagDefinition__tag->setName("tag");
    m_TagDefinition__tag->setDefaultValueLiteral("");
    m_TagDefinition__tag->setLowerBound(0);
    m_TagDefinition__tag->setUpperBound(1);
    m_TagDefinition__tag->setTransient(false);
    m_TagDefinition__tag->setVolatile(false);
    m_TagDefinition__tag->setChangeable(true);
    m_TagDefinition__tag->setUnsettable(false);
    m_TagDefinition__tag->setID(false);
    m_TagDefinition__tag->setUnique(false);
    m_TagDefinition__tag->setDerived(false);
    m_TagDefinition__tag->setOrdered(false);
    m_TagDefinition__type->setEType(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getString());
    m_TagDefinition__type->setName("type");
    m_TagDefinition__type->setDefaultValueLiteral("");
    m_TagDefinition__type->setLowerBound(0);
    m_TagDefinition__type->setUpperBound(1);
    m_TagDefinition__type->setTransient(false);
    m_TagDefinition__type->setVolatile(false);
    m_TagDefinition__type->setChangeable(true);
    m_TagDefinition__type->setUnsettable(false);
    m_TagDefinition__type->setID(false);
    m_TagDefinition__type->setUnique(false);
    m_TagDefinition__type->setDerived(false);
    m_TagDefinition__type->setOrdered(false);
    // ExtendedValue
    m_ExtendedValueEClass->setName("ExtendedValue");
    m_ExtendedValueEClass->setAbstract(true);
    m_ExtendedValueEClass->setInterface(false);
    m_ExtendedValue__tag->setEType(m_TagDefinitionEClass);
    m_ExtendedValue__tag->setName("tag");
    m_ExtendedValue__tag->setDefaultValueLiteral("");
    m_ExtendedValue__tag->setLowerBound(1);
    m_ExtendedValue__tag->setUpperBound(1);
    m_ExtendedValue__tag->setTransient(false);
    m_ExtendedValue__tag->setVolatile(false);
    m_ExtendedValue__tag->setChangeable(true);
    m_ExtendedValue__tag->setContainment(false);
    m_ExtendedValue__tag->setResolveProxies(true);
    m_ExtendedValue__tag->setUnique(true);
    m_ExtendedValue__tag->setDerived(false);
    m_ExtendedValue__tag->setOrdered(false);
    // Stereotype
    m_StereotypeEClass->setName("Stereotype");
    m_StereotypeEClass->setAbstract(false);
    m_StereotypeEClass->setInterface(false);
    m_Stereotype__name->setEType(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getString());
    m_Stereotype__name->setName("name");
    m_Stereotype__name->setDefaultValueLiteral("");
    m_Stereotype__name->setLowerBound(0);
    m_Stereotype__name->setUpperBound(1);
    m_Stereotype__name->setTransient(false);
    m_Stereotype__name->setVolatile(false);
    m_Stereotype__name->setChangeable(true);
    m_Stereotype__name->setUnsettable(false);
    m_Stereotype__name->setID(false);
    m_Stereotype__name->setUnique(false);
    m_Stereotype__name->setDerived(false);
    m_Stereotype__name->setOrdered(false);
    m_Stereotype__type->setEType(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getString());
    m_Stereotype__type->setName("type");
    m_Stereotype__type->setDefaultValueLiteral("");
    m_Stereotype__type->setLowerBound(0);
    m_Stereotype__type->setUpperBound(1);
    m_Stereotype__type->setTransient(false);
    m_Stereotype__type->setVolatile(false);
    m_Stereotype__type->setChangeable(true);
    m_Stereotype__type->setUnsettable(false);
    m_Stereotype__type->setID(false);
    m_Stereotype__type->setUnique(false);
    m_Stereotype__type->setDerived(false);
    m_Stereotype__type->setOrdered(false);
    m_Stereotype__tag->setEType(m_TagDefinitionEClass);
    m_Stereotype__tag->setName("tag");
    m_Stereotype__tag->setDefaultValueLiteral("");
    m_Stereotype__tag->setLowerBound(0);
    m_Stereotype__tag->setUpperBound(-1);
    m_Stereotype__tag->setTransient(false);
    m_Stereotype__tag->setVolatile(false);
    m_Stereotype__tag->setChangeable(true);
    m_Stereotype__tag->setContainment(true);
    m_Stereotype__tag->setResolveProxies(true);
    m_Stereotype__tag->setUnique(true);
    m_Stereotype__tag->setDerived(false);
    m_Stereotype__tag->setOrdered(false);
    // ExtensionFamily
    m_ExtensionFamilyEClass->setName("ExtensionFamily");
    m_ExtensionFamilyEClass->setAbstract(false);
    m_ExtensionFamilyEClass->setInterface(false);
    m_ExtensionFamily__name->setEType(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getString());
    m_ExtensionFamily__name->setName("name");
    m_ExtensionFamily__name->setDefaultValueLiteral("");
    m_ExtensionFamily__name->setLowerBound(0);
    m_ExtensionFamily__name->setUpperBound(1);
    m_ExtensionFamily__name->setTransient(false);
    m_ExtensionFamily__name->setVolatile(false);
    m_ExtensionFamily__name->setChangeable(true);
    m_ExtensionFamily__name->setUnsettable(false);
    m_ExtensionFamily__name->setID(false);
    m_ExtensionFamily__name->setUnique(false);
    m_ExtensionFamily__name->setDerived(false);
    m_ExtensionFamily__name->setOrdered(false);
    m_ExtensionFamily__stereotype->setEType(m_StereotypeEClass);
    m_ExtensionFamily__stereotype->setName("stereotype");
    m_ExtensionFamily__stereotype->setDefaultValueLiteral("");
    m_ExtensionFamily__stereotype->setLowerBound(0);
    m_ExtensionFamily__stereotype->setUpperBound(-1);
    m_ExtensionFamily__stereotype->setTransient(false);
    m_ExtensionFamily__stereotype->setVolatile(false);
    m_ExtensionFamily__stereotype->setChangeable(true);
    m_ExtensionFamily__stereotype->setContainment(true);
    m_ExtensionFamily__stereotype->setResolveProxies(true);
    m_ExtensionFamily__stereotype->setUnique(true);
    m_ExtensionFamily__stereotype->setDerived(false);
    m_ExtensionFamily__stereotype->setOrdered(false);
    // TaggedRef
    m_TaggedRefEClass->setName("TaggedRef");
    m_TaggedRefEClass->setAbstract(false);
    m_TaggedRefEClass->setInterface(false);
    m_TaggedRef__reference->setEType(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getModelElement());
    m_TaggedRef__reference->setName("reference");
    m_TaggedRef__reference->setDefaultValueLiteral("");
    m_TaggedRef__reference->setLowerBound(1);
    m_TaggedRef__reference->setUpperBound(1);
    m_TaggedRef__reference->setTransient(false);
    m_TaggedRef__reference->setVolatile(false);
    m_TaggedRef__reference->setChangeable(true);
    m_TaggedRef__reference->setContainment(false);
    m_TaggedRef__reference->setResolveProxies(true);
    m_TaggedRef__reference->setUnique(true);
    m_TaggedRef__reference->setDerived(false);
    m_TaggedRef__reference->setOrdered(false);
    // TaggedValue
    m_TaggedValueEClass->setName("TaggedValue");
    m_TaggedValueEClass->setAbstract(false);
    m_TaggedValueEClass->setInterface(false);
    m_TaggedValue__value->setEType(
            dynamic_cast< ::kdm::core::CorePackage* > (::kdm::core::CorePackage::_instance())->getString());
    m_TaggedValue__value->setName("value");
    m_TaggedValue__value->setDefaultValueLiteral("");
    m_TaggedValue__value->setLowerBound(0);
    m_TaggedValue__value->setUpperBound(1);
    m_TaggedValue__value->setTransient(false);
    m_TaggedValue__value->setVolatile(false);
    m_TaggedValue__value->setChangeable(true);
    m_TaggedValue__value->setUnsettable(false);
    m_TaggedValue__value->setID(false);
    m_TaggedValue__value->setUnique(false);
    m_TaggedValue__value->setDerived(false);
    m_TaggedValue__value->setOrdered(false);

    // TODO: Initialize data types


    _initialize();
}

::ecore::EClass_ptr KdmPackage::getKDMFramework()
{
    return m_KDMFrameworkEClass;
}
::ecore::EClass_ptr KdmPackage::getKDMModel()
{
    return m_KDMModelEClass;
}
::ecore::EClass_ptr KdmPackage::getAudit()
{
    return m_AuditEClass;
}
::ecore::EClass_ptr KdmPackage::getSegment()
{
    return m_SegmentEClass;
}
::ecore::EClass_ptr KdmPackage::getAttribute()
{
    return m_AttributeEClass;
}
::ecore::EClass_ptr KdmPackage::getAnnotation()
{
    return m_AnnotationEClass;
}
::ecore::EClass_ptr KdmPackage::getTagDefinition()
{
    return m_TagDefinitionEClass;
}
::ecore::EClass_ptr KdmPackage::getExtendedValue()
{
    return m_ExtendedValueEClass;
}
::ecore::EClass_ptr KdmPackage::getStereotype()
{
    return m_StereotypeEClass;
}
::ecore::EClass_ptr KdmPackage::getExtensionFamily()
{
    return m_ExtensionFamilyEClass;
}
::ecore::EClass_ptr KdmPackage::getTaggedRef()
{
    return m_TaggedRefEClass;
}
::ecore::EClass_ptr KdmPackage::getTaggedValue()
{
    return m_TaggedValueEClass;
}

::ecore::EReference_ptr KdmPackage::getElement__attribute()
{
    return m_Element__attribute;
}
::ecore::EReference_ptr KdmPackage::getElement__annotation()
{
    return m_Element__annotation;
}
::ecore::EReference_ptr KdmPackage::getModelElement__stereotype()
{
    return m_ModelElement__stereotype;
}
::ecore::EReference_ptr KdmPackage::getModelElement__taggedValue()
{
    return m_ModelElement__taggedValue;
}
::ecore::EReference_ptr KdmPackage::getKDMFramework__audit()
{
    return m_KDMFramework__audit;
}
::ecore::EReference_ptr KdmPackage::getKDMFramework__extensionFamily()
{
    return m_KDMFramework__extensionFamily;
}
::ecore::EAttribute_ptr KdmPackage::getKDMFramework__name()
{
    return m_KDMFramework__name;
}
::ecore::EAttribute_ptr KdmPackage::getAudit__description()
{
    return m_Audit__description;
}
::ecore::EAttribute_ptr KdmPackage::getAudit__author()
{
    return m_Audit__author;
}
::ecore::EAttribute_ptr KdmPackage::getAudit__date()
{
    return m_Audit__date;
}
::ecore::EReference_ptr KdmPackage::getSegment__segment()
{
    return m_Segment__segment;
}
::ecore::EReference_ptr KdmPackage::getSegment__model()
{
    return m_Segment__model;
}
::ecore::EAttribute_ptr KdmPackage::getAttribute__tag()
{
    return m_Attribute__tag;
}
::ecore::EAttribute_ptr KdmPackage::getAttribute__value()
{
    return m_Attribute__value;
}
::ecore::EAttribute_ptr KdmPackage::getAnnotation__text()
{
    return m_Annotation__text;
}
::ecore::EAttribute_ptr KdmPackage::getTagDefinition__tag()
{
    return m_TagDefinition__tag;
}
::ecore::EAttribute_ptr KdmPackage::getTagDefinition__type()
{
    return m_TagDefinition__type;
}
::ecore::EReference_ptr KdmPackage::getExtendedValue__tag()
{
    return m_ExtendedValue__tag;
}
::ecore::EReference_ptr KdmPackage::getStereotype__tag()
{
    return m_Stereotype__tag;
}
::ecore::EAttribute_ptr KdmPackage::getStereotype__name()
{
    return m_Stereotype__name;
}
::ecore::EAttribute_ptr KdmPackage::getStereotype__type()
{
    return m_Stereotype__type;
}
::ecore::EReference_ptr KdmPackage::getExtensionFamily__stereotype()
{
    return m_ExtensionFamily__stereotype;
}
::ecore::EAttribute_ptr KdmPackage::getExtensionFamily__name()
{
    return m_ExtensionFamily__name;
}
::ecore::EReference_ptr KdmPackage::getTaggedRef__reference()
{
    return m_TaggedRef__reference;
}
::ecore::EAttribute_ptr KdmPackage::getTaggedValue__value()
{
    return m_TaggedValue__value;
}

