// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EcorePackageImpl.cpp
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

#include <ecore/EcorePackage.hpp>
#include <ecore/EcoreFactory.hpp>
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

using namespace ::ecore;

EcorePackage::EcorePackage()
{

    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = EcoreFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    ::ecore::EOperation_ptr _op;
    ::ecore::EParameter_ptr _pa;

    // Create classes and their features

    // EAttribute
    m_EAttributeEClass = new ::ecore::EClass();
    m_EAttributeEClass->setClassifierID(EATTRIBUTE);
    m_EAttributeEClass->setEPackage(this);
    getEClassifiers().push_back(m_EAttributeEClass);
    m_EAttribute__iD = new ::ecore::EAttribute();
    m_EAttribute__iD->setFeatureID(::ecore::EcorePackage::EATTRIBUTE__ID);
    m_EAttributeEClass->getEStructuralFeatures().push_back(m_EAttribute__iD);
    m_EAttribute__eAttributeType = new ::ecore::EReference();
    m_EAttribute__eAttributeType->setFeatureID(
            ::ecore::EcorePackage::EATTRIBUTE__EATTRIBUTETYPE);
    m_EAttributeEClass->getEStructuralFeatures().push_back(
            m_EAttribute__eAttributeType);

    // EAnnotation
    m_EAnnotationEClass = new ::ecore::EClass();
    m_EAnnotationEClass->setClassifierID(EANNOTATION);
    m_EAnnotationEClass->setEPackage(this);
    getEClassifiers().push_back(m_EAnnotationEClass);
    m_EAnnotation__source = new ::ecore::EAttribute();
    m_EAnnotation__source->setFeatureID(
            ::ecore::EcorePackage::EANNOTATION__SOURCE);
    m_EAnnotationEClass->getEStructuralFeatures().push_back(
            m_EAnnotation__source);
    m_EAnnotation__details = new ::ecore::EReference();
    m_EAnnotation__details->setFeatureID(
            ::ecore::EcorePackage::EANNOTATION__DETAILS);
    m_EAnnotationEClass->getEStructuralFeatures().push_back(
            m_EAnnotation__details);
    m_EAnnotation__eModelElement = new ::ecore::EReference();
    m_EAnnotation__eModelElement->setFeatureID(
            ::ecore::EcorePackage::EANNOTATION__EMODELELEMENT);
    m_EAnnotationEClass->getEStructuralFeatures().push_back(
            m_EAnnotation__eModelElement);
    m_EAnnotation__contents = new ::ecore::EReference();
    m_EAnnotation__contents->setFeatureID(
            ::ecore::EcorePackage::EANNOTATION__CONTENTS);
    m_EAnnotationEClass->getEStructuralFeatures().push_back(
            m_EAnnotation__contents);
    m_EAnnotation__references = new ::ecore::EReference();
    m_EAnnotation__references->setFeatureID(
            ::ecore::EcorePackage::EANNOTATION__REFERENCES);
    m_EAnnotationEClass->getEStructuralFeatures().push_back(
            m_EAnnotation__references);

    // EClass
    m_EClassEClass = new ::ecore::EClass();
    m_EClassEClass->setClassifierID(ECLASS);
    m_EClassEClass->setEPackage(this);
    getEClassifiers().push_back(m_EClassEClass);
    m_EClass__abstract = new ::ecore::EAttribute();
    m_EClass__abstract->setFeatureID(::ecore::EcorePackage::ECLASS__ABSTRACT);
    m_EClassEClass->getEStructuralFeatures().push_back(m_EClass__abstract);
    m_EClass__interface = new ::ecore::EAttribute();
    m_EClass__interface->setFeatureID(::ecore::EcorePackage::ECLASS__INTERFACE);
    m_EClassEClass->getEStructuralFeatures().push_back(m_EClass__interface);
    m_EClass__eSuperTypes = new ::ecore::EReference();
    m_EClass__eSuperTypes->setFeatureID(
            ::ecore::EcorePackage::ECLASS__ESUPERTYPES);
    m_EClassEClass->getEStructuralFeatures().push_back(m_EClass__eSuperTypes);
    m_EClass__eOperations = new ::ecore::EReference();
    m_EClass__eOperations->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EOPERATIONS);
    m_EClassEClass->getEStructuralFeatures().push_back(m_EClass__eOperations);
    m_EClass__eAllAttributes = new ::ecore::EReference();
    m_EClass__eAllAttributes->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EALLATTRIBUTES);
    m_EClassEClass->getEStructuralFeatures().push_back(m_EClass__eAllAttributes);
    m_EClass__eAllReferences = new ::ecore::EReference();
    m_EClass__eAllReferences->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EALLREFERENCES);
    m_EClassEClass->getEStructuralFeatures().push_back(m_EClass__eAllReferences);
    m_EClass__eReferences = new ::ecore::EReference();
    m_EClass__eReferences->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EREFERENCES);
    m_EClassEClass->getEStructuralFeatures().push_back(m_EClass__eReferences);
    m_EClass__eAttributes = new ::ecore::EReference();
    m_EClass__eAttributes->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EATTRIBUTES);
    m_EClassEClass->getEStructuralFeatures().push_back(m_EClass__eAttributes);
    m_EClass__eAllContainments = new ::ecore::EReference();
    m_EClass__eAllContainments->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EALLCONTAINMENTS);
    m_EClassEClass->getEStructuralFeatures().push_back(
            m_EClass__eAllContainments);
    m_EClass__eAllOperations = new ::ecore::EReference();
    m_EClass__eAllOperations->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EALLOPERATIONS);
    m_EClassEClass->getEStructuralFeatures().push_back(m_EClass__eAllOperations);
    m_EClass__eAllStructuralFeatures = new ::ecore::EReference();
    m_EClass__eAllStructuralFeatures->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EALLSTRUCTURALFEATURES);
    m_EClassEClass->getEStructuralFeatures().push_back(
            m_EClass__eAllStructuralFeatures);
    m_EClass__eAllSuperTypes = new ::ecore::EReference();
    m_EClass__eAllSuperTypes->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EALLSUPERTYPES);
    m_EClassEClass->getEStructuralFeatures().push_back(m_EClass__eAllSuperTypes);
    m_EClass__eIDAttribute = new ::ecore::EReference();
    m_EClass__eIDAttribute->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EIDATTRIBUTE);
    m_EClassEClass->getEStructuralFeatures().push_back(m_EClass__eIDAttribute);
    m_EClass__eStructuralFeatures = new ::ecore::EReference();
    m_EClass__eStructuralFeatures->setFeatureID(
            ::ecore::EcorePackage::ECLASS__ESTRUCTURALFEATURES);
    m_EClassEClass->getEStructuralFeatures().push_back(
            m_EClass__eStructuralFeatures);
    m_EClass__eGenericSuperTypes = new ::ecore::EReference();
    m_EClass__eGenericSuperTypes->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EGENERICSUPERTYPES);
    m_EClassEClass->getEStructuralFeatures().push_back(
            m_EClass__eGenericSuperTypes);
    m_EClass__eAllGenericSuperTypes = new ::ecore::EReference();
    m_EClass__eAllGenericSuperTypes->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EALLGENERICSUPERTYPES);
    m_EClassEClass->getEStructuralFeatures().push_back(
            m_EClass__eAllGenericSuperTypes);

    // EClassifier
    m_EClassifierEClass = new ::ecore::EClass();
    m_EClassifierEClass->setClassifierID(ECLASSIFIER);
    m_EClassifierEClass->setEPackage(this);
    getEClassifiers().push_back(m_EClassifierEClass);
    m_EClassifier__instanceClassName = new ::ecore::EAttribute();
    m_EClassifier__instanceClassName->setFeatureID(
            ::ecore::EcorePackage::ECLASSIFIER__INSTANCECLASSNAME);
    m_EClassifierEClass->getEStructuralFeatures().push_back(
            m_EClassifier__instanceClassName);
    m_EClassifier__instanceClass = new ::ecore::EAttribute();
    m_EClassifier__instanceClass->setFeatureID(
            ::ecore::EcorePackage::ECLASSIFIER__INSTANCECLASS);
    m_EClassifierEClass->getEStructuralFeatures().push_back(
            m_EClassifier__instanceClass);
    m_EClassifier__defaultValue = new ::ecore::EAttribute();
    m_EClassifier__defaultValue->setFeatureID(
            ::ecore::EcorePackage::ECLASSIFIER__DEFAULTVALUE);
    m_EClassifierEClass->getEStructuralFeatures().push_back(
            m_EClassifier__defaultValue);
    m_EClassifier__instanceTypeName = new ::ecore::EAttribute();
    m_EClassifier__instanceTypeName->setFeatureID(
            ::ecore::EcorePackage::ECLASSIFIER__INSTANCETYPENAME);
    m_EClassifierEClass->getEStructuralFeatures().push_back(
            m_EClassifier__instanceTypeName);
    m_EClassifier__ePackage = new ::ecore::EReference();
    m_EClassifier__ePackage->setFeatureID(
            ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE);
    m_EClassifierEClass->getEStructuralFeatures().push_back(
            m_EClassifier__ePackage);
    m_EClassifier__eTypeParameters = new ::ecore::EReference();
    m_EClassifier__eTypeParameters->setFeatureID(
            ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS);
    m_EClassifierEClass->getEStructuralFeatures().push_back(
            m_EClassifier__eTypeParameters);

    // EDataType
    m_EDataTypeEClass = new ::ecore::EClass();
    m_EDataTypeEClass->setClassifierID(EDATATYPE);
    m_EDataTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_EDataTypeEClass);
    m_EDataType__serializable = new ::ecore::EAttribute();
    m_EDataType__serializable->setFeatureID(
            ::ecore::EcorePackage::EDATATYPE__SERIALIZABLE);
    m_EDataTypeEClass->getEStructuralFeatures().push_back(
            m_EDataType__serializable);

    // EEnum
    m_EEnumEClass = new ::ecore::EClass();
    m_EEnumEClass->setClassifierID(EENUM);
    m_EEnumEClass->setEPackage(this);
    getEClassifiers().push_back(m_EEnumEClass);
    m_EEnum__eLiterals = new ::ecore::EReference();
    m_EEnum__eLiterals->setFeatureID(::ecore::EcorePackage::EENUM__ELITERALS);
    m_EEnumEClass->getEStructuralFeatures().push_back(m_EEnum__eLiterals);

    // EEnumLiteral
    m_EEnumLiteralEClass = new ::ecore::EClass();
    m_EEnumLiteralEClass->setClassifierID(EENUMLITERAL);
    m_EEnumLiteralEClass->setEPackage(this);
    getEClassifiers().push_back(m_EEnumLiteralEClass);
    m_EEnumLiteral__value = new ::ecore::EAttribute();
    m_EEnumLiteral__value->setFeatureID(
            ::ecore::EcorePackage::EENUMLITERAL__VALUE);
    m_EEnumLiteralEClass->getEStructuralFeatures().push_back(
            m_EEnumLiteral__value);
    m_EEnumLiteral__instance = new ::ecore::EAttribute();
    m_EEnumLiteral__instance->setFeatureID(
            ::ecore::EcorePackage::EENUMLITERAL__INSTANCE);
    m_EEnumLiteralEClass->getEStructuralFeatures().push_back(
            m_EEnumLiteral__instance);
    m_EEnumLiteral__literal = new ::ecore::EAttribute();
    m_EEnumLiteral__literal->setFeatureID(
            ::ecore::EcorePackage::EENUMLITERAL__LITERAL);
    m_EEnumLiteralEClass->getEStructuralFeatures().push_back(
            m_EEnumLiteral__literal);
    m_EEnumLiteral__eEnum = new ::ecore::EReference();
    m_EEnumLiteral__eEnum->setFeatureID(
            ::ecore::EcorePackage::EENUMLITERAL__EENUM);
    m_EEnumLiteralEClass->getEStructuralFeatures().push_back(
            m_EEnumLiteral__eEnum);

    // EFactory
    m_EFactoryEClass = new ::ecore::EClass();
    m_EFactoryEClass->setClassifierID(EFACTORY);
    m_EFactoryEClass->setEPackage(this);
    getEClassifiers().push_back(m_EFactoryEClass);
    m_EFactory__ePackage = new ::ecore::EReference();
    m_EFactory__ePackage->setFeatureID(
            ::ecore::EcorePackage::EFACTORY__EPACKAGE);
    m_EFactoryEClass->getEStructuralFeatures().push_back(m_EFactory__ePackage);

    // EModelElement
    m_EModelElementEClass = new ::ecore::EClass();
    m_EModelElementEClass->setClassifierID(EMODELELEMENT);
    m_EModelElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_EModelElementEClass);
    m_EModelElement__eAnnotations = new ::ecore::EReference();
    m_EModelElement__eAnnotations->setFeatureID(
            ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS);
    m_EModelElementEClass->getEStructuralFeatures().push_back(
            m_EModelElement__eAnnotations);

    // ENamedElement
    m_ENamedElementEClass = new ::ecore::EClass();
    m_ENamedElementEClass->setClassifierID(ENAMEDELEMENT);
    m_ENamedElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_ENamedElementEClass);
    m_ENamedElement__name = new ::ecore::EAttribute();
    m_ENamedElement__name->setFeatureID(
            ::ecore::EcorePackage::ENAMEDELEMENT__NAME);
    m_ENamedElementEClass->getEStructuralFeatures().push_back(
            m_ENamedElement__name);

    // EObject
    m_EObjectEClass = new ::ecore::EClass();
    m_EObjectEClass->setClassifierID(EOBJECT);
    m_EObjectEClass->setEPackage(this);
    getEClassifiers().push_back(m_EObjectEClass);

    // EOperation
    m_EOperationEClass = new ::ecore::EClass();
    m_EOperationEClass->setClassifierID(EOPERATION);
    m_EOperationEClass->setEPackage(this);
    getEClassifiers().push_back(m_EOperationEClass);
    m_EOperation__eContainingClass = new ::ecore::EReference();
    m_EOperation__eContainingClass->setFeatureID(
            ::ecore::EcorePackage::EOPERATION__ECONTAININGCLASS);
    m_EOperationEClass->getEStructuralFeatures().push_back(
            m_EOperation__eContainingClass);
    m_EOperation__eTypeParameters = new ::ecore::EReference();
    m_EOperation__eTypeParameters->setFeatureID(
            ::ecore::EcorePackage::EOPERATION__ETYPEPARAMETERS);
    m_EOperationEClass->getEStructuralFeatures().push_back(
            m_EOperation__eTypeParameters);
    m_EOperation__eParameters = new ::ecore::EReference();
    m_EOperation__eParameters->setFeatureID(
            ::ecore::EcorePackage::EOPERATION__EPARAMETERS);
    m_EOperationEClass->getEStructuralFeatures().push_back(
            m_EOperation__eParameters);
    m_EOperation__eExceptions = new ::ecore::EReference();
    m_EOperation__eExceptions->setFeatureID(
            ::ecore::EcorePackage::EOPERATION__EEXCEPTIONS);
    m_EOperationEClass->getEStructuralFeatures().push_back(
            m_EOperation__eExceptions);
    m_EOperation__eGenericExceptions = new ::ecore::EReference();
    m_EOperation__eGenericExceptions->setFeatureID(
            ::ecore::EcorePackage::EOPERATION__EGENERICEXCEPTIONS);
    m_EOperationEClass->getEStructuralFeatures().push_back(
            m_EOperation__eGenericExceptions);

    // EPackage
    m_EPackageEClass = new ::ecore::EClass();
    m_EPackageEClass->setClassifierID(EPACKAGE);
    m_EPackageEClass->setEPackage(this);
    getEClassifiers().push_back(m_EPackageEClass);
    m_EPackage__nsURI = new ::ecore::EAttribute();
    m_EPackage__nsURI->setFeatureID(::ecore::EcorePackage::EPACKAGE__NSURI);
    m_EPackageEClass->getEStructuralFeatures().push_back(m_EPackage__nsURI);
    m_EPackage__nsPrefix = new ::ecore::EAttribute();
    m_EPackage__nsPrefix->setFeatureID(
            ::ecore::EcorePackage::EPACKAGE__NSPREFIX);
    m_EPackageEClass->getEStructuralFeatures().push_back(m_EPackage__nsPrefix);
    m_EPackage__eFactoryInstance = new ::ecore::EReference();
    m_EPackage__eFactoryInstance->setFeatureID(
            ::ecore::EcorePackage::EPACKAGE__EFACTORYINSTANCE);
    m_EPackageEClass->getEStructuralFeatures().push_back(
            m_EPackage__eFactoryInstance);
    m_EPackage__eClassifiers = new ::ecore::EReference();
    m_EPackage__eClassifiers->setFeatureID(
            ::ecore::EcorePackage::EPACKAGE__ECLASSIFIERS);
    m_EPackageEClass->getEStructuralFeatures().push_back(
            m_EPackage__eClassifiers);
    m_EPackage__eSubpackages = new ::ecore::EReference();
    m_EPackage__eSubpackages->setFeatureID(
            ::ecore::EcorePackage::EPACKAGE__ESUBPACKAGES);
    m_EPackageEClass->getEStructuralFeatures().push_back(
            m_EPackage__eSubpackages);
    m_EPackage__eSuperPackage = new ::ecore::EReference();
    m_EPackage__eSuperPackage->setFeatureID(
            ::ecore::EcorePackage::EPACKAGE__ESUPERPACKAGE);
    m_EPackageEClass->getEStructuralFeatures().push_back(
            m_EPackage__eSuperPackage);

    // EParameter
    m_EParameterEClass = new ::ecore::EClass();
    m_EParameterEClass->setClassifierID(EPARAMETER);
    m_EParameterEClass->setEPackage(this);
    getEClassifiers().push_back(m_EParameterEClass);
    m_EParameter__eOperation = new ::ecore::EReference();
    m_EParameter__eOperation->setFeatureID(
            ::ecore::EcorePackage::EPARAMETER__EOPERATION);
    m_EParameterEClass->getEStructuralFeatures().push_back(
            m_EParameter__eOperation);

    // EReference
    m_EReferenceEClass = new ::ecore::EClass();
    m_EReferenceEClass->setClassifierID(EREFERENCE);
    m_EReferenceEClass->setEPackage(this);
    getEClassifiers().push_back(m_EReferenceEClass);
    m_EReference__containment = new ::ecore::EAttribute();
    m_EReference__containment->setFeatureID(
            ::ecore::EcorePackage::EREFERENCE__CONTAINMENT);
    m_EReferenceEClass->getEStructuralFeatures().push_back(
            m_EReference__containment);
    m_EReference__container = new ::ecore::EAttribute();
    m_EReference__container->setFeatureID(
            ::ecore::EcorePackage::EREFERENCE__CONTAINER);
    m_EReferenceEClass->getEStructuralFeatures().push_back(
            m_EReference__container);
    m_EReference__resolveProxies = new ::ecore::EAttribute();
    m_EReference__resolveProxies->setFeatureID(
            ::ecore::EcorePackage::EREFERENCE__RESOLVEPROXIES);
    m_EReferenceEClass->getEStructuralFeatures().push_back(
            m_EReference__resolveProxies);
    m_EReference__eOpposite = new ::ecore::EReference();
    m_EReference__eOpposite->setFeatureID(
            ::ecore::EcorePackage::EREFERENCE__EOPPOSITE);
    m_EReferenceEClass->getEStructuralFeatures().push_back(
            m_EReference__eOpposite);
    m_EReference__eReferenceType = new ::ecore::EReference();
    m_EReference__eReferenceType->setFeatureID(
            ::ecore::EcorePackage::EREFERENCE__EREFERENCETYPE);
    m_EReferenceEClass->getEStructuralFeatures().push_back(
            m_EReference__eReferenceType);
    m_EReference__eKeys = new ::ecore::EReference();
    m_EReference__eKeys->setFeatureID(::ecore::EcorePackage::EREFERENCE__EKEYS);
    m_EReferenceEClass->getEStructuralFeatures().push_back(m_EReference__eKeys);

    // EStructuralFeature
    m_EStructuralFeatureEClass = new ::ecore::EClass();
    m_EStructuralFeatureEClass->setClassifierID(ESTRUCTURALFEATURE);
    m_EStructuralFeatureEClass->setEPackage(this);
    getEClassifiers().push_back(m_EStructuralFeatureEClass);
    m_EStructuralFeature__changeable = new ::ecore::EAttribute();
    m_EStructuralFeature__changeable->setFeatureID(
            ::ecore::EcorePackage::ESTRUCTURALFEATURE__CHANGEABLE);
    m_EStructuralFeatureEClass->getEStructuralFeatures().push_back(
            m_EStructuralFeature__changeable);
    m_EStructuralFeature__volatile = new ::ecore::EAttribute();
    m_EStructuralFeature__volatile->setFeatureID(
            ::ecore::EcorePackage::ESTRUCTURALFEATURE__VOLATILE);
    m_EStructuralFeatureEClass->getEStructuralFeatures().push_back(
            m_EStructuralFeature__volatile);
    m_EStructuralFeature__transient = new ::ecore::EAttribute();
    m_EStructuralFeature__transient->setFeatureID(
            ::ecore::EcorePackage::ESTRUCTURALFEATURE__TRANSIENT);
    m_EStructuralFeatureEClass->getEStructuralFeatures().push_back(
            m_EStructuralFeature__transient);
    m_EStructuralFeature__defaultValueLiteral = new ::ecore::EAttribute();
    m_EStructuralFeature__defaultValueLiteral->setFeatureID(
            ::ecore::EcorePackage::ESTRUCTURALFEATURE__DEFAULTVALUELITERAL);
    m_EStructuralFeatureEClass->getEStructuralFeatures().push_back(
            m_EStructuralFeature__defaultValueLiteral);
    m_EStructuralFeature__defaultValue = new ::ecore::EAttribute();
    m_EStructuralFeature__defaultValue->setFeatureID(
            ::ecore::EcorePackage::ESTRUCTURALFEATURE__DEFAULTVALUE);
    m_EStructuralFeatureEClass->getEStructuralFeatures().push_back(
            m_EStructuralFeature__defaultValue);
    m_EStructuralFeature__unsettable = new ::ecore::EAttribute();
    m_EStructuralFeature__unsettable->setFeatureID(
            ::ecore::EcorePackage::ESTRUCTURALFEATURE__UNSETTABLE);
    m_EStructuralFeatureEClass->getEStructuralFeatures().push_back(
            m_EStructuralFeature__unsettable);
    m_EStructuralFeature__derived = new ::ecore::EAttribute();
    m_EStructuralFeature__derived->setFeatureID(
            ::ecore::EcorePackage::ESTRUCTURALFEATURE__DERIVED);
    m_EStructuralFeatureEClass->getEStructuralFeatures().push_back(
            m_EStructuralFeature__derived);
    m_EStructuralFeature__eContainingClass = new ::ecore::EReference();
    m_EStructuralFeature__eContainingClass->setFeatureID(
            ::ecore::EcorePackage::ESTRUCTURALFEATURE__ECONTAININGCLASS);
    m_EStructuralFeatureEClass->getEStructuralFeatures().push_back(
            m_EStructuralFeature__eContainingClass);

    // ETypedElement
    m_ETypedElementEClass = new ::ecore::EClass();
    m_ETypedElementEClass->setClassifierID(ETYPEDELEMENT);
    m_ETypedElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_ETypedElementEClass);
    m_ETypedElement__ordered = new ::ecore::EAttribute();
    m_ETypedElement__ordered->setFeatureID(
            ::ecore::EcorePackage::ETYPEDELEMENT__ORDERED);
    m_ETypedElementEClass->getEStructuralFeatures().push_back(
            m_ETypedElement__ordered);
    m_ETypedElement__unique = new ::ecore::EAttribute();
    m_ETypedElement__unique->setFeatureID(
            ::ecore::EcorePackage::ETYPEDELEMENT__UNIQUE);
    m_ETypedElementEClass->getEStructuralFeatures().push_back(
            m_ETypedElement__unique);
    m_ETypedElement__lowerBound = new ::ecore::EAttribute();
    m_ETypedElement__lowerBound->setFeatureID(
            ::ecore::EcorePackage::ETYPEDELEMENT__LOWERBOUND);
    m_ETypedElementEClass->getEStructuralFeatures().push_back(
            m_ETypedElement__lowerBound);
    m_ETypedElement__upperBound = new ::ecore::EAttribute();
    m_ETypedElement__upperBound->setFeatureID(
            ::ecore::EcorePackage::ETYPEDELEMENT__UPPERBOUND);
    m_ETypedElementEClass->getEStructuralFeatures().push_back(
            m_ETypedElement__upperBound);
    m_ETypedElement__many = new ::ecore::EAttribute();
    m_ETypedElement__many->setFeatureID(
            ::ecore::EcorePackage::ETYPEDELEMENT__MANY);
    m_ETypedElementEClass->getEStructuralFeatures().push_back(
            m_ETypedElement__many);
    m_ETypedElement__required = new ::ecore::EAttribute();
    m_ETypedElement__required->setFeatureID(
            ::ecore::EcorePackage::ETYPEDELEMENT__REQUIRED);
    m_ETypedElementEClass->getEStructuralFeatures().push_back(
            m_ETypedElement__required);
    m_ETypedElement__eType = new ::ecore::EReference();
    m_ETypedElement__eType->setFeatureID(
            ::ecore::EcorePackage::ETYPEDELEMENT__ETYPE);
    m_ETypedElementEClass->getEStructuralFeatures().push_back(
            m_ETypedElement__eType);
    m_ETypedElement__eGenericType = new ::ecore::EReference();
    m_ETypedElement__eGenericType->setFeatureID(
            ::ecore::EcorePackage::ETYPEDELEMENT__EGENERICTYPE);
    m_ETypedElementEClass->getEStructuralFeatures().push_back(
            m_ETypedElement__eGenericType);

    // EStringToStringMapEntry
    m_EStringToStringMapEntryEClass = new ::ecore::EClass();
    m_EStringToStringMapEntryEClass->setClassifierID(ESTRINGTOSTRINGMAPENTRY);
    m_EStringToStringMapEntryEClass->setEPackage(this);
    getEClassifiers().push_back(m_EStringToStringMapEntryEClass);
    m_EStringToStringMapEntry__key = new ::ecore::EAttribute();
    m_EStringToStringMapEntry__key->setFeatureID(
            ::ecore::EcorePackage::ESTRINGTOSTRINGMAPENTRY__KEY);
    m_EStringToStringMapEntryEClass->getEStructuralFeatures().push_back(
            m_EStringToStringMapEntry__key);
    m_EStringToStringMapEntry__value = new ::ecore::EAttribute();
    m_EStringToStringMapEntry__value->setFeatureID(
            ::ecore::EcorePackage::ESTRINGTOSTRINGMAPENTRY__VALUE);
    m_EStringToStringMapEntryEClass->getEStructuralFeatures().push_back(
            m_EStringToStringMapEntry__value);

    // EGenericType
    m_EGenericTypeEClass = new ::ecore::EClass();
    m_EGenericTypeEClass->setClassifierID(EGENERICTYPE);
    m_EGenericTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_EGenericTypeEClass);
    m_EGenericType__eUpperBound = new ::ecore::EReference();
    m_EGenericType__eUpperBound->setFeatureID(
            ::ecore::EcorePackage::EGENERICTYPE__EUPPERBOUND);
    m_EGenericTypeEClass->getEStructuralFeatures().push_back(
            m_EGenericType__eUpperBound);
    m_EGenericType__eTypeArguments = new ::ecore::EReference();
    m_EGenericType__eTypeArguments->setFeatureID(
            ::ecore::EcorePackage::EGENERICTYPE__ETYPEARGUMENTS);
    m_EGenericTypeEClass->getEStructuralFeatures().push_back(
            m_EGenericType__eTypeArguments);
    m_EGenericType__eRawType = new ::ecore::EReference();
    m_EGenericType__eRawType->setFeatureID(
            ::ecore::EcorePackage::EGENERICTYPE__ERAWTYPE);
    m_EGenericTypeEClass->getEStructuralFeatures().push_back(
            m_EGenericType__eRawType);
    m_EGenericType__eLowerBound = new ::ecore::EReference();
    m_EGenericType__eLowerBound->setFeatureID(
            ::ecore::EcorePackage::EGENERICTYPE__ELOWERBOUND);
    m_EGenericTypeEClass->getEStructuralFeatures().push_back(
            m_EGenericType__eLowerBound);
    m_EGenericType__eTypeParameter = new ::ecore::EReference();
    m_EGenericType__eTypeParameter->setFeatureID(
            ::ecore::EcorePackage::EGENERICTYPE__ETYPEPARAMETER);
    m_EGenericTypeEClass->getEStructuralFeatures().push_back(
            m_EGenericType__eTypeParameter);
    m_EGenericType__eClassifier = new ::ecore::EReference();
    m_EGenericType__eClassifier->setFeatureID(
            ::ecore::EcorePackage::EGENERICTYPE__ECLASSIFIER);
    m_EGenericTypeEClass->getEStructuralFeatures().push_back(
            m_EGenericType__eClassifier);

    // ETypeParameter
    m_ETypeParameterEClass = new ::ecore::EClass();
    m_ETypeParameterEClass->setClassifierID(ETYPEPARAMETER);
    m_ETypeParameterEClass->setEPackage(this);
    getEClassifiers().push_back(m_ETypeParameterEClass);
    m_ETypeParameter__eBounds = new ::ecore::EReference();
    m_ETypeParameter__eBounds->setFeatureID(
            ::ecore::EcorePackage::ETYPEPARAMETER__EBOUNDS);
    m_ETypeParameterEClass->getEStructuralFeatures().push_back(
            m_ETypeParameter__eBounds);

    // Create enums


    // Create data types

    m_EBigDecimalEDataType = new ::ecore::EDataType();
    m_EBigDecimalEDataType->setClassifierID(EBIGDECIMAL);
    m_EBigDecimalEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EBigDecimalEDataType);

    m_EBigIntegerEDataType = new ::ecore::EDataType();
    m_EBigIntegerEDataType->setClassifierID(EBIGINTEGER);
    m_EBigIntegerEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EBigIntegerEDataType);

    m_EBooleanEDataType = new ::ecore::EDataType();
    m_EBooleanEDataType->setClassifierID(EBOOLEAN);
    m_EBooleanEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EBooleanEDataType);

    m_EBooleanObjectEDataType = new ::ecore::EDataType();
    m_EBooleanObjectEDataType->setClassifierID(EBOOLEANOBJECT);
    m_EBooleanObjectEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EBooleanObjectEDataType);

    m_EByteEDataType = new ::ecore::EDataType();
    m_EByteEDataType->setClassifierID(EBYTE);
    m_EByteEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EByteEDataType);

    m_EByteArrayEDataType = new ::ecore::EDataType();
    m_EByteArrayEDataType->setClassifierID(EBYTEARRAY);
    m_EByteArrayEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EByteArrayEDataType);

    m_EByteObjectEDataType = new ::ecore::EDataType();
    m_EByteObjectEDataType->setClassifierID(EBYTEOBJECT);
    m_EByteObjectEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EByteObjectEDataType);

    m_ECharEDataType = new ::ecore::EDataType();
    m_ECharEDataType->setClassifierID(ECHAR);
    m_ECharEDataType->setEPackage(this);
    getEClassifiers().push_back(m_ECharEDataType);

    m_ECharacterObjectEDataType = new ::ecore::EDataType();
    m_ECharacterObjectEDataType->setClassifierID(ECHARACTEROBJECT);
    m_ECharacterObjectEDataType->setEPackage(this);
    getEClassifiers().push_back(m_ECharacterObjectEDataType);

    m_EDateEDataType = new ::ecore::EDataType();
    m_EDateEDataType->setClassifierID(EDATE);
    m_EDateEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EDateEDataType);

    m_EDiagnosticChainEDataType = new ::ecore::EDataType();
    m_EDiagnosticChainEDataType->setClassifierID(EDIAGNOSTICCHAIN);
    m_EDiagnosticChainEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EDiagnosticChainEDataType);

    m_EDoubleEDataType = new ::ecore::EDataType();
    m_EDoubleEDataType->setClassifierID(EDOUBLE);
    m_EDoubleEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EDoubleEDataType);

    m_EDoubleObjectEDataType = new ::ecore::EDataType();
    m_EDoubleObjectEDataType->setClassifierID(EDOUBLEOBJECT);
    m_EDoubleObjectEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EDoubleObjectEDataType);

    m_EEListEDataType = new ::ecore::EDataType();
    m_EEListEDataType->setClassifierID(EELIST);
    m_EEListEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EEListEDataType);

    m_EEnumeratorEDataType = new ::ecore::EDataType();
    m_EEnumeratorEDataType->setClassifierID(EENUMERATOR);
    m_EEnumeratorEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EEnumeratorEDataType);

    m_EFeatureMapEDataType = new ::ecore::EDataType();
    m_EFeatureMapEDataType->setClassifierID(EFEATUREMAP);
    m_EFeatureMapEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EFeatureMapEDataType);

    m_EFeatureMapEntryEDataType = new ::ecore::EDataType();
    m_EFeatureMapEntryEDataType->setClassifierID(EFEATUREMAPENTRY);
    m_EFeatureMapEntryEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EFeatureMapEntryEDataType);

    m_EFloatEDataType = new ::ecore::EDataType();
    m_EFloatEDataType->setClassifierID(EFLOAT);
    m_EFloatEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EFloatEDataType);

    m_EFloatObjectEDataType = new ::ecore::EDataType();
    m_EFloatObjectEDataType->setClassifierID(EFLOATOBJECT);
    m_EFloatObjectEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EFloatObjectEDataType);

    m_EIntEDataType = new ::ecore::EDataType();
    m_EIntEDataType->setClassifierID(EINT);
    m_EIntEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EIntEDataType);

    m_EIntegerObjectEDataType = new ::ecore::EDataType();
    m_EIntegerObjectEDataType->setClassifierID(EINTEGEROBJECT);
    m_EIntegerObjectEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EIntegerObjectEDataType);

    m_EJavaClassEDataType = new ::ecore::EDataType();
    m_EJavaClassEDataType->setClassifierID(EJAVACLASS);
    m_EJavaClassEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EJavaClassEDataType);

    m_EJavaObjectEDataType = new ::ecore::EDataType();
    m_EJavaObjectEDataType->setClassifierID(EJAVAOBJECT);
    m_EJavaObjectEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EJavaObjectEDataType);

    m_ELongEDataType = new ::ecore::EDataType();
    m_ELongEDataType->setClassifierID(ELONG);
    m_ELongEDataType->setEPackage(this);
    getEClassifiers().push_back(m_ELongEDataType);

    m_ELongObjectEDataType = new ::ecore::EDataType();
    m_ELongObjectEDataType->setClassifierID(ELONGOBJECT);
    m_ELongObjectEDataType->setEPackage(this);
    getEClassifiers().push_back(m_ELongObjectEDataType);

    m_EMapEDataType = new ::ecore::EDataType();
    m_EMapEDataType->setClassifierID(EMAP);
    m_EMapEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EMapEDataType);

    m_EResourceEDataType = new ::ecore::EDataType();
    m_EResourceEDataType->setClassifierID(ERESOURCE);
    m_EResourceEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EResourceEDataType);

    m_EResourceSetEDataType = new ::ecore::EDataType();
    m_EResourceSetEDataType->setClassifierID(ERESOURCESET);
    m_EResourceSetEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EResourceSetEDataType);

    m_EShortEDataType = new ::ecore::EDataType();
    m_EShortEDataType->setClassifierID(ESHORT);
    m_EShortEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EShortEDataType);

    m_EShortObjectEDataType = new ::ecore::EDataType();
    m_EShortObjectEDataType->setClassifierID(ESHORTOBJECT);
    m_EShortObjectEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EShortObjectEDataType);

    m_EStringEDataType = new ::ecore::EDataType();
    m_EStringEDataType->setClassifierID(ESTRING);
    m_EStringEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EStringEDataType);

    m_ETreeIteratorEDataType = new ::ecore::EDataType();
    m_ETreeIteratorEDataType->setClassifierID(ETREEITERATOR);
    m_ETreeIteratorEDataType->setEPackage(this);
    getEClassifiers().push_back(m_ETreeIteratorEDataType);

    m_EInvocationTargetExceptionEDataType = new ::ecore::EDataType();
    m_EInvocationTargetExceptionEDataType->setClassifierID(
            EINVOCATIONTARGETEXCEPTION);
    m_EInvocationTargetExceptionEDataType->setEPackage(this);
    getEClassifiers().push_back(m_EInvocationTargetExceptionEDataType);

    // Initialize package
    setName("ecore");
    setNsPrefix("ecore");
    setNsURI("http://www.eclipse.org/emf/2002/Ecore");

    // Create type parameters
    {
        ::ecore::ETypeParameter_ptr _tp;

        _tp = new ::ecore::ETypeParameter();
        _tp->setName("E");
        m_EEListEDataType->getETypeParameters().push_back(_tp);

        _tp = new ::ecore::ETypeParameter();
        _tp->setName("T");
        m_EJavaClassEDataType->getETypeParameters().push_back(_tp);

        _tp = new ::ecore::ETypeParameter();
        _tp->setName("K");
        m_EMapEDataType->getETypeParameters().push_back(_tp);
        _tp = new ::ecore::ETypeParameter();
        _tp->setName("V");
        m_EMapEDataType->getETypeParameters().push_back(_tp);

        _tp = new ::ecore::ETypeParameter();
        _tp->setName("E");
        m_ETreeIteratorEDataType->getETypeParameters().push_back(_tp);
    }

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_EAttributeEClass->getESuperTypes().push_back(m_EStructuralFeatureEClass);
    m_EAnnotationEClass->getESuperTypes().push_back(m_EModelElementEClass);
    m_EClassEClass->getESuperTypes().push_back(m_EClassifierEClass);
    m_EClassifierEClass->getESuperTypes().push_back(m_ENamedElementEClass);
    m_EDataTypeEClass->getESuperTypes().push_back(m_EClassifierEClass);
    m_EEnumEClass->getESuperTypes().push_back(m_EDataTypeEClass);
    m_EEnumLiteralEClass->getESuperTypes().push_back(m_ENamedElementEClass);
    m_EFactoryEClass->getESuperTypes().push_back(m_EModelElementEClass);
    m_ENamedElementEClass->getESuperTypes().push_back(m_EModelElementEClass);
    m_EOperationEClass->getESuperTypes().push_back(m_ETypedElementEClass);
    m_EPackageEClass->getESuperTypes().push_back(m_ENamedElementEClass);
    m_EParameterEClass->getESuperTypes().push_back(m_ETypedElementEClass);
    m_EReferenceEClass->getESuperTypes().push_back(m_EStructuralFeatureEClass);
    m_EStructuralFeatureEClass->getESuperTypes().push_back(
            m_ETypedElementEClass);
    m_ETypedElementEClass->getESuperTypes().push_back(m_ENamedElementEClass);
    m_ETypeParameterEClass->getESuperTypes().push_back(m_ENamedElementEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // EAttribute
    m_EAttributeEClass->setName("EAttribute");
    m_EAttributeEClass->setAbstract(false);
    m_EAttributeEClass->setInterface(false);
    m_EAttribute__iD->setEType(m_EBooleanEDataType);
    m_EAttribute__iD->setName("iD");
    m_EAttribute__iD->setDefaultValueLiteral("");
    m_EAttribute__iD->setLowerBound(0);
    m_EAttribute__iD->setUpperBound(1);
    m_EAttribute__iD->setTransient(false);
    m_EAttribute__iD->setVolatile(false);
    m_EAttribute__iD->setChangeable(true);
    m_EAttribute__iD->setUnsettable(false);
    m_EAttribute__iD->setID(false);
    m_EAttribute__iD->setUnique(true);
    m_EAttribute__iD->setDerived(false);
    m_EAttribute__iD->setOrdered(true);
    m_EAttribute__eAttributeType->setEType(m_EDataTypeEClass);
    m_EAttribute__eAttributeType->setName("eAttributeType");
    m_EAttribute__eAttributeType->setDefaultValueLiteral("");
    m_EAttribute__eAttributeType->setLowerBound(1);
    m_EAttribute__eAttributeType->setUpperBound(1);
    m_EAttribute__eAttributeType->setTransient(true);
    m_EAttribute__eAttributeType->setVolatile(true);
    m_EAttribute__eAttributeType->setChangeable(false);
    m_EAttribute__eAttributeType->setContainment(false);
    m_EAttribute__eAttributeType->setResolveProxies(true);
    m_EAttribute__eAttributeType->setUnique(true);
    m_EAttribute__eAttributeType->setDerived(true);
    m_EAttribute__eAttributeType->setOrdered(true);
    // EAnnotation
    m_EAnnotationEClass->setName("EAnnotation");
    m_EAnnotationEClass->setAbstract(false);
    m_EAnnotationEClass->setInterface(false);
    m_EAnnotation__source->setEType(m_EStringEDataType);
    m_EAnnotation__source->setName("source");
    m_EAnnotation__source->setDefaultValueLiteral("");
    m_EAnnotation__source->setLowerBound(0);
    m_EAnnotation__source->setUpperBound(1);
    m_EAnnotation__source->setTransient(false);
    m_EAnnotation__source->setVolatile(false);
    m_EAnnotation__source->setChangeable(true);
    m_EAnnotation__source->setUnsettable(false);
    m_EAnnotation__source->setID(false);
    m_EAnnotation__source->setUnique(true);
    m_EAnnotation__source->setDerived(false);
    m_EAnnotation__source->setOrdered(true);
    m_EAnnotation__details->setEType(m_EStringToStringMapEntryEClass);
    m_EAnnotation__details->setName("details");
    m_EAnnotation__details->setDefaultValueLiteral("");
    m_EAnnotation__details->setLowerBound(0);
    m_EAnnotation__details->setUpperBound(-1);
    m_EAnnotation__details->setTransient(false);
    m_EAnnotation__details->setVolatile(false);
    m_EAnnotation__details->setChangeable(true);
    m_EAnnotation__details->setContainment(true);
    m_EAnnotation__details->setResolveProxies(false);
    m_EAnnotation__details->setUnique(true);
    m_EAnnotation__details->setDerived(false);
    m_EAnnotation__details->setOrdered(true);
    m_EAnnotation__eModelElement->setEType(m_EModelElementEClass);
    m_EAnnotation__eModelElement->setName("eModelElement");
    m_EAnnotation__eModelElement->setDefaultValueLiteral("");
    m_EAnnotation__eModelElement->setLowerBound(0);
    m_EAnnotation__eModelElement->setUpperBound(1);
    m_EAnnotation__eModelElement->setTransient(true);
    m_EAnnotation__eModelElement->setVolatile(false);
    m_EAnnotation__eModelElement->setChangeable(true);
    m_EAnnotation__eModelElement->setContainment(false);
    m_EAnnotation__eModelElement->setResolveProxies(false);
    m_EAnnotation__eModelElement->setUnique(true);
    m_EAnnotation__eModelElement->setDerived(false);
    m_EAnnotation__eModelElement->setOrdered(true);
    m_EAnnotation__eModelElement->setEOpposite(
            ::ecore::instanceOf< ::ecore::EReference >(
                    m_EModelElementEClass->getEStructuralFeatures()[0]));
    m_EAnnotation__contents->setEType(m_EObjectEClass);
    m_EAnnotation__contents->setName("contents");
    m_EAnnotation__contents->setDefaultValueLiteral("");
    m_EAnnotation__contents->setLowerBound(0);
    m_EAnnotation__contents->setUpperBound(-1);
    m_EAnnotation__contents->setTransient(false);
    m_EAnnotation__contents->setVolatile(false);
    m_EAnnotation__contents->setChangeable(true);
    m_EAnnotation__contents->setContainment(true);
    m_EAnnotation__contents->setResolveProxies(false);
    m_EAnnotation__contents->setUnique(true);
    m_EAnnotation__contents->setDerived(false);
    m_EAnnotation__contents->setOrdered(true);
    m_EAnnotation__references->setEType(m_EObjectEClass);
    m_EAnnotation__references->setName("references");
    m_EAnnotation__references->setDefaultValueLiteral("");
    m_EAnnotation__references->setLowerBound(0);
    m_EAnnotation__references->setUpperBound(-1);
    m_EAnnotation__references->setTransient(false);
    m_EAnnotation__references->setVolatile(false);
    m_EAnnotation__references->setChangeable(true);
    m_EAnnotation__references->setContainment(false);
    m_EAnnotation__references->setResolveProxies(true);
    m_EAnnotation__references->setUnique(true);
    m_EAnnotation__references->setDerived(false);
    m_EAnnotation__references->setOrdered(true);
    // EClass
    m_EClassEClass->setName("EClass");
    m_EClassEClass->setAbstract(false);
    m_EClassEClass->setInterface(false);
    m_EClass__abstract->setEType(m_EBooleanEDataType);
    m_EClass__abstract->setName("abstract");
    m_EClass__abstract->setDefaultValueLiteral("");
    m_EClass__abstract->setLowerBound(0);
    m_EClass__abstract->setUpperBound(1);
    m_EClass__abstract->setTransient(false);
    m_EClass__abstract->setVolatile(false);
    m_EClass__abstract->setChangeable(true);
    m_EClass__abstract->setUnsettable(false);
    m_EClass__abstract->setID(false);
    m_EClass__abstract->setUnique(true);
    m_EClass__abstract->setDerived(false);
    m_EClass__abstract->setOrdered(true);
    m_EClass__interface->setEType(m_EBooleanEDataType);
    m_EClass__interface->setName("interface");
    m_EClass__interface->setDefaultValueLiteral("");
    m_EClass__interface->setLowerBound(0);
    m_EClass__interface->setUpperBound(1);
    m_EClass__interface->setTransient(false);
    m_EClass__interface->setVolatile(false);
    m_EClass__interface->setChangeable(true);
    m_EClass__interface->setUnsettable(false);
    m_EClass__interface->setID(false);
    m_EClass__interface->setUnique(true);
    m_EClass__interface->setDerived(false);
    m_EClass__interface->setOrdered(true);
    m_EClass__eSuperTypes->setEType(m_EClassEClass);
    m_EClass__eSuperTypes->setName("eSuperTypes");
    m_EClass__eSuperTypes->setDefaultValueLiteral("");
    m_EClass__eSuperTypes->setLowerBound(0);
    m_EClass__eSuperTypes->setUpperBound(-1);
    m_EClass__eSuperTypes->setTransient(false);
    m_EClass__eSuperTypes->setVolatile(false);
    m_EClass__eSuperTypes->setChangeable(true);
    m_EClass__eSuperTypes->setContainment(false);
    m_EClass__eSuperTypes->setResolveProxies(true);
    m_EClass__eSuperTypes->setUnique(true);
    m_EClass__eSuperTypes->setDerived(false);
    m_EClass__eSuperTypes->setOrdered(true);
    m_EClass__eOperations->setEType(m_EOperationEClass);
    m_EClass__eOperations->setName("eOperations");
    m_EClass__eOperations->setDefaultValueLiteral("");
    m_EClass__eOperations->setLowerBound(0);
    m_EClass__eOperations->setUpperBound(-1);
    m_EClass__eOperations->setTransient(false);
    m_EClass__eOperations->setVolatile(false);
    m_EClass__eOperations->setChangeable(true);
    m_EClass__eOperations->setContainment(true);
    m_EClass__eOperations->setResolveProxies(false);
    m_EClass__eOperations->setUnique(true);
    m_EClass__eOperations->setDerived(false);
    m_EClass__eOperations->setOrdered(true);
    m_EClass__eOperations->setEOpposite(
            ::ecore::instanceOf< ::ecore::EReference >(
                    m_EOperationEClass->getEStructuralFeatures()[0]));
    m_EClass__eAllAttributes->setEType(m_EAttributeEClass);
    m_EClass__eAllAttributes->setName("eAllAttributes");
    m_EClass__eAllAttributes->setDefaultValueLiteral("");
    m_EClass__eAllAttributes->setLowerBound(0);
    m_EClass__eAllAttributes->setUpperBound(-1);
    m_EClass__eAllAttributes->setTransient(true);
    m_EClass__eAllAttributes->setVolatile(true);
    m_EClass__eAllAttributes->setChangeable(false);
    m_EClass__eAllAttributes->setContainment(false);
    m_EClass__eAllAttributes->setResolveProxies(true);
    m_EClass__eAllAttributes->setUnique(true);
    m_EClass__eAllAttributes->setDerived(true);
    m_EClass__eAllAttributes->setOrdered(true);
    m_EClass__eAllReferences->setEType(m_EReferenceEClass);
    m_EClass__eAllReferences->setName("eAllReferences");
    m_EClass__eAllReferences->setDefaultValueLiteral("");
    m_EClass__eAllReferences->setLowerBound(0);
    m_EClass__eAllReferences->setUpperBound(-1);
    m_EClass__eAllReferences->setTransient(true);
    m_EClass__eAllReferences->setVolatile(true);
    m_EClass__eAllReferences->setChangeable(false);
    m_EClass__eAllReferences->setContainment(false);
    m_EClass__eAllReferences->setResolveProxies(true);
    m_EClass__eAllReferences->setUnique(true);
    m_EClass__eAllReferences->setDerived(true);
    m_EClass__eAllReferences->setOrdered(true);
    m_EClass__eReferences->setEType(m_EReferenceEClass);
    m_EClass__eReferences->setName("eReferences");
    m_EClass__eReferences->setDefaultValueLiteral("");
    m_EClass__eReferences->setLowerBound(0);
    m_EClass__eReferences->setUpperBound(-1);
    m_EClass__eReferences->setTransient(true);
    m_EClass__eReferences->setVolatile(true);
    m_EClass__eReferences->setChangeable(false);
    m_EClass__eReferences->setContainment(false);
    m_EClass__eReferences->setResolveProxies(true);
    m_EClass__eReferences->setUnique(true);
    m_EClass__eReferences->setDerived(true);
    m_EClass__eReferences->setOrdered(true);
    m_EClass__eAttributes->setEType(m_EAttributeEClass);
    m_EClass__eAttributes->setName("eAttributes");
    m_EClass__eAttributes->setDefaultValueLiteral("");
    m_EClass__eAttributes->setLowerBound(0);
    m_EClass__eAttributes->setUpperBound(-1);
    m_EClass__eAttributes->setTransient(true);
    m_EClass__eAttributes->setVolatile(true);
    m_EClass__eAttributes->setChangeable(false);
    m_EClass__eAttributes->setContainment(false);
    m_EClass__eAttributes->setResolveProxies(true);
    m_EClass__eAttributes->setUnique(true);
    m_EClass__eAttributes->setDerived(true);
    m_EClass__eAttributes->setOrdered(true);
    m_EClass__eAllContainments->setEType(m_EReferenceEClass);
    m_EClass__eAllContainments->setName("eAllContainments");
    m_EClass__eAllContainments->setDefaultValueLiteral("");
    m_EClass__eAllContainments->setLowerBound(0);
    m_EClass__eAllContainments->setUpperBound(-1);
    m_EClass__eAllContainments->setTransient(true);
    m_EClass__eAllContainments->setVolatile(true);
    m_EClass__eAllContainments->setChangeable(false);
    m_EClass__eAllContainments->setContainment(false);
    m_EClass__eAllContainments->setResolveProxies(true);
    m_EClass__eAllContainments->setUnique(true);
    m_EClass__eAllContainments->setDerived(true);
    m_EClass__eAllContainments->setOrdered(true);
    m_EClass__eAllOperations->setEType(m_EOperationEClass);
    m_EClass__eAllOperations->setName("eAllOperations");
    m_EClass__eAllOperations->setDefaultValueLiteral("");
    m_EClass__eAllOperations->setLowerBound(0);
    m_EClass__eAllOperations->setUpperBound(-1);
    m_EClass__eAllOperations->setTransient(true);
    m_EClass__eAllOperations->setVolatile(true);
    m_EClass__eAllOperations->setChangeable(false);
    m_EClass__eAllOperations->setContainment(false);
    m_EClass__eAllOperations->setResolveProxies(true);
    m_EClass__eAllOperations->setUnique(true);
    m_EClass__eAllOperations->setDerived(true);
    m_EClass__eAllOperations->setOrdered(true);
    m_EClass__eAllStructuralFeatures->setEType(m_EStructuralFeatureEClass);
    m_EClass__eAllStructuralFeatures->setName("eAllStructuralFeatures");
    m_EClass__eAllStructuralFeatures->setDefaultValueLiteral("");
    m_EClass__eAllStructuralFeatures->setLowerBound(0);
    m_EClass__eAllStructuralFeatures->setUpperBound(-1);
    m_EClass__eAllStructuralFeatures->setTransient(true);
    m_EClass__eAllStructuralFeatures->setVolatile(true);
    m_EClass__eAllStructuralFeatures->setChangeable(false);
    m_EClass__eAllStructuralFeatures->setContainment(false);
    m_EClass__eAllStructuralFeatures->setResolveProxies(true);
    m_EClass__eAllStructuralFeatures->setUnique(true);
    m_EClass__eAllStructuralFeatures->setDerived(true);
    m_EClass__eAllStructuralFeatures->setOrdered(true);
    m_EClass__eAllSuperTypes->setEType(m_EClassEClass);
    m_EClass__eAllSuperTypes->setName("eAllSuperTypes");
    m_EClass__eAllSuperTypes->setDefaultValueLiteral("");
    m_EClass__eAllSuperTypes->setLowerBound(0);
    m_EClass__eAllSuperTypes->setUpperBound(-1);
    m_EClass__eAllSuperTypes->setTransient(true);
    m_EClass__eAllSuperTypes->setVolatile(true);
    m_EClass__eAllSuperTypes->setChangeable(false);
    m_EClass__eAllSuperTypes->setContainment(false);
    m_EClass__eAllSuperTypes->setResolveProxies(true);
    m_EClass__eAllSuperTypes->setUnique(true);
    m_EClass__eAllSuperTypes->setDerived(true);
    m_EClass__eAllSuperTypes->setOrdered(true);
    m_EClass__eIDAttribute->setEType(m_EAttributeEClass);
    m_EClass__eIDAttribute->setName("eIDAttribute");
    m_EClass__eIDAttribute->setDefaultValueLiteral("");
    m_EClass__eIDAttribute->setLowerBound(0);
    m_EClass__eIDAttribute->setUpperBound(1);
    m_EClass__eIDAttribute->setTransient(true);
    m_EClass__eIDAttribute->setVolatile(true);
    m_EClass__eIDAttribute->setChangeable(false);
    m_EClass__eIDAttribute->setContainment(false);
    m_EClass__eIDAttribute->setResolveProxies(false);
    m_EClass__eIDAttribute->setUnique(true);
    m_EClass__eIDAttribute->setDerived(true);
    m_EClass__eIDAttribute->setOrdered(true);
    m_EClass__eStructuralFeatures->setEType(m_EStructuralFeatureEClass);
    m_EClass__eStructuralFeatures->setName("eStructuralFeatures");
    m_EClass__eStructuralFeatures->setDefaultValueLiteral("");
    m_EClass__eStructuralFeatures->setLowerBound(0);
    m_EClass__eStructuralFeatures->setUpperBound(-1);
    m_EClass__eStructuralFeatures->setTransient(false);
    m_EClass__eStructuralFeatures->setVolatile(false);
    m_EClass__eStructuralFeatures->setChangeable(true);
    m_EClass__eStructuralFeatures->setContainment(true);
    m_EClass__eStructuralFeatures->setResolveProxies(false);
    m_EClass__eStructuralFeatures->setUnique(true);
    m_EClass__eStructuralFeatures->setDerived(false);
    m_EClass__eStructuralFeatures->setOrdered(true);
    m_EClass__eStructuralFeatures->setEOpposite(
            ::ecore::instanceOf< ::ecore::EReference >(
                    m_EStructuralFeatureEClass->getEStructuralFeatures()[7]));
    m_EClass__eGenericSuperTypes->setEType(m_EGenericTypeEClass);
    m_EClass__eGenericSuperTypes->setName("eGenericSuperTypes");
    m_EClass__eGenericSuperTypes->setDefaultValueLiteral("");
    m_EClass__eGenericSuperTypes->setLowerBound(0);
    m_EClass__eGenericSuperTypes->setUpperBound(-1);
    m_EClass__eGenericSuperTypes->setTransient(false);
    m_EClass__eGenericSuperTypes->setVolatile(false);
    m_EClass__eGenericSuperTypes->setChangeable(true);
    m_EClass__eGenericSuperTypes->setContainment(true);
    m_EClass__eGenericSuperTypes->setResolveProxies(false);
    m_EClass__eGenericSuperTypes->setUnique(true);
    m_EClass__eGenericSuperTypes->setDerived(false);
    m_EClass__eGenericSuperTypes->setOrdered(true);
    m_EClass__eAllGenericSuperTypes->setEType(m_EGenericTypeEClass);
    m_EClass__eAllGenericSuperTypes->setName("eAllGenericSuperTypes");
    m_EClass__eAllGenericSuperTypes->setDefaultValueLiteral("");
    m_EClass__eAllGenericSuperTypes->setLowerBound(0);
    m_EClass__eAllGenericSuperTypes->setUpperBound(-1);
    m_EClass__eAllGenericSuperTypes->setTransient(true);
    m_EClass__eAllGenericSuperTypes->setVolatile(true);
    m_EClass__eAllGenericSuperTypes->setChangeable(false);
    m_EClass__eAllGenericSuperTypes->setContainment(false);
    m_EClass__eAllGenericSuperTypes->setResolveProxies(true);
    m_EClass__eAllGenericSuperTypes->setUnique(true);
    m_EClass__eAllGenericSuperTypes->setDerived(true);
    m_EClass__eAllGenericSuperTypes->setOrdered(true);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EBooleanEDataType);
    _op->setName("isSuperTypeOf");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EClassEClass);
    _pa->setName("someClass");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EClassEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EIntEDataType);
    _op->setName("getFeatureCount");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_EClassEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EStructuralFeatureEClass);
    _op->setName("getEStructuralFeature");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EIntEDataType);
    _pa->setName("featureID");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EClassEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EIntEDataType);
    _op->setName("getFeatureID");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EStructuralFeatureEClass);
    _pa->setName("feature");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EClassEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EStructuralFeatureEClass);
    _op->setName("getEStructuralFeature");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EStringEDataType);
    _pa->setName("featureName");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EClassEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EIntEDataType);
    _op->setName("getOperationCount");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_EClassEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EOperationEClass);
    _op->setName("getEOperation");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EIntEDataType);
    _pa->setName("operationID");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EClassEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EIntEDataType);
    _op->setName("getOperationID");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EOperationEClass);
    _pa->setName("operation");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EClassEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EOperationEClass);
    _op->setName("getOverride");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EOperationEClass);
    _pa->setName("operation");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EClassEClass->getEOperations().push_back(_op);
    // EClassifier
    m_EClassifierEClass->setName("EClassifier");
    m_EClassifierEClass->setAbstract(true);
    m_EClassifierEClass->setInterface(false);
    m_EClassifier__instanceClassName->setEType(m_EStringEDataType);
    m_EClassifier__instanceClassName->setName("instanceClassName");
    m_EClassifier__instanceClassName->setDefaultValueLiteral("");
    m_EClassifier__instanceClassName->setLowerBound(0);
    m_EClassifier__instanceClassName->setUpperBound(1);
    m_EClassifier__instanceClassName->setTransient(false);
    m_EClassifier__instanceClassName->setVolatile(true);
    m_EClassifier__instanceClassName->setChangeable(true);
    m_EClassifier__instanceClassName->setUnsettable(true);
    m_EClassifier__instanceClassName->setID(false);
    m_EClassifier__instanceClassName->setUnique(true);
    m_EClassifier__instanceClassName->setDerived(false);
    m_EClassifier__instanceClassName->setOrdered(true);
    m_EClassifier__instanceClass->setEType(m_EJavaClassEDataType);
    {
        ::ecore::EGenericType_ptr _g0 = new ::ecore::EGenericType();
        _g0->setEClassifier(m_EJavaClassEDataType);
        ::ecore::EGenericType_ptr _g1 = new ::ecore::EGenericType();
        _g0->getETypeArguments().push_back(_g1);
        m_EClassifier__instanceClass->setEGenericType(_g0);
    }
    m_EClassifier__instanceClass->setName("instanceClass");
    m_EClassifier__instanceClass->setDefaultValueLiteral("");
    m_EClassifier__instanceClass->setLowerBound(0);
    m_EClassifier__instanceClass->setUpperBound(1);
    m_EClassifier__instanceClass->setTransient(true);
    m_EClassifier__instanceClass->setVolatile(true);
    m_EClassifier__instanceClass->setChangeable(false);
    m_EClassifier__instanceClass->setUnsettable(false);
    m_EClassifier__instanceClass->setID(false);
    m_EClassifier__instanceClass->setUnique(true);
    m_EClassifier__instanceClass->setDerived(true);
    m_EClassifier__instanceClass->setOrdered(true);
    m_EClassifier__defaultValue->setEType(m_EJavaObjectEDataType);
    m_EClassifier__defaultValue->setName("defaultValue");
    m_EClassifier__defaultValue->setDefaultValueLiteral("");
    m_EClassifier__defaultValue->setLowerBound(0);
    m_EClassifier__defaultValue->setUpperBound(1);
    m_EClassifier__defaultValue->setTransient(true);
    m_EClassifier__defaultValue->setVolatile(true);
    m_EClassifier__defaultValue->setChangeable(false);
    m_EClassifier__defaultValue->setUnsettable(false);
    m_EClassifier__defaultValue->setID(false);
    m_EClassifier__defaultValue->setUnique(true);
    m_EClassifier__defaultValue->setDerived(true);
    m_EClassifier__defaultValue->setOrdered(true);
    m_EClassifier__instanceTypeName->setEType(m_EStringEDataType);
    m_EClassifier__instanceTypeName->setName("instanceTypeName");
    m_EClassifier__instanceTypeName->setDefaultValueLiteral("");
    m_EClassifier__instanceTypeName->setLowerBound(0);
    m_EClassifier__instanceTypeName->setUpperBound(1);
    m_EClassifier__instanceTypeName->setTransient(false);
    m_EClassifier__instanceTypeName->setVolatile(true);
    m_EClassifier__instanceTypeName->setChangeable(true);
    m_EClassifier__instanceTypeName->setUnsettable(true);
    m_EClassifier__instanceTypeName->setID(false);
    m_EClassifier__instanceTypeName->setUnique(true);
    m_EClassifier__instanceTypeName->setDerived(false);
    m_EClassifier__instanceTypeName->setOrdered(true);
    m_EClassifier__ePackage->setEType(m_EPackageEClass);
    m_EClassifier__ePackage->setName("ePackage");
    m_EClassifier__ePackage->setDefaultValueLiteral("");
    m_EClassifier__ePackage->setLowerBound(0);
    m_EClassifier__ePackage->setUpperBound(1);
    m_EClassifier__ePackage->setTransient(true);
    m_EClassifier__ePackage->setVolatile(false);
    m_EClassifier__ePackage->setChangeable(false);
    m_EClassifier__ePackage->setContainment(false);
    m_EClassifier__ePackage->setResolveProxies(true);
    m_EClassifier__ePackage->setUnique(true);
    m_EClassifier__ePackage->setDerived(false);
    m_EClassifier__ePackage->setOrdered(true);
    m_EClassifier__ePackage->setEOpposite(
            ::ecore::instanceOf< ::ecore::EReference >(
                    m_EPackageEClass->getEStructuralFeatures()[3]));
    m_EClassifier__eTypeParameters->setEType(m_ETypeParameterEClass);
    m_EClassifier__eTypeParameters->setName("eTypeParameters");
    m_EClassifier__eTypeParameters->setDefaultValueLiteral("");
    m_EClassifier__eTypeParameters->setLowerBound(0);
    m_EClassifier__eTypeParameters->setUpperBound(-1);
    m_EClassifier__eTypeParameters->setTransient(false);
    m_EClassifier__eTypeParameters->setVolatile(false);
    m_EClassifier__eTypeParameters->setChangeable(true);
    m_EClassifier__eTypeParameters->setContainment(true);
    m_EClassifier__eTypeParameters->setResolveProxies(true);
    m_EClassifier__eTypeParameters->setUnique(true);
    m_EClassifier__eTypeParameters->setDerived(false);
    m_EClassifier__eTypeParameters->setOrdered(true);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EBooleanEDataType);
    _op->setName("isInstance");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EJavaObjectEDataType);
    _pa->setName("object");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EClassifierEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EIntEDataType);
    _op->setName("getClassifierID");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_EClassifierEClass->getEOperations().push_back(_op);
    // EDataType
    m_EDataTypeEClass->setName("EDataType");
    m_EDataTypeEClass->setAbstract(false);
    m_EDataTypeEClass->setInterface(false);
    m_EDataType__serializable->setEType(m_EBooleanEDataType);
    m_EDataType__serializable->setName("serializable");
    m_EDataType__serializable->setDefaultValueLiteral("true");
    m_EDataType__serializable->setLowerBound(0);
    m_EDataType__serializable->setUpperBound(1);
    m_EDataType__serializable->setTransient(false);
    m_EDataType__serializable->setVolatile(false);
    m_EDataType__serializable->setChangeable(true);
    m_EDataType__serializable->setUnsettable(false);
    m_EDataType__serializable->setID(false);
    m_EDataType__serializable->setUnique(true);
    m_EDataType__serializable->setDerived(false);
    m_EDataType__serializable->setOrdered(true);
    // EEnum
    m_EEnumEClass->setName("EEnum");
    m_EEnumEClass->setAbstract(false);
    m_EEnumEClass->setInterface(false);
    m_EEnum__eLiterals->setEType(m_EEnumLiteralEClass);
    m_EEnum__eLiterals->setName("eLiterals");
    m_EEnum__eLiterals->setDefaultValueLiteral("");
    m_EEnum__eLiterals->setLowerBound(0);
    m_EEnum__eLiterals->setUpperBound(-1);
    m_EEnum__eLiterals->setTransient(false);
    m_EEnum__eLiterals->setVolatile(false);
    m_EEnum__eLiterals->setChangeable(true);
    m_EEnum__eLiterals->setContainment(true);
    m_EEnum__eLiterals->setResolveProxies(false);
    m_EEnum__eLiterals->setUnique(true);
    m_EEnum__eLiterals->setDerived(false);
    m_EEnum__eLiterals->setOrdered(true);
    m_EEnum__eLiterals->setEOpposite(
            ::ecore::instanceOf< ::ecore::EReference >(
                    m_EEnumLiteralEClass->getEStructuralFeatures()[3]));
    _op = new ::ecore::EOperation();
    _op->setEType(m_EEnumLiteralEClass);
    _op->setName("getEEnumLiteral");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EStringEDataType);
    _pa->setName("name");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EEnumEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EEnumLiteralEClass);
    _op->setName("getEEnumLiteral");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EIntEDataType);
    _pa->setName("value");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EEnumEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EEnumLiteralEClass);
    _op->setName("getEEnumLiteralByLiteral");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EStringEDataType);
    _pa->setName("literal");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EEnumEClass->getEOperations().push_back(_op);
    // EEnumLiteral
    m_EEnumLiteralEClass->setName("EEnumLiteral");
    m_EEnumLiteralEClass->setAbstract(false);
    m_EEnumLiteralEClass->setInterface(false);
    m_EEnumLiteral__value->setEType(m_EIntEDataType);
    m_EEnumLiteral__value->setName("value");
    m_EEnumLiteral__value->setDefaultValueLiteral("");
    m_EEnumLiteral__value->setLowerBound(0);
    m_EEnumLiteral__value->setUpperBound(1);
    m_EEnumLiteral__value->setTransient(false);
    m_EEnumLiteral__value->setVolatile(false);
    m_EEnumLiteral__value->setChangeable(true);
    m_EEnumLiteral__value->setUnsettable(false);
    m_EEnumLiteral__value->setID(false);
    m_EEnumLiteral__value->setUnique(true);
    m_EEnumLiteral__value->setDerived(false);
    m_EEnumLiteral__value->setOrdered(true);
    m_EEnumLiteral__instance->setEType(m_EEnumeratorEDataType);
    m_EEnumLiteral__instance->setName("instance");
    m_EEnumLiteral__instance->setDefaultValueLiteral("");
    m_EEnumLiteral__instance->setLowerBound(0);
    m_EEnumLiteral__instance->setUpperBound(1);
    m_EEnumLiteral__instance->setTransient(true);
    m_EEnumLiteral__instance->setVolatile(false);
    m_EEnumLiteral__instance->setChangeable(true);
    m_EEnumLiteral__instance->setUnsettable(false);
    m_EEnumLiteral__instance->setID(false);
    m_EEnumLiteral__instance->setUnique(true);
    m_EEnumLiteral__instance->setDerived(false);
    m_EEnumLiteral__instance->setOrdered(true);
    m_EEnumLiteral__literal->setEType(m_EStringEDataType);
    m_EEnumLiteral__literal->setName("literal");
    m_EEnumLiteral__literal->setDefaultValueLiteral("");
    m_EEnumLiteral__literal->setLowerBound(0);
    m_EEnumLiteral__literal->setUpperBound(1);
    m_EEnumLiteral__literal->setTransient(false);
    m_EEnumLiteral__literal->setVolatile(false);
    m_EEnumLiteral__literal->setChangeable(true);
    m_EEnumLiteral__literal->setUnsettable(false);
    m_EEnumLiteral__literal->setID(false);
    m_EEnumLiteral__literal->setUnique(true);
    m_EEnumLiteral__literal->setDerived(false);
    m_EEnumLiteral__literal->setOrdered(true);
    m_EEnumLiteral__eEnum->setEType(m_EEnumEClass);
    m_EEnumLiteral__eEnum->setName("eEnum");
    m_EEnumLiteral__eEnum->setDefaultValueLiteral("");
    m_EEnumLiteral__eEnum->setLowerBound(0);
    m_EEnumLiteral__eEnum->setUpperBound(1);
    m_EEnumLiteral__eEnum->setTransient(true);
    m_EEnumLiteral__eEnum->setVolatile(false);
    m_EEnumLiteral__eEnum->setChangeable(false);
    m_EEnumLiteral__eEnum->setContainment(false);
    m_EEnumLiteral__eEnum->setResolveProxies(false);
    m_EEnumLiteral__eEnum->setUnique(true);
    m_EEnumLiteral__eEnum->setDerived(false);
    m_EEnumLiteral__eEnum->setOrdered(true);
    m_EEnumLiteral__eEnum->setEOpposite(
            ::ecore::instanceOf< ::ecore::EReference >(
                    m_EEnumEClass->getEStructuralFeatures()[0]));
    // EFactory
    m_EFactoryEClass->setName("EFactory");
    m_EFactoryEClass->setAbstract(false);
    m_EFactoryEClass->setInterface(false);
    m_EFactory__ePackage->setEType(m_EPackageEClass);
    m_EFactory__ePackage->setName("ePackage");
    m_EFactory__ePackage->setDefaultValueLiteral("");
    m_EFactory__ePackage->setLowerBound(1);
    m_EFactory__ePackage->setUpperBound(1);
    m_EFactory__ePackage->setTransient(true);
    m_EFactory__ePackage->setVolatile(false);
    m_EFactory__ePackage->setChangeable(true);
    m_EFactory__ePackage->setContainment(false);
    m_EFactory__ePackage->setResolveProxies(false);
    m_EFactory__ePackage->setUnique(true);
    m_EFactory__ePackage->setDerived(false);
    m_EFactory__ePackage->setOrdered(true);
    m_EFactory__ePackage->setEOpposite(
            ::ecore::instanceOf< ::ecore::EReference >(
                    m_EPackageEClass->getEStructuralFeatures()[2]));
    _op = new ::ecore::EOperation();
    _op->setEType(m_EObjectEClass);
    _op->setName("create");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EClassEClass);
    _pa->setName("eClass");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EFactoryEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EJavaObjectEDataType);
    _op->setName("createFromString");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EDataTypeEClass);
    _pa->setName("eDataType");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EStringEDataType);
    _pa->setName("literalValue");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EFactoryEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EStringEDataType);
    _op->setName("convertToString");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EDataTypeEClass);
    _pa->setName("eDataType");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EJavaObjectEDataType);
    _pa->setName("instanceValue");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EFactoryEClass->getEOperations().push_back(_op);
    // EModelElement
    m_EModelElementEClass->setName("EModelElement");
    m_EModelElementEClass->setAbstract(true);
    m_EModelElementEClass->setInterface(false);
    m_EModelElement__eAnnotations->setEType(m_EAnnotationEClass);
    m_EModelElement__eAnnotations->setName("eAnnotations");
    m_EModelElement__eAnnotations->setDefaultValueLiteral("");
    m_EModelElement__eAnnotations->setLowerBound(0);
    m_EModelElement__eAnnotations->setUpperBound(-1);
    m_EModelElement__eAnnotations->setTransient(false);
    m_EModelElement__eAnnotations->setVolatile(false);
    m_EModelElement__eAnnotations->setChangeable(true);
    m_EModelElement__eAnnotations->setContainment(true);
    m_EModelElement__eAnnotations->setResolveProxies(false);
    m_EModelElement__eAnnotations->setUnique(true);
    m_EModelElement__eAnnotations->setDerived(false);
    m_EModelElement__eAnnotations->setOrdered(true);
    m_EModelElement__eAnnotations->setEOpposite(
            ::ecore::instanceOf< ::ecore::EReference >(
                    m_EAnnotationEClass->getEStructuralFeatures()[2]));
    _op = new ::ecore::EOperation();
    _op->setEType(m_EAnnotationEClass);
    _op->setName("getEAnnotation");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EStringEDataType);
    _pa->setName("source");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EModelElementEClass->getEOperations().push_back(_op);
    // ENamedElement
    m_ENamedElementEClass->setName("ENamedElement");
    m_ENamedElementEClass->setAbstract(true);
    m_ENamedElementEClass->setInterface(false);
    m_ENamedElement__name->setEType(m_EStringEDataType);
    m_ENamedElement__name->setName("name");
    m_ENamedElement__name->setDefaultValueLiteral("");
    m_ENamedElement__name->setLowerBound(0);
    m_ENamedElement__name->setUpperBound(1);
    m_ENamedElement__name->setTransient(false);
    m_ENamedElement__name->setVolatile(false);
    m_ENamedElement__name->setChangeable(true);
    m_ENamedElement__name->setUnsettable(false);
    m_ENamedElement__name->setID(false);
    m_ENamedElement__name->setUnique(true);
    m_ENamedElement__name->setDerived(false);
    m_ENamedElement__name->setOrdered(true);
    // EObject
    m_EObjectEClass->setName("EObject");
    m_EObjectEClass->setAbstract(false);
    m_EObjectEClass->setInterface(false);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EClassEClass);
    _op->setName("eClass");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_EObjectEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EBooleanEDataType);
    _op->setName("eIsProxy");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_EObjectEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EResourceEDataType);
    _op->setName("eResource");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_EObjectEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EObjectEClass);
    _op->setName("eContainer");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_EObjectEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EStructuralFeatureEClass);
    _op->setName("eContainingFeature");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_EObjectEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EReferenceEClass);
    _op->setName("eContainmentFeature");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_EObjectEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EEListEDataType);
    {
        ::ecore::EGenericType_ptr _g0 = new ::ecore::EGenericType();
        _g0->setEClassifier(m_EEListEDataType);
        ::ecore::EGenericType_ptr _g1 = new ::ecore::EGenericType();
        _g1->setEClassifier(m_EObjectEClass);
        _g0->getETypeArguments().push_back(_g1);
        _op->setEGenericType(_g0);
    }
    _op->setName("eContents");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_EObjectEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_ETreeIteratorEDataType);
    {
        ::ecore::EGenericType_ptr _g0 = new ::ecore::EGenericType();
        _g0->setEClassifier(m_ETreeIteratorEDataType);
        ::ecore::EGenericType_ptr _g1 = new ::ecore::EGenericType();
        _g1->setEClassifier(m_EObjectEClass);
        _g0->getETypeArguments().push_back(_g1);
        _op->setEGenericType(_g0);
    }
    _op->setName("eAllContents");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_EObjectEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EEListEDataType);
    {
        ::ecore::EGenericType_ptr _g0 = new ::ecore::EGenericType();
        _g0->setEClassifier(m_EEListEDataType);
        ::ecore::EGenericType_ptr _g1 = new ::ecore::EGenericType();
        _g1->setEClassifier(m_EObjectEClass);
        _g0->getETypeArguments().push_back(_g1);
        _op->setEGenericType(_g0);
    }
    _op->setName("eCrossReferences");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_EObjectEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EJavaObjectEDataType);
    _op->setName("eGet");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EStructuralFeatureEClass);
    _pa->setName("feature");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EObjectEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EJavaObjectEDataType);
    _op->setName("eGet");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EStructuralFeatureEClass);
    _pa->setName("feature");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EBooleanEDataType);
    _pa->setName("resolve");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EObjectEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setName("eSet");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EStructuralFeatureEClass);
    _pa->setName("feature");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EJavaObjectEDataType);
    _pa->setName("newValue");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EObjectEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EBooleanEDataType);
    _op->setName("eIsSet");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EStructuralFeatureEClass);
    _pa->setName("feature");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EObjectEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setName("eUnset");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EStructuralFeatureEClass);
    _pa->setName("feature");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EObjectEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EJavaObjectEDataType);
    _op->setName("eInvoke");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EOperationEClass);
    _pa->setName("operation");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EEListEDataType);
    {
        ::ecore::EGenericType_ptr _g0 = new ::ecore::EGenericType();
        _g0->setEClassifier(m_EEListEDataType);
        ::ecore::EGenericType_ptr _g1 = new ::ecore::EGenericType();
        _g0->getETypeArguments().push_back(_g1);
        _pa->setEGenericType(_g0);
    }
    _pa->setName("arguments");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EObjectEClass->getEOperations().push_back(_op);
    // EOperation
    m_EOperationEClass->setName("EOperation");
    m_EOperationEClass->setAbstract(false);
    m_EOperationEClass->setInterface(false);
    m_EOperation__eContainingClass->setEType(m_EClassEClass);
    m_EOperation__eContainingClass->setName("eContainingClass");
    m_EOperation__eContainingClass->setDefaultValueLiteral("");
    m_EOperation__eContainingClass->setLowerBound(0);
    m_EOperation__eContainingClass->setUpperBound(1);
    m_EOperation__eContainingClass->setTransient(true);
    m_EOperation__eContainingClass->setVolatile(false);
    m_EOperation__eContainingClass->setChangeable(false);
    m_EOperation__eContainingClass->setContainment(false);
    m_EOperation__eContainingClass->setResolveProxies(false);
    m_EOperation__eContainingClass->setUnique(true);
    m_EOperation__eContainingClass->setDerived(false);
    m_EOperation__eContainingClass->setOrdered(true);
    m_EOperation__eContainingClass->setEOpposite(
            ::ecore::instanceOf< ::ecore::EReference >(
                    m_EClassEClass->getEStructuralFeatures()[3]));
    m_EOperation__eTypeParameters->setEType(m_ETypeParameterEClass);
    m_EOperation__eTypeParameters->setName("eTypeParameters");
    m_EOperation__eTypeParameters->setDefaultValueLiteral("");
    m_EOperation__eTypeParameters->setLowerBound(0);
    m_EOperation__eTypeParameters->setUpperBound(-1);
    m_EOperation__eTypeParameters->setTransient(false);
    m_EOperation__eTypeParameters->setVolatile(false);
    m_EOperation__eTypeParameters->setChangeable(true);
    m_EOperation__eTypeParameters->setContainment(true);
    m_EOperation__eTypeParameters->setResolveProxies(true);
    m_EOperation__eTypeParameters->setUnique(true);
    m_EOperation__eTypeParameters->setDerived(false);
    m_EOperation__eTypeParameters->setOrdered(true);
    m_EOperation__eParameters->setEType(m_EParameterEClass);
    m_EOperation__eParameters->setName("eParameters");
    m_EOperation__eParameters->setDefaultValueLiteral("");
    m_EOperation__eParameters->setLowerBound(0);
    m_EOperation__eParameters->setUpperBound(-1);
    m_EOperation__eParameters->setTransient(false);
    m_EOperation__eParameters->setVolatile(false);
    m_EOperation__eParameters->setChangeable(true);
    m_EOperation__eParameters->setContainment(true);
    m_EOperation__eParameters->setResolveProxies(false);
    m_EOperation__eParameters->setUnique(true);
    m_EOperation__eParameters->setDerived(false);
    m_EOperation__eParameters->setOrdered(true);
    m_EOperation__eParameters->setEOpposite(
            ::ecore::instanceOf< ::ecore::EReference >(
                    m_EParameterEClass->getEStructuralFeatures()[0]));
    m_EOperation__eExceptions->setEType(m_EClassifierEClass);
    m_EOperation__eExceptions->setName("eExceptions");
    m_EOperation__eExceptions->setDefaultValueLiteral("");
    m_EOperation__eExceptions->setLowerBound(0);
    m_EOperation__eExceptions->setUpperBound(-1);
    m_EOperation__eExceptions->setTransient(false);
    m_EOperation__eExceptions->setVolatile(false);
    m_EOperation__eExceptions->setChangeable(true);
    m_EOperation__eExceptions->setContainment(false);
    m_EOperation__eExceptions->setResolveProxies(true);
    m_EOperation__eExceptions->setUnique(true);
    m_EOperation__eExceptions->setDerived(false);
    m_EOperation__eExceptions->setOrdered(true);
    m_EOperation__eGenericExceptions->setEType(m_EGenericTypeEClass);
    m_EOperation__eGenericExceptions->setName("eGenericExceptions");
    m_EOperation__eGenericExceptions->setDefaultValueLiteral("");
    m_EOperation__eGenericExceptions->setLowerBound(0);
    m_EOperation__eGenericExceptions->setUpperBound(-1);
    m_EOperation__eGenericExceptions->setTransient(false);
    m_EOperation__eGenericExceptions->setVolatile(false);
    m_EOperation__eGenericExceptions->setChangeable(true);
    m_EOperation__eGenericExceptions->setContainment(true);
    m_EOperation__eGenericExceptions->setResolveProxies(false);
    m_EOperation__eGenericExceptions->setUnique(true);
    m_EOperation__eGenericExceptions->setDerived(false);
    m_EOperation__eGenericExceptions->setOrdered(true);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EIntEDataType);
    _op->setName("getOperationID");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_EOperationEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EBooleanEDataType);
    _op->setName("isOverrideOf");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EOperationEClass);
    _pa->setName("someOperation");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EOperationEClass->getEOperations().push_back(_op);
    // EPackage
    m_EPackageEClass->setName("EPackage");
    m_EPackageEClass->setAbstract(false);
    m_EPackageEClass->setInterface(false);
    m_EPackage__nsURI->setEType(m_EStringEDataType);
    m_EPackage__nsURI->setName("nsURI");
    m_EPackage__nsURI->setDefaultValueLiteral("");
    m_EPackage__nsURI->setLowerBound(0);
    m_EPackage__nsURI->setUpperBound(1);
    m_EPackage__nsURI->setTransient(false);
    m_EPackage__nsURI->setVolatile(false);
    m_EPackage__nsURI->setChangeable(true);
    m_EPackage__nsURI->setUnsettable(false);
    m_EPackage__nsURI->setID(false);
    m_EPackage__nsURI->setUnique(true);
    m_EPackage__nsURI->setDerived(false);
    m_EPackage__nsURI->setOrdered(true);
    m_EPackage__nsPrefix->setEType(m_EStringEDataType);
    m_EPackage__nsPrefix->setName("nsPrefix");
    m_EPackage__nsPrefix->setDefaultValueLiteral("");
    m_EPackage__nsPrefix->setLowerBound(0);
    m_EPackage__nsPrefix->setUpperBound(1);
    m_EPackage__nsPrefix->setTransient(false);
    m_EPackage__nsPrefix->setVolatile(false);
    m_EPackage__nsPrefix->setChangeable(true);
    m_EPackage__nsPrefix->setUnsettable(false);
    m_EPackage__nsPrefix->setID(false);
    m_EPackage__nsPrefix->setUnique(true);
    m_EPackage__nsPrefix->setDerived(false);
    m_EPackage__nsPrefix->setOrdered(true);
    m_EPackage__eFactoryInstance->setEType(m_EFactoryEClass);
    m_EPackage__eFactoryInstance->setName("eFactoryInstance");
    m_EPackage__eFactoryInstance->setDefaultValueLiteral("");
    m_EPackage__eFactoryInstance->setLowerBound(1);
    m_EPackage__eFactoryInstance->setUpperBound(1);
    m_EPackage__eFactoryInstance->setTransient(true);
    m_EPackage__eFactoryInstance->setVolatile(false);
    m_EPackage__eFactoryInstance->setChangeable(true);
    m_EPackage__eFactoryInstance->setContainment(false);
    m_EPackage__eFactoryInstance->setResolveProxies(false);
    m_EPackage__eFactoryInstance->setUnique(true);
    m_EPackage__eFactoryInstance->setDerived(false);
    m_EPackage__eFactoryInstance->setOrdered(true);
    m_EPackage__eFactoryInstance->setEOpposite(
            ::ecore::instanceOf< ::ecore::EReference >(
                    m_EFactoryEClass->getEStructuralFeatures()[0]));
    m_EPackage__eClassifiers->setEType(m_EClassifierEClass);
    m_EPackage__eClassifiers->setName("eClassifiers");
    m_EPackage__eClassifiers->setDefaultValueLiteral("");
    m_EPackage__eClassifiers->setLowerBound(0);
    m_EPackage__eClassifiers->setUpperBound(-1);
    m_EPackage__eClassifiers->setTransient(false);
    m_EPackage__eClassifiers->setVolatile(false);
    m_EPackage__eClassifiers->setChangeable(true);
    m_EPackage__eClassifiers->setContainment(true);
    m_EPackage__eClassifiers->setResolveProxies(true);
    m_EPackage__eClassifiers->setUnique(true);
    m_EPackage__eClassifiers->setDerived(false);
    m_EPackage__eClassifiers->setOrdered(true);
    m_EPackage__eClassifiers->setEOpposite(
            ::ecore::instanceOf< ::ecore::EReference >(
                    m_EClassifierEClass->getEStructuralFeatures()[4]));
    m_EPackage__eSubpackages->setEType(m_EPackageEClass);
    m_EPackage__eSubpackages->setName("eSubpackages");
    m_EPackage__eSubpackages->setDefaultValueLiteral("");
    m_EPackage__eSubpackages->setLowerBound(0);
    m_EPackage__eSubpackages->setUpperBound(-1);
    m_EPackage__eSubpackages->setTransient(false);
    m_EPackage__eSubpackages->setVolatile(false);
    m_EPackage__eSubpackages->setChangeable(true);
    m_EPackage__eSubpackages->setContainment(true);
    m_EPackage__eSubpackages->setResolveProxies(true);
    m_EPackage__eSubpackages->setUnique(true);
    m_EPackage__eSubpackages->setDerived(false);
    m_EPackage__eSubpackages->setOrdered(true);
    m_EPackage__eSubpackages->setEOpposite(
            ::ecore::instanceOf< ::ecore::EReference >(
                    m_EPackageEClass->getEStructuralFeatures()[5]));
    m_EPackage__eSuperPackage->setEType(m_EPackageEClass);
    m_EPackage__eSuperPackage->setName("eSuperPackage");
    m_EPackage__eSuperPackage->setDefaultValueLiteral("");
    m_EPackage__eSuperPackage->setLowerBound(0);
    m_EPackage__eSuperPackage->setUpperBound(1);
    m_EPackage__eSuperPackage->setTransient(true);
    m_EPackage__eSuperPackage->setVolatile(false);
    m_EPackage__eSuperPackage->setChangeable(false);
    m_EPackage__eSuperPackage->setContainment(false);
    m_EPackage__eSuperPackage->setResolveProxies(true);
    m_EPackage__eSuperPackage->setUnique(true);
    m_EPackage__eSuperPackage->setDerived(false);
    m_EPackage__eSuperPackage->setOrdered(true);
    m_EPackage__eSuperPackage->setEOpposite(
            ::ecore::instanceOf< ::ecore::EReference >(
                    m_EPackageEClass->getEStructuralFeatures()[4]));
    _op = new ::ecore::EOperation();
    _op->setEType(m_EClassifierEClass);
    _op->setName("getEClassifier");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = new ::ecore::EParameter();
    _pa->setEType(m_EStringEDataType);
    _pa->setName("name");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_EPackageEClass->getEOperations().push_back(_op);
    // EParameter
    m_EParameterEClass->setName("EParameter");
    m_EParameterEClass->setAbstract(false);
    m_EParameterEClass->setInterface(false);
    m_EParameter__eOperation->setEType(m_EOperationEClass);
    m_EParameter__eOperation->setName("eOperation");
    m_EParameter__eOperation->setDefaultValueLiteral("");
    m_EParameter__eOperation->setLowerBound(0);
    m_EParameter__eOperation->setUpperBound(1);
    m_EParameter__eOperation->setTransient(true);
    m_EParameter__eOperation->setVolatile(false);
    m_EParameter__eOperation->setChangeable(false);
    m_EParameter__eOperation->setContainment(false);
    m_EParameter__eOperation->setResolveProxies(false);
    m_EParameter__eOperation->setUnique(true);
    m_EParameter__eOperation->setDerived(false);
    m_EParameter__eOperation->setOrdered(true);
    m_EParameter__eOperation->setEOpposite(
            ::ecore::instanceOf< ::ecore::EReference >(
                    m_EOperationEClass->getEStructuralFeatures()[2]));
    // EReference
    m_EReferenceEClass->setName("EReference");
    m_EReferenceEClass->setAbstract(false);
    m_EReferenceEClass->setInterface(false);
    m_EReference__containment->setEType(m_EBooleanEDataType);
    m_EReference__containment->setName("containment");
    m_EReference__containment->setDefaultValueLiteral("");
    m_EReference__containment->setLowerBound(0);
    m_EReference__containment->setUpperBound(1);
    m_EReference__containment->setTransient(false);
    m_EReference__containment->setVolatile(false);
    m_EReference__containment->setChangeable(true);
    m_EReference__containment->setUnsettable(false);
    m_EReference__containment->setID(false);
    m_EReference__containment->setUnique(true);
    m_EReference__containment->setDerived(false);
    m_EReference__containment->setOrdered(true);
    m_EReference__container->setEType(m_EBooleanEDataType);
    m_EReference__container->setName("container");
    m_EReference__container->setDefaultValueLiteral("");
    m_EReference__container->setLowerBound(0);
    m_EReference__container->setUpperBound(1);
    m_EReference__container->setTransient(true);
    m_EReference__container->setVolatile(true);
    m_EReference__container->setChangeable(false);
    m_EReference__container->setUnsettable(false);
    m_EReference__container->setID(false);
    m_EReference__container->setUnique(true);
    m_EReference__container->setDerived(true);
    m_EReference__container->setOrdered(true);
    m_EReference__resolveProxies->setEType(m_EBooleanEDataType);
    m_EReference__resolveProxies->setName("resolveProxies");
    m_EReference__resolveProxies->setDefaultValueLiteral("true");
    m_EReference__resolveProxies->setLowerBound(0);
    m_EReference__resolveProxies->setUpperBound(1);
    m_EReference__resolveProxies->setTransient(false);
    m_EReference__resolveProxies->setVolatile(false);
    m_EReference__resolveProxies->setChangeable(true);
    m_EReference__resolveProxies->setUnsettable(false);
    m_EReference__resolveProxies->setID(false);
    m_EReference__resolveProxies->setUnique(true);
    m_EReference__resolveProxies->setDerived(false);
    m_EReference__resolveProxies->setOrdered(true);
    m_EReference__eOpposite->setEType(m_EReferenceEClass);
    m_EReference__eOpposite->setName("eOpposite");
    m_EReference__eOpposite->setDefaultValueLiteral("");
    m_EReference__eOpposite->setLowerBound(0);
    m_EReference__eOpposite->setUpperBound(1);
    m_EReference__eOpposite->setTransient(false);
    m_EReference__eOpposite->setVolatile(false);
    m_EReference__eOpposite->setChangeable(true);
    m_EReference__eOpposite->setContainment(false);
    m_EReference__eOpposite->setResolveProxies(true);
    m_EReference__eOpposite->setUnique(true);
    m_EReference__eOpposite->setDerived(false);
    m_EReference__eOpposite->setOrdered(true);
    m_EReference__eReferenceType->setEType(m_EClassEClass);
    m_EReference__eReferenceType->setName("eReferenceType");
    m_EReference__eReferenceType->setDefaultValueLiteral("");
    m_EReference__eReferenceType->setLowerBound(1);
    m_EReference__eReferenceType->setUpperBound(1);
    m_EReference__eReferenceType->setTransient(true);
    m_EReference__eReferenceType->setVolatile(true);
    m_EReference__eReferenceType->setChangeable(false);
    m_EReference__eReferenceType->setContainment(false);
    m_EReference__eReferenceType->setResolveProxies(true);
    m_EReference__eReferenceType->setUnique(true);
    m_EReference__eReferenceType->setDerived(true);
    m_EReference__eReferenceType->setOrdered(true);
    m_EReference__eKeys->setEType(m_EAttributeEClass);
    m_EReference__eKeys->setName("eKeys");
    m_EReference__eKeys->setDefaultValueLiteral("");
    m_EReference__eKeys->setLowerBound(0);
    m_EReference__eKeys->setUpperBound(-1);
    m_EReference__eKeys->setTransient(false);
    m_EReference__eKeys->setVolatile(false);
    m_EReference__eKeys->setChangeable(true);
    m_EReference__eKeys->setContainment(false);
    m_EReference__eKeys->setResolveProxies(true);
    m_EReference__eKeys->setUnique(true);
    m_EReference__eKeys->setDerived(false);
    m_EReference__eKeys->setOrdered(true);
    // EStructuralFeature
    m_EStructuralFeatureEClass->setName("EStructuralFeature");
    m_EStructuralFeatureEClass->setAbstract(true);
    m_EStructuralFeatureEClass->setInterface(false);
    m_EStructuralFeature__changeable->setEType(m_EBooleanEDataType);
    m_EStructuralFeature__changeable->setName("changeable");
    m_EStructuralFeature__changeable->setDefaultValueLiteral("true");
    m_EStructuralFeature__changeable->setLowerBound(0);
    m_EStructuralFeature__changeable->setUpperBound(1);
    m_EStructuralFeature__changeable->setTransient(false);
    m_EStructuralFeature__changeable->setVolatile(false);
    m_EStructuralFeature__changeable->setChangeable(true);
    m_EStructuralFeature__changeable->setUnsettable(false);
    m_EStructuralFeature__changeable->setID(false);
    m_EStructuralFeature__changeable->setUnique(true);
    m_EStructuralFeature__changeable->setDerived(false);
    m_EStructuralFeature__changeable->setOrdered(true);
    m_EStructuralFeature__volatile->setEType(m_EBooleanEDataType);
    m_EStructuralFeature__volatile->setName("volatile");
    m_EStructuralFeature__volatile->setDefaultValueLiteral("");
    m_EStructuralFeature__volatile->setLowerBound(0);
    m_EStructuralFeature__volatile->setUpperBound(1);
    m_EStructuralFeature__volatile->setTransient(false);
    m_EStructuralFeature__volatile->setVolatile(false);
    m_EStructuralFeature__volatile->setChangeable(true);
    m_EStructuralFeature__volatile->setUnsettable(false);
    m_EStructuralFeature__volatile->setID(false);
    m_EStructuralFeature__volatile->setUnique(true);
    m_EStructuralFeature__volatile->setDerived(false);
    m_EStructuralFeature__volatile->setOrdered(true);
    m_EStructuralFeature__transient->setEType(m_EBooleanEDataType);
    m_EStructuralFeature__transient->setName("transient");
    m_EStructuralFeature__transient->setDefaultValueLiteral("");
    m_EStructuralFeature__transient->setLowerBound(0);
    m_EStructuralFeature__transient->setUpperBound(1);
    m_EStructuralFeature__transient->setTransient(false);
    m_EStructuralFeature__transient->setVolatile(false);
    m_EStructuralFeature__transient->setChangeable(true);
    m_EStructuralFeature__transient->setUnsettable(false);
    m_EStructuralFeature__transient->setID(false);
    m_EStructuralFeature__transient->setUnique(true);
    m_EStructuralFeature__transient->setDerived(false);
    m_EStructuralFeature__transient->setOrdered(true);
    m_EStructuralFeature__defaultValueLiteral->setEType(m_EStringEDataType);
    m_EStructuralFeature__defaultValueLiteral->setName("defaultValueLiteral");
    m_EStructuralFeature__defaultValueLiteral->setDefaultValueLiteral("");
    m_EStructuralFeature__defaultValueLiteral->setLowerBound(0);
    m_EStructuralFeature__defaultValueLiteral->setUpperBound(1);
    m_EStructuralFeature__defaultValueLiteral->setTransient(false);
    m_EStructuralFeature__defaultValueLiteral->setVolatile(false);
    m_EStructuralFeature__defaultValueLiteral->setChangeable(true);
    m_EStructuralFeature__defaultValueLiteral->setUnsettable(false);
    m_EStructuralFeature__defaultValueLiteral->setID(false);
    m_EStructuralFeature__defaultValueLiteral->setUnique(true);
    m_EStructuralFeature__defaultValueLiteral->setDerived(false);
    m_EStructuralFeature__defaultValueLiteral->setOrdered(true);
    m_EStructuralFeature__defaultValue->setEType(m_EJavaObjectEDataType);
    m_EStructuralFeature__defaultValue->setName("defaultValue");
    m_EStructuralFeature__defaultValue->setDefaultValueLiteral("");
    m_EStructuralFeature__defaultValue->setLowerBound(0);
    m_EStructuralFeature__defaultValue->setUpperBound(1);
    m_EStructuralFeature__defaultValue->setTransient(true);
    m_EStructuralFeature__defaultValue->setVolatile(true);
    m_EStructuralFeature__defaultValue->setChangeable(false);
    m_EStructuralFeature__defaultValue->setUnsettable(false);
    m_EStructuralFeature__defaultValue->setID(false);
    m_EStructuralFeature__defaultValue->setUnique(true);
    m_EStructuralFeature__defaultValue->setDerived(true);
    m_EStructuralFeature__defaultValue->setOrdered(true);
    m_EStructuralFeature__unsettable->setEType(m_EBooleanEDataType);
    m_EStructuralFeature__unsettable->setName("unsettable");
    m_EStructuralFeature__unsettable->setDefaultValueLiteral("");
    m_EStructuralFeature__unsettable->setLowerBound(0);
    m_EStructuralFeature__unsettable->setUpperBound(1);
    m_EStructuralFeature__unsettable->setTransient(false);
    m_EStructuralFeature__unsettable->setVolatile(false);
    m_EStructuralFeature__unsettable->setChangeable(true);
    m_EStructuralFeature__unsettable->setUnsettable(false);
    m_EStructuralFeature__unsettable->setID(false);
    m_EStructuralFeature__unsettable->setUnique(true);
    m_EStructuralFeature__unsettable->setDerived(false);
    m_EStructuralFeature__unsettable->setOrdered(true);
    m_EStructuralFeature__derived->setEType(m_EBooleanEDataType);
    m_EStructuralFeature__derived->setName("derived");
    m_EStructuralFeature__derived->setDefaultValueLiteral("");
    m_EStructuralFeature__derived->setLowerBound(0);
    m_EStructuralFeature__derived->setUpperBound(1);
    m_EStructuralFeature__derived->setTransient(false);
    m_EStructuralFeature__derived->setVolatile(false);
    m_EStructuralFeature__derived->setChangeable(true);
    m_EStructuralFeature__derived->setUnsettable(false);
    m_EStructuralFeature__derived->setID(false);
    m_EStructuralFeature__derived->setUnique(true);
    m_EStructuralFeature__derived->setDerived(false);
    m_EStructuralFeature__derived->setOrdered(true);
    m_EStructuralFeature__eContainingClass->setEType(m_EClassEClass);
    m_EStructuralFeature__eContainingClass->setName("eContainingClass");
    m_EStructuralFeature__eContainingClass->setDefaultValueLiteral("");
    m_EStructuralFeature__eContainingClass->setLowerBound(0);
    m_EStructuralFeature__eContainingClass->setUpperBound(1);
    m_EStructuralFeature__eContainingClass->setTransient(true);
    m_EStructuralFeature__eContainingClass->setVolatile(false);
    m_EStructuralFeature__eContainingClass->setChangeable(false);
    m_EStructuralFeature__eContainingClass->setContainment(false);
    m_EStructuralFeature__eContainingClass->setResolveProxies(false);
    m_EStructuralFeature__eContainingClass->setUnique(true);
    m_EStructuralFeature__eContainingClass->setDerived(false);
    m_EStructuralFeature__eContainingClass->setOrdered(true);
    m_EStructuralFeature__eContainingClass->setEOpposite(
            ::ecore::instanceOf< ::ecore::EReference >(
                    m_EClassEClass->getEStructuralFeatures()[13]));
    _op = new ::ecore::EOperation();
    _op->setEType(m_EIntEDataType);
    _op->setName("getFeatureID");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_EStructuralFeatureEClass->getEOperations().push_back(_op);
    _op = new ::ecore::EOperation();
    _op->setEType(m_EJavaClassEDataType);
    {
        ::ecore::EGenericType_ptr _g0 = new ::ecore::EGenericType();
        _g0->setEClassifier(m_EJavaClassEDataType);
        ::ecore::EGenericType_ptr _g1 = new ::ecore::EGenericType();
        _g0->getETypeArguments().push_back(_g1);
        _op->setEGenericType(_g0);
    }
    _op->setName("getContainerClass");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    m_EStructuralFeatureEClass->getEOperations().push_back(_op);
    // ETypedElement
    m_ETypedElementEClass->setName("ETypedElement");
    m_ETypedElementEClass->setAbstract(true);
    m_ETypedElementEClass->setInterface(false);
    m_ETypedElement__ordered->setEType(m_EBooleanEDataType);
    m_ETypedElement__ordered->setName("ordered");
    m_ETypedElement__ordered->setDefaultValueLiteral("true");
    m_ETypedElement__ordered->setLowerBound(0);
    m_ETypedElement__ordered->setUpperBound(1);
    m_ETypedElement__ordered->setTransient(false);
    m_ETypedElement__ordered->setVolatile(false);
    m_ETypedElement__ordered->setChangeable(true);
    m_ETypedElement__ordered->setUnsettable(false);
    m_ETypedElement__ordered->setID(false);
    m_ETypedElement__ordered->setUnique(true);
    m_ETypedElement__ordered->setDerived(false);
    m_ETypedElement__ordered->setOrdered(true);
    m_ETypedElement__unique->setEType(m_EBooleanEDataType);
    m_ETypedElement__unique->setName("unique");
    m_ETypedElement__unique->setDefaultValueLiteral("true");
    m_ETypedElement__unique->setLowerBound(0);
    m_ETypedElement__unique->setUpperBound(1);
    m_ETypedElement__unique->setTransient(false);
    m_ETypedElement__unique->setVolatile(false);
    m_ETypedElement__unique->setChangeable(true);
    m_ETypedElement__unique->setUnsettable(false);
    m_ETypedElement__unique->setID(false);
    m_ETypedElement__unique->setUnique(true);
    m_ETypedElement__unique->setDerived(false);
    m_ETypedElement__unique->setOrdered(true);
    m_ETypedElement__lowerBound->setEType(m_EIntEDataType);
    m_ETypedElement__lowerBound->setName("lowerBound");
    m_ETypedElement__lowerBound->setDefaultValueLiteral("");
    m_ETypedElement__lowerBound->setLowerBound(0);
    m_ETypedElement__lowerBound->setUpperBound(1);
    m_ETypedElement__lowerBound->setTransient(false);
    m_ETypedElement__lowerBound->setVolatile(false);
    m_ETypedElement__lowerBound->setChangeable(true);
    m_ETypedElement__lowerBound->setUnsettable(false);
    m_ETypedElement__lowerBound->setID(false);
    m_ETypedElement__lowerBound->setUnique(true);
    m_ETypedElement__lowerBound->setDerived(false);
    m_ETypedElement__lowerBound->setOrdered(true);
    m_ETypedElement__upperBound->setEType(m_EIntEDataType);
    m_ETypedElement__upperBound->setName("upperBound");
    m_ETypedElement__upperBound->setDefaultValueLiteral("1");
    m_ETypedElement__upperBound->setLowerBound(0);
    m_ETypedElement__upperBound->setUpperBound(1);
    m_ETypedElement__upperBound->setTransient(false);
    m_ETypedElement__upperBound->setVolatile(false);
    m_ETypedElement__upperBound->setChangeable(true);
    m_ETypedElement__upperBound->setUnsettable(false);
    m_ETypedElement__upperBound->setID(false);
    m_ETypedElement__upperBound->setUnique(true);
    m_ETypedElement__upperBound->setDerived(false);
    m_ETypedElement__upperBound->setOrdered(true);
    m_ETypedElement__many->setEType(m_EBooleanEDataType);
    m_ETypedElement__many->setName("many");
    m_ETypedElement__many->setDefaultValueLiteral("");
    m_ETypedElement__many->setLowerBound(0);
    m_ETypedElement__many->setUpperBound(1);
    m_ETypedElement__many->setTransient(true);
    m_ETypedElement__many->setVolatile(true);
    m_ETypedElement__many->setChangeable(false);
    m_ETypedElement__many->setUnsettable(false);
    m_ETypedElement__many->setID(false);
    m_ETypedElement__many->setUnique(true);
    m_ETypedElement__many->setDerived(true);
    m_ETypedElement__many->setOrdered(true);
    m_ETypedElement__required->setEType(m_EBooleanEDataType);
    m_ETypedElement__required->setName("required");
    m_ETypedElement__required->setDefaultValueLiteral("");
    m_ETypedElement__required->setLowerBound(0);
    m_ETypedElement__required->setUpperBound(1);
    m_ETypedElement__required->setTransient(true);
    m_ETypedElement__required->setVolatile(true);
    m_ETypedElement__required->setChangeable(false);
    m_ETypedElement__required->setUnsettable(false);
    m_ETypedElement__required->setID(false);
    m_ETypedElement__required->setUnique(true);
    m_ETypedElement__required->setDerived(true);
    m_ETypedElement__required->setOrdered(true);
    m_ETypedElement__eType->setEType(m_EClassifierEClass);
    m_ETypedElement__eType->setName("eType");
    m_ETypedElement__eType->setDefaultValueLiteral("");
    m_ETypedElement__eType->setLowerBound(0);
    m_ETypedElement__eType->setUpperBound(1);
    m_ETypedElement__eType->setTransient(false);
    m_ETypedElement__eType->setVolatile(true);
    m_ETypedElement__eType->setChangeable(true);
    m_ETypedElement__eType->setContainment(false);
    m_ETypedElement__eType->setResolveProxies(true);
    m_ETypedElement__eType->setUnique(true);
    m_ETypedElement__eType->setDerived(false);
    m_ETypedElement__eType->setOrdered(true);
    m_ETypedElement__eGenericType->setEType(m_EGenericTypeEClass);
    m_ETypedElement__eGenericType->setName("eGenericType");
    m_ETypedElement__eGenericType->setDefaultValueLiteral("");
    m_ETypedElement__eGenericType->setLowerBound(0);
    m_ETypedElement__eGenericType->setUpperBound(1);
    m_ETypedElement__eGenericType->setTransient(false);
    m_ETypedElement__eGenericType->setVolatile(true);
    m_ETypedElement__eGenericType->setChangeable(true);
    m_ETypedElement__eGenericType->setContainment(true);
    m_ETypedElement__eGenericType->setResolveProxies(false);
    m_ETypedElement__eGenericType->setUnique(true);
    m_ETypedElement__eGenericType->setDerived(false);
    m_ETypedElement__eGenericType->setOrdered(true);
    // EStringToStringMapEntry
    m_EStringToStringMapEntryEClass->setName("EStringToStringMapEntry");
    m_EStringToStringMapEntryEClass->setAbstract(false);
    m_EStringToStringMapEntryEClass->setInterface(false);
    m_EStringToStringMapEntry__key->setEType(m_EStringEDataType);
    m_EStringToStringMapEntry__key->setName("key");
    m_EStringToStringMapEntry__key->setDefaultValueLiteral("");
    m_EStringToStringMapEntry__key->setLowerBound(0);
    m_EStringToStringMapEntry__key->setUpperBound(1);
    m_EStringToStringMapEntry__key->setTransient(false);
    m_EStringToStringMapEntry__key->setVolatile(false);
    m_EStringToStringMapEntry__key->setChangeable(true);
    m_EStringToStringMapEntry__key->setUnsettable(false);
    m_EStringToStringMapEntry__key->setID(false);
    m_EStringToStringMapEntry__key->setUnique(true);
    m_EStringToStringMapEntry__key->setDerived(false);
    m_EStringToStringMapEntry__key->setOrdered(true);
    m_EStringToStringMapEntry__value->setEType(m_EStringEDataType);
    m_EStringToStringMapEntry__value->setName("value");
    m_EStringToStringMapEntry__value->setDefaultValueLiteral("");
    m_EStringToStringMapEntry__value->setLowerBound(0);
    m_EStringToStringMapEntry__value->setUpperBound(1);
    m_EStringToStringMapEntry__value->setTransient(false);
    m_EStringToStringMapEntry__value->setVolatile(false);
    m_EStringToStringMapEntry__value->setChangeable(true);
    m_EStringToStringMapEntry__value->setUnsettable(false);
    m_EStringToStringMapEntry__value->setID(false);
    m_EStringToStringMapEntry__value->setUnique(true);
    m_EStringToStringMapEntry__value->setDerived(false);
    m_EStringToStringMapEntry__value->setOrdered(true);
    // EGenericType
    m_EGenericTypeEClass->setName("EGenericType");
    m_EGenericTypeEClass->setAbstract(false);
    m_EGenericTypeEClass->setInterface(false);
    m_EGenericType__eUpperBound->setEType(m_EGenericTypeEClass);
    m_EGenericType__eUpperBound->setName("eUpperBound");
    m_EGenericType__eUpperBound->setDefaultValueLiteral("");
    m_EGenericType__eUpperBound->setLowerBound(0);
    m_EGenericType__eUpperBound->setUpperBound(1);
    m_EGenericType__eUpperBound->setTransient(false);
    m_EGenericType__eUpperBound->setVolatile(false);
    m_EGenericType__eUpperBound->setChangeable(true);
    m_EGenericType__eUpperBound->setContainment(true);
    m_EGenericType__eUpperBound->setResolveProxies(false);
    m_EGenericType__eUpperBound->setUnique(true);
    m_EGenericType__eUpperBound->setDerived(false);
    m_EGenericType__eUpperBound->setOrdered(true);
    m_EGenericType__eTypeArguments->setEType(m_EGenericTypeEClass);
    m_EGenericType__eTypeArguments->setName("eTypeArguments");
    m_EGenericType__eTypeArguments->setDefaultValueLiteral("");
    m_EGenericType__eTypeArguments->setLowerBound(0);
    m_EGenericType__eTypeArguments->setUpperBound(-1);
    m_EGenericType__eTypeArguments->setTransient(false);
    m_EGenericType__eTypeArguments->setVolatile(false);
    m_EGenericType__eTypeArguments->setChangeable(true);
    m_EGenericType__eTypeArguments->setContainment(true);
    m_EGenericType__eTypeArguments->setResolveProxies(false);
    m_EGenericType__eTypeArguments->setUnique(true);
    m_EGenericType__eTypeArguments->setDerived(false);
    m_EGenericType__eTypeArguments->setOrdered(true);
    m_EGenericType__eRawType->setEType(m_EClassifierEClass);
    m_EGenericType__eRawType->setName("eRawType");
    m_EGenericType__eRawType->setDefaultValueLiteral("");
    m_EGenericType__eRawType->setLowerBound(1);
    m_EGenericType__eRawType->setUpperBound(1);
    m_EGenericType__eRawType->setTransient(true);
    m_EGenericType__eRawType->setVolatile(false);
    m_EGenericType__eRawType->setChangeable(false);
    m_EGenericType__eRawType->setContainment(false);
    m_EGenericType__eRawType->setResolveProxies(true);
    m_EGenericType__eRawType->setUnique(true);
    m_EGenericType__eRawType->setDerived(true);
    m_EGenericType__eRawType->setOrdered(true);
    m_EGenericType__eLowerBound->setEType(m_EGenericTypeEClass);
    m_EGenericType__eLowerBound->setName("eLowerBound");
    m_EGenericType__eLowerBound->setDefaultValueLiteral("");
    m_EGenericType__eLowerBound->setLowerBound(0);
    m_EGenericType__eLowerBound->setUpperBound(1);
    m_EGenericType__eLowerBound->setTransient(false);
    m_EGenericType__eLowerBound->setVolatile(false);
    m_EGenericType__eLowerBound->setChangeable(true);
    m_EGenericType__eLowerBound->setContainment(true);
    m_EGenericType__eLowerBound->setResolveProxies(false);
    m_EGenericType__eLowerBound->setUnique(true);
    m_EGenericType__eLowerBound->setDerived(false);
    m_EGenericType__eLowerBound->setOrdered(true);
    m_EGenericType__eTypeParameter->setEType(m_ETypeParameterEClass);
    m_EGenericType__eTypeParameter->setName("eTypeParameter");
    m_EGenericType__eTypeParameter->setDefaultValueLiteral("");
    m_EGenericType__eTypeParameter->setLowerBound(0);
    m_EGenericType__eTypeParameter->setUpperBound(1);
    m_EGenericType__eTypeParameter->setTransient(false);
    m_EGenericType__eTypeParameter->setVolatile(false);
    m_EGenericType__eTypeParameter->setChangeable(true);
    m_EGenericType__eTypeParameter->setContainment(false);
    m_EGenericType__eTypeParameter->setResolveProxies(false);
    m_EGenericType__eTypeParameter->setUnique(true);
    m_EGenericType__eTypeParameter->setDerived(false);
    m_EGenericType__eTypeParameter->setOrdered(true);
    m_EGenericType__eClassifier->setEType(m_EClassifierEClass);
    m_EGenericType__eClassifier->setName("eClassifier");
    m_EGenericType__eClassifier->setDefaultValueLiteral("");
    m_EGenericType__eClassifier->setLowerBound(0);
    m_EGenericType__eClassifier->setUpperBound(1);
    m_EGenericType__eClassifier->setTransient(false);
    m_EGenericType__eClassifier->setVolatile(false);
    m_EGenericType__eClassifier->setChangeable(true);
    m_EGenericType__eClassifier->setContainment(false);
    m_EGenericType__eClassifier->setResolveProxies(true);
    m_EGenericType__eClassifier->setUnique(true);
    m_EGenericType__eClassifier->setDerived(false);
    m_EGenericType__eClassifier->setOrdered(true);
    // ETypeParameter
    m_ETypeParameterEClass->setName("ETypeParameter");
    m_ETypeParameterEClass->setAbstract(false);
    m_ETypeParameterEClass->setInterface(false);
    m_ETypeParameter__eBounds->setEType(m_EGenericTypeEClass);
    m_ETypeParameter__eBounds->setName("eBounds");
    m_ETypeParameter__eBounds->setDefaultValueLiteral("");
    m_ETypeParameter__eBounds->setLowerBound(0);
    m_ETypeParameter__eBounds->setUpperBound(-1);
    m_ETypeParameter__eBounds->setTransient(false);
    m_ETypeParameter__eBounds->setVolatile(false);
    m_ETypeParameter__eBounds->setChangeable(true);
    m_ETypeParameter__eBounds->setContainment(true);
    m_ETypeParameter__eBounds->setResolveProxies(false);
    m_ETypeParameter__eBounds->setUnique(true);
    m_ETypeParameter__eBounds->setDerived(false);
    m_ETypeParameter__eBounds->setOrdered(true);

    // TODO: Initialize data types

    // EBigDecimal
    m_EBigDecimalEDataType->setName("EBigDecimal");
    m_EBigDecimalEDataType->setSerializable(true);

    // EBigInteger
    m_EBigIntegerEDataType->setName("EBigInteger");
    m_EBigIntegerEDataType->setSerializable(true);

    // EBoolean
    m_EBooleanEDataType->setName("EBoolean");
    m_EBooleanEDataType->setSerializable(true);

    // EBooleanObject
    m_EBooleanObjectEDataType->setName("EBooleanObject");
    m_EBooleanObjectEDataType->setSerializable(true);

    // EByte
    m_EByteEDataType->setName("EByte");
    m_EByteEDataType->setSerializable(true);

    // EByteArray
    m_EByteArrayEDataType->setName("EByteArray");
    m_EByteArrayEDataType->setSerializable(true);

    // EByteObject
    m_EByteObjectEDataType->setName("EByteObject");
    m_EByteObjectEDataType->setSerializable(true);

    // EChar
    m_ECharEDataType->setName("EChar");
    m_ECharEDataType->setSerializable(true);

    // ECharacterObject
    m_ECharacterObjectEDataType->setName("ECharacterObject");
    m_ECharacterObjectEDataType->setSerializable(true);

    // EDate
    m_EDateEDataType->setName("EDate");
    m_EDateEDataType->setSerializable(true);

    // EDiagnosticChain
    m_EDiagnosticChainEDataType->setName("EDiagnosticChain");
    m_EDiagnosticChainEDataType->setSerializable(false);

    // EDouble
    m_EDoubleEDataType->setName("EDouble");
    m_EDoubleEDataType->setSerializable(true);

    // EDoubleObject
    m_EDoubleObjectEDataType->setName("EDoubleObject");
    m_EDoubleObjectEDataType->setSerializable(true);

    // EEList
    m_EEListEDataType->setName("EEList");
    m_EEListEDataType->setSerializable(false);

    // EEnumerator
    m_EEnumeratorEDataType->setName("EEnumerator");
    m_EEnumeratorEDataType->setSerializable(false);

    // EFeatureMap
    m_EFeatureMapEDataType->setName("EFeatureMap");
    m_EFeatureMapEDataType->setSerializable(false);

    // EFeatureMapEntry
    m_EFeatureMapEntryEDataType->setName("EFeatureMapEntry");
    m_EFeatureMapEntryEDataType->setSerializable(false);

    // EFloat
    m_EFloatEDataType->setName("EFloat");
    m_EFloatEDataType->setSerializable(true);

    // EFloatObject
    m_EFloatObjectEDataType->setName("EFloatObject");
    m_EFloatObjectEDataType->setSerializable(true);

    // EInt
    m_EIntEDataType->setName("EInt");
    m_EIntEDataType->setSerializable(true);

    // EIntegerObject
    m_EIntegerObjectEDataType->setName("EIntegerObject");
    m_EIntegerObjectEDataType->setSerializable(true);

    // EJavaClass
    m_EJavaClassEDataType->setName("EJavaClass");
    m_EJavaClassEDataType->setSerializable(true);

    // EJavaObject
    m_EJavaObjectEDataType->setName("EJavaObject");
    m_EJavaObjectEDataType->setSerializable(true);

    // ELong
    m_ELongEDataType->setName("ELong");
    m_ELongEDataType->setSerializable(true);

    // ELongObject
    m_ELongObjectEDataType->setName("ELongObject");
    m_ELongObjectEDataType->setSerializable(true);

    // EMap
    m_EMapEDataType->setName("EMap");
    m_EMapEDataType->setSerializable(false);

    // EResource
    m_EResourceEDataType->setName("EResource");
    m_EResourceEDataType->setSerializable(false);

    // EResourceSet
    m_EResourceSetEDataType->setName("EResourceSet");
    m_EResourceSetEDataType->setSerializable(false);

    // EShort
    m_EShortEDataType->setName("EShort");
    m_EShortEDataType->setSerializable(true);

    // EShortObject
    m_EShortObjectEDataType->setName("EShortObject");
    m_EShortObjectEDataType->setSerializable(true);

    // EString
    m_EStringEDataType->setName("EString");
    m_EStringEDataType->setSerializable(true);

    // ETreeIterator
    m_ETreeIteratorEDataType->setName("ETreeIterator");
    m_ETreeIteratorEDataType->setSerializable(false);

    // EInvocationTargetException
    m_EInvocationTargetExceptionEDataType->setName("EInvocationTargetException");
    m_EInvocationTargetExceptionEDataType->setSerializable(false);

    _initialize();
}

::ecore::EClass_ptr EcorePackage::getEAttribute()
{
    return m_EAttributeEClass;
}
::ecore::EClass_ptr EcorePackage::getEAnnotation_()
{
    return m_EAnnotationEClass;
}
::ecore::EClass_ptr EcorePackage::getEClass()
{
    return m_EClassEClass;
}
::ecore::EClass_ptr EcorePackage::getEClassifier_()
{
    return m_EClassifierEClass;
}
::ecore::EClass_ptr EcorePackage::getEDataType()
{
    return m_EDataTypeEClass;
}
::ecore::EClass_ptr EcorePackage::getEEnum()
{
    return m_EEnumEClass;
}
::ecore::EClass_ptr EcorePackage::getEEnumLiteral()
{
    return m_EEnumLiteralEClass;
}
::ecore::EClass_ptr EcorePackage::getEFactory()
{
    return m_EFactoryEClass;
}
::ecore::EClass_ptr EcorePackage::getEModelElement()
{
    return m_EModelElementEClass;
}
::ecore::EClass_ptr EcorePackage::getENamedElement()
{
    return m_ENamedElementEClass;
}
::ecore::EClass_ptr EcorePackage::getEObject()
{
    return m_EObjectEClass;
}
::ecore::EClass_ptr EcorePackage::getEOperation()
{
    return m_EOperationEClass;
}
::ecore::EClass_ptr EcorePackage::getEPackage()
{
    return m_EPackageEClass;
}
::ecore::EClass_ptr EcorePackage::getEParameter()
{
    return m_EParameterEClass;
}
::ecore::EClass_ptr EcorePackage::getEReference()
{
    return m_EReferenceEClass;
}
::ecore::EClass_ptr EcorePackage::getEStructuralFeature()
{
    return m_EStructuralFeatureEClass;
}
::ecore::EClass_ptr EcorePackage::getETypedElement()
{
    return m_ETypedElementEClass;
}
::ecore::EDataType_ptr EcorePackage::getEBigDecimal()
{
    return m_EBigDecimalEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEBigInteger()
{
    return m_EBigIntegerEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEBoolean()
{
    return m_EBooleanEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEBooleanObject()
{
    return m_EBooleanObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEByte()
{
    return m_EByteEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEByteArray()
{
    return m_EByteArrayEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEByteObject()
{
    return m_EByteObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEChar()
{
    return m_ECharEDataType;
}
::ecore::EDataType_ptr EcorePackage::getECharacterObject()
{
    return m_ECharacterObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEDate()
{
    return m_EDateEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEDiagnosticChain()
{
    return m_EDiagnosticChainEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEDouble()
{
    return m_EDoubleEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEDoubleObject()
{
    return m_EDoubleObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEEList()
{
    return m_EEListEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEEnumerator()
{
    return m_EEnumeratorEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEFeatureMap()
{
    return m_EFeatureMapEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEFeatureMapEntry()
{
    return m_EFeatureMapEntryEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEFloat()
{
    return m_EFloatEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEFloatObject()
{
    return m_EFloatObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEInt()
{
    return m_EIntEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEIntegerObject()
{
    return m_EIntegerObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEJavaClass()
{
    return m_EJavaClassEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEJavaObject()
{
    return m_EJavaObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getELong()
{
    return m_ELongEDataType;
}
::ecore::EDataType_ptr EcorePackage::getELongObject()
{
    return m_ELongObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEMap()
{
    return m_EMapEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEResource()
{
    return m_EResourceEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEResourceSet()
{
    return m_EResourceSetEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEShort()
{
    return m_EShortEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEShortObject()
{
    return m_EShortObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEString()
{
    return m_EStringEDataType;
}
::ecore::EClass_ptr EcorePackage::getEStringToStringMapEntry()
{
    return m_EStringToStringMapEntryEClass;
}
::ecore::EDataType_ptr EcorePackage::getETreeIterator()
{
    return m_ETreeIteratorEDataType;
}
::ecore::EClass_ptr EcorePackage::getEGenericType()
{
    return m_EGenericTypeEClass;
}
::ecore::EClass_ptr EcorePackage::getETypeParameter()
{
    return m_ETypeParameterEClass;
}
::ecore::EDataType_ptr EcorePackage::getEInvocationTargetException()
{
    return m_EInvocationTargetExceptionEDataType;
}

::ecore::EReference_ptr EcorePackage::getEModelElement__eAnnotations()
{
    return m_EModelElement__eAnnotations;
}
::ecore::EAttribute_ptr EcorePackage::getENamedElement__name()
{
    return m_ENamedElement__name;
}
::ecore::EAttribute_ptr EcorePackage::getETypedElement__ordered()
{
    return m_ETypedElement__ordered;
}
::ecore::EAttribute_ptr EcorePackage::getETypedElement__unique()
{
    return m_ETypedElement__unique;
}
::ecore::EAttribute_ptr EcorePackage::getETypedElement__lowerBound()
{
    return m_ETypedElement__lowerBound;
}
::ecore::EAttribute_ptr EcorePackage::getETypedElement__upperBound()
{
    return m_ETypedElement__upperBound;
}
::ecore::EAttribute_ptr EcorePackage::getETypedElement__many()
{
    return m_ETypedElement__many;
}
::ecore::EAttribute_ptr EcorePackage::getETypedElement__required()
{
    return m_ETypedElement__required;
}
::ecore::EReference_ptr EcorePackage::getETypedElement__eType()
{
    return m_ETypedElement__eType;
}
::ecore::EReference_ptr EcorePackage::getETypedElement__eGenericType()
{
    return m_ETypedElement__eGenericType;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__changeable()
{
    return m_EStructuralFeature__changeable;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__volatile()
{
    return m_EStructuralFeature__volatile;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__transient()
{
    return m_EStructuralFeature__transient;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__defaultValueLiteral()
{
    return m_EStructuralFeature__defaultValueLiteral;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__defaultValue()
{
    return m_EStructuralFeature__defaultValue;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__unsettable()
{
    return m_EStructuralFeature__unsettable;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__derived()
{
    return m_EStructuralFeature__derived;
}
::ecore::EReference_ptr EcorePackage::getEStructuralFeature__eContainingClass()
{
    return m_EStructuralFeature__eContainingClass;
}
::ecore::EAttribute_ptr EcorePackage::getEAttribute__iD()
{
    return m_EAttribute__iD;
}
::ecore::EReference_ptr EcorePackage::getEAttribute__eAttributeType()
{
    return m_EAttribute__eAttributeType;
}
::ecore::EAttribute_ptr EcorePackage::getEAnnotation__source()
{
    return m_EAnnotation__source;
}
::ecore::EReference_ptr EcorePackage::getEAnnotation__details()
{
    return m_EAnnotation__details;
}
::ecore::EReference_ptr EcorePackage::getEAnnotation__eModelElement()
{
    return m_EAnnotation__eModelElement;
}
::ecore::EReference_ptr EcorePackage::getEAnnotation__contents()
{
    return m_EAnnotation__contents;
}
::ecore::EReference_ptr EcorePackage::getEAnnotation__references()
{
    return m_EAnnotation__references;
}
::ecore::EAttribute_ptr EcorePackage::getEClassifier__instanceClassName()
{
    return m_EClassifier__instanceClassName;
}
::ecore::EAttribute_ptr EcorePackage::getEClassifier__instanceClass()
{
    return m_EClassifier__instanceClass;
}
::ecore::EAttribute_ptr EcorePackage::getEClassifier__defaultValue()
{
    return m_EClassifier__defaultValue;
}
::ecore::EAttribute_ptr EcorePackage::getEClassifier__instanceTypeName()
{
    return m_EClassifier__instanceTypeName;
}
::ecore::EReference_ptr EcorePackage::getEClassifier__ePackage()
{
    return m_EClassifier__ePackage;
}
::ecore::EReference_ptr EcorePackage::getEClassifier__eTypeParameters()
{
    return m_EClassifier__eTypeParameters;
}
::ecore::EAttribute_ptr EcorePackage::getEClass__abstract()
{
    return m_EClass__abstract;
}
::ecore::EAttribute_ptr EcorePackage::getEClass__interface()
{
    return m_EClass__interface;
}
::ecore::EReference_ptr EcorePackage::getEClass__eSuperTypes()
{
    return m_EClass__eSuperTypes;
}
::ecore::EReference_ptr EcorePackage::getEClass__eOperations()
{
    return m_EClass__eOperations;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllAttributes()
{
    return m_EClass__eAllAttributes;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllReferences()
{
    return m_EClass__eAllReferences;
}
::ecore::EReference_ptr EcorePackage::getEClass__eReferences()
{
    return m_EClass__eReferences;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAttributes()
{
    return m_EClass__eAttributes;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllContainments()
{
    return m_EClass__eAllContainments;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllOperations()
{
    return m_EClass__eAllOperations;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllStructuralFeatures()
{
    return m_EClass__eAllStructuralFeatures;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllSuperTypes()
{
    return m_EClass__eAllSuperTypes;
}
::ecore::EReference_ptr EcorePackage::getEClass__eIDAttribute()
{
    return m_EClass__eIDAttribute;
}
::ecore::EReference_ptr EcorePackage::getEClass__eStructuralFeatures()
{
    return m_EClass__eStructuralFeatures;
}
::ecore::EReference_ptr EcorePackage::getEClass__eGenericSuperTypes()
{
    return m_EClass__eGenericSuperTypes;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllGenericSuperTypes()
{
    return m_EClass__eAllGenericSuperTypes;
}
::ecore::EAttribute_ptr EcorePackage::getEDataType__serializable()
{
    return m_EDataType__serializable;
}
::ecore::EReference_ptr EcorePackage::getEEnum__eLiterals()
{
    return m_EEnum__eLiterals;
}
::ecore::EAttribute_ptr EcorePackage::getEEnumLiteral__value()
{
    return m_EEnumLiteral__value;
}
::ecore::EAttribute_ptr EcorePackage::getEEnumLiteral__instance()
{
    return m_EEnumLiteral__instance;
}
::ecore::EAttribute_ptr EcorePackage::getEEnumLiteral__literal()
{
    return m_EEnumLiteral__literal;
}
::ecore::EReference_ptr EcorePackage::getEEnumLiteral__eEnum()
{
    return m_EEnumLiteral__eEnum;
}
::ecore::EReference_ptr EcorePackage::getEFactory__ePackage()
{
    return m_EFactory__ePackage;
}
::ecore::EReference_ptr EcorePackage::getEOperation__eContainingClass()
{
    return m_EOperation__eContainingClass;
}
::ecore::EReference_ptr EcorePackage::getEOperation__eTypeParameters()
{
    return m_EOperation__eTypeParameters;
}
::ecore::EReference_ptr EcorePackage::getEOperation__eParameters()
{
    return m_EOperation__eParameters;
}
::ecore::EReference_ptr EcorePackage::getEOperation__eExceptions()
{
    return m_EOperation__eExceptions;
}
::ecore::EReference_ptr EcorePackage::getEOperation__eGenericExceptions()
{
    return m_EOperation__eGenericExceptions;
}
::ecore::EAttribute_ptr EcorePackage::getEPackage__nsURI()
{
    return m_EPackage__nsURI;
}
::ecore::EAttribute_ptr EcorePackage::getEPackage__nsPrefix()
{
    return m_EPackage__nsPrefix;
}
::ecore::EReference_ptr EcorePackage::getEPackage__eFactoryInstance()
{
    return m_EPackage__eFactoryInstance;
}
::ecore::EReference_ptr EcorePackage::getEPackage__eClassifiers()
{
    return m_EPackage__eClassifiers;
}
::ecore::EReference_ptr EcorePackage::getEPackage__eSubpackages()
{
    return m_EPackage__eSubpackages;
}
::ecore::EReference_ptr EcorePackage::getEPackage__eSuperPackage()
{
    return m_EPackage__eSuperPackage;
}
::ecore::EReference_ptr EcorePackage::getEParameter__eOperation()
{
    return m_EParameter__eOperation;
}
::ecore::EAttribute_ptr EcorePackage::getEReference__containment()
{
    return m_EReference__containment;
}
::ecore::EAttribute_ptr EcorePackage::getEReference__container()
{
    return m_EReference__container;
}
::ecore::EAttribute_ptr EcorePackage::getEReference__resolveProxies()
{
    return m_EReference__resolveProxies;
}
::ecore::EReference_ptr EcorePackage::getEReference__eOpposite()
{
    return m_EReference__eOpposite;
}
::ecore::EReference_ptr EcorePackage::getEReference__eReferenceType()
{
    return m_EReference__eReferenceType;
}
::ecore::EReference_ptr EcorePackage::getEReference__eKeys()
{
    return m_EReference__eKeys;
}
::ecore::EAttribute_ptr EcorePackage::getEStringToStringMapEntry__key()
{
    return m_EStringToStringMapEntry__key;
}
::ecore::EAttribute_ptr EcorePackage::getEStringToStringMapEntry__value()
{
    return m_EStringToStringMapEntry__value;
}
::ecore::EReference_ptr EcorePackage::getEGenericType__eUpperBound()
{
    return m_EGenericType__eUpperBound;
}
::ecore::EReference_ptr EcorePackage::getEGenericType__eTypeArguments()
{
    return m_EGenericType__eTypeArguments;
}
::ecore::EReference_ptr EcorePackage::getEGenericType__eRawType()
{
    return m_EGenericType__eRawType;
}
::ecore::EReference_ptr EcorePackage::getEGenericType__eLowerBound()
{
    return m_EGenericType__eLowerBound;
}
::ecore::EReference_ptr EcorePackage::getEGenericType__eTypeParameter()
{
    return m_EGenericType__eTypeParameter;
}
::ecore::EReference_ptr EcorePackage::getEGenericType__eClassifier()
{
    return m_EGenericType__eClassifier;
}
::ecore::EReference_ptr EcorePackage::getETypeParameter__eBounds()
{
    return m_ETypeParameter__eBounds;
}

