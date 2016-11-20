// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/data/DataPackageImpl.cpp
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

#include <kdm/data/DataPackage.hpp>
#include <kdm/data/DataFactory.hpp>
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
#include <kdm/code/CodePackage.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/code/ItemUnit.hpp>
#include <kdm/code/CodeItem.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/code/Datatype.hpp>

using namespace ::kdm::data;

DataPackage::DataPackage()
{

    // Feature definitions of DataModel
    m_DataModel__dataElement = new ::ecore::EReference();

    // Feature definitions of AbstractDataElement
    m_AbstractDataElement__source = new ::ecore::EReference();
    m_AbstractDataElement__dataRelation = new ::ecore::EReference();
    m_AbstractDataElement__abstraction = new ::ecore::EReference();

    // Feature definitions of DataResource

    // Feature definitions of IndexElement
    m_IndexElement__implementation = new ::ecore::EReference();

    // Feature definitions of UniqueKey

    // Feature definitions of Index

    // Feature definitions of AbstractDataRelationship

    // Feature definitions of KeyRelation
    m_KeyRelation__to = new ::ecore::EReference();
    m_KeyRelation__from = new ::ecore::EReference();

    // Feature definitions of ReferenceKey

    // Feature definitions of DataContainer
    m_DataContainer__dataElement = new ::ecore::EReference();

    // Feature definitions of Catalog

    // Feature definitions of RelationalSchema
    m_RelationalSchema__codeElement = new ::ecore::EReference();

    // Feature definitions of ColumnSet
    m_ColumnSet__itemUnit = new ::ecore::EReference();

    // Feature definitions of RelationalTable

    // Feature definitions of RelationalView

    // Feature definitions of RecordFile

    // Feature definitions of DataEvent
    m_DataEvent__kind = new ::ecore::EAttribute();

    // Feature definitions of XMLSchema
    m_XMLSchema__contentElement = new ::ecore::EReference();

    // Feature definitions of AbstractContentElement

    // Feature definitions of ComplexContentType
    m_ComplexContentType__contentElement = new ::ecore::EReference();

    // Feature definitions of AllContent

    // Feature definitions of SeqContent

    // Feature definitions of ChoiceContent

    // Feature definitions of ContentItem
    m_ContentItem__type = new ::ecore::EReference();
    m_ContentItem__contentElement = new ::ecore::EReference();

    // Feature definitions of GroupContent

    // Feature definitions of ContentRestriction
    m_ContentRestriction__kind = new ::ecore::EAttribute();
    m_ContentRestriction__value = new ::ecore::EAttribute();

    // Feature definitions of SimpleContentType
    m_SimpleContentType__kind = new ::ecore::EAttribute();
    m_SimpleContentType__type = new ::ecore::EReference();

    // Feature definitions of ExtendedDataElement

    // Feature definitions of DataRelationship
    m_DataRelationship__to = new ::ecore::EReference();
    m_DataRelationship__from = new ::ecore::EReference();

    // Feature definitions of MixedContent

    // Feature definitions of ContentReference

    // Feature definitions of DataAction
    m_DataAction__kind = new ::ecore::EAttribute();
    m_DataAction__implementation = new ::ecore::EReference();
    m_DataAction__dataElement = new ::ecore::EReference();

    // Feature definitions of ReadsColumnSet
    m_ReadsColumnSet__to = new ::ecore::EReference();
    m_ReadsColumnSet__from = new ::ecore::EReference();

    // Feature definitions of ContentAttribute

    // Feature definitions of TypedBy
    m_TypedBy__to = new ::ecore::EReference();
    m_TypedBy__from = new ::ecore::EReference();

    // Feature definitions of ReferenceTo
    m_ReferenceTo__to = new ::ecore::EReference();
    m_ReferenceTo__from = new ::ecore::EReference();

    // Feature definitions of RestrictionOf
    m_RestrictionOf__to = new ::ecore::EReference();
    m_RestrictionOf__from = new ::ecore::EReference();

    // Feature definitions of ExtensionTo
    m_ExtensionTo__to = new ::ecore::EReference();
    m_ExtensionTo__from = new ::ecore::EReference();

    // Feature definitions of DatatypeOf
    m_DatatypeOf__to = new ::ecore::EReference();
    m_DatatypeOf__from = new ::ecore::EReference();

    // Feature definitions of HasContent
    m_HasContent__to = new ::ecore::EReference();
    m_HasContent__from = new ::ecore::EReference();

    // Feature definitions of WritesColumnSet
    m_WritesColumnSet__to = new ::ecore::EReference();
    m_WritesColumnSet__from = new ::ecore::EReference();

    // Feature definitions of ProducesDataEvent
    m_ProducesDataEvent__to = new ::ecore::EReference();
    m_ProducesDataEvent__from = new ::ecore::EReference();

    // Feature definitions of DataSegment

    // Feature definitions of ContentElement

    // Feature definitions of ManagesData
    m_ManagesData__to = new ::ecore::EReference();
    m_ManagesData__from = new ::ecore::EReference();

    /* Now one can safely ask for a feature definition of
     * a class, though it is not yet usable. */
    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = DataFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    // Create classes and their features

    // DataModel
    m_DataModelEClass = new ::ecore::EClass();
    m_DataModelEClass->setClassifierID(DATAMODEL);
    m_DataModelEClass->setEPackage(this);
    getEClassifiers().push_back(m_DataModelEClass);
    // m_DataModel__dataElement has already been allocated above
    m_DataModel__dataElement->setFeatureID(
            ::kdm::data::DataPackage::DATAMODEL__DATAELEMENT);
    m_DataModelEClass->getEStructuralFeatures().push_back(
            m_DataModel__dataElement);

    // AbstractDataElement
    m_AbstractDataElementEClass = new ::ecore::EClass();
    m_AbstractDataElementEClass->setClassifierID(ABSTRACTDATAELEMENT);
    m_AbstractDataElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_AbstractDataElementEClass);
    // m_AbstractDataElement__source has already been allocated above
    m_AbstractDataElement__source->setFeatureID(
            ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__SOURCE);
    m_AbstractDataElementEClass->getEStructuralFeatures().push_back(
            m_AbstractDataElement__source);
    // m_AbstractDataElement__dataRelation has already been allocated above
    m_AbstractDataElement__dataRelation->setFeatureID(
            ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__DATARELATION);
    m_AbstractDataElementEClass->getEStructuralFeatures().push_back(
            m_AbstractDataElement__dataRelation);
    // m_AbstractDataElement__abstraction has already been allocated above
    m_AbstractDataElement__abstraction->setFeatureID(
            ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__ABSTRACTION);
    m_AbstractDataElementEClass->getEStructuralFeatures().push_back(
            m_AbstractDataElement__abstraction);

    // DataResource
    m_DataResourceEClass = new ::ecore::EClass();
    m_DataResourceEClass->setClassifierID(DATARESOURCE);
    m_DataResourceEClass->setEPackage(this);
    getEClassifiers().push_back(m_DataResourceEClass);

    // IndexElement
    m_IndexElementEClass = new ::ecore::EClass();
    m_IndexElementEClass->setClassifierID(INDEXELEMENT);
    m_IndexElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_IndexElementEClass);
    // m_IndexElement__implementation has already been allocated above
    m_IndexElement__implementation->setFeatureID(
            ::kdm::data::DataPackage::INDEXELEMENT__IMPLEMENTATION);
    m_IndexElementEClass->getEStructuralFeatures().push_back(
            m_IndexElement__implementation);

    // UniqueKey
    m_UniqueKeyEClass = new ::ecore::EClass();
    m_UniqueKeyEClass->setClassifierID(UNIQUEKEY);
    m_UniqueKeyEClass->setEPackage(this);
    getEClassifiers().push_back(m_UniqueKeyEClass);

    // Index
    m_IndexEClass = new ::ecore::EClass();
    m_IndexEClass->setClassifierID(INDEX);
    m_IndexEClass->setEPackage(this);
    getEClassifiers().push_back(m_IndexEClass);

    // AbstractDataRelationship
    m_AbstractDataRelationshipEClass = new ::ecore::EClass();
    m_AbstractDataRelationshipEClass->setClassifierID(ABSTRACTDATARELATIONSHIP);
    m_AbstractDataRelationshipEClass->setEPackage(this);
    getEClassifiers().push_back(m_AbstractDataRelationshipEClass);

    // KeyRelation
    m_KeyRelationEClass = new ::ecore::EClass();
    m_KeyRelationEClass->setClassifierID(KEYRELATION);
    m_KeyRelationEClass->setEPackage(this);
    getEClassifiers().push_back(m_KeyRelationEClass);
    // m_KeyRelation__to has already been allocated above
    m_KeyRelation__to->setFeatureID(::kdm::data::DataPackage::KEYRELATION__TO);
    m_KeyRelationEClass->getEStructuralFeatures().push_back(m_KeyRelation__to);
    // m_KeyRelation__from has already been allocated above
    m_KeyRelation__from->setFeatureID(
            ::kdm::data::DataPackage::KEYRELATION__FROM);
    m_KeyRelationEClass->getEStructuralFeatures().push_back(
            m_KeyRelation__from);

    // ReferenceKey
    m_ReferenceKeyEClass = new ::ecore::EClass();
    m_ReferenceKeyEClass->setClassifierID(REFERENCEKEY);
    m_ReferenceKeyEClass->setEPackage(this);
    getEClassifiers().push_back(m_ReferenceKeyEClass);

    // DataContainer
    m_DataContainerEClass = new ::ecore::EClass();
    m_DataContainerEClass->setClassifierID(DATACONTAINER);
    m_DataContainerEClass->setEPackage(this);
    getEClassifiers().push_back(m_DataContainerEClass);
    // m_DataContainer__dataElement has already been allocated above
    m_DataContainer__dataElement->setFeatureID(
            ::kdm::data::DataPackage::DATACONTAINER__DATAELEMENT);
    m_DataContainerEClass->getEStructuralFeatures().push_back(
            m_DataContainer__dataElement);

    // Catalog
    m_CatalogEClass = new ::ecore::EClass();
    m_CatalogEClass->setClassifierID(CATALOG);
    m_CatalogEClass->setEPackage(this);
    getEClassifiers().push_back(m_CatalogEClass);

    // RelationalSchema
    m_RelationalSchemaEClass = new ::ecore::EClass();
    m_RelationalSchemaEClass->setClassifierID(RELATIONALSCHEMA);
    m_RelationalSchemaEClass->setEPackage(this);
    getEClassifiers().push_back(m_RelationalSchemaEClass);
    // m_RelationalSchema__codeElement has already been allocated above
    m_RelationalSchema__codeElement->setFeatureID(
            ::kdm::data::DataPackage::RELATIONALSCHEMA__CODEELEMENT);
    m_RelationalSchemaEClass->getEStructuralFeatures().push_back(
            m_RelationalSchema__codeElement);

    // ColumnSet
    m_ColumnSetEClass = new ::ecore::EClass();
    m_ColumnSetEClass->setClassifierID(COLUMNSET);
    m_ColumnSetEClass->setEPackage(this);
    getEClassifiers().push_back(m_ColumnSetEClass);
    // m_ColumnSet__itemUnit has already been allocated above
    m_ColumnSet__itemUnit->setFeatureID(
            ::kdm::data::DataPackage::COLUMNSET__ITEMUNIT);
    m_ColumnSetEClass->getEStructuralFeatures().push_back(
            m_ColumnSet__itemUnit);

    // RelationalTable
    m_RelationalTableEClass = new ::ecore::EClass();
    m_RelationalTableEClass->setClassifierID(RELATIONALTABLE);
    m_RelationalTableEClass->setEPackage(this);
    getEClassifiers().push_back(m_RelationalTableEClass);

    // RelationalView
    m_RelationalViewEClass = new ::ecore::EClass();
    m_RelationalViewEClass->setClassifierID(RELATIONALVIEW);
    m_RelationalViewEClass->setEPackage(this);
    getEClassifiers().push_back(m_RelationalViewEClass);

    // RecordFile
    m_RecordFileEClass = new ::ecore::EClass();
    m_RecordFileEClass->setClassifierID(RECORDFILE);
    m_RecordFileEClass->setEPackage(this);
    getEClassifiers().push_back(m_RecordFileEClass);

    // DataEvent
    m_DataEventEClass = new ::ecore::EClass();
    m_DataEventEClass->setClassifierID(DATAEVENT);
    m_DataEventEClass->setEPackage(this);
    getEClassifiers().push_back(m_DataEventEClass);
    // m_DataEvent__kind has already been allocated above
    m_DataEvent__kind->setFeatureID(::kdm::data::DataPackage::DATAEVENT__KIND);
    m_DataEventEClass->getEStructuralFeatures().push_back(m_DataEvent__kind);

    // XMLSchema
    m_XMLSchemaEClass = new ::ecore::EClass();
    m_XMLSchemaEClass->setClassifierID(XMLSCHEMA);
    m_XMLSchemaEClass->setEPackage(this);
    getEClassifiers().push_back(m_XMLSchemaEClass);
    // m_XMLSchema__contentElement has already been allocated above
    m_XMLSchema__contentElement->setFeatureID(
            ::kdm::data::DataPackage::XMLSCHEMA__CONTENTELEMENT);
    m_XMLSchemaEClass->getEStructuralFeatures().push_back(
            m_XMLSchema__contentElement);

    // AbstractContentElement
    m_AbstractContentElementEClass = new ::ecore::EClass();
    m_AbstractContentElementEClass->setClassifierID(ABSTRACTCONTENTELEMENT);
    m_AbstractContentElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_AbstractContentElementEClass);

    // ComplexContentType
    m_ComplexContentTypeEClass = new ::ecore::EClass();
    m_ComplexContentTypeEClass->setClassifierID(COMPLEXCONTENTTYPE);
    m_ComplexContentTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_ComplexContentTypeEClass);
    // m_ComplexContentType__contentElement has already been allocated above
    m_ComplexContentType__contentElement->setFeatureID(
            ::kdm::data::DataPackage::COMPLEXCONTENTTYPE__CONTENTELEMENT);
    m_ComplexContentTypeEClass->getEStructuralFeatures().push_back(
            m_ComplexContentType__contentElement);

    // AllContent
    m_AllContentEClass = new ::ecore::EClass();
    m_AllContentEClass->setClassifierID(ALLCONTENT);
    m_AllContentEClass->setEPackage(this);
    getEClassifiers().push_back(m_AllContentEClass);

    // SeqContent
    m_SeqContentEClass = new ::ecore::EClass();
    m_SeqContentEClass->setClassifierID(SEQCONTENT);
    m_SeqContentEClass->setEPackage(this);
    getEClassifiers().push_back(m_SeqContentEClass);

    // ChoiceContent
    m_ChoiceContentEClass = new ::ecore::EClass();
    m_ChoiceContentEClass->setClassifierID(CHOICECONTENT);
    m_ChoiceContentEClass->setEPackage(this);
    getEClassifiers().push_back(m_ChoiceContentEClass);

    // ContentItem
    m_ContentItemEClass = new ::ecore::EClass();
    m_ContentItemEClass->setClassifierID(CONTENTITEM);
    m_ContentItemEClass->setEPackage(this);
    getEClassifiers().push_back(m_ContentItemEClass);
    // m_ContentItem__type has already been allocated above
    m_ContentItem__type->setFeatureID(
            ::kdm::data::DataPackage::CONTENTITEM__TYPE);
    m_ContentItemEClass->getEStructuralFeatures().push_back(
            m_ContentItem__type);
    // m_ContentItem__contentElement has already been allocated above
    m_ContentItem__contentElement->setFeatureID(
            ::kdm::data::DataPackage::CONTENTITEM__CONTENTELEMENT);
    m_ContentItemEClass->getEStructuralFeatures().push_back(
            m_ContentItem__contentElement);

    // GroupContent
    m_GroupContentEClass = new ::ecore::EClass();
    m_GroupContentEClass->setClassifierID(GROUPCONTENT);
    m_GroupContentEClass->setEPackage(this);
    getEClassifiers().push_back(m_GroupContentEClass);

    // ContentRestriction
    m_ContentRestrictionEClass = new ::ecore::EClass();
    m_ContentRestrictionEClass->setClassifierID(CONTENTRESTRICTION);
    m_ContentRestrictionEClass->setEPackage(this);
    getEClassifiers().push_back(m_ContentRestrictionEClass);
    // m_ContentRestriction__kind has already been allocated above
    m_ContentRestriction__kind->setFeatureID(
            ::kdm::data::DataPackage::CONTENTRESTRICTION__KIND);
    m_ContentRestrictionEClass->getEStructuralFeatures().push_back(
            m_ContentRestriction__kind);
    // m_ContentRestriction__value has already been allocated above
    m_ContentRestriction__value->setFeatureID(
            ::kdm::data::DataPackage::CONTENTRESTRICTION__VALUE);
    m_ContentRestrictionEClass->getEStructuralFeatures().push_back(
            m_ContentRestriction__value);

    // SimpleContentType
    m_SimpleContentTypeEClass = new ::ecore::EClass();
    m_SimpleContentTypeEClass->setClassifierID(SIMPLECONTENTTYPE);
    m_SimpleContentTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_SimpleContentTypeEClass);
    // m_SimpleContentType__kind has already been allocated above
    m_SimpleContentType__kind->setFeatureID(
            ::kdm::data::DataPackage::SIMPLECONTENTTYPE__KIND);
    m_SimpleContentTypeEClass->getEStructuralFeatures().push_back(
            m_SimpleContentType__kind);
    // m_SimpleContentType__type has already been allocated above
    m_SimpleContentType__type->setFeatureID(
            ::kdm::data::DataPackage::SIMPLECONTENTTYPE__TYPE);
    m_SimpleContentTypeEClass->getEStructuralFeatures().push_back(
            m_SimpleContentType__type);

    // ExtendedDataElement
    m_ExtendedDataElementEClass = new ::ecore::EClass();
    m_ExtendedDataElementEClass->setClassifierID(EXTENDEDDATAELEMENT);
    m_ExtendedDataElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_ExtendedDataElementEClass);

    // DataRelationship
    m_DataRelationshipEClass = new ::ecore::EClass();
    m_DataRelationshipEClass->setClassifierID(DATARELATIONSHIP);
    m_DataRelationshipEClass->setEPackage(this);
    getEClassifiers().push_back(m_DataRelationshipEClass);
    // m_DataRelationship__to has already been allocated above
    m_DataRelationship__to->setFeatureID(
            ::kdm::data::DataPackage::DATARELATIONSHIP__TO);
    m_DataRelationshipEClass->getEStructuralFeatures().push_back(
            m_DataRelationship__to);
    // m_DataRelationship__from has already been allocated above
    m_DataRelationship__from->setFeatureID(
            ::kdm::data::DataPackage::DATARELATIONSHIP__FROM);
    m_DataRelationshipEClass->getEStructuralFeatures().push_back(
            m_DataRelationship__from);

    // MixedContent
    m_MixedContentEClass = new ::ecore::EClass();
    m_MixedContentEClass->setClassifierID(MIXEDCONTENT);
    m_MixedContentEClass->setEPackage(this);
    getEClassifiers().push_back(m_MixedContentEClass);

    // ContentReference
    m_ContentReferenceEClass = new ::ecore::EClass();
    m_ContentReferenceEClass->setClassifierID(CONTENTREFERENCE);
    m_ContentReferenceEClass->setEPackage(this);
    getEClassifiers().push_back(m_ContentReferenceEClass);

    // DataAction
    m_DataActionEClass = new ::ecore::EClass();
    m_DataActionEClass->setClassifierID(DATAACTION);
    m_DataActionEClass->setEPackage(this);
    getEClassifiers().push_back(m_DataActionEClass);
    // m_DataAction__kind has already been allocated above
    m_DataAction__kind->setFeatureID(
            ::kdm::data::DataPackage::DATAACTION__KIND);
    m_DataActionEClass->getEStructuralFeatures().push_back(m_DataAction__kind);
    // m_DataAction__implementation has already been allocated above
    m_DataAction__implementation->setFeatureID(
            ::kdm::data::DataPackage::DATAACTION__IMPLEMENTATION);
    m_DataActionEClass->getEStructuralFeatures().push_back(
            m_DataAction__implementation);
    // m_DataAction__dataElement has already been allocated above
    m_DataAction__dataElement->setFeatureID(
            ::kdm::data::DataPackage::DATAACTION__DATAELEMENT);
    m_DataActionEClass->getEStructuralFeatures().push_back(
            m_DataAction__dataElement);

    // ReadsColumnSet
    m_ReadsColumnSetEClass = new ::ecore::EClass();
    m_ReadsColumnSetEClass->setClassifierID(READSCOLUMNSET);
    m_ReadsColumnSetEClass->setEPackage(this);
    getEClassifiers().push_back(m_ReadsColumnSetEClass);
    // m_ReadsColumnSet__to has already been allocated above
    m_ReadsColumnSet__to->setFeatureID(
            ::kdm::data::DataPackage::READSCOLUMNSET__TO);
    m_ReadsColumnSetEClass->getEStructuralFeatures().push_back(
            m_ReadsColumnSet__to);
    // m_ReadsColumnSet__from has already been allocated above
    m_ReadsColumnSet__from->setFeatureID(
            ::kdm::data::DataPackage::READSCOLUMNSET__FROM);
    m_ReadsColumnSetEClass->getEStructuralFeatures().push_back(
            m_ReadsColumnSet__from);

    // ContentAttribute
    m_ContentAttributeEClass = new ::ecore::EClass();
    m_ContentAttributeEClass->setClassifierID(CONTENTATTRIBUTE);
    m_ContentAttributeEClass->setEPackage(this);
    getEClassifiers().push_back(m_ContentAttributeEClass);

    // TypedBy
    m_TypedByEClass = new ::ecore::EClass();
    m_TypedByEClass->setClassifierID(TYPEDBY);
    m_TypedByEClass->setEPackage(this);
    getEClassifiers().push_back(m_TypedByEClass);
    // m_TypedBy__to has already been allocated above
    m_TypedBy__to->setFeatureID(::kdm::data::DataPackage::TYPEDBY__TO);
    m_TypedByEClass->getEStructuralFeatures().push_back(m_TypedBy__to);
    // m_TypedBy__from has already been allocated above
    m_TypedBy__from->setFeatureID(::kdm::data::DataPackage::TYPEDBY__FROM);
    m_TypedByEClass->getEStructuralFeatures().push_back(m_TypedBy__from);

    // ReferenceTo
    m_ReferenceToEClass = new ::ecore::EClass();
    m_ReferenceToEClass->setClassifierID(REFERENCETO);
    m_ReferenceToEClass->setEPackage(this);
    getEClassifiers().push_back(m_ReferenceToEClass);
    // m_ReferenceTo__to has already been allocated above
    m_ReferenceTo__to->setFeatureID(::kdm::data::DataPackage::REFERENCETO__TO);
    m_ReferenceToEClass->getEStructuralFeatures().push_back(m_ReferenceTo__to);
    // m_ReferenceTo__from has already been allocated above
    m_ReferenceTo__from->setFeatureID(
            ::kdm::data::DataPackage::REFERENCETO__FROM);
    m_ReferenceToEClass->getEStructuralFeatures().push_back(
            m_ReferenceTo__from);

    // RestrictionOf
    m_RestrictionOfEClass = new ::ecore::EClass();
    m_RestrictionOfEClass->setClassifierID(RESTRICTIONOF);
    m_RestrictionOfEClass->setEPackage(this);
    getEClassifiers().push_back(m_RestrictionOfEClass);
    // m_RestrictionOf__to has already been allocated above
    m_RestrictionOf__to->setFeatureID(
            ::kdm::data::DataPackage::RESTRICTIONOF__TO);
    m_RestrictionOfEClass->getEStructuralFeatures().push_back(
            m_RestrictionOf__to);
    // m_RestrictionOf__from has already been allocated above
    m_RestrictionOf__from->setFeatureID(
            ::kdm::data::DataPackage::RESTRICTIONOF__FROM);
    m_RestrictionOfEClass->getEStructuralFeatures().push_back(
            m_RestrictionOf__from);

    // ExtensionTo
    m_ExtensionToEClass = new ::ecore::EClass();
    m_ExtensionToEClass->setClassifierID(EXTENSIONTO);
    m_ExtensionToEClass->setEPackage(this);
    getEClassifiers().push_back(m_ExtensionToEClass);
    // m_ExtensionTo__to has already been allocated above
    m_ExtensionTo__to->setFeatureID(::kdm::data::DataPackage::EXTENSIONTO__TO);
    m_ExtensionToEClass->getEStructuralFeatures().push_back(m_ExtensionTo__to);
    // m_ExtensionTo__from has already been allocated above
    m_ExtensionTo__from->setFeatureID(
            ::kdm::data::DataPackage::EXTENSIONTO__FROM);
    m_ExtensionToEClass->getEStructuralFeatures().push_back(
            m_ExtensionTo__from);

    // DatatypeOf
    m_DatatypeOfEClass = new ::ecore::EClass();
    m_DatatypeOfEClass->setClassifierID(DATATYPEOF);
    m_DatatypeOfEClass->setEPackage(this);
    getEClassifiers().push_back(m_DatatypeOfEClass);
    // m_DatatypeOf__to has already been allocated above
    m_DatatypeOf__to->setFeatureID(::kdm::data::DataPackage::DATATYPEOF__TO);
    m_DatatypeOfEClass->getEStructuralFeatures().push_back(m_DatatypeOf__to);
    // m_DatatypeOf__from has already been allocated above
    m_DatatypeOf__from->setFeatureID(
            ::kdm::data::DataPackage::DATATYPEOF__FROM);
    m_DatatypeOfEClass->getEStructuralFeatures().push_back(m_DatatypeOf__from);

    // HasContent
    m_HasContentEClass = new ::ecore::EClass();
    m_HasContentEClass->setClassifierID(HASCONTENT);
    m_HasContentEClass->setEPackage(this);
    getEClassifiers().push_back(m_HasContentEClass);
    // m_HasContent__to has already been allocated above
    m_HasContent__to->setFeatureID(::kdm::data::DataPackage::HASCONTENT__TO);
    m_HasContentEClass->getEStructuralFeatures().push_back(m_HasContent__to);
    // m_HasContent__from has already been allocated above
    m_HasContent__from->setFeatureID(
            ::kdm::data::DataPackage::HASCONTENT__FROM);
    m_HasContentEClass->getEStructuralFeatures().push_back(m_HasContent__from);

    // WritesColumnSet
    m_WritesColumnSetEClass = new ::ecore::EClass();
    m_WritesColumnSetEClass->setClassifierID(WRITESCOLUMNSET);
    m_WritesColumnSetEClass->setEPackage(this);
    getEClassifiers().push_back(m_WritesColumnSetEClass);
    // m_WritesColumnSet__to has already been allocated above
    m_WritesColumnSet__to->setFeatureID(
            ::kdm::data::DataPackage::WRITESCOLUMNSET__TO);
    m_WritesColumnSetEClass->getEStructuralFeatures().push_back(
            m_WritesColumnSet__to);
    // m_WritesColumnSet__from has already been allocated above
    m_WritesColumnSet__from->setFeatureID(
            ::kdm::data::DataPackage::WRITESCOLUMNSET__FROM);
    m_WritesColumnSetEClass->getEStructuralFeatures().push_back(
            m_WritesColumnSet__from);

    // ProducesDataEvent
    m_ProducesDataEventEClass = new ::ecore::EClass();
    m_ProducesDataEventEClass->setClassifierID(PRODUCESDATAEVENT);
    m_ProducesDataEventEClass->setEPackage(this);
    getEClassifiers().push_back(m_ProducesDataEventEClass);
    // m_ProducesDataEvent__to has already been allocated above
    m_ProducesDataEvent__to->setFeatureID(
            ::kdm::data::DataPackage::PRODUCESDATAEVENT__TO);
    m_ProducesDataEventEClass->getEStructuralFeatures().push_back(
            m_ProducesDataEvent__to);
    // m_ProducesDataEvent__from has already been allocated above
    m_ProducesDataEvent__from->setFeatureID(
            ::kdm::data::DataPackage::PRODUCESDATAEVENT__FROM);
    m_ProducesDataEventEClass->getEStructuralFeatures().push_back(
            m_ProducesDataEvent__from);

    // DataSegment
    m_DataSegmentEClass = new ::ecore::EClass();
    m_DataSegmentEClass->setClassifierID(DATASEGMENT);
    m_DataSegmentEClass->setEPackage(this);
    getEClassifiers().push_back(m_DataSegmentEClass);

    // ContentElement
    m_ContentElementEClass = new ::ecore::EClass();
    m_ContentElementEClass->setClassifierID(CONTENTELEMENT);
    m_ContentElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_ContentElementEClass);

    // ManagesData
    m_ManagesDataEClass = new ::ecore::EClass();
    m_ManagesDataEClass->setClassifierID(MANAGESDATA);
    m_ManagesDataEClass->setEPackage(this);
    getEClassifiers().push_back(m_ManagesDataEClass);
    // m_ManagesData__to has already been allocated above
    m_ManagesData__to->setFeatureID(::kdm::data::DataPackage::MANAGESDATA__TO);
    m_ManagesDataEClass->getEStructuralFeatures().push_back(m_ManagesData__to);
    // m_ManagesData__from has already been allocated above
    m_ManagesData__from->setFeatureID(
            ::kdm::data::DataPackage::MANAGESDATA__FROM);
    m_ManagesDataEClass->getEStructuralFeatures().push_back(
            m_ManagesData__from);

    // Create enums

    // Create data types

    // Initialize package
    setName("data");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_DataModelEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::kdm::KdmPackage* >(::kdm::kdm::KdmPackage::_instance())->getKDMModel());
    m_AbstractDataElementEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMEntity());
    m_DataResourceEClass->getESuperTypes().push_back(
            m_AbstractDataElementEClass);
    m_IndexElementEClass->getESuperTypes().push_back(m_DataResourceEClass);
    m_UniqueKeyEClass->getESuperTypes().push_back(m_IndexElementEClass);
    m_IndexEClass->getESuperTypes().push_back(m_IndexElementEClass);
    m_AbstractDataRelationshipEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMRelationship());
    m_KeyRelationEClass->getESuperTypes().push_back(
            m_AbstractDataRelationshipEClass);
    m_ReferenceKeyEClass->getESuperTypes().push_back(m_IndexElementEClass);
    m_DataContainerEClass->getESuperTypes().push_back(m_DataResourceEClass);
    m_CatalogEClass->getESuperTypes().push_back(m_DataContainerEClass);
    m_RelationalSchemaEClass->getESuperTypes().push_back(m_DataContainerEClass);
    m_ColumnSetEClass->getESuperTypes().push_back(m_DataContainerEClass);
    m_RelationalTableEClass->getESuperTypes().push_back(m_ColumnSetEClass);
    m_RelationalViewEClass->getESuperTypes().push_back(m_ColumnSetEClass);
    m_RecordFileEClass->getESuperTypes().push_back(m_ColumnSetEClass);
    m_DataEventEClass->getESuperTypes().push_back(m_DataResourceEClass);
    m_XMLSchemaEClass->getESuperTypes().push_back(m_AbstractDataElementEClass);
    m_AbstractContentElementEClass->getESuperTypes().push_back(
            m_AbstractDataElementEClass);
    m_ComplexContentTypeEClass->getESuperTypes().push_back(
            m_AbstractContentElementEClass);
    m_AllContentEClass->getESuperTypes().push_back(m_ComplexContentTypeEClass);
    m_SeqContentEClass->getESuperTypes().push_back(m_ComplexContentTypeEClass);
    m_ChoiceContentEClass->getESuperTypes().push_back(
            m_ComplexContentTypeEClass);
    m_ContentItemEClass->getESuperTypes().push_back(
            m_AbstractContentElementEClass);
    m_GroupContentEClass->getESuperTypes().push_back(m_ContentItemEClass);
    m_ContentRestrictionEClass->getESuperTypes().push_back(
            m_AbstractContentElementEClass);
    m_SimpleContentTypeEClass->getESuperTypes().push_back(
            m_ComplexContentTypeEClass);
    m_ExtendedDataElementEClass->getESuperTypes().push_back(
            m_AbstractDataElementEClass);
    m_DataRelationshipEClass->getESuperTypes().push_back(
            m_AbstractDataRelationshipEClass);
    m_MixedContentEClass->getESuperTypes().push_back(
            m_ComplexContentTypeEClass);
    m_ContentReferenceEClass->getESuperTypes().push_back(m_ContentItemEClass);
    m_DataActionEClass->getESuperTypes().push_back(m_AbstractDataElementEClass);
    m_ReadsColumnSetEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getAbstractActionRelationship());
    m_ContentAttributeEClass->getESuperTypes().push_back(m_ContentItemEClass);
    m_TypedByEClass->getESuperTypes().push_back(
            m_AbstractDataRelationshipEClass);
    m_ReferenceToEClass->getESuperTypes().push_back(
            m_AbstractDataRelationshipEClass);
    m_RestrictionOfEClass->getESuperTypes().push_back(
            m_AbstractDataRelationshipEClass);
    m_ExtensionToEClass->getESuperTypes().push_back(
            m_AbstractDataRelationshipEClass);
    m_DatatypeOfEClass->getESuperTypes().push_back(
            m_AbstractDataRelationshipEClass);
    m_HasContentEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getAbstractActionRelationship());
    m_WritesColumnSetEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getAbstractActionRelationship());
    m_ProducesDataEventEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getAbstractActionRelationship());
    m_DataSegmentEClass->getESuperTypes().push_back(m_ColumnSetEClass);
    m_ContentElementEClass->getESuperTypes().push_back(m_ContentItemEClass);
    m_ManagesDataEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getAbstractActionRelationship());

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // DataModel
    m_DataModelEClass->setName("DataModel");
    m_DataModelEClass->setAbstract(false);
    m_DataModelEClass->setInterface(false);
    m_DataModel__dataElement->setEType(m_AbstractDataElementEClass);
    m_DataModel__dataElement->setName("dataElement");
    m_DataModel__dataElement->setDefaultValueLiteral("");
    m_DataModel__dataElement->setLowerBound(0);
    m_DataModel__dataElement->setUpperBound(-1);
    m_DataModel__dataElement->setTransient(false);
    m_DataModel__dataElement->setVolatile(false);
    m_DataModel__dataElement->setChangeable(true);
    m_DataModel__dataElement->setContainment(true);
    m_DataModel__dataElement->setResolveProxies(true);
    m_DataModel__dataElement->setUnique(true);
    m_DataModel__dataElement->setDerived(false);
    m_DataModel__dataElement->setOrdered(false);
    // AbstractDataElement
    m_AbstractDataElementEClass->setName("AbstractDataElement");
    m_AbstractDataElementEClass->setAbstract(true);
    m_AbstractDataElementEClass->setInterface(false);
    m_AbstractDataElement__source->setEType(
            dynamic_cast< ::kdm::source::SourcePackage* >(::kdm::source::SourcePackage::_instance())->getSourceRef());
    m_AbstractDataElement__source->setName("source");
    m_AbstractDataElement__source->setDefaultValueLiteral("");
    m_AbstractDataElement__source->setLowerBound(0);
    m_AbstractDataElement__source->setUpperBound(-1);
    m_AbstractDataElement__source->setTransient(false);
    m_AbstractDataElement__source->setVolatile(false);
    m_AbstractDataElement__source->setChangeable(true);
    m_AbstractDataElement__source->setContainment(true);
    m_AbstractDataElement__source->setResolveProxies(true);
    m_AbstractDataElement__source->setUnique(true);
    m_AbstractDataElement__source->setDerived(false);
    m_AbstractDataElement__source->setOrdered(false);
    m_AbstractDataElement__dataRelation->setEType(
            m_AbstractDataRelationshipEClass);
    m_AbstractDataElement__dataRelation->setName("dataRelation");
    m_AbstractDataElement__dataRelation->setDefaultValueLiteral("");
    m_AbstractDataElement__dataRelation->setLowerBound(0);
    m_AbstractDataElement__dataRelation->setUpperBound(-1);
    m_AbstractDataElement__dataRelation->setTransient(false);
    m_AbstractDataElement__dataRelation->setVolatile(false);
    m_AbstractDataElement__dataRelation->setChangeable(true);
    m_AbstractDataElement__dataRelation->setContainment(true);
    m_AbstractDataElement__dataRelation->setResolveProxies(true);
    m_AbstractDataElement__dataRelation->setUnique(true);
    m_AbstractDataElement__dataRelation->setDerived(false);
    m_AbstractDataElement__dataRelation->setOrdered(false);
    m_AbstractDataElement__abstraction->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getActionElement());
    m_AbstractDataElement__abstraction->setName("abstraction");
    m_AbstractDataElement__abstraction->setDefaultValueLiteral("");
    m_AbstractDataElement__abstraction->setLowerBound(0);
    m_AbstractDataElement__abstraction->setUpperBound(-1);
    m_AbstractDataElement__abstraction->setTransient(false);
    m_AbstractDataElement__abstraction->setVolatile(false);
    m_AbstractDataElement__abstraction->setChangeable(true);
    m_AbstractDataElement__abstraction->setContainment(true);
    m_AbstractDataElement__abstraction->setResolveProxies(true);
    m_AbstractDataElement__abstraction->setUnique(true);
    m_AbstractDataElement__abstraction->setDerived(false);
    m_AbstractDataElement__abstraction->setOrdered(true);
    // DataResource
    m_DataResourceEClass->setName("DataResource");
    m_DataResourceEClass->setAbstract(false);
    m_DataResourceEClass->setInterface(false);
    // IndexElement
    m_IndexElementEClass->setName("IndexElement");
    m_IndexElementEClass->setAbstract(false);
    m_IndexElementEClass->setInterface(false);
    m_IndexElement__implementation->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance())->getItemUnit());
    m_IndexElement__implementation->setName("implementation");
    m_IndexElement__implementation->setDefaultValueLiteral("");
    m_IndexElement__implementation->setLowerBound(0);
    m_IndexElement__implementation->setUpperBound(-1);
    m_IndexElement__implementation->setTransient(false);
    m_IndexElement__implementation->setVolatile(false);
    m_IndexElement__implementation->setChangeable(true);
    m_IndexElement__implementation->setContainment(false);
    m_IndexElement__implementation->setResolveProxies(true);
    m_IndexElement__implementation->setUnique(true);
    m_IndexElement__implementation->setDerived(false);
    m_IndexElement__implementation->setOrdered(false);
    // UniqueKey
    m_UniqueKeyEClass->setName("UniqueKey");
    m_UniqueKeyEClass->setAbstract(false);
    m_UniqueKeyEClass->setInterface(false);
    // Index
    m_IndexEClass->setName("Index");
    m_IndexEClass->setAbstract(false);
    m_IndexEClass->setInterface(false);
    // AbstractDataRelationship
    m_AbstractDataRelationshipEClass->setName("AbstractDataRelationship");
    m_AbstractDataRelationshipEClass->setAbstract(true);
    m_AbstractDataRelationshipEClass->setInterface(false);
    // KeyRelation
    m_KeyRelationEClass->setName("KeyRelation");
    m_KeyRelationEClass->setAbstract(false);
    m_KeyRelationEClass->setInterface(false);
    m_KeyRelation__to->setEType(m_UniqueKeyEClass);
    m_KeyRelation__to->setName("to");
    m_KeyRelation__to->setDefaultValueLiteral("");
    m_KeyRelation__to->setLowerBound(1);
    m_KeyRelation__to->setUpperBound(1);
    m_KeyRelation__to->setTransient(false);
    m_KeyRelation__to->setVolatile(false);
    m_KeyRelation__to->setChangeable(true);
    m_KeyRelation__to->setContainment(false);
    m_KeyRelation__to->setResolveProxies(true);
    m_KeyRelation__to->setUnique(true);
    m_KeyRelation__to->setDerived(false);
    m_KeyRelation__to->setOrdered(false);
    m_KeyRelation__from->setEType(m_ReferenceKeyEClass);
    m_KeyRelation__from->setName("from");
    m_KeyRelation__from->setDefaultValueLiteral("");
    m_KeyRelation__from->setLowerBound(1);
    m_KeyRelation__from->setUpperBound(1);
    m_KeyRelation__from->setTransient(false);
    m_KeyRelation__from->setVolatile(false);
    m_KeyRelation__from->setChangeable(true);
    m_KeyRelation__from->setContainment(false);
    m_KeyRelation__from->setResolveProxies(true);
    m_KeyRelation__from->setUnique(true);
    m_KeyRelation__from->setDerived(false);
    m_KeyRelation__from->setOrdered(false);
    // ReferenceKey
    m_ReferenceKeyEClass->setName("ReferenceKey");
    m_ReferenceKeyEClass->setAbstract(false);
    m_ReferenceKeyEClass->setInterface(false);
    // DataContainer
    m_DataContainerEClass->setName("DataContainer");
    m_DataContainerEClass->setAbstract(false);
    m_DataContainerEClass->setInterface(false);
    m_DataContainer__dataElement->setEType(m_DataResourceEClass);
    m_DataContainer__dataElement->setName("dataElement");
    m_DataContainer__dataElement->setDefaultValueLiteral("");
    m_DataContainer__dataElement->setLowerBound(0);
    m_DataContainer__dataElement->setUpperBound(-1);
    m_DataContainer__dataElement->setTransient(false);
    m_DataContainer__dataElement->setVolatile(false);
    m_DataContainer__dataElement->setChangeable(true);
    m_DataContainer__dataElement->setContainment(true);
    m_DataContainer__dataElement->setResolveProxies(true);
    m_DataContainer__dataElement->setUnique(true);
    m_DataContainer__dataElement->setDerived(false);
    m_DataContainer__dataElement->setOrdered(false);
    // Catalog
    m_CatalogEClass->setName("Catalog");
    m_CatalogEClass->setAbstract(false);
    m_CatalogEClass->setInterface(false);
    // RelationalSchema
    m_RelationalSchemaEClass->setName("RelationalSchema");
    m_RelationalSchemaEClass->setAbstract(false);
    m_RelationalSchemaEClass->setInterface(false);
    m_RelationalSchema__codeElement->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance())->getCodeItem());
    m_RelationalSchema__codeElement->setName("codeElement");
    m_RelationalSchema__codeElement->setDefaultValueLiteral("");
    m_RelationalSchema__codeElement->setLowerBound(0);
    m_RelationalSchema__codeElement->setUpperBound(-1);
    m_RelationalSchema__codeElement->setTransient(false);
    m_RelationalSchema__codeElement->setVolatile(false);
    m_RelationalSchema__codeElement->setChangeable(true);
    m_RelationalSchema__codeElement->setContainment(true);
    m_RelationalSchema__codeElement->setResolveProxies(true);
    m_RelationalSchema__codeElement->setUnique(true);
    m_RelationalSchema__codeElement->setDerived(false);
    m_RelationalSchema__codeElement->setOrdered(false);
    // ColumnSet
    m_ColumnSetEClass->setName("ColumnSet");
    m_ColumnSetEClass->setAbstract(false);
    m_ColumnSetEClass->setInterface(false);
    m_ColumnSet__itemUnit->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance())->getItemUnit());
    m_ColumnSet__itemUnit->setName("itemUnit");
    m_ColumnSet__itemUnit->setDefaultValueLiteral("");
    m_ColumnSet__itemUnit->setLowerBound(0);
    m_ColumnSet__itemUnit->setUpperBound(-1);
    m_ColumnSet__itemUnit->setTransient(false);
    m_ColumnSet__itemUnit->setVolatile(false);
    m_ColumnSet__itemUnit->setChangeable(true);
    m_ColumnSet__itemUnit->setContainment(true);
    m_ColumnSet__itemUnit->setResolveProxies(true);
    m_ColumnSet__itemUnit->setUnique(true);
    m_ColumnSet__itemUnit->setDerived(false);
    m_ColumnSet__itemUnit->setOrdered(true);
    // RelationalTable
    m_RelationalTableEClass->setName("RelationalTable");
    m_RelationalTableEClass->setAbstract(false);
    m_RelationalTableEClass->setInterface(false);
    // RelationalView
    m_RelationalViewEClass->setName("RelationalView");
    m_RelationalViewEClass->setAbstract(false);
    m_RelationalViewEClass->setInterface(false);
    // RecordFile
    m_RecordFileEClass->setName("RecordFile");
    m_RecordFileEClass->setAbstract(false);
    m_RecordFileEClass->setInterface(false);
    // DataEvent
    m_DataEventEClass->setName("DataEvent");
    m_DataEventEClass->setAbstract(false);
    m_DataEventEClass->setInterface(false);
    m_DataEvent__kind->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_DataEvent__kind->setName("kind");
    m_DataEvent__kind->setDefaultValueLiteral("");
    m_DataEvent__kind->setLowerBound(0);
    m_DataEvent__kind->setUpperBound(1);
    m_DataEvent__kind->setTransient(false);
    m_DataEvent__kind->setVolatile(false);
    m_DataEvent__kind->setChangeable(true);
    m_DataEvent__kind->setUnsettable(false);
    m_DataEvent__kind->setID(false);
    m_DataEvent__kind->setUnique(false);
    m_DataEvent__kind->setDerived(false);
    m_DataEvent__kind->setOrdered(false);
    // XMLSchema
    m_XMLSchemaEClass->setName("XMLSchema");
    m_XMLSchemaEClass->setAbstract(false);
    m_XMLSchemaEClass->setInterface(false);
    m_XMLSchema__contentElement->setEType(m_AbstractContentElementEClass);
    m_XMLSchema__contentElement->setName("contentElement");
    m_XMLSchema__contentElement->setDefaultValueLiteral("");
    m_XMLSchema__contentElement->setLowerBound(0);
    m_XMLSchema__contentElement->setUpperBound(-1);
    m_XMLSchema__contentElement->setTransient(false);
    m_XMLSchema__contentElement->setVolatile(false);
    m_XMLSchema__contentElement->setChangeable(true);
    m_XMLSchema__contentElement->setContainment(true);
    m_XMLSchema__contentElement->setResolveProxies(true);
    m_XMLSchema__contentElement->setUnique(true);
    m_XMLSchema__contentElement->setDerived(false);
    m_XMLSchema__contentElement->setOrdered(false);
    // AbstractContentElement
    m_AbstractContentElementEClass->setName("AbstractContentElement");
    m_AbstractContentElementEClass->setAbstract(true);
    m_AbstractContentElementEClass->setInterface(false);
    // ComplexContentType
    m_ComplexContentTypeEClass->setName("ComplexContentType");
    m_ComplexContentTypeEClass->setAbstract(false);
    m_ComplexContentTypeEClass->setInterface(false);
    m_ComplexContentType__contentElement->setEType(
            m_AbstractContentElementEClass);
    m_ComplexContentType__contentElement->setName("contentElement");
    m_ComplexContentType__contentElement->setDefaultValueLiteral("");
    m_ComplexContentType__contentElement->setLowerBound(0);
    m_ComplexContentType__contentElement->setUpperBound(-1);
    m_ComplexContentType__contentElement->setTransient(false);
    m_ComplexContentType__contentElement->setVolatile(false);
    m_ComplexContentType__contentElement->setChangeable(true);
    m_ComplexContentType__contentElement->setContainment(true);
    m_ComplexContentType__contentElement->setResolveProxies(true);
    m_ComplexContentType__contentElement->setUnique(true);
    m_ComplexContentType__contentElement->setDerived(false);
    m_ComplexContentType__contentElement->setOrdered(true);
    // AllContent
    m_AllContentEClass->setName("AllContent");
    m_AllContentEClass->setAbstract(false);
    m_AllContentEClass->setInterface(false);
    // SeqContent
    m_SeqContentEClass->setName("SeqContent");
    m_SeqContentEClass->setAbstract(false);
    m_SeqContentEClass->setInterface(false);
    // ChoiceContent
    m_ChoiceContentEClass->setName("ChoiceContent");
    m_ChoiceContentEClass->setAbstract(false);
    m_ChoiceContentEClass->setInterface(false);
    // ContentItem
    m_ContentItemEClass->setName("ContentItem");
    m_ContentItemEClass->setAbstract(false);
    m_ContentItemEClass->setInterface(false);
    m_ContentItem__type->setEType(m_ComplexContentTypeEClass);
    m_ContentItem__type->setName("type");
    m_ContentItem__type->setDefaultValueLiteral("");
    m_ContentItem__type->setLowerBound(0);
    m_ContentItem__type->setUpperBound(1);
    m_ContentItem__type->setTransient(false);
    m_ContentItem__type->setVolatile(false);
    m_ContentItem__type->setChangeable(true);
    m_ContentItem__type->setContainment(false);
    m_ContentItem__type->setResolveProxies(true);
    m_ContentItem__type->setUnique(true);
    m_ContentItem__type->setDerived(false);
    m_ContentItem__type->setOrdered(false);
    m_ContentItem__contentElement->setEType(m_AbstractContentElementEClass);
    m_ContentItem__contentElement->setName("contentElement");
    m_ContentItem__contentElement->setDefaultValueLiteral("");
    m_ContentItem__contentElement->setLowerBound(0);
    m_ContentItem__contentElement->setUpperBound(-1);
    m_ContentItem__contentElement->setTransient(false);
    m_ContentItem__contentElement->setVolatile(false);
    m_ContentItem__contentElement->setChangeable(true);
    m_ContentItem__contentElement->setContainment(true);
    m_ContentItem__contentElement->setResolveProxies(true);
    m_ContentItem__contentElement->setUnique(true);
    m_ContentItem__contentElement->setDerived(false);
    m_ContentItem__contentElement->setOrdered(false);
    // GroupContent
    m_GroupContentEClass->setName("GroupContent");
    m_GroupContentEClass->setAbstract(false);
    m_GroupContentEClass->setInterface(false);
    // ContentRestriction
    m_ContentRestrictionEClass->setName("ContentRestriction");
    m_ContentRestrictionEClass->setAbstract(false);
    m_ContentRestrictionEClass->setInterface(false);
    m_ContentRestriction__kind->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_ContentRestriction__kind->setName("kind");
    m_ContentRestriction__kind->setDefaultValueLiteral("");
    m_ContentRestriction__kind->setLowerBound(0);
    m_ContentRestriction__kind->setUpperBound(1);
    m_ContentRestriction__kind->setTransient(false);
    m_ContentRestriction__kind->setVolatile(false);
    m_ContentRestriction__kind->setChangeable(true);
    m_ContentRestriction__kind->setUnsettable(false);
    m_ContentRestriction__kind->setID(false);
    m_ContentRestriction__kind->setUnique(false);
    m_ContentRestriction__kind->setDerived(false);
    m_ContentRestriction__kind->setOrdered(false);
    m_ContentRestriction__value->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_ContentRestriction__value->setName("value");
    m_ContentRestriction__value->setDefaultValueLiteral("");
    m_ContentRestriction__value->setLowerBound(0);
    m_ContentRestriction__value->setUpperBound(1);
    m_ContentRestriction__value->setTransient(false);
    m_ContentRestriction__value->setVolatile(false);
    m_ContentRestriction__value->setChangeable(true);
    m_ContentRestriction__value->setUnsettable(false);
    m_ContentRestriction__value->setID(false);
    m_ContentRestriction__value->setUnique(false);
    m_ContentRestriction__value->setDerived(false);
    m_ContentRestriction__value->setOrdered(false);
    // SimpleContentType
    m_SimpleContentTypeEClass->setName("SimpleContentType");
    m_SimpleContentTypeEClass->setAbstract(false);
    m_SimpleContentTypeEClass->setInterface(false);
    m_SimpleContentType__kind->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_SimpleContentType__kind->setName("kind");
    m_SimpleContentType__kind->setDefaultValueLiteral("");
    m_SimpleContentType__kind->setLowerBound(0);
    m_SimpleContentType__kind->setUpperBound(1);
    m_SimpleContentType__kind->setTransient(false);
    m_SimpleContentType__kind->setVolatile(false);
    m_SimpleContentType__kind->setChangeable(true);
    m_SimpleContentType__kind->setUnsettable(false);
    m_SimpleContentType__kind->setID(false);
    m_SimpleContentType__kind->setUnique(false);
    m_SimpleContentType__kind->setDerived(false);
    m_SimpleContentType__kind->setOrdered(false);
    m_SimpleContentType__type->setEType(m_ComplexContentTypeEClass);
    m_SimpleContentType__type->setName("type");
    m_SimpleContentType__type->setDefaultValueLiteral("");
    m_SimpleContentType__type->setLowerBound(0);
    m_SimpleContentType__type->setUpperBound(-1);
    m_SimpleContentType__type->setTransient(false);
    m_SimpleContentType__type->setVolatile(false);
    m_SimpleContentType__type->setChangeable(true);
    m_SimpleContentType__type->setContainment(false);
    m_SimpleContentType__type->setResolveProxies(true);
    m_SimpleContentType__type->setUnique(true);
    m_SimpleContentType__type->setDerived(false);
    m_SimpleContentType__type->setOrdered(false);
    // ExtendedDataElement
    m_ExtendedDataElementEClass->setName("ExtendedDataElement");
    m_ExtendedDataElementEClass->setAbstract(false);
    m_ExtendedDataElementEClass->setInterface(false);
    // DataRelationship
    m_DataRelationshipEClass->setName("DataRelationship");
    m_DataRelationshipEClass->setAbstract(false);
    m_DataRelationshipEClass->setInterface(false);
    m_DataRelationship__to->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMEntity());
    m_DataRelationship__to->setName("to");
    m_DataRelationship__to->setDefaultValueLiteral("");
    m_DataRelationship__to->setLowerBound(1);
    m_DataRelationship__to->setUpperBound(1);
    m_DataRelationship__to->setTransient(false);
    m_DataRelationship__to->setVolatile(false);
    m_DataRelationship__to->setChangeable(true);
    m_DataRelationship__to->setContainment(false);
    m_DataRelationship__to->setResolveProxies(true);
    m_DataRelationship__to->setUnique(true);
    m_DataRelationship__to->setDerived(false);
    m_DataRelationship__to->setOrdered(false);
    m_DataRelationship__from->setEType(m_AbstractDataElementEClass);
    m_DataRelationship__from->setName("from");
    m_DataRelationship__from->setDefaultValueLiteral("");
    m_DataRelationship__from->setLowerBound(1);
    m_DataRelationship__from->setUpperBound(1);
    m_DataRelationship__from->setTransient(false);
    m_DataRelationship__from->setVolatile(false);
    m_DataRelationship__from->setChangeable(true);
    m_DataRelationship__from->setContainment(false);
    m_DataRelationship__from->setResolveProxies(true);
    m_DataRelationship__from->setUnique(true);
    m_DataRelationship__from->setDerived(false);
    m_DataRelationship__from->setOrdered(false);
    // MixedContent
    m_MixedContentEClass->setName("MixedContent");
    m_MixedContentEClass->setAbstract(false);
    m_MixedContentEClass->setInterface(false);
    // ContentReference
    m_ContentReferenceEClass->setName("ContentReference");
    m_ContentReferenceEClass->setAbstract(false);
    m_ContentReferenceEClass->setInterface(false);
    // DataAction
    m_DataActionEClass->setName("DataAction");
    m_DataActionEClass->setAbstract(false);
    m_DataActionEClass->setInterface(false);
    m_DataAction__kind->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_DataAction__kind->setName("kind");
    m_DataAction__kind->setDefaultValueLiteral("");
    m_DataAction__kind->setLowerBound(0);
    m_DataAction__kind->setUpperBound(1);
    m_DataAction__kind->setTransient(false);
    m_DataAction__kind->setVolatile(false);
    m_DataAction__kind->setChangeable(true);
    m_DataAction__kind->setUnsettable(false);
    m_DataAction__kind->setID(false);
    m_DataAction__kind->setUnique(false);
    m_DataAction__kind->setDerived(false);
    m_DataAction__kind->setOrdered(false);
    m_DataAction__implementation->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getActionElement());
    m_DataAction__implementation->setName("implementation");
    m_DataAction__implementation->setDefaultValueLiteral("");
    m_DataAction__implementation->setLowerBound(0);
    m_DataAction__implementation->setUpperBound(-1);
    m_DataAction__implementation->setTransient(false);
    m_DataAction__implementation->setVolatile(false);
    m_DataAction__implementation->setChangeable(true);
    m_DataAction__implementation->setContainment(false);
    m_DataAction__implementation->setResolveProxies(true);
    m_DataAction__implementation->setUnique(true);
    m_DataAction__implementation->setDerived(false);
    m_DataAction__implementation->setOrdered(false);
    m_DataAction__dataElement->setEType(m_DataEventEClass);
    m_DataAction__dataElement->setName("dataElement");
    m_DataAction__dataElement->setDefaultValueLiteral("");
    m_DataAction__dataElement->setLowerBound(0);
    m_DataAction__dataElement->setUpperBound(-1);
    m_DataAction__dataElement->setTransient(false);
    m_DataAction__dataElement->setVolatile(false);
    m_DataAction__dataElement->setChangeable(true);
    m_DataAction__dataElement->setContainment(true);
    m_DataAction__dataElement->setResolveProxies(true);
    m_DataAction__dataElement->setUnique(true);
    m_DataAction__dataElement->setDerived(false);
    m_DataAction__dataElement->setOrdered(false);
    // ReadsColumnSet
    m_ReadsColumnSetEClass->setName("ReadsColumnSet");
    m_ReadsColumnSetEClass->setAbstract(false);
    m_ReadsColumnSetEClass->setInterface(false);
    m_ReadsColumnSet__to->setEType(m_ColumnSetEClass);
    m_ReadsColumnSet__to->setName("to");
    m_ReadsColumnSet__to->setDefaultValueLiteral("");
    m_ReadsColumnSet__to->setLowerBound(1);
    m_ReadsColumnSet__to->setUpperBound(1);
    m_ReadsColumnSet__to->setTransient(false);
    m_ReadsColumnSet__to->setVolatile(false);
    m_ReadsColumnSet__to->setChangeable(true);
    m_ReadsColumnSet__to->setContainment(false);
    m_ReadsColumnSet__to->setResolveProxies(true);
    m_ReadsColumnSet__to->setUnique(true);
    m_ReadsColumnSet__to->setDerived(false);
    m_ReadsColumnSet__to->setOrdered(false);
    m_ReadsColumnSet__from->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getActionElement());
    m_ReadsColumnSet__from->setName("from");
    m_ReadsColumnSet__from->setDefaultValueLiteral("");
    m_ReadsColumnSet__from->setLowerBound(1);
    m_ReadsColumnSet__from->setUpperBound(1);
    m_ReadsColumnSet__from->setTransient(false);
    m_ReadsColumnSet__from->setVolatile(false);
    m_ReadsColumnSet__from->setChangeable(true);
    m_ReadsColumnSet__from->setContainment(false);
    m_ReadsColumnSet__from->setResolveProxies(true);
    m_ReadsColumnSet__from->setUnique(true);
    m_ReadsColumnSet__from->setDerived(false);
    m_ReadsColumnSet__from->setOrdered(false);
    // ContentAttribute
    m_ContentAttributeEClass->setName("ContentAttribute");
    m_ContentAttributeEClass->setAbstract(false);
    m_ContentAttributeEClass->setInterface(false);
    // TypedBy
    m_TypedByEClass->setName("TypedBy");
    m_TypedByEClass->setAbstract(false);
    m_TypedByEClass->setInterface(false);
    m_TypedBy__to->setEType(m_ComplexContentTypeEClass);
    m_TypedBy__to->setName("to");
    m_TypedBy__to->setDefaultValueLiteral("");
    m_TypedBy__to->setLowerBound(1);
    m_TypedBy__to->setUpperBound(1);
    m_TypedBy__to->setTransient(false);
    m_TypedBy__to->setVolatile(false);
    m_TypedBy__to->setChangeable(true);
    m_TypedBy__to->setContainment(false);
    m_TypedBy__to->setResolveProxies(true);
    m_TypedBy__to->setUnique(true);
    m_TypedBy__to->setDerived(false);
    m_TypedBy__to->setOrdered(false);
    m_TypedBy__from->setEType(m_ContentItemEClass);
    m_TypedBy__from->setName("from");
    m_TypedBy__from->setDefaultValueLiteral("");
    m_TypedBy__from->setLowerBound(1);
    m_TypedBy__from->setUpperBound(1);
    m_TypedBy__from->setTransient(false);
    m_TypedBy__from->setVolatile(false);
    m_TypedBy__from->setChangeable(true);
    m_TypedBy__from->setContainment(false);
    m_TypedBy__from->setResolveProxies(true);
    m_TypedBy__from->setUnique(true);
    m_TypedBy__from->setDerived(false);
    m_TypedBy__from->setOrdered(false);
    // ReferenceTo
    m_ReferenceToEClass->setName("ReferenceTo");
    m_ReferenceToEClass->setAbstract(false);
    m_ReferenceToEClass->setInterface(false);
    m_ReferenceTo__to->setEType(m_ContentItemEClass);
    m_ReferenceTo__to->setName("to");
    m_ReferenceTo__to->setDefaultValueLiteral("");
    m_ReferenceTo__to->setLowerBound(1);
    m_ReferenceTo__to->setUpperBound(1);
    m_ReferenceTo__to->setTransient(false);
    m_ReferenceTo__to->setVolatile(false);
    m_ReferenceTo__to->setChangeable(true);
    m_ReferenceTo__to->setContainment(false);
    m_ReferenceTo__to->setResolveProxies(true);
    m_ReferenceTo__to->setUnique(true);
    m_ReferenceTo__to->setDerived(false);
    m_ReferenceTo__to->setOrdered(false);
    m_ReferenceTo__from->setEType(m_ContentItemEClass);
    m_ReferenceTo__from->setName("from");
    m_ReferenceTo__from->setDefaultValueLiteral("");
    m_ReferenceTo__from->setLowerBound(1);
    m_ReferenceTo__from->setUpperBound(1);
    m_ReferenceTo__from->setTransient(false);
    m_ReferenceTo__from->setVolatile(false);
    m_ReferenceTo__from->setChangeable(true);
    m_ReferenceTo__from->setContainment(false);
    m_ReferenceTo__from->setResolveProxies(true);
    m_ReferenceTo__from->setUnique(true);
    m_ReferenceTo__from->setDerived(false);
    m_ReferenceTo__from->setOrdered(false);
    // RestrictionOf
    m_RestrictionOfEClass->setName("RestrictionOf");
    m_RestrictionOfEClass->setAbstract(false);
    m_RestrictionOfEClass->setInterface(false);
    m_RestrictionOf__to->setEType(m_ComplexContentTypeEClass);
    m_RestrictionOf__to->setName("to");
    m_RestrictionOf__to->setDefaultValueLiteral("");
    m_RestrictionOf__to->setLowerBound(1);
    m_RestrictionOf__to->setUpperBound(1);
    m_RestrictionOf__to->setTransient(false);
    m_RestrictionOf__to->setVolatile(false);
    m_RestrictionOf__to->setChangeable(true);
    m_RestrictionOf__to->setContainment(false);
    m_RestrictionOf__to->setResolveProxies(true);
    m_RestrictionOf__to->setUnique(true);
    m_RestrictionOf__to->setDerived(false);
    m_RestrictionOf__to->setOrdered(false);
    m_RestrictionOf__from->setEType(m_ComplexContentTypeEClass);
    m_RestrictionOf__from->setName("from");
    m_RestrictionOf__from->setDefaultValueLiteral("");
    m_RestrictionOf__from->setLowerBound(1);
    m_RestrictionOf__from->setUpperBound(1);
    m_RestrictionOf__from->setTransient(false);
    m_RestrictionOf__from->setVolatile(false);
    m_RestrictionOf__from->setChangeable(true);
    m_RestrictionOf__from->setContainment(false);
    m_RestrictionOf__from->setResolveProxies(true);
    m_RestrictionOf__from->setUnique(true);
    m_RestrictionOf__from->setDerived(false);
    m_RestrictionOf__from->setOrdered(false);
    // ExtensionTo
    m_ExtensionToEClass->setName("ExtensionTo");
    m_ExtensionToEClass->setAbstract(false);
    m_ExtensionToEClass->setInterface(false);
    m_ExtensionTo__to->setEType(m_ComplexContentTypeEClass);
    m_ExtensionTo__to->setName("to");
    m_ExtensionTo__to->setDefaultValueLiteral("");
    m_ExtensionTo__to->setLowerBound(1);
    m_ExtensionTo__to->setUpperBound(1);
    m_ExtensionTo__to->setTransient(false);
    m_ExtensionTo__to->setVolatile(false);
    m_ExtensionTo__to->setChangeable(true);
    m_ExtensionTo__to->setContainment(false);
    m_ExtensionTo__to->setResolveProxies(true);
    m_ExtensionTo__to->setUnique(true);
    m_ExtensionTo__to->setDerived(false);
    m_ExtensionTo__to->setOrdered(false);
    m_ExtensionTo__from->setEType(m_ComplexContentTypeEClass);
    m_ExtensionTo__from->setName("from");
    m_ExtensionTo__from->setDefaultValueLiteral("");
    m_ExtensionTo__from->setLowerBound(1);
    m_ExtensionTo__from->setUpperBound(1);
    m_ExtensionTo__from->setTransient(false);
    m_ExtensionTo__from->setVolatile(false);
    m_ExtensionTo__from->setChangeable(true);
    m_ExtensionTo__from->setContainment(false);
    m_ExtensionTo__from->setResolveProxies(true);
    m_ExtensionTo__from->setUnique(true);
    m_ExtensionTo__from->setDerived(false);
    m_ExtensionTo__from->setOrdered(false);
    // DatatypeOf
    m_DatatypeOfEClass->setName("DatatypeOf");
    m_DatatypeOfEClass->setAbstract(false);
    m_DatatypeOfEClass->setInterface(false);
    m_DatatypeOf__to->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance())->getDatatype());
    m_DatatypeOf__to->setName("to");
    m_DatatypeOf__to->setDefaultValueLiteral("");
    m_DatatypeOf__to->setLowerBound(1);
    m_DatatypeOf__to->setUpperBound(1);
    m_DatatypeOf__to->setTransient(false);
    m_DatatypeOf__to->setVolatile(false);
    m_DatatypeOf__to->setChangeable(true);
    m_DatatypeOf__to->setContainment(false);
    m_DatatypeOf__to->setResolveProxies(true);
    m_DatatypeOf__to->setUnique(true);
    m_DatatypeOf__to->setDerived(false);
    m_DatatypeOf__to->setOrdered(false);
    m_DatatypeOf__from->setEType(m_ComplexContentTypeEClass);
    m_DatatypeOf__from->setName("from");
    m_DatatypeOf__from->setDefaultValueLiteral("");
    m_DatatypeOf__from->setLowerBound(1);
    m_DatatypeOf__from->setUpperBound(1);
    m_DatatypeOf__from->setTransient(false);
    m_DatatypeOf__from->setVolatile(false);
    m_DatatypeOf__from->setChangeable(true);
    m_DatatypeOf__from->setContainment(false);
    m_DatatypeOf__from->setResolveProxies(true);
    m_DatatypeOf__from->setUnique(true);
    m_DatatypeOf__from->setDerived(false);
    m_DatatypeOf__from->setOrdered(false);
    // HasContent
    m_HasContentEClass->setName("HasContent");
    m_HasContentEClass->setAbstract(false);
    m_HasContentEClass->setInterface(false);
    m_HasContent__to->setEType(m_AbstractDataElementEClass);
    m_HasContent__to->setName("to");
    m_HasContent__to->setDefaultValueLiteral("");
    m_HasContent__to->setLowerBound(1);
    m_HasContent__to->setUpperBound(1);
    m_HasContent__to->setTransient(false);
    m_HasContent__to->setVolatile(false);
    m_HasContent__to->setChangeable(true);
    m_HasContent__to->setContainment(false);
    m_HasContent__to->setResolveProxies(true);
    m_HasContent__to->setUnique(true);
    m_HasContent__to->setDerived(false);
    m_HasContent__to->setOrdered(false);
    m_HasContent__from->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getActionElement());
    m_HasContent__from->setName("from");
    m_HasContent__from->setDefaultValueLiteral("");
    m_HasContent__from->setLowerBound(1);
    m_HasContent__from->setUpperBound(1);
    m_HasContent__from->setTransient(false);
    m_HasContent__from->setVolatile(false);
    m_HasContent__from->setChangeable(true);
    m_HasContent__from->setContainment(false);
    m_HasContent__from->setResolveProxies(true);
    m_HasContent__from->setUnique(true);
    m_HasContent__from->setDerived(false);
    m_HasContent__from->setOrdered(false);
    // WritesColumnSet
    m_WritesColumnSetEClass->setName("WritesColumnSet");
    m_WritesColumnSetEClass->setAbstract(false);
    m_WritesColumnSetEClass->setInterface(false);
    m_WritesColumnSet__to->setEType(m_ColumnSetEClass);
    m_WritesColumnSet__to->setName("to");
    m_WritesColumnSet__to->setDefaultValueLiteral("");
    m_WritesColumnSet__to->setLowerBound(1);
    m_WritesColumnSet__to->setUpperBound(1);
    m_WritesColumnSet__to->setTransient(false);
    m_WritesColumnSet__to->setVolatile(false);
    m_WritesColumnSet__to->setChangeable(true);
    m_WritesColumnSet__to->setContainment(false);
    m_WritesColumnSet__to->setResolveProxies(true);
    m_WritesColumnSet__to->setUnique(true);
    m_WritesColumnSet__to->setDerived(false);
    m_WritesColumnSet__to->setOrdered(false);
    m_WritesColumnSet__from->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getActionElement());
    m_WritesColumnSet__from->setName("from");
    m_WritesColumnSet__from->setDefaultValueLiteral("");
    m_WritesColumnSet__from->setLowerBound(1);
    m_WritesColumnSet__from->setUpperBound(1);
    m_WritesColumnSet__from->setTransient(false);
    m_WritesColumnSet__from->setVolatile(false);
    m_WritesColumnSet__from->setChangeable(true);
    m_WritesColumnSet__from->setContainment(false);
    m_WritesColumnSet__from->setResolveProxies(true);
    m_WritesColumnSet__from->setUnique(true);
    m_WritesColumnSet__from->setDerived(false);
    m_WritesColumnSet__from->setOrdered(false);
    // ProducesDataEvent
    m_ProducesDataEventEClass->setName("ProducesDataEvent");
    m_ProducesDataEventEClass->setAbstract(false);
    m_ProducesDataEventEClass->setInterface(false);
    m_ProducesDataEvent__to->setEType(m_DataEventEClass);
    m_ProducesDataEvent__to->setName("to");
    m_ProducesDataEvent__to->setDefaultValueLiteral("");
    m_ProducesDataEvent__to->setLowerBound(1);
    m_ProducesDataEvent__to->setUpperBound(1);
    m_ProducesDataEvent__to->setTransient(false);
    m_ProducesDataEvent__to->setVolatile(false);
    m_ProducesDataEvent__to->setChangeable(true);
    m_ProducesDataEvent__to->setContainment(false);
    m_ProducesDataEvent__to->setResolveProxies(true);
    m_ProducesDataEvent__to->setUnique(true);
    m_ProducesDataEvent__to->setDerived(false);
    m_ProducesDataEvent__to->setOrdered(false);
    m_ProducesDataEvent__from->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getActionElement());
    m_ProducesDataEvent__from->setName("from");
    m_ProducesDataEvent__from->setDefaultValueLiteral("");
    m_ProducesDataEvent__from->setLowerBound(1);
    m_ProducesDataEvent__from->setUpperBound(1);
    m_ProducesDataEvent__from->setTransient(false);
    m_ProducesDataEvent__from->setVolatile(false);
    m_ProducesDataEvent__from->setChangeable(true);
    m_ProducesDataEvent__from->setContainment(false);
    m_ProducesDataEvent__from->setResolveProxies(true);
    m_ProducesDataEvent__from->setUnique(true);
    m_ProducesDataEvent__from->setDerived(false);
    m_ProducesDataEvent__from->setOrdered(false);
    // DataSegment
    m_DataSegmentEClass->setName("DataSegment");
    m_DataSegmentEClass->setAbstract(false);
    m_DataSegmentEClass->setInterface(false);
    // ContentElement
    m_ContentElementEClass->setName("ContentElement");
    m_ContentElementEClass->setAbstract(false);
    m_ContentElementEClass->setInterface(false);
    // ManagesData
    m_ManagesDataEClass->setName("ManagesData");
    m_ManagesDataEClass->setAbstract(false);
    m_ManagesDataEClass->setInterface(false);
    m_ManagesData__to->setEType(m_AbstractDataElementEClass);
    m_ManagesData__to->setName("to");
    m_ManagesData__to->setDefaultValueLiteral("");
    m_ManagesData__to->setLowerBound(1);
    m_ManagesData__to->setUpperBound(1);
    m_ManagesData__to->setTransient(false);
    m_ManagesData__to->setVolatile(false);
    m_ManagesData__to->setChangeable(true);
    m_ManagesData__to->setContainment(false);
    m_ManagesData__to->setResolveProxies(true);
    m_ManagesData__to->setUnique(true);
    m_ManagesData__to->setDerived(false);
    m_ManagesData__to->setOrdered(false);
    m_ManagesData__from->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getActionElement());
    m_ManagesData__from->setName("from");
    m_ManagesData__from->setDefaultValueLiteral("");
    m_ManagesData__from->setLowerBound(1);
    m_ManagesData__from->setUpperBound(1);
    m_ManagesData__from->setTransient(false);
    m_ManagesData__from->setVolatile(false);
    m_ManagesData__from->setChangeable(true);
    m_ManagesData__from->setContainment(false);
    m_ManagesData__from->setResolveProxies(true);
    m_ManagesData__from->setUnique(true);
    m_ManagesData__from->setDerived(false);
    m_ManagesData__from->setOrdered(false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr DataPackage::getDataModel()
{
    return m_DataModelEClass;
}
::ecore::EClass_ptr DataPackage::getAbstractDataElement()
{
    return m_AbstractDataElementEClass;
}
::ecore::EClass_ptr DataPackage::getDataResource()
{
    return m_DataResourceEClass;
}
::ecore::EClass_ptr DataPackage::getIndexElement()
{
    return m_IndexElementEClass;
}
::ecore::EClass_ptr DataPackage::getUniqueKey()
{
    return m_UniqueKeyEClass;
}
::ecore::EClass_ptr DataPackage::getIndex()
{
    return m_IndexEClass;
}
::ecore::EClass_ptr DataPackage::getAbstractDataRelationship()
{
    return m_AbstractDataRelationshipEClass;
}
::ecore::EClass_ptr DataPackage::getKeyRelation()
{
    return m_KeyRelationEClass;
}
::ecore::EClass_ptr DataPackage::getReferenceKey()
{
    return m_ReferenceKeyEClass;
}
::ecore::EClass_ptr DataPackage::getDataContainer()
{
    return m_DataContainerEClass;
}
::ecore::EClass_ptr DataPackage::getCatalog()
{
    return m_CatalogEClass;
}
::ecore::EClass_ptr DataPackage::getRelationalSchema()
{
    return m_RelationalSchemaEClass;
}
::ecore::EClass_ptr DataPackage::getColumnSet()
{
    return m_ColumnSetEClass;
}
::ecore::EClass_ptr DataPackage::getRelationalTable()
{
    return m_RelationalTableEClass;
}
::ecore::EClass_ptr DataPackage::getRelationalView()
{
    return m_RelationalViewEClass;
}
::ecore::EClass_ptr DataPackage::getRecordFile()
{
    return m_RecordFileEClass;
}
::ecore::EClass_ptr DataPackage::getDataEvent()
{
    return m_DataEventEClass;
}
::ecore::EClass_ptr DataPackage::getXMLSchema()
{
    return m_XMLSchemaEClass;
}
::ecore::EClass_ptr DataPackage::getAbstractContentElement()
{
    return m_AbstractContentElementEClass;
}
::ecore::EClass_ptr DataPackage::getComplexContentType()
{
    return m_ComplexContentTypeEClass;
}
::ecore::EClass_ptr DataPackage::getAllContent()
{
    return m_AllContentEClass;
}
::ecore::EClass_ptr DataPackage::getSeqContent()
{
    return m_SeqContentEClass;
}
::ecore::EClass_ptr DataPackage::getChoiceContent()
{
    return m_ChoiceContentEClass;
}
::ecore::EClass_ptr DataPackage::getContentItem()
{
    return m_ContentItemEClass;
}
::ecore::EClass_ptr DataPackage::getGroupContent()
{
    return m_GroupContentEClass;
}
::ecore::EClass_ptr DataPackage::getContentRestriction()
{
    return m_ContentRestrictionEClass;
}
::ecore::EClass_ptr DataPackage::getSimpleContentType()
{
    return m_SimpleContentTypeEClass;
}
::ecore::EClass_ptr DataPackage::getExtendedDataElement()
{
    return m_ExtendedDataElementEClass;
}
::ecore::EClass_ptr DataPackage::getDataRelationship()
{
    return m_DataRelationshipEClass;
}
::ecore::EClass_ptr DataPackage::getMixedContent()
{
    return m_MixedContentEClass;
}
::ecore::EClass_ptr DataPackage::getContentReference()
{
    return m_ContentReferenceEClass;
}
::ecore::EClass_ptr DataPackage::getDataAction()
{
    return m_DataActionEClass;
}
::ecore::EClass_ptr DataPackage::getReadsColumnSet()
{
    return m_ReadsColumnSetEClass;
}
::ecore::EClass_ptr DataPackage::getContentAttribute()
{
    return m_ContentAttributeEClass;
}
::ecore::EClass_ptr DataPackage::getTypedBy()
{
    return m_TypedByEClass;
}
::ecore::EClass_ptr DataPackage::getReferenceTo()
{
    return m_ReferenceToEClass;
}
::ecore::EClass_ptr DataPackage::getRestrictionOf()
{
    return m_RestrictionOfEClass;
}
::ecore::EClass_ptr DataPackage::getExtensionTo()
{
    return m_ExtensionToEClass;
}
::ecore::EClass_ptr DataPackage::getDatatypeOf()
{
    return m_DatatypeOfEClass;
}
::ecore::EClass_ptr DataPackage::getHasContent()
{
    return m_HasContentEClass;
}
::ecore::EClass_ptr DataPackage::getWritesColumnSet()
{
    return m_WritesColumnSetEClass;
}
::ecore::EClass_ptr DataPackage::getProducesDataEvent()
{
    return m_ProducesDataEventEClass;
}
::ecore::EClass_ptr DataPackage::getDataSegment()
{
    return m_DataSegmentEClass;
}
::ecore::EClass_ptr DataPackage::getContentElement()
{
    return m_ContentElementEClass;
}
::ecore::EClass_ptr DataPackage::getManagesData()
{
    return m_ManagesDataEClass;
}

::ecore::EReference_ptr DataPackage::getElement__attribute()
{
    return m_Element__attribute;
}
::ecore::EReference_ptr DataPackage::getElement__annotation()
{
    return m_Element__annotation;
}
::ecore::EReference_ptr DataPackage::getModelElement__stereotype()
{
    return m_ModelElement__stereotype;
}
::ecore::EReference_ptr DataPackage::getModelElement__taggedValue()
{
    return m_ModelElement__taggedValue;
}
::ecore::EReference_ptr DataPackage::getKDMFramework__audit()
{
    return m_KDMFramework__audit;
}
::ecore::EReference_ptr DataPackage::getKDMFramework__extensionFamily()
{
    return m_KDMFramework__extensionFamily;
}
::ecore::EAttribute_ptr DataPackage::getKDMFramework__name()
{
    return m_KDMFramework__name;
}
::ecore::EReference_ptr DataPackage::getDataModel__dataElement()
{
    return m_DataModel__dataElement;
}
::ecore::EAttribute_ptr DataPackage::getKDMEntity__name()
{
    return m_KDMEntity__name;
}
::ecore::EReference_ptr DataPackage::getAbstractDataElement__source()
{
    return m_AbstractDataElement__source;
}
::ecore::EReference_ptr DataPackage::getAbstractDataElement__dataRelation()
{
    return m_AbstractDataElement__dataRelation;
}
::ecore::EReference_ptr DataPackage::getAbstractDataElement__abstraction()
{
    return m_AbstractDataElement__abstraction;
}
::ecore::EReference_ptr DataPackage::getIndexElement__implementation()
{
    return m_IndexElement__implementation;
}
::ecore::EReference_ptr DataPackage::getKeyRelation__to()
{
    return m_KeyRelation__to;
}
::ecore::EReference_ptr DataPackage::getKeyRelation__from()
{
    return m_KeyRelation__from;
}
::ecore::EReference_ptr DataPackage::getDataContainer__dataElement()
{
    return m_DataContainer__dataElement;
}
::ecore::EReference_ptr DataPackage::getRelationalSchema__codeElement()
{
    return m_RelationalSchema__codeElement;
}
::ecore::EReference_ptr DataPackage::getColumnSet__itemUnit()
{
    return m_ColumnSet__itemUnit;
}
::ecore::EAttribute_ptr DataPackage::getDataEvent__kind()
{
    return m_DataEvent__kind;
}
::ecore::EReference_ptr DataPackage::getXMLSchema__contentElement()
{
    return m_XMLSchema__contentElement;
}
::ecore::EReference_ptr DataPackage::getComplexContentType__contentElement()
{
    return m_ComplexContentType__contentElement;
}
::ecore::EReference_ptr DataPackage::getContentItem__type()
{
    return m_ContentItem__type;
}
::ecore::EReference_ptr DataPackage::getContentItem__contentElement()
{
    return m_ContentItem__contentElement;
}
::ecore::EAttribute_ptr DataPackage::getContentRestriction__kind()
{
    return m_ContentRestriction__kind;
}
::ecore::EAttribute_ptr DataPackage::getContentRestriction__value()
{
    return m_ContentRestriction__value;
}
::ecore::EReference_ptr DataPackage::getSimpleContentType__type()
{
    return m_SimpleContentType__type;
}
::ecore::EAttribute_ptr DataPackage::getSimpleContentType__kind()
{
    return m_SimpleContentType__kind;
}
::ecore::EReference_ptr DataPackage::getDataRelationship__to()
{
    return m_DataRelationship__to;
}
::ecore::EReference_ptr DataPackage::getDataRelationship__from()
{
    return m_DataRelationship__from;
}
::ecore::EAttribute_ptr DataPackage::getDataAction__kind()
{
    return m_DataAction__kind;
}
::ecore::EReference_ptr DataPackage::getDataAction__implementation()
{
    return m_DataAction__implementation;
}
::ecore::EReference_ptr DataPackage::getDataAction__dataElement()
{
    return m_DataAction__dataElement;
}
::ecore::EReference_ptr DataPackage::getReadsColumnSet__to()
{
    return m_ReadsColumnSet__to;
}
::ecore::EReference_ptr DataPackage::getReadsColumnSet__from()
{
    return m_ReadsColumnSet__from;
}
::ecore::EReference_ptr DataPackage::getTypedBy__to()
{
    return m_TypedBy__to;
}
::ecore::EReference_ptr DataPackage::getTypedBy__from()
{
    return m_TypedBy__from;
}
::ecore::EReference_ptr DataPackage::getReferenceTo__to()
{
    return m_ReferenceTo__to;
}
::ecore::EReference_ptr DataPackage::getReferenceTo__from()
{
    return m_ReferenceTo__from;
}
::ecore::EReference_ptr DataPackage::getRestrictionOf__to()
{
    return m_RestrictionOf__to;
}
::ecore::EReference_ptr DataPackage::getRestrictionOf__from()
{
    return m_RestrictionOf__from;
}
::ecore::EReference_ptr DataPackage::getExtensionTo__to()
{
    return m_ExtensionTo__to;
}
::ecore::EReference_ptr DataPackage::getExtensionTo__from()
{
    return m_ExtensionTo__from;
}
::ecore::EReference_ptr DataPackage::getDatatypeOf__to()
{
    return m_DatatypeOf__to;
}
::ecore::EReference_ptr DataPackage::getDatatypeOf__from()
{
    return m_DatatypeOf__from;
}
::ecore::EReference_ptr DataPackage::getHasContent__to()
{
    return m_HasContent__to;
}
::ecore::EReference_ptr DataPackage::getHasContent__from()
{
    return m_HasContent__from;
}
::ecore::EReference_ptr DataPackage::getWritesColumnSet__to()
{
    return m_WritesColumnSet__to;
}
::ecore::EReference_ptr DataPackage::getWritesColumnSet__from()
{
    return m_WritesColumnSet__from;
}
::ecore::EReference_ptr DataPackage::getProducesDataEvent__to()
{
    return m_ProducesDataEvent__to;
}
::ecore::EReference_ptr DataPackage::getProducesDataEvent__from()
{
    return m_ProducesDataEvent__from;
}
::ecore::EReference_ptr DataPackage::getManagesData__to()
{
    return m_ManagesData__to;
}
::ecore::EReference_ptr DataPackage::getManagesData__from()
{
    return m_ManagesData__from;
}

