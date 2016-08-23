// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/CodePackageImpl.cpp
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

#include <kdm/code/CodePackage.hpp>
#include <kdm/code/CodeFactory.hpp>
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
#include <kdm/source/SourceRef.hpp>
#include <kdm/action/EntryFlow.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/core/KDMEntity.hpp>

using namespace ::kdm::code;

CodePackage::CodePackage()
{

    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = CodeFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    // Create classes and their features

    // AbstractCodeElement
    m_AbstractCodeElementEClass = new ::ecore::EClass();
    m_AbstractCodeElementEClass->setClassifierID(ABSTRACTCODEELEMENT);
    m_AbstractCodeElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_AbstractCodeElementEClass);
    m_AbstractCodeElement__source = new ::ecore::EReference();
    m_AbstractCodeElement__source->setFeatureID(
            ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__SOURCE);
    m_AbstractCodeElementEClass->getEStructuralFeatures().push_back(
            m_AbstractCodeElement__source);
    m_AbstractCodeElement__comment = new ::ecore::EReference();
    m_AbstractCodeElement__comment->setFeatureID(
            ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__COMMENT);
    m_AbstractCodeElementEClass->getEStructuralFeatures().push_back(
            m_AbstractCodeElement__comment);
    m_AbstractCodeElement__codeRelation = new ::ecore::EReference();
    m_AbstractCodeElement__codeRelation->setFeatureID(
            ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__CODERELATION);
    m_AbstractCodeElementEClass->getEStructuralFeatures().push_back(
            m_AbstractCodeElement__codeRelation);

    // CodeItem
    m_CodeItemEClass = new ::ecore::EClass();
    m_CodeItemEClass->setClassifierID(CODEITEM);
    m_CodeItemEClass->setEPackage(this);
    getEClassifiers().push_back(m_CodeItemEClass);

    // ComputationalObject
    m_ComputationalObjectEClass = new ::ecore::EClass();
    m_ComputationalObjectEClass->setClassifierID(COMPUTATIONALOBJECT);
    m_ComputationalObjectEClass->setEPackage(this);
    getEClassifiers().push_back(m_ComputationalObjectEClass);

    // ControlElement
    m_ControlElementEClass = new ::ecore::EClass();
    m_ControlElementEClass->setClassifierID(CONTROLELEMENT);
    m_ControlElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_ControlElementEClass);
    m_ControlElement__type = new ::ecore::EReference();
    m_ControlElement__type->setFeatureID(
            ::kdm::code::CodePackage::CONTROLELEMENT__TYPE);
    m_ControlElementEClass->getEStructuralFeatures().push_back(
            m_ControlElement__type);
    m_ControlElement__entryFlow = new ::ecore::EReference();
    m_ControlElement__entryFlow->setFeatureID(
            ::kdm::code::CodePackage::CONTROLELEMENT__ENTRYFLOW);
    m_ControlElementEClass->getEStructuralFeatures().push_back(
            m_ControlElement__entryFlow);
    m_ControlElement__codeElement = new ::ecore::EReference();
    m_ControlElement__codeElement->setFeatureID(
            ::kdm::code::CodePackage::CONTROLELEMENT__CODEELEMENT);
    m_ControlElementEClass->getEStructuralFeatures().push_back(
            m_ControlElement__codeElement);

    // MethodUnit
    m_MethodUnitEClass = new ::ecore::EClass();
    m_MethodUnitEClass->setClassifierID(METHODUNIT);
    m_MethodUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_MethodUnitEClass);
    m_MethodUnit__kind = new ::ecore::EAttribute();
    m_MethodUnit__kind->setFeatureID(
            ::kdm::code::CodePackage::METHODUNIT__KIND);
    m_MethodUnitEClass->getEStructuralFeatures().push_back(m_MethodUnit__kind);
    m_MethodUnit__export = new ::ecore::EAttribute();
    m_MethodUnit__export->setFeatureID(
            ::kdm::code::CodePackage::METHODUNIT__EXPORT);
    m_MethodUnitEClass->getEStructuralFeatures().push_back(
            m_MethodUnit__export);

    // Module
    m_ModuleEClass = new ::ecore::EClass();
    m_ModuleEClass->setClassifierID(MODULE);
    m_ModuleEClass->setEPackage(this);
    getEClassifiers().push_back(m_ModuleEClass);
    m_Module__codeElement = new ::ecore::EReference();
    m_Module__codeElement->setFeatureID(
            ::kdm::code::CodePackage::MODULE__CODEELEMENT);
    m_ModuleEClass->getEStructuralFeatures().push_back(m_Module__codeElement);

    // CodeAssembly
    m_CodeAssemblyEClass = new ::ecore::EClass();
    m_CodeAssemblyEClass->setClassifierID(CODEASSEMBLY);
    m_CodeAssemblyEClass->setEPackage(this);
    getEClassifiers().push_back(m_CodeAssemblyEClass);

    // CallableUnit
    m_CallableUnitEClass = new ::ecore::EClass();
    m_CallableUnitEClass->setClassifierID(CALLABLEUNIT);
    m_CallableUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_CallableUnitEClass);
    m_CallableUnit__kind = new ::ecore::EAttribute();
    m_CallableUnit__kind->setFeatureID(
            ::kdm::code::CodePackage::CALLABLEUNIT__KIND);
    m_CallableUnitEClass->getEStructuralFeatures().push_back(
            m_CallableUnit__kind);

    // Datatype
    m_DatatypeEClass = new ::ecore::EClass();
    m_DatatypeEClass->setClassifierID(DATATYPE);
    m_DatatypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_DatatypeEClass);

    // TemplateUnit
    m_TemplateUnitEClass = new ::ecore::EClass();
    m_TemplateUnitEClass->setClassifierID(TEMPLATEUNIT);
    m_TemplateUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_TemplateUnitEClass);
    m_TemplateUnit__codeElement = new ::ecore::EReference();
    m_TemplateUnit__codeElement->setFeatureID(
            ::kdm::code::CodePackage::TEMPLATEUNIT__CODEELEMENT);
    m_TemplateUnitEClass->getEStructuralFeatures().push_back(
            m_TemplateUnit__codeElement);

    // TemplateParameter
    m_TemplateParameterEClass = new ::ecore::EClass();
    m_TemplateParameterEClass->setClassifierID(TEMPLATEPARAMETER);
    m_TemplateParameterEClass->setEPackage(this);
    getEClassifiers().push_back(m_TemplateParameterEClass);

    // AbstractCodeRelationship
    m_AbstractCodeRelationshipEClass = new ::ecore::EClass();
    m_AbstractCodeRelationshipEClass->setClassifierID(ABSTRACTCODERELATIONSHIP);
    m_AbstractCodeRelationshipEClass->setEPackage(this);
    getEClassifiers().push_back(m_AbstractCodeRelationshipEClass);

    // InstanceOf
    m_InstanceOfEClass = new ::ecore::EClass();
    m_InstanceOfEClass->setClassifierID(INSTANCEOF);
    m_InstanceOfEClass->setEPackage(this);
    getEClassifiers().push_back(m_InstanceOfEClass);
    m_InstanceOf__to = new ::ecore::EReference();
    m_InstanceOf__to->setFeatureID(::kdm::code::CodePackage::INSTANCEOF__TO);
    m_InstanceOfEClass->getEStructuralFeatures().push_back(m_InstanceOf__to);
    m_InstanceOf__from = new ::ecore::EReference();
    m_InstanceOf__from->setFeatureID(
            ::kdm::code::CodePackage::INSTANCEOF__FROM);
    m_InstanceOfEClass->getEStructuralFeatures().push_back(m_InstanceOf__from);

    // CompilationUnit
    m_CompilationUnitEClass = new ::ecore::EClass();
    m_CompilationUnitEClass->setClassifierID(COMPILATIONUNIT);
    m_CompilationUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_CompilationUnitEClass);

    // CodeModel
    m_CodeModelEClass = new ::ecore::EClass();
    m_CodeModelEClass->setClassifierID(CODEMODEL);
    m_CodeModelEClass->setEPackage(this);
    getEClassifiers().push_back(m_CodeModelEClass);
    m_CodeModel__codeElement = new ::ecore::EReference();
    m_CodeModel__codeElement->setFeatureID(
            ::kdm::code::CodePackage::CODEMODEL__CODEELEMENT);
    m_CodeModelEClass->getEStructuralFeatures().push_back(
            m_CodeModel__codeElement);

    // DerivedType
    m_DerivedTypeEClass = new ::ecore::EClass();
    m_DerivedTypeEClass->setClassifierID(DERIVEDTYPE);
    m_DerivedTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_DerivedTypeEClass);
    m_DerivedType__itemUnit = new ::ecore::EReference();
    m_DerivedType__itemUnit->setFeatureID(
            ::kdm::code::CodePackage::DERIVEDTYPE__ITEMUNIT);
    m_DerivedTypeEClass->getEStructuralFeatures().push_back(
            m_DerivedType__itemUnit);

    // ArrayType
    m_ArrayTypeEClass = new ::ecore::EClass();
    m_ArrayTypeEClass->setClassifierID(ARRAYTYPE);
    m_ArrayTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_ArrayTypeEClass);
    m_ArrayType__size = new ::ecore::EAttribute();
    m_ArrayType__size->setFeatureID(::kdm::code::CodePackage::ARRAYTYPE__SIZE);
    m_ArrayTypeEClass->getEStructuralFeatures().push_back(m_ArrayType__size);
    m_ArrayType__indexUnit = new ::ecore::EReference();
    m_ArrayType__indexUnit->setFeatureID(
            ::kdm::code::CodePackage::ARRAYTYPE__INDEXUNIT);
    m_ArrayTypeEClass->getEStructuralFeatures().push_back(
            m_ArrayType__indexUnit);

    // PrimitiveType
    m_PrimitiveTypeEClass = new ::ecore::EClass();
    m_PrimitiveTypeEClass->setClassifierID(PRIMITIVETYPE);
    m_PrimitiveTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_PrimitiveTypeEClass);

    // BooleanType
    m_BooleanTypeEClass = new ::ecore::EClass();
    m_BooleanTypeEClass->setClassifierID(BOOLEANTYPE);
    m_BooleanTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_BooleanTypeEClass);

    // CharType
    m_CharTypeEClass = new ::ecore::EClass();
    m_CharTypeEClass->setClassifierID(CHARTYPE);
    m_CharTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_CharTypeEClass);

    // ClassUnit
    m_ClassUnitEClass = new ::ecore::EClass();
    m_ClassUnitEClass->setClassifierID(CLASSUNIT);
    m_ClassUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_ClassUnitEClass);
    m_ClassUnit__isAbstract = new ::ecore::EAttribute();
    m_ClassUnit__isAbstract->setFeatureID(
            ::kdm::code::CodePackage::CLASSUNIT__ISABSTRACT);
    m_ClassUnitEClass->getEStructuralFeatures().push_back(
            m_ClassUnit__isAbstract);
    m_ClassUnit__codeElement = new ::ecore::EReference();
    m_ClassUnit__codeElement->setFeatureID(
            ::kdm::code::CodePackage::CLASSUNIT__CODEELEMENT);
    m_ClassUnitEClass->getEStructuralFeatures().push_back(
            m_ClassUnit__codeElement);

    // CompositeType
    m_CompositeTypeEClass = new ::ecore::EClass();
    m_CompositeTypeEClass->setClassifierID(COMPOSITETYPE);
    m_CompositeTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_CompositeTypeEClass);
    m_CompositeType__itemUnit = new ::ecore::EReference();
    m_CompositeType__itemUnit->setFeatureID(
            ::kdm::code::CodePackage::COMPOSITETYPE__ITEMUNIT);
    m_CompositeTypeEClass->getEStructuralFeatures().push_back(
            m_CompositeType__itemUnit);

    // RecordType
    m_RecordTypeEClass = new ::ecore::EClass();
    m_RecordTypeEClass->setClassifierID(RECORDTYPE);
    m_RecordTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_RecordTypeEClass);

    // EnumeratedType
    m_EnumeratedTypeEClass = new ::ecore::EClass();
    m_EnumeratedTypeEClass->setClassifierID(ENUMERATEDTYPE);
    m_EnumeratedTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_EnumeratedTypeEClass);
    m_EnumeratedType__value = new ::ecore::EReference();
    m_EnumeratedType__value->setFeatureID(
            ::kdm::code::CodePackage::ENUMERATEDTYPE__VALUE);
    m_EnumeratedTypeEClass->getEStructuralFeatures().push_back(
            m_EnumeratedType__value);

    // Extends
    m_ExtendsEClass = new ::ecore::EClass();
    m_ExtendsEClass->setClassifierID(EXTENDS);
    m_ExtendsEClass->setEPackage(this);
    getEClassifiers().push_back(m_ExtendsEClass);
    m_Extends__to = new ::ecore::EReference();
    m_Extends__to->setFeatureID(::kdm::code::CodePackage::EXTENDS__TO);
    m_ExtendsEClass->getEStructuralFeatures().push_back(m_Extends__to);
    m_Extends__from = new ::ecore::EReference();
    m_Extends__from->setFeatureID(::kdm::code::CodePackage::EXTENDS__FROM);
    m_ExtendsEClass->getEStructuralFeatures().push_back(m_Extends__from);

    // ScaledType
    m_ScaledTypeEClass = new ::ecore::EClass();
    m_ScaledTypeEClass->setClassifierID(SCALEDTYPE);
    m_ScaledTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_ScaledTypeEClass);

    // FloatType
    m_FloatTypeEClass = new ::ecore::EClass();
    m_FloatTypeEClass->setClassifierID(FLOATTYPE);
    m_FloatTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_FloatTypeEClass);

    // HasType
    m_HasTypeEClass = new ::ecore::EClass();
    m_HasTypeEClass->setClassifierID(HASTYPE);
    m_HasTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_HasTypeEClass);
    m_HasType__to = new ::ecore::EReference();
    m_HasType__to->setFeatureID(::kdm::code::CodePackage::HASTYPE__TO);
    m_HasTypeEClass->getEStructuralFeatures().push_back(m_HasType__to);
    m_HasType__from = new ::ecore::EReference();
    m_HasType__from->setFeatureID(::kdm::code::CodePackage::HASTYPE__FROM);
    m_HasTypeEClass->getEStructuralFeatures().push_back(m_HasType__from);

    // ImplementationOf
    m_ImplementationOfEClass = new ::ecore::EClass();
    m_ImplementationOfEClass->setClassifierID(IMPLEMENTATIONOF);
    m_ImplementationOfEClass->setEPackage(this);
    getEClassifiers().push_back(m_ImplementationOfEClass);
    m_ImplementationOf__to = new ::ecore::EReference();
    m_ImplementationOf__to->setFeatureID(
            ::kdm::code::CodePackage::IMPLEMENTATIONOF__TO);
    m_ImplementationOfEClass->getEStructuralFeatures().push_back(
            m_ImplementationOf__to);
    m_ImplementationOf__from = new ::ecore::EReference();
    m_ImplementationOf__from->setFeatureID(
            ::kdm::code::CodePackage::IMPLEMENTATIONOF__FROM);
    m_ImplementationOfEClass->getEStructuralFeatures().push_back(
            m_ImplementationOf__from);

    // Implements
    m_ImplementsEClass = new ::ecore::EClass();
    m_ImplementsEClass->setClassifierID(IMPLEMENTS);
    m_ImplementsEClass->setEPackage(this);
    getEClassifiers().push_back(m_ImplementsEClass);
    m_Implements__to = new ::ecore::EReference();
    m_Implements__to->setFeatureID(::kdm::code::CodePackage::IMPLEMENTS__TO);
    m_ImplementsEClass->getEStructuralFeatures().push_back(m_Implements__to);
    m_Implements__from = new ::ecore::EReference();
    m_Implements__from->setFeatureID(
            ::kdm::code::CodePackage::IMPLEMENTS__FROM);
    m_ImplementsEClass->getEStructuralFeatures().push_back(m_Implements__from);

    // IntegerType
    m_IntegerTypeEClass = new ::ecore::EClass();
    m_IntegerTypeEClass->setClassifierID(INTEGERTYPE);
    m_IntegerTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_IntegerTypeEClass);

    // InterfaceUnit
    m_InterfaceUnitEClass = new ::ecore::EClass();
    m_InterfaceUnitEClass->setClassifierID(INTERFACEUNIT);
    m_InterfaceUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_InterfaceUnitEClass);
    m_InterfaceUnit__codeElement = new ::ecore::EReference();
    m_InterfaceUnit__codeElement->setFeatureID(
            ::kdm::code::CodePackage::INTERFACEUNIT__CODEELEMENT);
    m_InterfaceUnitEClass->getEStructuralFeatures().push_back(
            m_InterfaceUnit__codeElement);

    // PointerType
    m_PointerTypeEClass = new ::ecore::EClass();
    m_PointerTypeEClass->setClassifierID(POINTERTYPE);
    m_PointerTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_PointerTypeEClass);

    // DefinedType
    m_DefinedTypeEClass = new ::ecore::EClass();
    m_DefinedTypeEClass->setClassifierID(DEFINEDTYPE);
    m_DefinedTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_DefinedTypeEClass);
    m_DefinedType__type = new ::ecore::EReference();
    m_DefinedType__type->setFeatureID(
            ::kdm::code::CodePackage::DEFINEDTYPE__TYPE);
    m_DefinedTypeEClass->getEStructuralFeatures().push_back(
            m_DefinedType__type);
    m_DefinedType__codeElement = new ::ecore::EReference();
    m_DefinedType__codeElement->setFeatureID(
            ::kdm::code::CodePackage::DEFINEDTYPE__CODEELEMENT);
    m_DefinedTypeEClass->getEStructuralFeatures().push_back(
            m_DefinedType__codeElement);

    // TypeUnit
    m_TypeUnitEClass = new ::ecore::EClass();
    m_TypeUnitEClass->setClassifierID(TYPEUNIT);
    m_TypeUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_TypeUnitEClass);

    // RangeType
    m_RangeTypeEClass = new ::ecore::EClass();
    m_RangeTypeEClass->setClassifierID(RANGETYPE);
    m_RangeTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_RangeTypeEClass);
    m_RangeType__lower = new ::ecore::EAttribute();
    m_RangeType__lower->setFeatureID(
            ::kdm::code::CodePackage::RANGETYPE__LOWER);
    m_RangeTypeEClass->getEStructuralFeatures().push_back(m_RangeType__lower);
    m_RangeType__upper = new ::ecore::EAttribute();
    m_RangeType__upper->setFeatureID(
            ::kdm::code::CodePackage::RANGETYPE__UPPER);
    m_RangeTypeEClass->getEStructuralFeatures().push_back(m_RangeType__upper);

    // Signature
    m_SignatureEClass = new ::ecore::EClass();
    m_SignatureEClass->setClassifierID(SIGNATURE);
    m_SignatureEClass->setEPackage(this);
    getEClassifiers().push_back(m_SignatureEClass);
    m_Signature__parameterUnit = new ::ecore::EReference();
    m_Signature__parameterUnit->setFeatureID(
            ::kdm::code::CodePackage::SIGNATURE__PARAMETERUNIT);
    m_SignatureEClass->getEStructuralFeatures().push_back(
            m_Signature__parameterUnit);

    // DataElement
    m_DataElementEClass = new ::ecore::EClass();
    m_DataElementEClass->setClassifierID(DATAELEMENT);
    m_DataElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_DataElementEClass);
    m_DataElement__ext = new ::ecore::EAttribute();
    m_DataElement__ext->setFeatureID(
            ::kdm::code::CodePackage::DATAELEMENT__EXT);
    m_DataElementEClass->getEStructuralFeatures().push_back(m_DataElement__ext);
    m_DataElement__size = new ::ecore::EAttribute();
    m_DataElement__size->setFeatureID(
            ::kdm::code::CodePackage::DATAELEMENT__SIZE);
    m_DataElementEClass->getEStructuralFeatures().push_back(
            m_DataElement__size);
    m_DataElement__type = new ::ecore::EReference();
    m_DataElement__type->setFeatureID(
            ::kdm::code::CodePackage::DATAELEMENT__TYPE);
    m_DataElementEClass->getEStructuralFeatures().push_back(
            m_DataElement__type);
    m_DataElement__codeElement = new ::ecore::EReference();
    m_DataElement__codeElement->setFeatureID(
            ::kdm::code::CodePackage::DATAELEMENT__CODEELEMENT);
    m_DataElementEClass->getEStructuralFeatures().push_back(
            m_DataElement__codeElement);

    // StringType
    m_StringTypeEClass = new ::ecore::EClass();
    m_StringTypeEClass->setClassifierID(STRINGTYPE);
    m_StringTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_StringTypeEClass);

    // ChoiceType
    m_ChoiceTypeEClass = new ::ecore::EClass();
    m_ChoiceTypeEClass->setClassifierID(CHOICETYPE);
    m_ChoiceTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_ChoiceTypeEClass);

    // NamespaceUnit
    m_NamespaceUnitEClass = new ::ecore::EClass();
    m_NamespaceUnitEClass->setClassifierID(NAMESPACEUNIT);
    m_NamespaceUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_NamespaceUnitEClass);
    m_NamespaceUnit__groupedCode = new ::ecore::EReference();
    m_NamespaceUnit__groupedCode->setFeatureID(
            ::kdm::code::CodePackage::NAMESPACEUNIT__GROUPEDCODE);
    m_NamespaceUnitEClass->getEStructuralFeatures().push_back(
            m_NamespaceUnit__groupedCode);

    // VisibleIn
    m_VisibleInEClass = new ::ecore::EClass();
    m_VisibleInEClass->setClassifierID(VISIBLEIN);
    m_VisibleInEClass->setEPackage(this);
    getEClassifiers().push_back(m_VisibleInEClass);
    m_VisibleIn__to = new ::ecore::EReference();
    m_VisibleIn__to->setFeatureID(::kdm::code::CodePackage::VISIBLEIN__TO);
    m_VisibleInEClass->getEStructuralFeatures().push_back(m_VisibleIn__to);
    m_VisibleIn__from = new ::ecore::EReference();
    m_VisibleIn__from->setFeatureID(::kdm::code::CodePackage::VISIBLEIN__FROM);
    m_VisibleInEClass->getEStructuralFeatures().push_back(m_VisibleIn__from);

    // CommentUnit
    m_CommentUnitEClass = new ::ecore::EClass();
    m_CommentUnitEClass->setClassifierID(COMMENTUNIT);
    m_CommentUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_CommentUnitEClass);
    m_CommentUnit__text = new ::ecore::EAttribute();
    m_CommentUnit__text->setFeatureID(
            ::kdm::code::CodePackage::COMMENTUNIT__TEXT);
    m_CommentUnitEClass->getEStructuralFeatures().push_back(
            m_CommentUnit__text);

    // SharedUnit
    m_SharedUnitEClass = new ::ecore::EClass();
    m_SharedUnitEClass->setClassifierID(SHAREDUNIT);
    m_SharedUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_SharedUnitEClass);

    // DecimalType
    m_DecimalTypeEClass = new ::ecore::EClass();
    m_DecimalTypeEClass->setClassifierID(DECIMALTYPE);
    m_DecimalTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_DecimalTypeEClass);

    // DateType
    m_DateTypeEClass = new ::ecore::EClass();
    m_DateTypeEClass->setClassifierID(DATETYPE);
    m_DateTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_DateTypeEClass);

    // TimeType
    m_TimeTypeEClass = new ::ecore::EClass();
    m_TimeTypeEClass->setClassifierID(TIMETYPE);
    m_TimeTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_TimeTypeEClass);

    // VoidType
    m_VoidTypeEClass = new ::ecore::EClass();
    m_VoidTypeEClass->setClassifierID(VOIDTYPE);
    m_VoidTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_VoidTypeEClass);

    // ValueElement
    m_ValueElementEClass = new ::ecore::EClass();
    m_ValueElementEClass->setClassifierID(VALUEELEMENT);
    m_ValueElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_ValueElementEClass);

    // Value
    m_ValueEClass = new ::ecore::EClass();
    m_ValueEClass->setClassifierID(VALUE);
    m_ValueEClass->setEPackage(this);
    getEClassifiers().push_back(m_ValueEClass);

    // ValueList
    m_ValueListEClass = new ::ecore::EClass();
    m_ValueListEClass->setClassifierID(VALUELIST);
    m_ValueListEClass->setEPackage(this);
    getEClassifiers().push_back(m_ValueListEClass);
    m_ValueList__valueElement = new ::ecore::EReference();
    m_ValueList__valueElement->setFeatureID(
            ::kdm::code::CodePackage::VALUELIST__VALUEELEMENT);
    m_ValueListEClass->getEStructuralFeatures().push_back(
            m_ValueList__valueElement);

    // StorableUnit
    m_StorableUnitEClass = new ::ecore::EClass();
    m_StorableUnitEClass->setClassifierID(STORABLEUNIT);
    m_StorableUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_StorableUnitEClass);
    m_StorableUnit__kind = new ::ecore::EAttribute();
    m_StorableUnit__kind->setFeatureID(
            ::kdm::code::CodePackage::STORABLEUNIT__KIND);
    m_StorableUnitEClass->getEStructuralFeatures().push_back(
            m_StorableUnit__kind);

    // MemberUnit
    m_MemberUnitEClass = new ::ecore::EClass();
    m_MemberUnitEClass->setClassifierID(MEMBERUNIT);
    m_MemberUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_MemberUnitEClass);
    m_MemberUnit__export = new ::ecore::EAttribute();
    m_MemberUnit__export->setFeatureID(
            ::kdm::code::CodePackage::MEMBERUNIT__EXPORT);
    m_MemberUnitEClass->getEStructuralFeatures().push_back(
            m_MemberUnit__export);

    // ParameterUnit
    m_ParameterUnitEClass = new ::ecore::EClass();
    m_ParameterUnitEClass->setClassifierID(PARAMETERUNIT);
    m_ParameterUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_ParameterUnitEClass);
    m_ParameterUnit__kind = new ::ecore::EAttribute();
    m_ParameterUnit__kind->setFeatureID(
            ::kdm::code::CodePackage::PARAMETERUNIT__KIND);
    m_ParameterUnitEClass->getEStructuralFeatures().push_back(
            m_ParameterUnit__kind);
    m_ParameterUnit__pos = new ::ecore::EAttribute();
    m_ParameterUnit__pos->setFeatureID(
            ::kdm::code::CodePackage::PARAMETERUNIT__POS);
    m_ParameterUnitEClass->getEStructuralFeatures().push_back(
            m_ParameterUnit__pos);

    // ItemUnit
    m_ItemUnitEClass = new ::ecore::EClass();
    m_ItemUnitEClass->setClassifierID(ITEMUNIT);
    m_ItemUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_ItemUnitEClass);

    // IndexUnit
    m_IndexUnitEClass = new ::ecore::EClass();
    m_IndexUnitEClass->setClassifierID(INDEXUNIT);
    m_IndexUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_IndexUnitEClass);

    // SynonymType
    m_SynonymTypeEClass = new ::ecore::EClass();
    m_SynonymTypeEClass->setClassifierID(SYNONYMTYPE);
    m_SynonymTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_SynonymTypeEClass);

    // SequenceType
    m_SequenceTypeEClass = new ::ecore::EClass();
    m_SequenceTypeEClass->setClassifierID(SEQUENCETYPE);
    m_SequenceTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_SequenceTypeEClass);
    m_SequenceType__size = new ::ecore::EAttribute();
    m_SequenceType__size->setFeatureID(
            ::kdm::code::CodePackage::SEQUENCETYPE__SIZE);
    m_SequenceTypeEClass->getEStructuralFeatures().push_back(
            m_SequenceType__size);

    // BagType
    m_BagTypeEClass = new ::ecore::EClass();
    m_BagTypeEClass->setClassifierID(BAGTYPE);
    m_BagTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_BagTypeEClass);
    m_BagType__size = new ::ecore::EAttribute();
    m_BagType__size->setFeatureID(::kdm::code::CodePackage::BAGTYPE__SIZE);
    m_BagTypeEClass->getEStructuralFeatures().push_back(m_BagType__size);

    // SetType
    m_SetTypeEClass = new ::ecore::EClass();
    m_SetTypeEClass->setClassifierID(SETTYPE);
    m_SetTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_SetTypeEClass);
    m_SetType__size = new ::ecore::EAttribute();
    m_SetType__size->setFeatureID(::kdm::code::CodePackage::SETTYPE__SIZE);
    m_SetTypeEClass->getEStructuralFeatures().push_back(m_SetType__size);

    // CodeElement
    m_CodeElementEClass = new ::ecore::EClass();
    m_CodeElementEClass->setClassifierID(CODEELEMENT);
    m_CodeElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_CodeElementEClass);

    // CodeRelationship
    m_CodeRelationshipEClass = new ::ecore::EClass();
    m_CodeRelationshipEClass->setClassifierID(CODERELATIONSHIP);
    m_CodeRelationshipEClass->setEPackage(this);
    getEClassifiers().push_back(m_CodeRelationshipEClass);
    m_CodeRelationship__to = new ::ecore::EReference();
    m_CodeRelationship__to->setFeatureID(
            ::kdm::code::CodePackage::CODERELATIONSHIP__TO);
    m_CodeRelationshipEClass->getEStructuralFeatures().push_back(
            m_CodeRelationship__to);
    m_CodeRelationship__from = new ::ecore::EReference();
    m_CodeRelationship__from->setFeatureID(
            ::kdm::code::CodePackage::CODERELATIONSHIP__FROM);
    m_CodeRelationshipEClass->getEStructuralFeatures().push_back(
            m_CodeRelationship__from);

    // LanguageUnit
    m_LanguageUnitEClass = new ::ecore::EClass();
    m_LanguageUnitEClass->setClassifierID(LANGUAGEUNIT);
    m_LanguageUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_LanguageUnitEClass);

    // OrdinalType
    m_OrdinalTypeEClass = new ::ecore::EClass();
    m_OrdinalTypeEClass->setClassifierID(ORDINALTYPE);
    m_OrdinalTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_OrdinalTypeEClass);

    // BitstringType
    m_BitstringTypeEClass = new ::ecore::EClass();
    m_BitstringTypeEClass->setClassifierID(BITSTRINGTYPE);
    m_BitstringTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_BitstringTypeEClass);

    // OctetType
    m_OctetTypeEClass = new ::ecore::EClass();
    m_OctetTypeEClass->setClassifierID(OCTETTYPE);
    m_OctetTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_OctetTypeEClass);

    // OctetstringType
    m_OctetstringTypeEClass = new ::ecore::EClass();
    m_OctetstringTypeEClass->setClassifierID(OCTETSTRINGTYPE);
    m_OctetstringTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_OctetstringTypeEClass);

    // BitType
    m_BitTypeEClass = new ::ecore::EClass();
    m_BitTypeEClass->setClassifierID(BITTYPE);
    m_BitTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_BitTypeEClass);

    // Imports
    m_ImportsEClass = new ::ecore::EClass();
    m_ImportsEClass->setClassifierID(IMPORTS);
    m_ImportsEClass->setEPackage(this);
    getEClassifiers().push_back(m_ImportsEClass);
    m_Imports__to = new ::ecore::EReference();
    m_Imports__to->setFeatureID(::kdm::code::CodePackage::IMPORTS__TO);
    m_ImportsEClass->getEStructuralFeatures().push_back(m_Imports__to);
    m_Imports__from = new ::ecore::EReference();
    m_Imports__from->setFeatureID(::kdm::code::CodePackage::IMPORTS__FROM);
    m_ImportsEClass->getEStructuralFeatures().push_back(m_Imports__from);

    // Package
    m_PackageEClass = new ::ecore::EClass();
    m_PackageEClass->setClassifierID(PACKAGE);
    m_PackageEClass->setEPackage(this);
    getEClassifiers().push_back(m_PackageEClass);

    // ParameterTo
    m_ParameterToEClass = new ::ecore::EClass();
    m_ParameterToEClass->setClassifierID(PARAMETERTO);
    m_ParameterToEClass->setEPackage(this);
    getEClassifiers().push_back(m_ParameterToEClass);
    m_ParameterTo__to = new ::ecore::EReference();
    m_ParameterTo__to->setFeatureID(::kdm::code::CodePackage::PARAMETERTO__TO);
    m_ParameterToEClass->getEStructuralFeatures().push_back(m_ParameterTo__to);
    m_ParameterTo__from = new ::ecore::EReference();
    m_ParameterTo__from->setFeatureID(
            ::kdm::code::CodePackage::PARAMETERTO__FROM);
    m_ParameterToEClass->getEStructuralFeatures().push_back(
            m_ParameterTo__from);

    // TemplateType
    m_TemplateTypeEClass = new ::ecore::EClass();
    m_TemplateTypeEClass->setClassifierID(TEMPLATETYPE);
    m_TemplateTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_TemplateTypeEClass);

    // PreprocessorDirective
    m_PreprocessorDirectiveEClass = new ::ecore::EClass();
    m_PreprocessorDirectiveEClass->setClassifierID(PREPROCESSORDIRECTIVE);
    m_PreprocessorDirectiveEClass->setEPackage(this);
    getEClassifiers().push_back(m_PreprocessorDirectiveEClass);
    m_PreprocessorDirective__codeElement = new ::ecore::EReference();
    m_PreprocessorDirective__codeElement->setFeatureID(
            ::kdm::code::CodePackage::PREPROCESSORDIRECTIVE__CODEELEMENT);
    m_PreprocessorDirectiveEClass->getEStructuralFeatures().push_back(
            m_PreprocessorDirective__codeElement);

    // MacroDirective
    m_MacroDirectiveEClass = new ::ecore::EClass();
    m_MacroDirectiveEClass->setClassifierID(MACRODIRECTIVE);
    m_MacroDirectiveEClass->setEPackage(this);
    getEClassifiers().push_back(m_MacroDirectiveEClass);

    // MacroUnit
    m_MacroUnitEClass = new ::ecore::EClass();
    m_MacroUnitEClass->setClassifierID(MACROUNIT);
    m_MacroUnitEClass->setEPackage(this);
    getEClassifiers().push_back(m_MacroUnitEClass);
    m_MacroUnit__kind = new ::ecore::EAttribute();
    m_MacroUnit__kind->setFeatureID(::kdm::code::CodePackage::MACROUNIT__KIND);
    m_MacroUnitEClass->getEStructuralFeatures().push_back(m_MacroUnit__kind);

    // ConditionalDirective
    m_ConditionalDirectiveEClass = new ::ecore::EClass();
    m_ConditionalDirectiveEClass->setClassifierID(CONDITIONALDIRECTIVE);
    m_ConditionalDirectiveEClass->setEPackage(this);
    getEClassifiers().push_back(m_ConditionalDirectiveEClass);

    // IncludeDirective
    m_IncludeDirectiveEClass = new ::ecore::EClass();
    m_IncludeDirectiveEClass->setClassifierID(INCLUDEDIRECTIVE);
    m_IncludeDirectiveEClass->setEPackage(this);
    getEClassifiers().push_back(m_IncludeDirectiveEClass);

    // VariantTo
    m_VariantToEClass = new ::ecore::EClass();
    m_VariantToEClass->setClassifierID(VARIANTTO);
    m_VariantToEClass->setEPackage(this);
    getEClassifiers().push_back(m_VariantToEClass);
    m_VariantTo__to = new ::ecore::EReference();
    m_VariantTo__to->setFeatureID(::kdm::code::CodePackage::VARIANTTO__TO);
    m_VariantToEClass->getEStructuralFeatures().push_back(m_VariantTo__to);
    m_VariantTo__from = new ::ecore::EReference();
    m_VariantTo__from->setFeatureID(::kdm::code::CodePackage::VARIANTTO__FROM);
    m_VariantToEClass->getEStructuralFeatures().push_back(m_VariantTo__from);

    // Expands
    m_ExpandsEClass = new ::ecore::EClass();
    m_ExpandsEClass->setClassifierID(EXPANDS);
    m_ExpandsEClass->setEPackage(this);
    getEClassifiers().push_back(m_ExpandsEClass);
    m_Expands__to = new ::ecore::EReference();
    m_Expands__to->setFeatureID(::kdm::code::CodePackage::EXPANDS__TO);
    m_ExpandsEClass->getEStructuralFeatures().push_back(m_Expands__to);
    m_Expands__from = new ::ecore::EReference();
    m_Expands__from->setFeatureID(::kdm::code::CodePackage::EXPANDS__FROM);
    m_ExpandsEClass->getEStructuralFeatures().push_back(m_Expands__from);

    // Redefines
    m_RedefinesEClass = new ::ecore::EClass();
    m_RedefinesEClass->setClassifierID(REDEFINES);
    m_RedefinesEClass->setEPackage(this);
    getEClassifiers().push_back(m_RedefinesEClass);
    m_Redefines__to = new ::ecore::EReference();
    m_Redefines__to->setFeatureID(::kdm::code::CodePackage::REDEFINES__TO);
    m_RedefinesEClass->getEStructuralFeatures().push_back(m_Redefines__to);
    m_Redefines__from = new ::ecore::EReference();
    m_Redefines__from->setFeatureID(::kdm::code::CodePackage::REDEFINES__FROM);
    m_RedefinesEClass->getEStructuralFeatures().push_back(m_Redefines__from);

    // GeneratedFrom
    m_GeneratedFromEClass = new ::ecore::EClass();
    m_GeneratedFromEClass->setClassifierID(GENERATEDFROM);
    m_GeneratedFromEClass->setEPackage(this);
    getEClassifiers().push_back(m_GeneratedFromEClass);
    m_GeneratedFrom__to = new ::ecore::EReference();
    m_GeneratedFrom__to->setFeatureID(
            ::kdm::code::CodePackage::GENERATEDFROM__TO);
    m_GeneratedFromEClass->getEStructuralFeatures().push_back(
            m_GeneratedFrom__to);
    m_GeneratedFrom__from = new ::ecore::EReference();
    m_GeneratedFrom__from->setFeatureID(
            ::kdm::code::CodePackage::GENERATEDFROM__FROM);
    m_GeneratedFromEClass->getEStructuralFeatures().push_back(
            m_GeneratedFrom__from);

    // Includes
    m_IncludesEClass = new ::ecore::EClass();
    m_IncludesEClass->setClassifierID(INCLUDES);
    m_IncludesEClass->setEPackage(this);
    getEClassifiers().push_back(m_IncludesEClass);
    m_Includes__to = new ::ecore::EReference();
    m_Includes__to->setFeatureID(::kdm::code::CodePackage::INCLUDES__TO);
    m_IncludesEClass->getEStructuralFeatures().push_back(m_Includes__to);
    m_Includes__from = new ::ecore::EReference();
    m_Includes__from->setFeatureID(::kdm::code::CodePackage::INCLUDES__FROM);
    m_IncludesEClass->getEStructuralFeatures().push_back(m_Includes__from);

    // HasValue
    m_HasValueEClass = new ::ecore::EClass();
    m_HasValueEClass->setClassifierID(HASVALUE);
    m_HasValueEClass->setEPackage(this);
    getEClassifiers().push_back(m_HasValueEClass);
    m_HasValue__to = new ::ecore::EReference();
    m_HasValue__to->setFeatureID(::kdm::code::CodePackage::HASVALUE__TO);
    m_HasValueEClass->getEStructuralFeatures().push_back(m_HasValue__to);
    m_HasValue__from = new ::ecore::EReference();
    m_HasValue__from->setFeatureID(::kdm::code::CodePackage::HASVALUE__FROM);
    m_HasValueEClass->getEStructuralFeatures().push_back(m_HasValue__from);

    // Create enums

    m_MethodKindEEnum = new ::ecore::EEnum();
    m_MethodKindEEnum->setClassifierID(METHODKIND);
    m_MethodKindEEnum->setEPackage(this);
    getEClassifiers().push_back(m_MethodKindEEnum);

    m_ParameterKindEEnum = new ::ecore::EEnum();
    m_ParameterKindEEnum->setClassifierID(PARAMETERKIND);
    m_ParameterKindEEnum->setEPackage(this);
    getEClassifiers().push_back(m_ParameterKindEEnum);

    m_ExportKindEEnum = new ::ecore::EEnum();
    m_ExportKindEEnum->setClassifierID(EXPORTKIND);
    m_ExportKindEEnum->setEPackage(this);
    getEClassifiers().push_back(m_ExportKindEEnum);

    m_StorableKindEEnum = new ::ecore::EEnum();
    m_StorableKindEEnum->setClassifierID(STORABLEKIND);
    m_StorableKindEEnum->setEPackage(this);
    getEClassifiers().push_back(m_StorableKindEEnum);

    m_CallableKindEEnum = new ::ecore::EEnum();
    m_CallableKindEEnum->setClassifierID(CALLABLEKIND);
    m_CallableKindEEnum->setEPackage(this);
    getEClassifiers().push_back(m_CallableKindEEnum);

    m_MacroKindEEnum = new ::ecore::EEnum();
    m_MacroKindEEnum->setClassifierID(MACROKIND);
    m_MacroKindEEnum->setEPackage(this);
    getEClassifiers().push_back(m_MacroKindEEnum);

    // Create data types

    // Initialize package
    setName("code");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_AbstractCodeElementEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMEntity());
    m_CodeItemEClass->getESuperTypes().push_back(m_AbstractCodeElementEClass);
    m_ComputationalObjectEClass->getESuperTypes().push_back(m_CodeItemEClass);
    m_ControlElementEClass->getESuperTypes().push_back(
            m_ComputationalObjectEClass);
    m_MethodUnitEClass->getESuperTypes().push_back(m_ControlElementEClass);
    m_ModuleEClass->getESuperTypes().push_back(m_CodeItemEClass);
    m_CodeAssemblyEClass->getESuperTypes().push_back(m_ModuleEClass);
    m_CallableUnitEClass->getESuperTypes().push_back(m_ControlElementEClass);
    m_DatatypeEClass->getESuperTypes().push_back(m_CodeItemEClass);
    m_TemplateUnitEClass->getESuperTypes().push_back(m_DatatypeEClass);
    m_TemplateParameterEClass->getESuperTypes().push_back(m_DatatypeEClass);
    m_AbstractCodeRelationshipEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMRelationship());
    m_InstanceOfEClass->getESuperTypes().push_back(
            m_AbstractCodeRelationshipEClass);
    m_CompilationUnitEClass->getESuperTypes().push_back(m_ModuleEClass);
    m_CodeModelEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::kdm::KdmPackage* >(::kdm::kdm::KdmPackage::_instance())->getKDMModel());
    m_DerivedTypeEClass->getESuperTypes().push_back(m_DatatypeEClass);
    m_ArrayTypeEClass->getESuperTypes().push_back(m_DerivedTypeEClass);
    m_PrimitiveTypeEClass->getESuperTypes().push_back(m_DatatypeEClass);
    m_BooleanTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
    m_CharTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
    m_ClassUnitEClass->getESuperTypes().push_back(m_DatatypeEClass);
    m_CompositeTypeEClass->getESuperTypes().push_back(m_DatatypeEClass);
    m_RecordTypeEClass->getESuperTypes().push_back(m_CompositeTypeEClass);
    m_EnumeratedTypeEClass->getESuperTypes().push_back(m_DatatypeEClass);
    m_ExtendsEClass->getESuperTypes().push_back(
            m_AbstractCodeRelationshipEClass);
    m_ScaledTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
    m_FloatTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
    m_HasTypeEClass->getESuperTypes().push_back(
            m_AbstractCodeRelationshipEClass);
    m_ImplementationOfEClass->getESuperTypes().push_back(
            m_AbstractCodeRelationshipEClass);
    m_ImplementsEClass->getESuperTypes().push_back(
            m_AbstractCodeRelationshipEClass);
    m_IntegerTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
    m_InterfaceUnitEClass->getESuperTypes().push_back(m_DatatypeEClass);
    m_PointerTypeEClass->getESuperTypes().push_back(m_DerivedTypeEClass);
    m_DefinedTypeEClass->getESuperTypes().push_back(m_DatatypeEClass);
    m_TypeUnitEClass->getESuperTypes().push_back(m_DefinedTypeEClass);
    m_RangeTypeEClass->getESuperTypes().push_back(m_DerivedTypeEClass);
    m_SignatureEClass->getESuperTypes().push_back(m_DatatypeEClass);
    m_DataElementEClass->getESuperTypes().push_back(
            m_ComputationalObjectEClass);
    m_StringTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
    m_ChoiceTypeEClass->getESuperTypes().push_back(m_CompositeTypeEClass);
    m_NamespaceUnitEClass->getESuperTypes().push_back(m_CodeItemEClass);
    m_VisibleInEClass->getESuperTypes().push_back(
            m_AbstractCodeRelationshipEClass);
    m_CommentUnitEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getModelElement());
    m_SharedUnitEClass->getESuperTypes().push_back(m_CompilationUnitEClass);
    m_DecimalTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
    m_DateTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
    m_TimeTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
    m_VoidTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
    m_ValueElementEClass->getESuperTypes().push_back(m_DataElementEClass);
    m_ValueEClass->getESuperTypes().push_back(m_ValueElementEClass);
    m_ValueListEClass->getESuperTypes().push_back(m_ValueElementEClass);
    m_StorableUnitEClass->getESuperTypes().push_back(m_DataElementEClass);
    m_MemberUnitEClass->getESuperTypes().push_back(m_DataElementEClass);
    m_ParameterUnitEClass->getESuperTypes().push_back(m_DataElementEClass);
    m_ItemUnitEClass->getESuperTypes().push_back(m_DataElementEClass);
    m_IndexUnitEClass->getESuperTypes().push_back(m_DataElementEClass);
    m_SynonymTypeEClass->getESuperTypes().push_back(m_DefinedTypeEClass);
    m_SequenceTypeEClass->getESuperTypes().push_back(m_DerivedTypeEClass);
    m_BagTypeEClass->getESuperTypes().push_back(m_DerivedTypeEClass);
    m_SetTypeEClass->getESuperTypes().push_back(m_DerivedTypeEClass);
    m_CodeElementEClass->getESuperTypes().push_back(m_CodeItemEClass);
    m_CodeRelationshipEClass->getESuperTypes().push_back(
            m_AbstractCodeRelationshipEClass);
    m_LanguageUnitEClass->getESuperTypes().push_back(m_ModuleEClass);
    m_OrdinalTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
    m_BitstringTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
    m_OctetTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
    m_OctetstringTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
    m_BitTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
    m_ImportsEClass->getESuperTypes().push_back(
            m_AbstractCodeRelationshipEClass);
    m_PackageEClass->getESuperTypes().push_back(m_ModuleEClass);
    m_ParameterToEClass->getESuperTypes().push_back(
            m_AbstractCodeRelationshipEClass);
    m_TemplateTypeEClass->getESuperTypes().push_back(m_DatatypeEClass);
    m_PreprocessorDirectiveEClass->getESuperTypes().push_back(
            m_AbstractCodeElementEClass);
    m_MacroDirectiveEClass->getESuperTypes().push_back(
            m_PreprocessorDirectiveEClass);
    m_MacroUnitEClass->getESuperTypes().push_back(
            m_PreprocessorDirectiveEClass);
    m_ConditionalDirectiveEClass->getESuperTypes().push_back(
            m_PreprocessorDirectiveEClass);
    m_IncludeDirectiveEClass->getESuperTypes().push_back(
            m_PreprocessorDirectiveEClass);
    m_VariantToEClass->getESuperTypes().push_back(
            m_AbstractCodeRelationshipEClass);
    m_ExpandsEClass->getESuperTypes().push_back(
            m_AbstractCodeRelationshipEClass);
    m_RedefinesEClass->getESuperTypes().push_back(
            m_AbstractCodeRelationshipEClass);
    m_GeneratedFromEClass->getESuperTypes().push_back(
            m_AbstractCodeRelationshipEClass);
    m_IncludesEClass->getESuperTypes().push_back(
            m_AbstractCodeRelationshipEClass);
    m_HasValueEClass->getESuperTypes().push_back(
            m_AbstractCodeRelationshipEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // AbstractCodeElement
    m_AbstractCodeElementEClass->setName("AbstractCodeElement");
    m_AbstractCodeElementEClass->setAbstract(true);
    m_AbstractCodeElementEClass->setInterface(false);
    m_AbstractCodeElement__source->setEType(
            dynamic_cast< ::kdm::source::SourcePackage* >(::kdm::source::SourcePackage::_instance())->getSourceRef());
    m_AbstractCodeElement__source->setName("source");
    m_AbstractCodeElement__source->setDefaultValueLiteral("");
    m_AbstractCodeElement__source->setLowerBound(0);
    m_AbstractCodeElement__source->setUpperBound(-1);
    m_AbstractCodeElement__source->setTransient(false);
    m_AbstractCodeElement__source->setVolatile(false);
    m_AbstractCodeElement__source->setChangeable(true);
    m_AbstractCodeElement__source->setContainment(true);
    m_AbstractCodeElement__source->setResolveProxies(true);
    m_AbstractCodeElement__source->setUnique(true);
    m_AbstractCodeElement__source->setDerived(false);
    m_AbstractCodeElement__source->setOrdered(false);
    m_AbstractCodeElement__comment->setEType(m_CommentUnitEClass);
    m_AbstractCodeElement__comment->setName("comment");
    m_AbstractCodeElement__comment->setDefaultValueLiteral("");
    m_AbstractCodeElement__comment->setLowerBound(0);
    m_AbstractCodeElement__comment->setUpperBound(-1);
    m_AbstractCodeElement__comment->setTransient(false);
    m_AbstractCodeElement__comment->setVolatile(false);
    m_AbstractCodeElement__comment->setChangeable(true);
    m_AbstractCodeElement__comment->setContainment(true);
    m_AbstractCodeElement__comment->setResolveProxies(true);
    m_AbstractCodeElement__comment->setUnique(true);
    m_AbstractCodeElement__comment->setDerived(false);
    m_AbstractCodeElement__comment->setOrdered(false);
    m_AbstractCodeElement__codeRelation->setEType(
            m_AbstractCodeRelationshipEClass);
    m_AbstractCodeElement__codeRelation->setName("codeRelation");
    m_AbstractCodeElement__codeRelation->setDefaultValueLiteral("");
    m_AbstractCodeElement__codeRelation->setLowerBound(0);
    m_AbstractCodeElement__codeRelation->setUpperBound(-1);
    m_AbstractCodeElement__codeRelation->setTransient(false);
    m_AbstractCodeElement__codeRelation->setVolatile(false);
    m_AbstractCodeElement__codeRelation->setChangeable(true);
    m_AbstractCodeElement__codeRelation->setContainment(true);
    m_AbstractCodeElement__codeRelation->setResolveProxies(true);
    m_AbstractCodeElement__codeRelation->setUnique(true);
    m_AbstractCodeElement__codeRelation->setDerived(false);
    m_AbstractCodeElement__codeRelation->setOrdered(false);
    // CodeItem
    m_CodeItemEClass->setName("CodeItem");
    m_CodeItemEClass->setAbstract(true);
    m_CodeItemEClass->setInterface(false);
    // ComputationalObject
    m_ComputationalObjectEClass->setName("ComputationalObject");
    m_ComputationalObjectEClass->setAbstract(true);
    m_ComputationalObjectEClass->setInterface(false);
    // ControlElement
    m_ControlElementEClass->setName("ControlElement");
    m_ControlElementEClass->setAbstract(false);
    m_ControlElementEClass->setInterface(false);
    m_ControlElement__type->setEType(m_DatatypeEClass);
    m_ControlElement__type->setName("type");
    m_ControlElement__type->setDefaultValueLiteral("");
    m_ControlElement__type->setLowerBound(0);
    m_ControlElement__type->setUpperBound(1);
    m_ControlElement__type->setTransient(false);
    m_ControlElement__type->setVolatile(false);
    m_ControlElement__type->setChangeable(true);
    m_ControlElement__type->setContainment(false);
    m_ControlElement__type->setResolveProxies(true);
    m_ControlElement__type->setUnique(true);
    m_ControlElement__type->setDerived(false);
    m_ControlElement__type->setOrdered(false);
    m_ControlElement__entryFlow->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getEntryFlow());
    m_ControlElement__entryFlow->setName("entryFlow");
    m_ControlElement__entryFlow->setDefaultValueLiteral("");
    m_ControlElement__entryFlow->setLowerBound(0);
    m_ControlElement__entryFlow->setUpperBound(-1);
    m_ControlElement__entryFlow->setTransient(false);
    m_ControlElement__entryFlow->setVolatile(false);
    m_ControlElement__entryFlow->setChangeable(true);
    m_ControlElement__entryFlow->setContainment(true);
    m_ControlElement__entryFlow->setResolveProxies(true);
    m_ControlElement__entryFlow->setUnique(true);
    m_ControlElement__entryFlow->setDerived(false);
    m_ControlElement__entryFlow->setOrdered(false);
    m_ControlElement__codeElement->setEType(m_AbstractCodeElementEClass);
    m_ControlElement__codeElement->setName("codeElement");
    m_ControlElement__codeElement->setDefaultValueLiteral("");
    m_ControlElement__codeElement->setLowerBound(0);
    m_ControlElement__codeElement->setUpperBound(-1);
    m_ControlElement__codeElement->setTransient(false);
    m_ControlElement__codeElement->setVolatile(false);
    m_ControlElement__codeElement->setChangeable(true);
    m_ControlElement__codeElement->setContainment(true);
    m_ControlElement__codeElement->setResolveProxies(true);
    m_ControlElement__codeElement->setUnique(true);
    m_ControlElement__codeElement->setDerived(false);
    m_ControlElement__codeElement->setOrdered(true);
    // MethodUnit
    m_MethodUnitEClass->setName("MethodUnit");
    m_MethodUnitEClass->setAbstract(false);
    m_MethodUnitEClass->setInterface(false);
    m_MethodUnit__kind->setEType(m_MethodKindEEnum);
    m_MethodUnit__kind->setName("kind");
    m_MethodUnit__kind->setDefaultValueLiteral("");
    m_MethodUnit__kind->setLowerBound(0);
    m_MethodUnit__kind->setUpperBound(1);
    m_MethodUnit__kind->setTransient(false);
    m_MethodUnit__kind->setVolatile(false);
    m_MethodUnit__kind->setChangeable(true);
    m_MethodUnit__kind->setUnsettable(false);
    m_MethodUnit__kind->setID(false);
    m_MethodUnit__kind->setUnique(false);
    m_MethodUnit__kind->setDerived(false);
    m_MethodUnit__kind->setOrdered(false);
    m_MethodUnit__export->setEType(m_ExportKindEEnum);
    m_MethodUnit__export->setName("export");
    m_MethodUnit__export->setDefaultValueLiteral("");
    m_MethodUnit__export->setLowerBound(0);
    m_MethodUnit__export->setUpperBound(1);
    m_MethodUnit__export->setTransient(false);
    m_MethodUnit__export->setVolatile(false);
    m_MethodUnit__export->setChangeable(true);
    m_MethodUnit__export->setUnsettable(false);
    m_MethodUnit__export->setID(false);
    m_MethodUnit__export->setUnique(false);
    m_MethodUnit__export->setDerived(false);
    m_MethodUnit__export->setOrdered(false);
    // Module
    m_ModuleEClass->setName("Module");
    m_ModuleEClass->setAbstract(false);
    m_ModuleEClass->setInterface(false);
    m_Module__codeElement->setEType(m_AbstractCodeElementEClass);
    m_Module__codeElement->setName("codeElement");
    m_Module__codeElement->setDefaultValueLiteral("");
    m_Module__codeElement->setLowerBound(0);
    m_Module__codeElement->setUpperBound(-1);
    m_Module__codeElement->setTransient(false);
    m_Module__codeElement->setVolatile(false);
    m_Module__codeElement->setChangeable(true);
    m_Module__codeElement->setContainment(true);
    m_Module__codeElement->setResolveProxies(true);
    m_Module__codeElement->setUnique(true);
    m_Module__codeElement->setDerived(false);
    m_Module__codeElement->setOrdered(true);
    // CodeAssembly
    m_CodeAssemblyEClass->setName("CodeAssembly");
    m_CodeAssemblyEClass->setAbstract(false);
    m_CodeAssemblyEClass->setInterface(false);
    // CallableUnit
    m_CallableUnitEClass->setName("CallableUnit");
    m_CallableUnitEClass->setAbstract(false);
    m_CallableUnitEClass->setInterface(false);
    m_CallableUnit__kind->setEType(m_CallableKindEEnum);
    m_CallableUnit__kind->setName("kind");
    m_CallableUnit__kind->setDefaultValueLiteral("");
    m_CallableUnit__kind->setLowerBound(0);
    m_CallableUnit__kind->setUpperBound(1);
    m_CallableUnit__kind->setTransient(false);
    m_CallableUnit__kind->setVolatile(false);
    m_CallableUnit__kind->setChangeable(true);
    m_CallableUnit__kind->setUnsettable(false);
    m_CallableUnit__kind->setID(false);
    m_CallableUnit__kind->setUnique(false);
    m_CallableUnit__kind->setDerived(false);
    m_CallableUnit__kind->setOrdered(false);
    // Datatype
    m_DatatypeEClass->setName("Datatype");
    m_DatatypeEClass->setAbstract(true);
    m_DatatypeEClass->setInterface(false);
    // TemplateUnit
    m_TemplateUnitEClass->setName("TemplateUnit");
    m_TemplateUnitEClass->setAbstract(false);
    m_TemplateUnitEClass->setInterface(false);
    m_TemplateUnit__codeElement->setEType(m_CodeItemEClass);
    m_TemplateUnit__codeElement->setName("codeElement");
    m_TemplateUnit__codeElement->setDefaultValueLiteral("");
    m_TemplateUnit__codeElement->setLowerBound(0);
    m_TemplateUnit__codeElement->setUpperBound(-1);
    m_TemplateUnit__codeElement->setTransient(false);
    m_TemplateUnit__codeElement->setVolatile(false);
    m_TemplateUnit__codeElement->setChangeable(true);
    m_TemplateUnit__codeElement->setContainment(true);
    m_TemplateUnit__codeElement->setResolveProxies(true);
    m_TemplateUnit__codeElement->setUnique(true);
    m_TemplateUnit__codeElement->setDerived(false);
    m_TemplateUnit__codeElement->setOrdered(true);
    // TemplateParameter
    m_TemplateParameterEClass->setName("TemplateParameter");
    m_TemplateParameterEClass->setAbstract(false);
    m_TemplateParameterEClass->setInterface(false);
    // AbstractCodeRelationship
    m_AbstractCodeRelationshipEClass->setName("AbstractCodeRelationship");
    m_AbstractCodeRelationshipEClass->setAbstract(true);
    m_AbstractCodeRelationshipEClass->setInterface(false);
    // InstanceOf
    m_InstanceOfEClass->setName("InstanceOf");
    m_InstanceOfEClass->setAbstract(false);
    m_InstanceOfEClass->setInterface(false);
    m_InstanceOf__to->setEType(m_TemplateUnitEClass);
    m_InstanceOf__to->setName("to");
    m_InstanceOf__to->setDefaultValueLiteral("");
    m_InstanceOf__to->setLowerBound(1);
    m_InstanceOf__to->setUpperBound(1);
    m_InstanceOf__to->setTransient(false);
    m_InstanceOf__to->setVolatile(false);
    m_InstanceOf__to->setChangeable(true);
    m_InstanceOf__to->setContainment(false);
    m_InstanceOf__to->setResolveProxies(true);
    m_InstanceOf__to->setUnique(true);
    m_InstanceOf__to->setDerived(false);
    m_InstanceOf__to->setOrdered(false);
    m_InstanceOf__from->setEType(m_AbstractCodeElementEClass);
    m_InstanceOf__from->setName("from");
    m_InstanceOf__from->setDefaultValueLiteral("");
    m_InstanceOf__from->setLowerBound(1);
    m_InstanceOf__from->setUpperBound(1);
    m_InstanceOf__from->setTransient(false);
    m_InstanceOf__from->setVolatile(false);
    m_InstanceOf__from->setChangeable(true);
    m_InstanceOf__from->setContainment(false);
    m_InstanceOf__from->setResolveProxies(true);
    m_InstanceOf__from->setUnique(true);
    m_InstanceOf__from->setDerived(false);
    m_InstanceOf__from->setOrdered(false);
    // CompilationUnit
    m_CompilationUnitEClass->setName("CompilationUnit");
    m_CompilationUnitEClass->setAbstract(false);
    m_CompilationUnitEClass->setInterface(false);
    // CodeModel
    m_CodeModelEClass->setName("CodeModel");
    m_CodeModelEClass->setAbstract(false);
    m_CodeModelEClass->setInterface(false);
    m_CodeModel__codeElement->setEType(m_AbstractCodeElementEClass);
    m_CodeModel__codeElement->setName("codeElement");
    m_CodeModel__codeElement->setDefaultValueLiteral("");
    m_CodeModel__codeElement->setLowerBound(0);
    m_CodeModel__codeElement->setUpperBound(-1);
    m_CodeModel__codeElement->setTransient(false);
    m_CodeModel__codeElement->setVolatile(false);
    m_CodeModel__codeElement->setChangeable(true);
    m_CodeModel__codeElement->setContainment(true);
    m_CodeModel__codeElement->setResolveProxies(true);
    m_CodeModel__codeElement->setUnique(true);
    m_CodeModel__codeElement->setDerived(false);
    m_CodeModel__codeElement->setOrdered(false);
    // DerivedType
    m_DerivedTypeEClass->setName("DerivedType");
    m_DerivedTypeEClass->setAbstract(false);
    m_DerivedTypeEClass->setInterface(false);
    m_DerivedType__itemUnit->setEType(m_ItemUnitEClass);
    m_DerivedType__itemUnit->setName("itemUnit");
    m_DerivedType__itemUnit->setDefaultValueLiteral("");
    m_DerivedType__itemUnit->setLowerBound(1);
    m_DerivedType__itemUnit->setUpperBound(1);
    m_DerivedType__itemUnit->setTransient(false);
    m_DerivedType__itemUnit->setVolatile(false);
    m_DerivedType__itemUnit->setChangeable(true);
    m_DerivedType__itemUnit->setContainment(true);
    m_DerivedType__itemUnit->setResolveProxies(true);
    m_DerivedType__itemUnit->setUnique(true);
    m_DerivedType__itemUnit->setDerived(false);
    m_DerivedType__itemUnit->setOrdered(false);
    // ArrayType
    m_ArrayTypeEClass->setName("ArrayType");
    m_ArrayTypeEClass->setAbstract(false);
    m_ArrayTypeEClass->setInterface(false);
    m_ArrayType__size->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getInteger());
    m_ArrayType__size->setName("size");
    m_ArrayType__size->setDefaultValueLiteral("");
    m_ArrayType__size->setLowerBound(0);
    m_ArrayType__size->setUpperBound(1);
    m_ArrayType__size->setTransient(false);
    m_ArrayType__size->setVolatile(false);
    m_ArrayType__size->setChangeable(true);
    m_ArrayType__size->setUnsettable(false);
    m_ArrayType__size->setID(false);
    m_ArrayType__size->setUnique(false);
    m_ArrayType__size->setDerived(false);
    m_ArrayType__size->setOrdered(false);
    m_ArrayType__indexUnit->setEType(m_IndexUnitEClass);
    m_ArrayType__indexUnit->setName("indexUnit");
    m_ArrayType__indexUnit->setDefaultValueLiteral("");
    m_ArrayType__indexUnit->setLowerBound(1);
    m_ArrayType__indexUnit->setUpperBound(1);
    m_ArrayType__indexUnit->setTransient(false);
    m_ArrayType__indexUnit->setVolatile(false);
    m_ArrayType__indexUnit->setChangeable(true);
    m_ArrayType__indexUnit->setContainment(true);
    m_ArrayType__indexUnit->setResolveProxies(true);
    m_ArrayType__indexUnit->setUnique(true);
    m_ArrayType__indexUnit->setDerived(false);
    m_ArrayType__indexUnit->setOrdered(false);
    // PrimitiveType
    m_PrimitiveTypeEClass->setName("PrimitiveType");
    m_PrimitiveTypeEClass->setAbstract(false);
    m_PrimitiveTypeEClass->setInterface(false);
    // BooleanType
    m_BooleanTypeEClass->setName("BooleanType");
    m_BooleanTypeEClass->setAbstract(false);
    m_BooleanTypeEClass->setInterface(false);
    // CharType
    m_CharTypeEClass->setName("CharType");
    m_CharTypeEClass->setAbstract(false);
    m_CharTypeEClass->setInterface(false);
    // ClassUnit
    m_ClassUnitEClass->setName("ClassUnit");
    m_ClassUnitEClass->setAbstract(false);
    m_ClassUnitEClass->setInterface(false);
    m_ClassUnit__isAbstract->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getBoolean());
    m_ClassUnit__isAbstract->setName("isAbstract");
    m_ClassUnit__isAbstract->setDefaultValueLiteral("");
    m_ClassUnit__isAbstract->setLowerBound(0);
    m_ClassUnit__isAbstract->setUpperBound(1);
    m_ClassUnit__isAbstract->setTransient(false);
    m_ClassUnit__isAbstract->setVolatile(false);
    m_ClassUnit__isAbstract->setChangeable(true);
    m_ClassUnit__isAbstract->setUnsettable(false);
    m_ClassUnit__isAbstract->setID(false);
    m_ClassUnit__isAbstract->setUnique(false);
    m_ClassUnit__isAbstract->setDerived(false);
    m_ClassUnit__isAbstract->setOrdered(false);
    m_ClassUnit__codeElement->setEType(m_CodeItemEClass);
    m_ClassUnit__codeElement->setName("codeElement");
    m_ClassUnit__codeElement->setDefaultValueLiteral("");
    m_ClassUnit__codeElement->setLowerBound(0);
    m_ClassUnit__codeElement->setUpperBound(-1);
    m_ClassUnit__codeElement->setTransient(false);
    m_ClassUnit__codeElement->setVolatile(false);
    m_ClassUnit__codeElement->setChangeable(true);
    m_ClassUnit__codeElement->setContainment(true);
    m_ClassUnit__codeElement->setResolveProxies(true);
    m_ClassUnit__codeElement->setUnique(true);
    m_ClassUnit__codeElement->setDerived(false);
    m_ClassUnit__codeElement->setOrdered(true);
    // CompositeType
    m_CompositeTypeEClass->setName("CompositeType");
    m_CompositeTypeEClass->setAbstract(false);
    m_CompositeTypeEClass->setInterface(false);
    m_CompositeType__itemUnit->setEType(m_ItemUnitEClass);
    m_CompositeType__itemUnit->setName("itemUnit");
    m_CompositeType__itemUnit->setDefaultValueLiteral("");
    m_CompositeType__itemUnit->setLowerBound(0);
    m_CompositeType__itemUnit->setUpperBound(-1);
    m_CompositeType__itemUnit->setTransient(false);
    m_CompositeType__itemUnit->setVolatile(false);
    m_CompositeType__itemUnit->setChangeable(true);
    m_CompositeType__itemUnit->setContainment(true);
    m_CompositeType__itemUnit->setResolveProxies(true);
    m_CompositeType__itemUnit->setUnique(true);
    m_CompositeType__itemUnit->setDerived(false);
    m_CompositeType__itemUnit->setOrdered(true);
    // RecordType
    m_RecordTypeEClass->setName("RecordType");
    m_RecordTypeEClass->setAbstract(false);
    m_RecordTypeEClass->setInterface(false);
    // EnumeratedType
    m_EnumeratedTypeEClass->setName("EnumeratedType");
    m_EnumeratedTypeEClass->setAbstract(false);
    m_EnumeratedTypeEClass->setInterface(false);
    m_EnumeratedType__value->setEType(m_ValueEClass);
    m_EnumeratedType__value->setName("value");
    m_EnumeratedType__value->setDefaultValueLiteral("");
    m_EnumeratedType__value->setLowerBound(0);
    m_EnumeratedType__value->setUpperBound(-1);
    m_EnumeratedType__value->setTransient(false);
    m_EnumeratedType__value->setVolatile(false);
    m_EnumeratedType__value->setChangeable(true);
    m_EnumeratedType__value->setContainment(true);
    m_EnumeratedType__value->setResolveProxies(true);
    m_EnumeratedType__value->setUnique(true);
    m_EnumeratedType__value->setDerived(false);
    m_EnumeratedType__value->setOrdered(true);
    // Extends
    m_ExtendsEClass->setName("Extends");
    m_ExtendsEClass->setAbstract(false);
    m_ExtendsEClass->setInterface(false);
    m_Extends__to->setEType(m_DatatypeEClass);
    m_Extends__to->setName("to");
    m_Extends__to->setDefaultValueLiteral("");
    m_Extends__to->setLowerBound(1);
    m_Extends__to->setUpperBound(1);
    m_Extends__to->setTransient(false);
    m_Extends__to->setVolatile(false);
    m_Extends__to->setChangeable(true);
    m_Extends__to->setContainment(false);
    m_Extends__to->setResolveProxies(true);
    m_Extends__to->setUnique(true);
    m_Extends__to->setDerived(false);
    m_Extends__to->setOrdered(false);
    m_Extends__from->setEType(m_DatatypeEClass);
    m_Extends__from->setName("from");
    m_Extends__from->setDefaultValueLiteral("");
    m_Extends__from->setLowerBound(1);
    m_Extends__from->setUpperBound(1);
    m_Extends__from->setTransient(false);
    m_Extends__from->setVolatile(false);
    m_Extends__from->setChangeable(true);
    m_Extends__from->setContainment(false);
    m_Extends__from->setResolveProxies(true);
    m_Extends__from->setUnique(true);
    m_Extends__from->setDerived(false);
    m_Extends__from->setOrdered(false);
    // ScaledType
    m_ScaledTypeEClass->setName("ScaledType");
    m_ScaledTypeEClass->setAbstract(false);
    m_ScaledTypeEClass->setInterface(false);
    // FloatType
    m_FloatTypeEClass->setName("FloatType");
    m_FloatTypeEClass->setAbstract(false);
    m_FloatTypeEClass->setInterface(false);
    // HasType
    m_HasTypeEClass->setName("HasType");
    m_HasTypeEClass->setAbstract(false);
    m_HasTypeEClass->setInterface(false);
    m_HasType__to->setEType(m_DatatypeEClass);
    m_HasType__to->setName("to");
    m_HasType__to->setDefaultValueLiteral("");
    m_HasType__to->setLowerBound(1);
    m_HasType__to->setUpperBound(1);
    m_HasType__to->setTransient(false);
    m_HasType__to->setVolatile(false);
    m_HasType__to->setChangeable(true);
    m_HasType__to->setContainment(false);
    m_HasType__to->setResolveProxies(true);
    m_HasType__to->setUnique(true);
    m_HasType__to->setDerived(false);
    m_HasType__to->setOrdered(false);
    m_HasType__from->setEType(m_CodeItemEClass);
    m_HasType__from->setName("from");
    m_HasType__from->setDefaultValueLiteral("");
    m_HasType__from->setLowerBound(1);
    m_HasType__from->setUpperBound(1);
    m_HasType__from->setTransient(false);
    m_HasType__from->setVolatile(false);
    m_HasType__from->setChangeable(true);
    m_HasType__from->setContainment(false);
    m_HasType__from->setResolveProxies(true);
    m_HasType__from->setUnique(true);
    m_HasType__from->setDerived(false);
    m_HasType__from->setOrdered(false);
    // ImplementationOf
    m_ImplementationOfEClass->setName("ImplementationOf");
    m_ImplementationOfEClass->setAbstract(false);
    m_ImplementationOfEClass->setInterface(false);
    m_ImplementationOf__to->setEType(m_CodeItemEClass);
    m_ImplementationOf__to->setName("to");
    m_ImplementationOf__to->setDefaultValueLiteral("");
    m_ImplementationOf__to->setLowerBound(1);
    m_ImplementationOf__to->setUpperBound(1);
    m_ImplementationOf__to->setTransient(false);
    m_ImplementationOf__to->setVolatile(false);
    m_ImplementationOf__to->setChangeable(true);
    m_ImplementationOf__to->setContainment(false);
    m_ImplementationOf__to->setResolveProxies(true);
    m_ImplementationOf__to->setUnique(true);
    m_ImplementationOf__to->setDerived(false);
    m_ImplementationOf__to->setOrdered(false);
    m_ImplementationOf__from->setEType(m_CodeItemEClass);
    m_ImplementationOf__from->setName("from");
    m_ImplementationOf__from->setDefaultValueLiteral("");
    m_ImplementationOf__from->setLowerBound(1);
    m_ImplementationOf__from->setUpperBound(1);
    m_ImplementationOf__from->setTransient(false);
    m_ImplementationOf__from->setVolatile(false);
    m_ImplementationOf__from->setChangeable(true);
    m_ImplementationOf__from->setContainment(false);
    m_ImplementationOf__from->setResolveProxies(true);
    m_ImplementationOf__from->setUnique(true);
    m_ImplementationOf__from->setDerived(false);
    m_ImplementationOf__from->setOrdered(false);
    // Implements
    m_ImplementsEClass->setName("Implements");
    m_ImplementsEClass->setAbstract(false);
    m_ImplementsEClass->setInterface(false);
    m_Implements__to->setEType(m_CodeItemEClass);
    m_Implements__to->setName("to");
    m_Implements__to->setDefaultValueLiteral("");
    m_Implements__to->setLowerBound(1);
    m_Implements__to->setUpperBound(1);
    m_Implements__to->setTransient(false);
    m_Implements__to->setVolatile(false);
    m_Implements__to->setChangeable(true);
    m_Implements__to->setContainment(false);
    m_Implements__to->setResolveProxies(true);
    m_Implements__to->setUnique(true);
    m_Implements__to->setDerived(false);
    m_Implements__to->setOrdered(false);
    m_Implements__from->setEType(m_CodeItemEClass);
    m_Implements__from->setName("from");
    m_Implements__from->setDefaultValueLiteral("");
    m_Implements__from->setLowerBound(1);
    m_Implements__from->setUpperBound(1);
    m_Implements__from->setTransient(false);
    m_Implements__from->setVolatile(false);
    m_Implements__from->setChangeable(true);
    m_Implements__from->setContainment(false);
    m_Implements__from->setResolveProxies(true);
    m_Implements__from->setUnique(true);
    m_Implements__from->setDerived(false);
    m_Implements__from->setOrdered(false);
    // IntegerType
    m_IntegerTypeEClass->setName("IntegerType");
    m_IntegerTypeEClass->setAbstract(false);
    m_IntegerTypeEClass->setInterface(false);
    // InterfaceUnit
    m_InterfaceUnitEClass->setName("InterfaceUnit");
    m_InterfaceUnitEClass->setAbstract(false);
    m_InterfaceUnitEClass->setInterface(false);
    m_InterfaceUnit__codeElement->setEType(m_CodeItemEClass);
    m_InterfaceUnit__codeElement->setName("codeElement");
    m_InterfaceUnit__codeElement->setDefaultValueLiteral("");
    m_InterfaceUnit__codeElement->setLowerBound(0);
    m_InterfaceUnit__codeElement->setUpperBound(-1);
    m_InterfaceUnit__codeElement->setTransient(false);
    m_InterfaceUnit__codeElement->setVolatile(false);
    m_InterfaceUnit__codeElement->setChangeable(true);
    m_InterfaceUnit__codeElement->setContainment(true);
    m_InterfaceUnit__codeElement->setResolveProxies(true);
    m_InterfaceUnit__codeElement->setUnique(true);
    m_InterfaceUnit__codeElement->setDerived(false);
    m_InterfaceUnit__codeElement->setOrdered(true);
    // PointerType
    m_PointerTypeEClass->setName("PointerType");
    m_PointerTypeEClass->setAbstract(false);
    m_PointerTypeEClass->setInterface(false);
    // DefinedType
    m_DefinedTypeEClass->setName("DefinedType");
    m_DefinedTypeEClass->setAbstract(true);
    m_DefinedTypeEClass->setInterface(false);
    m_DefinedType__type->setEType(m_DatatypeEClass);
    m_DefinedType__type->setName("type");
    m_DefinedType__type->setDefaultValueLiteral("");
    m_DefinedType__type->setLowerBound(1);
    m_DefinedType__type->setUpperBound(1);
    m_DefinedType__type->setTransient(false);
    m_DefinedType__type->setVolatile(false);
    m_DefinedType__type->setChangeable(true);
    m_DefinedType__type->setContainment(false);
    m_DefinedType__type->setResolveProxies(true);
    m_DefinedType__type->setUnique(true);
    m_DefinedType__type->setDerived(false);
    m_DefinedType__type->setOrdered(false);
    m_DefinedType__codeElement->setEType(m_DatatypeEClass);
    m_DefinedType__codeElement->setName("codeElement");
    m_DefinedType__codeElement->setDefaultValueLiteral("");
    m_DefinedType__codeElement->setLowerBound(0);
    m_DefinedType__codeElement->setUpperBound(1);
    m_DefinedType__codeElement->setTransient(false);
    m_DefinedType__codeElement->setVolatile(false);
    m_DefinedType__codeElement->setChangeable(true);
    m_DefinedType__codeElement->setContainment(true);
    m_DefinedType__codeElement->setResolveProxies(true);
    m_DefinedType__codeElement->setUnique(true);
    m_DefinedType__codeElement->setDerived(false);
    m_DefinedType__codeElement->setOrdered(false);
    // TypeUnit
    m_TypeUnitEClass->setName("TypeUnit");
    m_TypeUnitEClass->setAbstract(false);
    m_TypeUnitEClass->setInterface(false);
    // RangeType
    m_RangeTypeEClass->setName("RangeType");
    m_RangeTypeEClass->setAbstract(false);
    m_RangeTypeEClass->setInterface(false);
    m_RangeType__lower->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getInteger());
    m_RangeType__lower->setName("lower");
    m_RangeType__lower->setDefaultValueLiteral("");
    m_RangeType__lower->setLowerBound(0);
    m_RangeType__lower->setUpperBound(1);
    m_RangeType__lower->setTransient(false);
    m_RangeType__lower->setVolatile(false);
    m_RangeType__lower->setChangeable(true);
    m_RangeType__lower->setUnsettable(false);
    m_RangeType__lower->setID(false);
    m_RangeType__lower->setUnique(false);
    m_RangeType__lower->setDerived(false);
    m_RangeType__lower->setOrdered(false);
    m_RangeType__upper->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getInteger());
    m_RangeType__upper->setName("upper");
    m_RangeType__upper->setDefaultValueLiteral("");
    m_RangeType__upper->setLowerBound(0);
    m_RangeType__upper->setUpperBound(1);
    m_RangeType__upper->setTransient(false);
    m_RangeType__upper->setVolatile(false);
    m_RangeType__upper->setChangeable(true);
    m_RangeType__upper->setUnsettable(false);
    m_RangeType__upper->setID(false);
    m_RangeType__upper->setUnique(false);
    m_RangeType__upper->setDerived(false);
    m_RangeType__upper->setOrdered(false);
    // Signature
    m_SignatureEClass->setName("Signature");
    m_SignatureEClass->setAbstract(false);
    m_SignatureEClass->setInterface(false);
    m_Signature__parameterUnit->setEType(m_ParameterUnitEClass);
    m_Signature__parameterUnit->setName("parameterUnit");
    m_Signature__parameterUnit->setDefaultValueLiteral("");
    m_Signature__parameterUnit->setLowerBound(0);
    m_Signature__parameterUnit->setUpperBound(-1);
    m_Signature__parameterUnit->setTransient(false);
    m_Signature__parameterUnit->setVolatile(false);
    m_Signature__parameterUnit->setChangeable(true);
    m_Signature__parameterUnit->setContainment(true);
    m_Signature__parameterUnit->setResolveProxies(true);
    m_Signature__parameterUnit->setUnique(true);
    m_Signature__parameterUnit->setDerived(false);
    m_Signature__parameterUnit->setOrdered(true);
    // DataElement
    m_DataElementEClass->setName("DataElement");
    m_DataElementEClass->setAbstract(false);
    m_DataElementEClass->setInterface(false);
    m_DataElement__ext->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_DataElement__ext->setName("ext");
    m_DataElement__ext->setDefaultValueLiteral("");
    m_DataElement__ext->setLowerBound(0);
    m_DataElement__ext->setUpperBound(1);
    m_DataElement__ext->setTransient(false);
    m_DataElement__ext->setVolatile(false);
    m_DataElement__ext->setChangeable(true);
    m_DataElement__ext->setUnsettable(false);
    m_DataElement__ext->setID(false);
    m_DataElement__ext->setUnique(false);
    m_DataElement__ext->setDerived(false);
    m_DataElement__ext->setOrdered(false);
    m_DataElement__size->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getInteger());
    m_DataElement__size->setName("size");
    m_DataElement__size->setDefaultValueLiteral("");
    m_DataElement__size->setLowerBound(0);
    m_DataElement__size->setUpperBound(1);
    m_DataElement__size->setTransient(false);
    m_DataElement__size->setVolatile(false);
    m_DataElement__size->setChangeable(true);
    m_DataElement__size->setUnsettable(false);
    m_DataElement__size->setID(false);
    m_DataElement__size->setUnique(false);
    m_DataElement__size->setDerived(false);
    m_DataElement__size->setOrdered(false);
    m_DataElement__type->setEType(m_DatatypeEClass);
    m_DataElement__type->setName("type");
    m_DataElement__type->setDefaultValueLiteral("");
    m_DataElement__type->setLowerBound(1);
    m_DataElement__type->setUpperBound(1);
    m_DataElement__type->setTransient(false);
    m_DataElement__type->setVolatile(false);
    m_DataElement__type->setChangeable(true);
    m_DataElement__type->setContainment(false);
    m_DataElement__type->setResolveProxies(true);
    m_DataElement__type->setUnique(true);
    m_DataElement__type->setDerived(false);
    m_DataElement__type->setOrdered(false);
    m_DataElement__codeElement->setEType(m_DatatypeEClass);
    m_DataElement__codeElement->setName("codeElement");
    m_DataElement__codeElement->setDefaultValueLiteral("");
    m_DataElement__codeElement->setLowerBound(0);
    m_DataElement__codeElement->setUpperBound(-1);
    m_DataElement__codeElement->setTransient(false);
    m_DataElement__codeElement->setVolatile(false);
    m_DataElement__codeElement->setChangeable(true);
    m_DataElement__codeElement->setContainment(true);
    m_DataElement__codeElement->setResolveProxies(true);
    m_DataElement__codeElement->setUnique(true);
    m_DataElement__codeElement->setDerived(false);
    m_DataElement__codeElement->setOrdered(false);
    // StringType
    m_StringTypeEClass->setName("StringType");
    m_StringTypeEClass->setAbstract(false);
    m_StringTypeEClass->setInterface(false);
    // ChoiceType
    m_ChoiceTypeEClass->setName("ChoiceType");
    m_ChoiceTypeEClass->setAbstract(false);
    m_ChoiceTypeEClass->setInterface(false);
    // NamespaceUnit
    m_NamespaceUnitEClass->setName("NamespaceUnit");
    m_NamespaceUnitEClass->setAbstract(false);
    m_NamespaceUnitEClass->setInterface(false);
    m_NamespaceUnit__groupedCode->setEType(m_CodeItemEClass);
    m_NamespaceUnit__groupedCode->setName("groupedCode");
    m_NamespaceUnit__groupedCode->setDefaultValueLiteral("");
    m_NamespaceUnit__groupedCode->setLowerBound(0);
    m_NamespaceUnit__groupedCode->setUpperBound(-1);
    m_NamespaceUnit__groupedCode->setTransient(false);
    m_NamespaceUnit__groupedCode->setVolatile(false);
    m_NamespaceUnit__groupedCode->setChangeable(true);
    m_NamespaceUnit__groupedCode->setContainment(false);
    m_NamespaceUnit__groupedCode->setResolveProxies(true);
    m_NamespaceUnit__groupedCode->setUnique(true);
    m_NamespaceUnit__groupedCode->setDerived(false);
    m_NamespaceUnit__groupedCode->setOrdered(false);
    // VisibleIn
    m_VisibleInEClass->setName("VisibleIn");
    m_VisibleInEClass->setAbstract(false);
    m_VisibleInEClass->setInterface(false);
    m_VisibleIn__to->setEType(m_CodeItemEClass);
    m_VisibleIn__to->setName("to");
    m_VisibleIn__to->setDefaultValueLiteral("");
    m_VisibleIn__to->setLowerBound(1);
    m_VisibleIn__to->setUpperBound(1);
    m_VisibleIn__to->setTransient(false);
    m_VisibleIn__to->setVolatile(false);
    m_VisibleIn__to->setChangeable(true);
    m_VisibleIn__to->setContainment(false);
    m_VisibleIn__to->setResolveProxies(true);
    m_VisibleIn__to->setUnique(true);
    m_VisibleIn__to->setDerived(false);
    m_VisibleIn__to->setOrdered(false);
    m_VisibleIn__from->setEType(m_CodeItemEClass);
    m_VisibleIn__from->setName("from");
    m_VisibleIn__from->setDefaultValueLiteral("");
    m_VisibleIn__from->setLowerBound(1);
    m_VisibleIn__from->setUpperBound(1);
    m_VisibleIn__from->setTransient(false);
    m_VisibleIn__from->setVolatile(false);
    m_VisibleIn__from->setChangeable(true);
    m_VisibleIn__from->setContainment(false);
    m_VisibleIn__from->setResolveProxies(true);
    m_VisibleIn__from->setUnique(true);
    m_VisibleIn__from->setDerived(false);
    m_VisibleIn__from->setOrdered(false);
    // CommentUnit
    m_CommentUnitEClass->setName("CommentUnit");
    m_CommentUnitEClass->setAbstract(false);
    m_CommentUnitEClass->setInterface(false);
    m_CommentUnit__text->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_CommentUnit__text->setName("text");
    m_CommentUnit__text->setDefaultValueLiteral("");
    m_CommentUnit__text->setLowerBound(0);
    m_CommentUnit__text->setUpperBound(1);
    m_CommentUnit__text->setTransient(false);
    m_CommentUnit__text->setVolatile(false);
    m_CommentUnit__text->setChangeable(true);
    m_CommentUnit__text->setUnsettable(false);
    m_CommentUnit__text->setID(false);
    m_CommentUnit__text->setUnique(false);
    m_CommentUnit__text->setDerived(false);
    m_CommentUnit__text->setOrdered(false);
    // SharedUnit
    m_SharedUnitEClass->setName("SharedUnit");
    m_SharedUnitEClass->setAbstract(false);
    m_SharedUnitEClass->setInterface(false);
    // DecimalType
    m_DecimalTypeEClass->setName("DecimalType");
    m_DecimalTypeEClass->setAbstract(false);
    m_DecimalTypeEClass->setInterface(false);
    // DateType
    m_DateTypeEClass->setName("DateType");
    m_DateTypeEClass->setAbstract(false);
    m_DateTypeEClass->setInterface(false);
    // TimeType
    m_TimeTypeEClass->setName("TimeType");
    m_TimeTypeEClass->setAbstract(false);
    m_TimeTypeEClass->setInterface(false);
    // VoidType
    m_VoidTypeEClass->setName("VoidType");
    m_VoidTypeEClass->setAbstract(false);
    m_VoidTypeEClass->setInterface(false);
    // ValueElement
    m_ValueElementEClass->setName("ValueElement");
    m_ValueElementEClass->setAbstract(true);
    m_ValueElementEClass->setInterface(false);
    // Value
    m_ValueEClass->setName("Value");
    m_ValueEClass->setAbstract(false);
    m_ValueEClass->setInterface(false);
    // ValueList
    m_ValueListEClass->setName("ValueList");
    m_ValueListEClass->setAbstract(false);
    m_ValueListEClass->setInterface(false);
    m_ValueList__valueElement->setEType(m_ValueElementEClass);
    m_ValueList__valueElement->setName("valueElement");
    m_ValueList__valueElement->setDefaultValueLiteral("");
    m_ValueList__valueElement->setLowerBound(0);
    m_ValueList__valueElement->setUpperBound(-1);
    m_ValueList__valueElement->setTransient(false);
    m_ValueList__valueElement->setVolatile(false);
    m_ValueList__valueElement->setChangeable(true);
    m_ValueList__valueElement->setContainment(true);
    m_ValueList__valueElement->setResolveProxies(true);
    m_ValueList__valueElement->setUnique(true);
    m_ValueList__valueElement->setDerived(false);
    m_ValueList__valueElement->setOrdered(true);
    // StorableUnit
    m_StorableUnitEClass->setName("StorableUnit");
    m_StorableUnitEClass->setAbstract(false);
    m_StorableUnitEClass->setInterface(false);
    m_StorableUnit__kind->setEType(m_StorableKindEEnum);
    m_StorableUnit__kind->setName("kind");
    m_StorableUnit__kind->setDefaultValueLiteral("");
    m_StorableUnit__kind->setLowerBound(0);
    m_StorableUnit__kind->setUpperBound(1);
    m_StorableUnit__kind->setTransient(false);
    m_StorableUnit__kind->setVolatile(false);
    m_StorableUnit__kind->setChangeable(true);
    m_StorableUnit__kind->setUnsettable(false);
    m_StorableUnit__kind->setID(false);
    m_StorableUnit__kind->setUnique(false);
    m_StorableUnit__kind->setDerived(false);
    m_StorableUnit__kind->setOrdered(false);
    // MemberUnit
    m_MemberUnitEClass->setName("MemberUnit");
    m_MemberUnitEClass->setAbstract(false);
    m_MemberUnitEClass->setInterface(false);
    m_MemberUnit__export->setEType(m_ExportKindEEnum);
    m_MemberUnit__export->setName("export");
    m_MemberUnit__export->setDefaultValueLiteral("");
    m_MemberUnit__export->setLowerBound(0);
    m_MemberUnit__export->setUpperBound(1);
    m_MemberUnit__export->setTransient(false);
    m_MemberUnit__export->setVolatile(false);
    m_MemberUnit__export->setChangeable(true);
    m_MemberUnit__export->setUnsettable(false);
    m_MemberUnit__export->setID(false);
    m_MemberUnit__export->setUnique(false);
    m_MemberUnit__export->setDerived(false);
    m_MemberUnit__export->setOrdered(false);
    // ParameterUnit
    m_ParameterUnitEClass->setName("ParameterUnit");
    m_ParameterUnitEClass->setAbstract(false);
    m_ParameterUnitEClass->setInterface(false);
    m_ParameterUnit__kind->setEType(m_ParameterKindEEnum);
    m_ParameterUnit__kind->setName("kind");
    m_ParameterUnit__kind->setDefaultValueLiteral("");
    m_ParameterUnit__kind->setLowerBound(0);
    m_ParameterUnit__kind->setUpperBound(1);
    m_ParameterUnit__kind->setTransient(false);
    m_ParameterUnit__kind->setVolatile(false);
    m_ParameterUnit__kind->setChangeable(true);
    m_ParameterUnit__kind->setUnsettable(false);
    m_ParameterUnit__kind->setID(false);
    m_ParameterUnit__kind->setUnique(false);
    m_ParameterUnit__kind->setDerived(false);
    m_ParameterUnit__kind->setOrdered(false);
    m_ParameterUnit__pos->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getInteger());
    m_ParameterUnit__pos->setName("pos");
    m_ParameterUnit__pos->setDefaultValueLiteral("");
    m_ParameterUnit__pos->setLowerBound(0);
    m_ParameterUnit__pos->setUpperBound(1);
    m_ParameterUnit__pos->setTransient(false);
    m_ParameterUnit__pos->setVolatile(false);
    m_ParameterUnit__pos->setChangeable(true);
    m_ParameterUnit__pos->setUnsettable(false);
    m_ParameterUnit__pos->setID(false);
    m_ParameterUnit__pos->setUnique(false);
    m_ParameterUnit__pos->setDerived(false);
    m_ParameterUnit__pos->setOrdered(false);
    // ItemUnit
    m_ItemUnitEClass->setName("ItemUnit");
    m_ItemUnitEClass->setAbstract(false);
    m_ItemUnitEClass->setInterface(false);
    // IndexUnit
    m_IndexUnitEClass->setName("IndexUnit");
    m_IndexUnitEClass->setAbstract(false);
    m_IndexUnitEClass->setInterface(false);
    // SynonymType
    m_SynonymTypeEClass->setName("SynonymType");
    m_SynonymTypeEClass->setAbstract(false);
    m_SynonymTypeEClass->setInterface(false);
    // SequenceType
    m_SequenceTypeEClass->setName("SequenceType");
    m_SequenceTypeEClass->setAbstract(false);
    m_SequenceTypeEClass->setInterface(false);
    m_SequenceType__size->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getInteger());
    m_SequenceType__size->setName("size");
    m_SequenceType__size->setDefaultValueLiteral("");
    m_SequenceType__size->setLowerBound(0);
    m_SequenceType__size->setUpperBound(1);
    m_SequenceType__size->setTransient(false);
    m_SequenceType__size->setVolatile(false);
    m_SequenceType__size->setChangeable(true);
    m_SequenceType__size->setUnsettable(false);
    m_SequenceType__size->setID(false);
    m_SequenceType__size->setUnique(false);
    m_SequenceType__size->setDerived(false);
    m_SequenceType__size->setOrdered(false);
    // BagType
    m_BagTypeEClass->setName("BagType");
    m_BagTypeEClass->setAbstract(false);
    m_BagTypeEClass->setInterface(false);
    m_BagType__size->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getInteger());
    m_BagType__size->setName("size");
    m_BagType__size->setDefaultValueLiteral("");
    m_BagType__size->setLowerBound(0);
    m_BagType__size->setUpperBound(1);
    m_BagType__size->setTransient(false);
    m_BagType__size->setVolatile(false);
    m_BagType__size->setChangeable(true);
    m_BagType__size->setUnsettable(false);
    m_BagType__size->setID(false);
    m_BagType__size->setUnique(false);
    m_BagType__size->setDerived(false);
    m_BagType__size->setOrdered(false);
    // SetType
    m_SetTypeEClass->setName("SetType");
    m_SetTypeEClass->setAbstract(false);
    m_SetTypeEClass->setInterface(false);
    m_SetType__size->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getInteger());
    m_SetType__size->setName("size");
    m_SetType__size->setDefaultValueLiteral("");
    m_SetType__size->setLowerBound(0);
    m_SetType__size->setUpperBound(1);
    m_SetType__size->setTransient(false);
    m_SetType__size->setVolatile(false);
    m_SetType__size->setChangeable(true);
    m_SetType__size->setUnsettable(false);
    m_SetType__size->setID(false);
    m_SetType__size->setUnique(false);
    m_SetType__size->setDerived(false);
    m_SetType__size->setOrdered(false);
    // CodeElement
    m_CodeElementEClass->setName("CodeElement");
    m_CodeElementEClass->setAbstract(false);
    m_CodeElementEClass->setInterface(false);
    // CodeRelationship
    m_CodeRelationshipEClass->setName("CodeRelationship");
    m_CodeRelationshipEClass->setAbstract(false);
    m_CodeRelationshipEClass->setInterface(false);
    m_CodeRelationship__to->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMEntity());
    m_CodeRelationship__to->setName("to");
    m_CodeRelationship__to->setDefaultValueLiteral("");
    m_CodeRelationship__to->setLowerBound(1);
    m_CodeRelationship__to->setUpperBound(1);
    m_CodeRelationship__to->setTransient(false);
    m_CodeRelationship__to->setVolatile(false);
    m_CodeRelationship__to->setChangeable(true);
    m_CodeRelationship__to->setContainment(false);
    m_CodeRelationship__to->setResolveProxies(true);
    m_CodeRelationship__to->setUnique(true);
    m_CodeRelationship__to->setDerived(false);
    m_CodeRelationship__to->setOrdered(false);
    m_CodeRelationship__from->setEType(m_CodeItemEClass);
    m_CodeRelationship__from->setName("from");
    m_CodeRelationship__from->setDefaultValueLiteral("");
    m_CodeRelationship__from->setLowerBound(1);
    m_CodeRelationship__from->setUpperBound(1);
    m_CodeRelationship__from->setTransient(false);
    m_CodeRelationship__from->setVolatile(false);
    m_CodeRelationship__from->setChangeable(true);
    m_CodeRelationship__from->setContainment(false);
    m_CodeRelationship__from->setResolveProxies(true);
    m_CodeRelationship__from->setUnique(true);
    m_CodeRelationship__from->setDerived(false);
    m_CodeRelationship__from->setOrdered(false);
    // LanguageUnit
    m_LanguageUnitEClass->setName("LanguageUnit");
    m_LanguageUnitEClass->setAbstract(false);
    m_LanguageUnitEClass->setInterface(false);
    // OrdinalType
    m_OrdinalTypeEClass->setName("OrdinalType");
    m_OrdinalTypeEClass->setAbstract(false);
    m_OrdinalTypeEClass->setInterface(false);
    // BitstringType
    m_BitstringTypeEClass->setName("BitstringType");
    m_BitstringTypeEClass->setAbstract(false);
    m_BitstringTypeEClass->setInterface(false);
    // OctetType
    m_OctetTypeEClass->setName("OctetType");
    m_OctetTypeEClass->setAbstract(false);
    m_OctetTypeEClass->setInterface(false);
    // OctetstringType
    m_OctetstringTypeEClass->setName("OctetstringType");
    m_OctetstringTypeEClass->setAbstract(false);
    m_OctetstringTypeEClass->setInterface(false);
    // BitType
    m_BitTypeEClass->setName("BitType");
    m_BitTypeEClass->setAbstract(false);
    m_BitTypeEClass->setInterface(false);
    // Imports
    m_ImportsEClass->setName("Imports");
    m_ImportsEClass->setAbstract(false);
    m_ImportsEClass->setInterface(false);
    m_Imports__to->setEType(m_CodeItemEClass);
    m_Imports__to->setName("to");
    m_Imports__to->setDefaultValueLiteral("");
    m_Imports__to->setLowerBound(1);
    m_Imports__to->setUpperBound(1);
    m_Imports__to->setTransient(false);
    m_Imports__to->setVolatile(false);
    m_Imports__to->setChangeable(true);
    m_Imports__to->setContainment(false);
    m_Imports__to->setResolveProxies(true);
    m_Imports__to->setUnique(true);
    m_Imports__to->setDerived(false);
    m_Imports__to->setOrdered(false);
    m_Imports__from->setEType(m_CodeItemEClass);
    m_Imports__from->setName("from");
    m_Imports__from->setDefaultValueLiteral("");
    m_Imports__from->setLowerBound(1);
    m_Imports__from->setUpperBound(1);
    m_Imports__from->setTransient(false);
    m_Imports__from->setVolatile(false);
    m_Imports__from->setChangeable(true);
    m_Imports__from->setContainment(false);
    m_Imports__from->setResolveProxies(true);
    m_Imports__from->setUnique(true);
    m_Imports__from->setDerived(false);
    m_Imports__from->setOrdered(false);
    // Package
    m_PackageEClass->setName("Package");
    m_PackageEClass->setAbstract(false);
    m_PackageEClass->setInterface(false);
    // ParameterTo
    m_ParameterToEClass->setName("ParameterTo");
    m_ParameterToEClass->setAbstract(false);
    m_ParameterToEClass->setInterface(false);
    m_ParameterTo__to->setEType(m_CodeItemEClass);
    m_ParameterTo__to->setName("to");
    m_ParameterTo__to->setDefaultValueLiteral("");
    m_ParameterTo__to->setLowerBound(1);
    m_ParameterTo__to->setUpperBound(1);
    m_ParameterTo__to->setTransient(false);
    m_ParameterTo__to->setVolatile(false);
    m_ParameterTo__to->setChangeable(true);
    m_ParameterTo__to->setContainment(false);
    m_ParameterTo__to->setResolveProxies(true);
    m_ParameterTo__to->setUnique(true);
    m_ParameterTo__to->setDerived(false);
    m_ParameterTo__to->setOrdered(false);
    m_ParameterTo__from->setEType(m_AbstractCodeElementEClass);
    m_ParameterTo__from->setName("from");
    m_ParameterTo__from->setDefaultValueLiteral("");
    m_ParameterTo__from->setLowerBound(1);
    m_ParameterTo__from->setUpperBound(1);
    m_ParameterTo__from->setTransient(false);
    m_ParameterTo__from->setVolatile(false);
    m_ParameterTo__from->setChangeable(true);
    m_ParameterTo__from->setContainment(false);
    m_ParameterTo__from->setResolveProxies(true);
    m_ParameterTo__from->setUnique(true);
    m_ParameterTo__from->setDerived(false);
    m_ParameterTo__from->setOrdered(false);
    // TemplateType
    m_TemplateTypeEClass->setName("TemplateType");
    m_TemplateTypeEClass->setAbstract(false);
    m_TemplateTypeEClass->setInterface(false);
    // PreprocessorDirective
    m_PreprocessorDirectiveEClass->setName("PreprocessorDirective");
    m_PreprocessorDirectiveEClass->setAbstract(false);
    m_PreprocessorDirectiveEClass->setInterface(false);
    m_PreprocessorDirective__codeElement->setEType(m_AbstractCodeElementEClass);
    m_PreprocessorDirective__codeElement->setName("codeElement");
    m_PreprocessorDirective__codeElement->setDefaultValueLiteral("");
    m_PreprocessorDirective__codeElement->setLowerBound(0);
    m_PreprocessorDirective__codeElement->setUpperBound(-1);
    m_PreprocessorDirective__codeElement->setTransient(false);
    m_PreprocessorDirective__codeElement->setVolatile(false);
    m_PreprocessorDirective__codeElement->setChangeable(true);
    m_PreprocessorDirective__codeElement->setContainment(true);
    m_PreprocessorDirective__codeElement->setResolveProxies(true);
    m_PreprocessorDirective__codeElement->setUnique(true);
    m_PreprocessorDirective__codeElement->setDerived(false);
    m_PreprocessorDirective__codeElement->setOrdered(false);
    // MacroDirective
    m_MacroDirectiveEClass->setName("MacroDirective");
    m_MacroDirectiveEClass->setAbstract(false);
    m_MacroDirectiveEClass->setInterface(false);
    // MacroUnit
    m_MacroUnitEClass->setName("MacroUnit");
    m_MacroUnitEClass->setAbstract(false);
    m_MacroUnitEClass->setInterface(false);
    m_MacroUnit__kind->setEType(m_MacroKindEEnum);
    m_MacroUnit__kind->setName("kind");
    m_MacroUnit__kind->setDefaultValueLiteral("");
    m_MacroUnit__kind->setLowerBound(0);
    m_MacroUnit__kind->setUpperBound(1);
    m_MacroUnit__kind->setTransient(false);
    m_MacroUnit__kind->setVolatile(false);
    m_MacroUnit__kind->setChangeable(true);
    m_MacroUnit__kind->setUnsettable(false);
    m_MacroUnit__kind->setID(false);
    m_MacroUnit__kind->setUnique(false);
    m_MacroUnit__kind->setDerived(false);
    m_MacroUnit__kind->setOrdered(false);
    // ConditionalDirective
    m_ConditionalDirectiveEClass->setName("ConditionalDirective");
    m_ConditionalDirectiveEClass->setAbstract(false);
    m_ConditionalDirectiveEClass->setInterface(false);
    // IncludeDirective
    m_IncludeDirectiveEClass->setName("IncludeDirective");
    m_IncludeDirectiveEClass->setAbstract(false);
    m_IncludeDirectiveEClass->setInterface(false);
    // VariantTo
    m_VariantToEClass->setName("VariantTo");
    m_VariantToEClass->setAbstract(false);
    m_VariantToEClass->setInterface(false);
    m_VariantTo__to->setEType(m_PreprocessorDirectiveEClass);
    m_VariantTo__to->setName("to");
    m_VariantTo__to->setDefaultValueLiteral("");
    m_VariantTo__to->setLowerBound(1);
    m_VariantTo__to->setUpperBound(1);
    m_VariantTo__to->setTransient(false);
    m_VariantTo__to->setVolatile(false);
    m_VariantTo__to->setChangeable(true);
    m_VariantTo__to->setContainment(false);
    m_VariantTo__to->setResolveProxies(true);
    m_VariantTo__to->setUnique(true);
    m_VariantTo__to->setDerived(false);
    m_VariantTo__to->setOrdered(false);
    m_VariantTo__from->setEType(m_PreprocessorDirectiveEClass);
    m_VariantTo__from->setName("from");
    m_VariantTo__from->setDefaultValueLiteral("");
    m_VariantTo__from->setLowerBound(1);
    m_VariantTo__from->setUpperBound(1);
    m_VariantTo__from->setTransient(false);
    m_VariantTo__from->setVolatile(false);
    m_VariantTo__from->setChangeable(true);
    m_VariantTo__from->setContainment(false);
    m_VariantTo__from->setResolveProxies(true);
    m_VariantTo__from->setUnique(true);
    m_VariantTo__from->setDerived(false);
    m_VariantTo__from->setOrdered(false);
    // Expands
    m_ExpandsEClass->setName("Expands");
    m_ExpandsEClass->setAbstract(false);
    m_ExpandsEClass->setInterface(false);
    m_Expands__to->setEType(m_PreprocessorDirectiveEClass);
    m_Expands__to->setName("to");
    m_Expands__to->setDefaultValueLiteral("");
    m_Expands__to->setLowerBound(1);
    m_Expands__to->setUpperBound(1);
    m_Expands__to->setTransient(false);
    m_Expands__to->setVolatile(false);
    m_Expands__to->setChangeable(true);
    m_Expands__to->setContainment(false);
    m_Expands__to->setResolveProxies(true);
    m_Expands__to->setUnique(true);
    m_Expands__to->setDerived(false);
    m_Expands__to->setOrdered(false);
    m_Expands__from->setEType(m_PreprocessorDirectiveEClass);
    m_Expands__from->setName("from");
    m_Expands__from->setDefaultValueLiteral("");
    m_Expands__from->setLowerBound(1);
    m_Expands__from->setUpperBound(1);
    m_Expands__from->setTransient(false);
    m_Expands__from->setVolatile(false);
    m_Expands__from->setChangeable(true);
    m_Expands__from->setContainment(false);
    m_Expands__from->setResolveProxies(true);
    m_Expands__from->setUnique(true);
    m_Expands__from->setDerived(false);
    m_Expands__from->setOrdered(false);
    // Redefines
    m_RedefinesEClass->setName("Redefines");
    m_RedefinesEClass->setAbstract(false);
    m_RedefinesEClass->setInterface(false);
    m_Redefines__to->setEType(m_PreprocessorDirectiveEClass);
    m_Redefines__to->setName("to");
    m_Redefines__to->setDefaultValueLiteral("");
    m_Redefines__to->setLowerBound(1);
    m_Redefines__to->setUpperBound(1);
    m_Redefines__to->setTransient(false);
    m_Redefines__to->setVolatile(false);
    m_Redefines__to->setChangeable(true);
    m_Redefines__to->setContainment(false);
    m_Redefines__to->setResolveProxies(true);
    m_Redefines__to->setUnique(true);
    m_Redefines__to->setDerived(false);
    m_Redefines__to->setOrdered(false);
    m_Redefines__from->setEType(m_PreprocessorDirectiveEClass);
    m_Redefines__from->setName("from");
    m_Redefines__from->setDefaultValueLiteral("");
    m_Redefines__from->setLowerBound(1);
    m_Redefines__from->setUpperBound(1);
    m_Redefines__from->setTransient(false);
    m_Redefines__from->setVolatile(false);
    m_Redefines__from->setChangeable(true);
    m_Redefines__from->setContainment(false);
    m_Redefines__from->setResolveProxies(true);
    m_Redefines__from->setUnique(true);
    m_Redefines__from->setDerived(false);
    m_Redefines__from->setOrdered(false);
    // GeneratedFrom
    m_GeneratedFromEClass->setName("GeneratedFrom");
    m_GeneratedFromEClass->setAbstract(false);
    m_GeneratedFromEClass->setInterface(false);
    m_GeneratedFrom__to->setEType(m_PreprocessorDirectiveEClass);
    m_GeneratedFrom__to->setName("to");
    m_GeneratedFrom__to->setDefaultValueLiteral("");
    m_GeneratedFrom__to->setLowerBound(1);
    m_GeneratedFrom__to->setUpperBound(1);
    m_GeneratedFrom__to->setTransient(false);
    m_GeneratedFrom__to->setVolatile(false);
    m_GeneratedFrom__to->setChangeable(true);
    m_GeneratedFrom__to->setContainment(false);
    m_GeneratedFrom__to->setResolveProxies(true);
    m_GeneratedFrom__to->setUnique(true);
    m_GeneratedFrom__to->setDerived(false);
    m_GeneratedFrom__to->setOrdered(false);
    m_GeneratedFrom__from->setEType(m_AbstractCodeElementEClass);
    m_GeneratedFrom__from->setName("from");
    m_GeneratedFrom__from->setDefaultValueLiteral("");
    m_GeneratedFrom__from->setLowerBound(1);
    m_GeneratedFrom__from->setUpperBound(1);
    m_GeneratedFrom__from->setTransient(false);
    m_GeneratedFrom__from->setVolatile(false);
    m_GeneratedFrom__from->setChangeable(true);
    m_GeneratedFrom__from->setContainment(false);
    m_GeneratedFrom__from->setResolveProxies(true);
    m_GeneratedFrom__from->setUnique(true);
    m_GeneratedFrom__from->setDerived(false);
    m_GeneratedFrom__from->setOrdered(false);
    // Includes
    m_IncludesEClass->setName("Includes");
    m_IncludesEClass->setAbstract(false);
    m_IncludesEClass->setInterface(false);
    m_Includes__to->setEType(m_AbstractCodeElementEClass);
    m_Includes__to->setName("to");
    m_Includes__to->setDefaultValueLiteral("");
    m_Includes__to->setLowerBound(1);
    m_Includes__to->setUpperBound(1);
    m_Includes__to->setTransient(false);
    m_Includes__to->setVolatile(false);
    m_Includes__to->setChangeable(true);
    m_Includes__to->setContainment(false);
    m_Includes__to->setResolveProxies(true);
    m_Includes__to->setUnique(true);
    m_Includes__to->setDerived(false);
    m_Includes__to->setOrdered(false);
    m_Includes__from->setEType(m_PreprocessorDirectiveEClass);
    m_Includes__from->setName("from");
    m_Includes__from->setDefaultValueLiteral("");
    m_Includes__from->setLowerBound(1);
    m_Includes__from->setUpperBound(1);
    m_Includes__from->setTransient(false);
    m_Includes__from->setVolatile(false);
    m_Includes__from->setChangeable(true);
    m_Includes__from->setContainment(false);
    m_Includes__from->setResolveProxies(true);
    m_Includes__from->setUnique(true);
    m_Includes__from->setDerived(false);
    m_Includes__from->setOrdered(false);
    // HasValue
    m_HasValueEClass->setName("HasValue");
    m_HasValueEClass->setAbstract(false);
    m_HasValueEClass->setInterface(false);
    m_HasValue__to->setEType(m_CodeItemEClass);
    m_HasValue__to->setName("to");
    m_HasValue__to->setDefaultValueLiteral("");
    m_HasValue__to->setLowerBound(1);
    m_HasValue__to->setUpperBound(1);
    m_HasValue__to->setTransient(false);
    m_HasValue__to->setVolatile(false);
    m_HasValue__to->setChangeable(true);
    m_HasValue__to->setContainment(false);
    m_HasValue__to->setResolveProxies(true);
    m_HasValue__to->setUnique(true);
    m_HasValue__to->setDerived(false);
    m_HasValue__to->setOrdered(false);
    m_HasValue__from->setEType(m_CodeItemEClass);
    m_HasValue__from->setName("from");
    m_HasValue__from->setDefaultValueLiteral("");
    m_HasValue__from->setLowerBound(1);
    m_HasValue__from->setUpperBound(1);
    m_HasValue__from->setTransient(false);
    m_HasValue__from->setVolatile(false);
    m_HasValue__from->setChangeable(true);
    m_HasValue__from->setContainment(false);
    m_HasValue__from->setResolveProxies(true);
    m_HasValue__from->setUnique(true);
    m_HasValue__from->setDerived(false);
    m_HasValue__from->setOrdered(false);

    // TODO: Initialize data types

    // MethodKind
    m_MethodKindEEnum->setName("MethodKind");
    m_MethodKindEEnum->setSerializable(true);

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // operator
        _el->setName("operator");
        _el->setValue(0);
        _el->setLiteral("operator");
        _el->setEEnum(m_MethodKindEEnum);
        m_MethodKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // destructor
        _el->setName("destructor");
        _el->setValue(1);
        _el->setLiteral("destructor");
        _el->setEEnum(m_MethodKindEEnum);
        m_MethodKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // method
        _el->setName("method");
        _el->setValue(2);
        _el->setLiteral("method");
        _el->setEEnum(m_MethodKindEEnum);
        m_MethodKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // abstract
        _el->setName("abstract");
        _el->setValue(3);
        _el->setLiteral("abstract");
        _el->setEEnum(m_MethodKindEEnum);
        m_MethodKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // virtual
        _el->setName("virtual");
        _el->setValue(4);
        _el->setLiteral("virtual");
        _el->setEEnum(m_MethodKindEEnum);
        m_MethodKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // unknown
        _el->setName("unknown");
        _el->setValue(5);
        _el->setLiteral("unknown");
        _el->setEEnum(m_MethodKindEEnum);
        m_MethodKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // constructor
        _el->setName("constructor");
        _el->setValue(6);
        _el->setLiteral("constructor");
        _el->setEEnum(m_MethodKindEEnum);
        m_MethodKindEEnum->getELiterals().push_back(_el);
    }

    // ParameterKind
    m_ParameterKindEEnum->setName("ParameterKind");
    m_ParameterKindEEnum->setSerializable(true);

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // byReference
        _el->setName("byReference");
        _el->setValue(0);
        _el->setLiteral("byReference");
        _el->setEEnum(m_ParameterKindEEnum);
        m_ParameterKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // unknown
        _el->setName("unknown");
        _el->setValue(1);
        _el->setLiteral("unknown");
        _el->setEEnum(m_ParameterKindEEnum);
        m_ParameterKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // exception
        _el->setName("exception");
        _el->setValue(2);
        _el->setLiteral("exception");
        _el->setEEnum(m_ParameterKindEEnum);
        m_ParameterKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // return
        _el->setName("return");
        _el->setValue(3);
        _el->setLiteral("return");
        _el->setEEnum(m_ParameterKindEEnum);
        m_ParameterKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // byValue
        _el->setName("byValue");
        _el->setValue(4);
        _el->setLiteral("byValue");
        _el->setEEnum(m_ParameterKindEEnum);
        m_ParameterKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // catchall
        _el->setName("catchall");
        _el->setValue(5);
        _el->setLiteral("catchall");
        _el->setEEnum(m_ParameterKindEEnum);
        m_ParameterKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // byName
        _el->setName("byName");
        _el->setValue(6);
        _el->setLiteral("byName");
        _el->setEEnum(m_ParameterKindEEnum);
        m_ParameterKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // throws
        _el->setName("throws");
        _el->setValue(7);
        _el->setLiteral("throws");
        _el->setEEnum(m_ParameterKindEEnum);
        m_ParameterKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // variadic
        _el->setName("variadic");
        _el->setValue(8);
        _el->setLiteral("variadic");
        _el->setEEnum(m_ParameterKindEEnum);
        m_ParameterKindEEnum->getELiterals().push_back(_el);
    }

    // ExportKind
    m_ExportKindEEnum->setName("ExportKind");
    m_ExportKindEEnum->setSerializable(true);

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // private
        _el->setName("private");
        _el->setValue(0);
        _el->setLiteral("private");
        _el->setEEnum(m_ExportKindEEnum);
        m_ExportKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // unknown
        _el->setName("unknown");
        _el->setValue(1);
        _el->setLiteral("unknown");
        _el->setEEnum(m_ExportKindEEnum);
        m_ExportKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // public
        _el->setName("public");
        _el->setValue(2);
        _el->setLiteral("public");
        _el->setEEnum(m_ExportKindEEnum);
        m_ExportKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // protected
        _el->setName("protected");
        _el->setValue(3);
        _el->setLiteral("protected");
        _el->setEEnum(m_ExportKindEEnum);
        m_ExportKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // final
        _el->setName("final");
        _el->setValue(4);
        _el->setLiteral("final");
        _el->setEEnum(m_ExportKindEEnum);
        m_ExportKindEEnum->getELiterals().push_back(_el);
    }

    // StorableKind
    m_StorableKindEEnum->setName("StorableKind");
    m_StorableKindEEnum->setSerializable(true);

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // global
        _el->setName("global");
        _el->setValue(0);
        _el->setLiteral("global");
        _el->setEEnum(m_StorableKindEEnum);
        m_StorableKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // external
        _el->setName("external");
        _el->setValue(1);
        _el->setLiteral("external");
        _el->setEEnum(m_StorableKindEEnum);
        m_StorableKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // static
        _el->setName("static");
        _el->setValue(2);
        _el->setLiteral("static");
        _el->setEEnum(m_StorableKindEEnum);
        m_StorableKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // unknown
        _el->setName("unknown");
        _el->setValue(3);
        _el->setLiteral("unknown");
        _el->setEEnum(m_StorableKindEEnum);
        m_StorableKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // register
        _el->setName("register");
        _el->setValue(4);
        _el->setLiteral("register");
        _el->setEEnum(m_StorableKindEEnum);
        m_StorableKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // local
        _el->setName("local");
        _el->setValue(5);
        _el->setLiteral("local");
        _el->setEEnum(m_StorableKindEEnum);
        m_StorableKindEEnum->getELiterals().push_back(_el);
    }

    // CallableKind
    m_CallableKindEEnum->setName("CallableKind");
    m_CallableKindEEnum->setSerializable(true);

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // external
        _el->setName("external");
        _el->setValue(0);
        _el->setLiteral("external");
        _el->setEEnum(m_CallableKindEEnum);
        m_CallableKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // regular
        _el->setName("regular");
        _el->setValue(1);
        _el->setLiteral("regular");
        _el->setEEnum(m_CallableKindEEnum);
        m_CallableKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // stored
        _el->setName("stored");
        _el->setValue(2);
        _el->setLiteral("stored");
        _el->setEEnum(m_CallableKindEEnum);
        m_CallableKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // operator
        _el->setName("operator");
        _el->setValue(3);
        _el->setLiteral("operator");
        _el->setEEnum(m_CallableKindEEnum);
        m_CallableKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // unknown
        _el->setName("unknown");
        _el->setValue(4);
        _el->setLiteral("unknown");
        _el->setEEnum(m_CallableKindEEnum);
        m_CallableKindEEnum->getELiterals().push_back(_el);
    }

    // MacroKind
    m_MacroKindEEnum->setName("MacroKind");
    m_MacroKindEEnum->setSerializable(true);

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // external
        _el->setName("external");
        _el->setValue(0);
        _el->setLiteral("external");
        _el->setEEnum(m_MacroKindEEnum);
        m_MacroKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // unknown
        _el->setName("unknown");
        _el->setValue(1);
        _el->setLiteral("unknown");
        _el->setEEnum(m_MacroKindEEnum);
        m_MacroKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // option
        _el->setName("option");
        _el->setValue(2);
        _el->setLiteral("option");
        _el->setEEnum(m_MacroKindEEnum);
        m_MacroKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // undefined
        _el->setName("undefined");
        _el->setValue(3);
        _el->setLiteral("undefined");
        _el->setEEnum(m_MacroKindEEnum);
        m_MacroKindEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // regular
        _el->setName("regular");
        _el->setValue(4);
        _el->setLiteral("regular");
        _el->setEEnum(m_MacroKindEEnum);
        m_MacroKindEEnum->getELiterals().push_back(_el);
    }

    _initialize();
}

::ecore::EClass_ptr CodePackage::getAbstractCodeElement()
{
    return m_AbstractCodeElementEClass;
}
::ecore::EClass_ptr CodePackage::getCodeItem()
{
    return m_CodeItemEClass;
}
::ecore::EClass_ptr CodePackage::getComputationalObject()
{
    return m_ComputationalObjectEClass;
}
::ecore::EClass_ptr CodePackage::getControlElement()
{
    return m_ControlElementEClass;
}
::ecore::EClass_ptr CodePackage::getMethodUnit()
{
    return m_MethodUnitEClass;
}
::ecore::EClass_ptr CodePackage::getModule()
{
    return m_ModuleEClass;
}
::ecore::EClass_ptr CodePackage::getCodeAssembly()
{
    return m_CodeAssemblyEClass;
}
::ecore::EClass_ptr CodePackage::getCallableUnit()
{
    return m_CallableUnitEClass;
}
::ecore::EClass_ptr CodePackage::getDatatype()
{
    return m_DatatypeEClass;
}
::ecore::EClass_ptr CodePackage::getTemplateUnit()
{
    return m_TemplateUnitEClass;
}
::ecore::EClass_ptr CodePackage::getTemplateParameter()
{
    return m_TemplateParameterEClass;
}
::ecore::EClass_ptr CodePackage::getAbstractCodeRelationship()
{
    return m_AbstractCodeRelationshipEClass;
}
::ecore::EClass_ptr CodePackage::getInstanceOf()
{
    return m_InstanceOfEClass;
}
::ecore::EClass_ptr CodePackage::getCompilationUnit()
{
    return m_CompilationUnitEClass;
}
::ecore::EClass_ptr CodePackage::getCodeModel()
{
    return m_CodeModelEClass;
}
::ecore::EClass_ptr CodePackage::getDerivedType()
{
    return m_DerivedTypeEClass;
}
::ecore::EClass_ptr CodePackage::getArrayType()
{
    return m_ArrayTypeEClass;
}
::ecore::EClass_ptr CodePackage::getPrimitiveType()
{
    return m_PrimitiveTypeEClass;
}
::ecore::EClass_ptr CodePackage::getBooleanType()
{
    return m_BooleanTypeEClass;
}
::ecore::EClass_ptr CodePackage::getCharType()
{
    return m_CharTypeEClass;
}
::ecore::EClass_ptr CodePackage::getClassUnit()
{
    return m_ClassUnitEClass;
}
::ecore::EClass_ptr CodePackage::getCompositeType()
{
    return m_CompositeTypeEClass;
}
::ecore::EClass_ptr CodePackage::getRecordType()
{
    return m_RecordTypeEClass;
}
::ecore::EClass_ptr CodePackage::getEnumeratedType()
{
    return m_EnumeratedTypeEClass;
}
::ecore::EClass_ptr CodePackage::getExtends()
{
    return m_ExtendsEClass;
}
::ecore::EClass_ptr CodePackage::getScaledType()
{
    return m_ScaledTypeEClass;
}
::ecore::EClass_ptr CodePackage::getFloatType()
{
    return m_FloatTypeEClass;
}
::ecore::EClass_ptr CodePackage::getHasType()
{
    return m_HasTypeEClass;
}
::ecore::EClass_ptr CodePackage::getImplementationOf()
{
    return m_ImplementationOfEClass;
}
::ecore::EClass_ptr CodePackage::getImplements()
{
    return m_ImplementsEClass;
}
::ecore::EClass_ptr CodePackage::getIntegerType()
{
    return m_IntegerTypeEClass;
}
::ecore::EClass_ptr CodePackage::getInterfaceUnit()
{
    return m_InterfaceUnitEClass;
}
::ecore::EClass_ptr CodePackage::getPointerType()
{
    return m_PointerTypeEClass;
}
::ecore::EClass_ptr CodePackage::getDefinedType()
{
    return m_DefinedTypeEClass;
}
::ecore::EClass_ptr CodePackage::getTypeUnit()
{
    return m_TypeUnitEClass;
}
::ecore::EClass_ptr CodePackage::getRangeType()
{
    return m_RangeTypeEClass;
}
::ecore::EClass_ptr CodePackage::getSignature()
{
    return m_SignatureEClass;
}
::ecore::EClass_ptr CodePackage::getDataElement()
{
    return m_DataElementEClass;
}
::ecore::EClass_ptr CodePackage::getStringType()
{
    return m_StringTypeEClass;
}
::ecore::EClass_ptr CodePackage::getChoiceType()
{
    return m_ChoiceTypeEClass;
}
::ecore::EClass_ptr CodePackage::getNamespaceUnit()
{
    return m_NamespaceUnitEClass;
}
::ecore::EClass_ptr CodePackage::getVisibleIn()
{
    return m_VisibleInEClass;
}
::ecore::EClass_ptr CodePackage::getCommentUnit()
{
    return m_CommentUnitEClass;
}
::ecore::EClass_ptr CodePackage::getSharedUnit()
{
    return m_SharedUnitEClass;
}
::ecore::EClass_ptr CodePackage::getDecimalType()
{
    return m_DecimalTypeEClass;
}
::ecore::EClass_ptr CodePackage::getDateType()
{
    return m_DateTypeEClass;
}
::ecore::EClass_ptr CodePackage::getTimeType()
{
    return m_TimeTypeEClass;
}
::ecore::EEnum_ptr CodePackage::getMethodKind()
{
    return m_MethodKindEEnum;
}
::ecore::EClass_ptr CodePackage::getVoidType()
{
    return m_VoidTypeEClass;
}
::ecore::EClass_ptr CodePackage::getValueElement()
{
    return m_ValueElementEClass;
}
::ecore::EClass_ptr CodePackage::getValue()
{
    return m_ValueEClass;
}
::ecore::EClass_ptr CodePackage::getValueList()
{
    return m_ValueListEClass;
}
::ecore::EClass_ptr CodePackage::getStorableUnit()
{
    return m_StorableUnitEClass;
}
::ecore::EClass_ptr CodePackage::getMemberUnit()
{
    return m_MemberUnitEClass;
}
::ecore::EClass_ptr CodePackage::getParameterUnit()
{
    return m_ParameterUnitEClass;
}
::ecore::EClass_ptr CodePackage::getItemUnit()
{
    return m_ItemUnitEClass;
}
::ecore::EClass_ptr CodePackage::getIndexUnit()
{
    return m_IndexUnitEClass;
}
::ecore::EClass_ptr CodePackage::getSynonymType()
{
    return m_SynonymTypeEClass;
}
::ecore::EClass_ptr CodePackage::getSequenceType()
{
    return m_SequenceTypeEClass;
}
::ecore::EClass_ptr CodePackage::getBagType()
{
    return m_BagTypeEClass;
}
::ecore::EClass_ptr CodePackage::getSetType()
{
    return m_SetTypeEClass;
}
::ecore::EClass_ptr CodePackage::getCodeElement()
{
    return m_CodeElementEClass;
}
::ecore::EClass_ptr CodePackage::getCodeRelationship()
{
    return m_CodeRelationshipEClass;
}
::ecore::EEnum_ptr CodePackage::getParameterKind()
{
    return m_ParameterKindEEnum;
}
::ecore::EEnum_ptr CodePackage::getExportKind()
{
    return m_ExportKindEEnum;
}
::ecore::EClass_ptr CodePackage::getLanguageUnit()
{
    return m_LanguageUnitEClass;
}
::ecore::EClass_ptr CodePackage::getOrdinalType()
{
    return m_OrdinalTypeEClass;
}
::ecore::EClass_ptr CodePackage::getBitstringType()
{
    return m_BitstringTypeEClass;
}
::ecore::EClass_ptr CodePackage::getOctetType()
{
    return m_OctetTypeEClass;
}
::ecore::EClass_ptr CodePackage::getOctetstringType()
{
    return m_OctetstringTypeEClass;
}
::ecore::EClass_ptr CodePackage::getBitType()
{
    return m_BitTypeEClass;
}
::ecore::EEnum_ptr CodePackage::getStorableKind()
{
    return m_StorableKindEEnum;
}
::ecore::EEnum_ptr CodePackage::getCallableKind()
{
    return m_CallableKindEEnum;
}
::ecore::EClass_ptr CodePackage::getImports()
{
    return m_ImportsEClass;
}
::ecore::EClass_ptr CodePackage::getPackage()
{
    return m_PackageEClass;
}
::ecore::EClass_ptr CodePackage::getParameterTo()
{
    return m_ParameterToEClass;
}
::ecore::EClass_ptr CodePackage::getTemplateType()
{
    return m_TemplateTypeEClass;
}
::ecore::EClass_ptr CodePackage::getPreprocessorDirective()
{
    return m_PreprocessorDirectiveEClass;
}
::ecore::EClass_ptr CodePackage::getMacroDirective()
{
    return m_MacroDirectiveEClass;
}
::ecore::EClass_ptr CodePackage::getMacroUnit()
{
    return m_MacroUnitEClass;
}
::ecore::EClass_ptr CodePackage::getConditionalDirective()
{
    return m_ConditionalDirectiveEClass;
}
::ecore::EClass_ptr CodePackage::getIncludeDirective()
{
    return m_IncludeDirectiveEClass;
}
::ecore::EEnum_ptr CodePackage::getMacroKind()
{
    return m_MacroKindEEnum;
}
::ecore::EClass_ptr CodePackage::getVariantTo()
{
    return m_VariantToEClass;
}
::ecore::EClass_ptr CodePackage::getExpands()
{
    return m_ExpandsEClass;
}
::ecore::EClass_ptr CodePackage::getRedefines()
{
    return m_RedefinesEClass;
}
::ecore::EClass_ptr CodePackage::getGeneratedFrom()
{
    return m_GeneratedFromEClass;
}
::ecore::EClass_ptr CodePackage::getIncludes()
{
    return m_IncludesEClass;
}
::ecore::EClass_ptr CodePackage::getHasValue()
{
    return m_HasValueEClass;
}

::ecore::EReference_ptr CodePackage::getElement__attribute()
{
    return m_Element__attribute;
}
::ecore::EReference_ptr CodePackage::getElement__annotation()
{
    return m_Element__annotation;
}
::ecore::EReference_ptr CodePackage::getModelElement__stereotype()
{
    return m_ModelElement__stereotype;
}
::ecore::EReference_ptr CodePackage::getModelElement__taggedValue()
{
    return m_ModelElement__taggedValue;
}
::ecore::EAttribute_ptr CodePackage::getKDMEntity__name()
{
    return m_KDMEntity__name;
}
::ecore::EReference_ptr CodePackage::getAbstractCodeElement__source()
{
    return m_AbstractCodeElement__source;
}
::ecore::EReference_ptr CodePackage::getAbstractCodeElement__comment()
{
    return m_AbstractCodeElement__comment;
}
::ecore::EReference_ptr CodePackage::getAbstractCodeElement__codeRelation()
{
    return m_AbstractCodeElement__codeRelation;
}
::ecore::EReference_ptr CodePackage::getControlElement__type()
{
    return m_ControlElement__type;
}
::ecore::EReference_ptr CodePackage::getControlElement__entryFlow()
{
    return m_ControlElement__entryFlow;
}
::ecore::EReference_ptr CodePackage::getControlElement__codeElement()
{
    return m_ControlElement__codeElement;
}
::ecore::EAttribute_ptr CodePackage::getMethodUnit__kind()
{
    return m_MethodUnit__kind;
}
::ecore::EAttribute_ptr CodePackage::getMethodUnit__export()
{
    return m_MethodUnit__export;
}
::ecore::EReference_ptr CodePackage::getModule__codeElement()
{
    return m_Module__codeElement;
}
::ecore::EAttribute_ptr CodePackage::getCallableUnit__kind()
{
    return m_CallableUnit__kind;
}
::ecore::EReference_ptr CodePackage::getTemplateUnit__codeElement()
{
    return m_TemplateUnit__codeElement;
}
::ecore::EReference_ptr CodePackage::getInstanceOf__to()
{
    return m_InstanceOf__to;
}
::ecore::EReference_ptr CodePackage::getInstanceOf__from()
{
    return m_InstanceOf__from;
}
::ecore::EReference_ptr CodePackage::getKDMFramework__audit()
{
    return m_KDMFramework__audit;
}
::ecore::EReference_ptr CodePackage::getKDMFramework__extensionFamily()
{
    return m_KDMFramework__extensionFamily;
}
::ecore::EAttribute_ptr CodePackage::getKDMFramework__name()
{
    return m_KDMFramework__name;
}
::ecore::EReference_ptr CodePackage::getCodeModel__codeElement()
{
    return m_CodeModel__codeElement;
}
::ecore::EReference_ptr CodePackage::getDerivedType__itemUnit()
{
    return m_DerivedType__itemUnit;
}
::ecore::EAttribute_ptr CodePackage::getArrayType__size()
{
    return m_ArrayType__size;
}
::ecore::EReference_ptr CodePackage::getArrayType__indexUnit()
{
    return m_ArrayType__indexUnit;
}
::ecore::EAttribute_ptr CodePackage::getClassUnit__isAbstract()
{
    return m_ClassUnit__isAbstract;
}
::ecore::EReference_ptr CodePackage::getClassUnit__codeElement()
{
    return m_ClassUnit__codeElement;
}
::ecore::EReference_ptr CodePackage::getCompositeType__itemUnit()
{
    return m_CompositeType__itemUnit;
}
::ecore::EReference_ptr CodePackage::getEnumeratedType__value()
{
    return m_EnumeratedType__value;
}
::ecore::EReference_ptr CodePackage::getExtends__to()
{
    return m_Extends__to;
}
::ecore::EReference_ptr CodePackage::getExtends__from()
{
    return m_Extends__from;
}
::ecore::EReference_ptr CodePackage::getHasType__to()
{
    return m_HasType__to;
}
::ecore::EReference_ptr CodePackage::getHasType__from()
{
    return m_HasType__from;
}
::ecore::EReference_ptr CodePackage::getImplementationOf__to()
{
    return m_ImplementationOf__to;
}
::ecore::EReference_ptr CodePackage::getImplementationOf__from()
{
    return m_ImplementationOf__from;
}
::ecore::EReference_ptr CodePackage::getImplements__to()
{
    return m_Implements__to;
}
::ecore::EReference_ptr CodePackage::getImplements__from()
{
    return m_Implements__from;
}
::ecore::EReference_ptr CodePackage::getInterfaceUnit__codeElement()
{
    return m_InterfaceUnit__codeElement;
}
::ecore::EReference_ptr CodePackage::getDefinedType__type()
{
    return m_DefinedType__type;
}
::ecore::EReference_ptr CodePackage::getDefinedType__codeElement()
{
    return m_DefinedType__codeElement;
}
::ecore::EAttribute_ptr CodePackage::getRangeType__lower()
{
    return m_RangeType__lower;
}
::ecore::EAttribute_ptr CodePackage::getRangeType__upper()
{
    return m_RangeType__upper;
}
::ecore::EReference_ptr CodePackage::getSignature__parameterUnit()
{
    return m_Signature__parameterUnit;
}
::ecore::EReference_ptr CodePackage::getDataElement__type()
{
    return m_DataElement__type;
}
::ecore::EAttribute_ptr CodePackage::getDataElement__ext()
{
    return m_DataElement__ext;
}
::ecore::EAttribute_ptr CodePackage::getDataElement__size()
{
    return m_DataElement__size;
}
::ecore::EReference_ptr CodePackage::getDataElement__codeElement()
{
    return m_DataElement__codeElement;
}
::ecore::EReference_ptr CodePackage::getNamespaceUnit__groupedCode()
{
    return m_NamespaceUnit__groupedCode;
}
::ecore::EReference_ptr CodePackage::getVisibleIn__to()
{
    return m_VisibleIn__to;
}
::ecore::EReference_ptr CodePackage::getVisibleIn__from()
{
    return m_VisibleIn__from;
}
::ecore::EAttribute_ptr CodePackage::getCommentUnit__text()
{
    return m_CommentUnit__text;
}
::ecore::EReference_ptr CodePackage::getValueList__valueElement()
{
    return m_ValueList__valueElement;
}
::ecore::EAttribute_ptr CodePackage::getStorableUnit__kind()
{
    return m_StorableUnit__kind;
}
::ecore::EAttribute_ptr CodePackage::getMemberUnit__export()
{
    return m_MemberUnit__export;
}
::ecore::EAttribute_ptr CodePackage::getParameterUnit__kind()
{
    return m_ParameterUnit__kind;
}
::ecore::EAttribute_ptr CodePackage::getParameterUnit__pos()
{
    return m_ParameterUnit__pos;
}
::ecore::EAttribute_ptr CodePackage::getSequenceType__size()
{
    return m_SequenceType__size;
}
::ecore::EAttribute_ptr CodePackage::getBagType__size()
{
    return m_BagType__size;
}
::ecore::EAttribute_ptr CodePackage::getSetType__size()
{
    return m_SetType__size;
}
::ecore::EReference_ptr CodePackage::getCodeRelationship__to()
{
    return m_CodeRelationship__to;
}
::ecore::EReference_ptr CodePackage::getCodeRelationship__from()
{
    return m_CodeRelationship__from;
}
::ecore::EReference_ptr CodePackage::getImports__to()
{
    return m_Imports__to;
}
::ecore::EReference_ptr CodePackage::getImports__from()
{
    return m_Imports__from;
}
::ecore::EReference_ptr CodePackage::getParameterTo__to()
{
    return m_ParameterTo__to;
}
::ecore::EReference_ptr CodePackage::getParameterTo__from()
{
    return m_ParameterTo__from;
}
::ecore::EReference_ptr CodePackage::getPreprocessorDirective__codeElement()
{
    return m_PreprocessorDirective__codeElement;
}
::ecore::EAttribute_ptr CodePackage::getMacroUnit__kind()
{
    return m_MacroUnit__kind;
}
::ecore::EReference_ptr CodePackage::getVariantTo__to()
{
    return m_VariantTo__to;
}
::ecore::EReference_ptr CodePackage::getVariantTo__from()
{
    return m_VariantTo__from;
}
::ecore::EReference_ptr CodePackage::getExpands__to()
{
    return m_Expands__to;
}
::ecore::EReference_ptr CodePackage::getExpands__from()
{
    return m_Expands__from;
}
::ecore::EReference_ptr CodePackage::getRedefines__to()
{
    return m_Redefines__to;
}
::ecore::EReference_ptr CodePackage::getRedefines__from()
{
    return m_Redefines__from;
}
::ecore::EReference_ptr CodePackage::getGeneratedFrom__to()
{
    return m_GeneratedFrom__to;
}
::ecore::EReference_ptr CodePackage::getGeneratedFrom__from()
{
    return m_GeneratedFrom__from;
}
::ecore::EReference_ptr CodePackage::getIncludes__to()
{
    return m_Includes__to;
}
::ecore::EReference_ptr CodePackage::getIncludes__from()
{
    return m_Includes__from;
}
::ecore::EReference_ptr CodePackage::getHasValue__to()
{
    return m_HasValue__to;
}
::ecore::EReference_ptr CodePackage::getHasValue__from()
{
    return m_HasValue__from;
}

