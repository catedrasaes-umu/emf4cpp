// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/data/DataFactoryImpl.cpp
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

#include <kdm/data/DataFactory.hpp>
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/DataModel.hpp>
#include <kdm/data/AbstractDataElement.hpp>
#include <kdm/data/DataResource.hpp>
#include <kdm/data/IndexElement.hpp>
#include <kdm/data/UniqueKey.hpp>
#include <kdm/data/Index.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>
#include <kdm/data/KeyRelation.hpp>
#include <kdm/data/ReferenceKey.hpp>
#include <kdm/data/DataContainer.hpp>
#include <kdm/data/Catalog.hpp>
#include <kdm/data/RelationalSchema.hpp>
#include <kdm/data/ColumnSet.hpp>
#include <kdm/data/RelationalTable.hpp>
#include <kdm/data/RelationalView.hpp>
#include <kdm/data/RecordFile.hpp>
#include <kdm/data/DataEvent.hpp>
#include <kdm/data/XMLSchema.hpp>
#include <kdm/data/AbstractContentElement.hpp>
#include <kdm/data/ComplexContentType.hpp>
#include <kdm/data/AllContent.hpp>
#include <kdm/data/SeqContent.hpp>
#include <kdm/data/ChoiceContent.hpp>
#include <kdm/data/ContentItem.hpp>
#include <kdm/data/GroupContent.hpp>
#include <kdm/data/ContentRestriction.hpp>
#include <kdm/data/SimpleContentType.hpp>
#include <kdm/data/ExtendedDataElement.hpp>
#include <kdm/data/DataRelationship.hpp>
#include <kdm/data/MixedContent.hpp>
#include <kdm/data/ContentReference.hpp>
#include <kdm/data/DataAction.hpp>
#include <kdm/data/ReadsColumnSet.hpp>
#include <kdm/data/ContentAttribute.hpp>
#include <kdm/data/TypedBy.hpp>
#include <kdm/data/ReferenceTo.hpp>
#include <kdm/data/RestrictionOf.hpp>
#include <kdm/data/ExtensionTo.hpp>
#include <kdm/data/DatatypeOf.hpp>
#include <kdm/data/HasContent.hpp>
#include <kdm/data/WritesColumnSet.hpp>
#include <kdm/data/ProducesDataEvent.hpp>
#include <kdm/data/DataSegment.hpp>
#include <kdm/data/ContentElement.hpp>
#include <kdm/data/ManagesData.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::data;

DataFactory::DataFactory()
{
}

::ecore::EObject_ptr DataFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case DataPackage::DATAMODEL:
        return createDataModel();
    case DataPackage::ABSTRACTDATAELEMENT:
        return createAbstractDataElement();
    case DataPackage::DATARESOURCE:
        return createDataResource();
    case DataPackage::INDEXELEMENT:
        return createIndexElement();
    case DataPackage::UNIQUEKEY:
        return createUniqueKey();
    case DataPackage::INDEX:
        return createIndex();
    case DataPackage::ABSTRACTDATARELATIONSHIP:
        return createAbstractDataRelationship();
    case DataPackage::KEYRELATION:
        return createKeyRelation();
    case DataPackage::REFERENCEKEY:
        return createReferenceKey();
    case DataPackage::DATACONTAINER:
        return createDataContainer();
    case DataPackage::CATALOG:
        return createCatalog();
    case DataPackage::RELATIONALSCHEMA:
        return createRelationalSchema();
    case DataPackage::COLUMNSET:
        return createColumnSet();
    case DataPackage::RELATIONALTABLE:
        return createRelationalTable();
    case DataPackage::RELATIONALVIEW:
        return createRelationalView();
    case DataPackage::RECORDFILE:
        return createRecordFile();
    case DataPackage::DATAEVENT:
        return createDataEvent();
    case DataPackage::XMLSCHEMA:
        return createXMLSchema();
    case DataPackage::ABSTRACTCONTENTELEMENT:
        return createAbstractContentElement();
    case DataPackage::COMPLEXCONTENTTYPE:
        return createComplexContentType();
    case DataPackage::ALLCONTENT:
        return createAllContent();
    case DataPackage::SEQCONTENT:
        return createSeqContent();
    case DataPackage::CHOICECONTENT:
        return createChoiceContent();
    case DataPackage::CONTENTITEM:
        return createContentItem();
    case DataPackage::GROUPCONTENT:
        return createGroupContent();
    case DataPackage::CONTENTRESTRICTION:
        return createContentRestriction();
    case DataPackage::SIMPLECONTENTTYPE:
        return createSimpleContentType();
    case DataPackage::EXTENDEDDATAELEMENT:
        return createExtendedDataElement();
    case DataPackage::DATARELATIONSHIP:
        return createDataRelationship();
    case DataPackage::MIXEDCONTENT:
        return createMixedContent();
    case DataPackage::CONTENTREFERENCE:
        return createContentReference();
    case DataPackage::DATAACTION:
        return createDataAction();
    case DataPackage::READSCOLUMNSET:
        return createReadsColumnSet();
    case DataPackage::CONTENTATTRIBUTE:
        return createContentAttribute();
    case DataPackage::TYPEDBY:
        return createTypedBy();
    case DataPackage::REFERENCETO:
        return createReferenceTo();
    case DataPackage::RESTRICTIONOF:
        return createRestrictionOf();
    case DataPackage::EXTENSIONTO:
        return createExtensionTo();
    case DataPackage::DATATYPEOF:
        return createDatatypeOf();
    case DataPackage::HASCONTENT:
        return createHasContent();
    case DataPackage::WRITESCOLUMNSET:
        return createWritesColumnSet();
    case DataPackage::PRODUCESDATAEVENT:
        return createProducesDataEvent();
    case DataPackage::DATASEGMENT:
        return createDataSegment();
    case DataPackage::CONTENTELEMENT:
        return createContentElement();
    case DataPackage::MANAGESDATA:
        return createManagesData();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject DataFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString DataFactory::convertToString(::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

DataModel_ptr DataFactory::createDataModel()
{
    return ::ecore::Ptr < DataModel > (new DataModel);
}
AbstractDataElement_ptr DataFactory::createAbstractDataElement()
{
    return ::ecore::Ptr < AbstractDataElement > (new AbstractDataElement);
}
DataResource_ptr DataFactory::createDataResource()
{
    return ::ecore::Ptr < DataResource > (new DataResource);
}
IndexElement_ptr DataFactory::createIndexElement()
{
    return ::ecore::Ptr < IndexElement > (new IndexElement);
}
UniqueKey_ptr DataFactory::createUniqueKey()
{
    return ::ecore::Ptr < UniqueKey > (new UniqueKey);
}
Index_ptr DataFactory::createIndex()
{
    return ::ecore::Ptr < Index > (new Index);
}
AbstractDataRelationship_ptr DataFactory::createAbstractDataRelationship()
{
    return ::ecore::Ptr < AbstractDataRelationship
            > (new AbstractDataRelationship);
}
KeyRelation_ptr DataFactory::createKeyRelation()
{
    return ::ecore::Ptr < KeyRelation > (new KeyRelation);
}
ReferenceKey_ptr DataFactory::createReferenceKey()
{
    return ::ecore::Ptr < ReferenceKey > (new ReferenceKey);
}
DataContainer_ptr DataFactory::createDataContainer()
{
    return ::ecore::Ptr < DataContainer > (new DataContainer);
}
Catalog_ptr DataFactory::createCatalog()
{
    return ::ecore::Ptr < Catalog > (new Catalog);
}
RelationalSchema_ptr DataFactory::createRelationalSchema()
{
    return ::ecore::Ptr < RelationalSchema > (new RelationalSchema);
}
ColumnSet_ptr DataFactory::createColumnSet()
{
    return ::ecore::Ptr < ColumnSet > (new ColumnSet);
}
RelationalTable_ptr DataFactory::createRelationalTable()
{
    return ::ecore::Ptr < RelationalTable > (new RelationalTable);
}
RelationalView_ptr DataFactory::createRelationalView()
{
    return ::ecore::Ptr < RelationalView > (new RelationalView);
}
RecordFile_ptr DataFactory::createRecordFile()
{
    return ::ecore::Ptr < RecordFile > (new RecordFile);
}
DataEvent_ptr DataFactory::createDataEvent()
{
    return ::ecore::Ptr < DataEvent > (new DataEvent);
}
XMLSchema_ptr DataFactory::createXMLSchema()
{
    return ::ecore::Ptr < XMLSchema > (new XMLSchema);
}
AbstractContentElement_ptr DataFactory::createAbstractContentElement()
{
    return ::ecore::Ptr < AbstractContentElement > (new AbstractContentElement);
}
ComplexContentType_ptr DataFactory::createComplexContentType()
{
    return ::ecore::Ptr < ComplexContentType > (new ComplexContentType);
}
AllContent_ptr DataFactory::createAllContent()
{
    return ::ecore::Ptr < AllContent > (new AllContent);
}
SeqContent_ptr DataFactory::createSeqContent()
{
    return ::ecore::Ptr < SeqContent > (new SeqContent);
}
ChoiceContent_ptr DataFactory::createChoiceContent()
{
    return ::ecore::Ptr < ChoiceContent > (new ChoiceContent);
}
ContentItem_ptr DataFactory::createContentItem()
{
    return ::ecore::Ptr < ContentItem > (new ContentItem);
}
GroupContent_ptr DataFactory::createGroupContent()
{
    return ::ecore::Ptr < GroupContent > (new GroupContent);
}
ContentRestriction_ptr DataFactory::createContentRestriction()
{
    return ::ecore::Ptr < ContentRestriction > (new ContentRestriction);
}
SimpleContentType_ptr DataFactory::createSimpleContentType()
{
    return ::ecore::Ptr < SimpleContentType > (new SimpleContentType);
}
ExtendedDataElement_ptr DataFactory::createExtendedDataElement()
{
    return ::ecore::Ptr < ExtendedDataElement > (new ExtendedDataElement);
}
DataRelationship_ptr DataFactory::createDataRelationship()
{
    return ::ecore::Ptr < DataRelationship > (new DataRelationship);
}
MixedContent_ptr DataFactory::createMixedContent()
{
    return ::ecore::Ptr < MixedContent > (new MixedContent);
}
ContentReference_ptr DataFactory::createContentReference()
{
    return ::ecore::Ptr < ContentReference > (new ContentReference);
}
DataAction_ptr DataFactory::createDataAction()
{
    return ::ecore::Ptr < DataAction > (new DataAction);
}
ReadsColumnSet_ptr DataFactory::createReadsColumnSet()
{
    return ::ecore::Ptr < ReadsColumnSet > (new ReadsColumnSet);
}
ContentAttribute_ptr DataFactory::createContentAttribute()
{
    return ::ecore::Ptr < ContentAttribute > (new ContentAttribute);
}
TypedBy_ptr DataFactory::createTypedBy()
{
    return ::ecore::Ptr < TypedBy > (new TypedBy);
}
ReferenceTo_ptr DataFactory::createReferenceTo()
{
    return ::ecore::Ptr < ReferenceTo > (new ReferenceTo);
}
RestrictionOf_ptr DataFactory::createRestrictionOf()
{
    return ::ecore::Ptr < RestrictionOf > (new RestrictionOf);
}
ExtensionTo_ptr DataFactory::createExtensionTo()
{
    return ::ecore::Ptr < ExtensionTo > (new ExtensionTo);
}
DatatypeOf_ptr DataFactory::createDatatypeOf()
{
    return ::ecore::Ptr < DatatypeOf > (new DatatypeOf);
}
HasContent_ptr DataFactory::createHasContent()
{
    return ::ecore::Ptr < HasContent > (new HasContent);
}
WritesColumnSet_ptr DataFactory::createWritesColumnSet()
{
    return ::ecore::Ptr < WritesColumnSet > (new WritesColumnSet);
}
ProducesDataEvent_ptr DataFactory::createProducesDataEvent()
{
    return ::ecore::Ptr < ProducesDataEvent > (new ProducesDataEvent);
}
DataSegment_ptr DataFactory::createDataSegment()
{
    return ::ecore::Ptr < DataSegment > (new DataSegment);
}
ContentElement_ptr DataFactory::createContentElement()
{
    return ::ecore::Ptr < ContentElement > (new ContentElement);
}
ManagesData_ptr DataFactory::createManagesData()
{
    return ::ecore::Ptr < ManagesData > (new ManagesData);
}

