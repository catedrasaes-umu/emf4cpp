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
    return boost::intrusive_ptr < DataModel > (new DataModel);
}
AbstractDataElement_ptr DataFactory::createAbstractDataElement()
{
    return boost::intrusive_ptr < AbstractDataElement
            > (new AbstractDataElement);
}
DataResource_ptr DataFactory::createDataResource()
{
    return boost::intrusive_ptr < DataResource > (new DataResource);
}
IndexElement_ptr DataFactory::createIndexElement()
{
    return boost::intrusive_ptr < IndexElement > (new IndexElement);
}
UniqueKey_ptr DataFactory::createUniqueKey()
{
    return boost::intrusive_ptr < UniqueKey > (new UniqueKey);
}
Index_ptr DataFactory::createIndex()
{
    return boost::intrusive_ptr < Index > (new Index);
}
AbstractDataRelationship_ptr DataFactory::createAbstractDataRelationship()
{
    return boost::intrusive_ptr < AbstractDataRelationship
            > (new AbstractDataRelationship);
}
KeyRelation_ptr DataFactory::createKeyRelation()
{
    return boost::intrusive_ptr < KeyRelation > (new KeyRelation);
}
ReferenceKey_ptr DataFactory::createReferenceKey()
{
    return boost::intrusive_ptr < ReferenceKey > (new ReferenceKey);
}
DataContainer_ptr DataFactory::createDataContainer()
{
    return boost::intrusive_ptr < DataContainer > (new DataContainer);
}
Catalog_ptr DataFactory::createCatalog()
{
    return boost::intrusive_ptr < Catalog > (new Catalog);
}
RelationalSchema_ptr DataFactory::createRelationalSchema()
{
    return boost::intrusive_ptr < RelationalSchema > (new RelationalSchema);
}
ColumnSet_ptr DataFactory::createColumnSet()
{
    return boost::intrusive_ptr < ColumnSet > (new ColumnSet);
}
RelationalTable_ptr DataFactory::createRelationalTable()
{
    return boost::intrusive_ptr < RelationalTable > (new RelationalTable);
}
RelationalView_ptr DataFactory::createRelationalView()
{
    return boost::intrusive_ptr < RelationalView > (new RelationalView);
}
RecordFile_ptr DataFactory::createRecordFile()
{
    return boost::intrusive_ptr < RecordFile > (new RecordFile);
}
DataEvent_ptr DataFactory::createDataEvent()
{
    return boost::intrusive_ptr < DataEvent > (new DataEvent);
}
XMLSchema_ptr DataFactory::createXMLSchema()
{
    return boost::intrusive_ptr < XMLSchema > (new XMLSchema);
}
AbstractContentElement_ptr DataFactory::createAbstractContentElement()
{
    return boost::intrusive_ptr < AbstractContentElement
            > (new AbstractContentElement);
}
ComplexContentType_ptr DataFactory::createComplexContentType()
{
    return boost::intrusive_ptr < ComplexContentType > (new ComplexContentType);
}
AllContent_ptr DataFactory::createAllContent()
{
    return boost::intrusive_ptr < AllContent > (new AllContent);
}
SeqContent_ptr DataFactory::createSeqContent()
{
    return boost::intrusive_ptr < SeqContent > (new SeqContent);
}
ChoiceContent_ptr DataFactory::createChoiceContent()
{
    return boost::intrusive_ptr < ChoiceContent > (new ChoiceContent);
}
ContentItem_ptr DataFactory::createContentItem()
{
    return boost::intrusive_ptr < ContentItem > (new ContentItem);
}
GroupContent_ptr DataFactory::createGroupContent()
{
    return boost::intrusive_ptr < GroupContent > (new GroupContent);
}
ContentRestriction_ptr DataFactory::createContentRestriction()
{
    return boost::intrusive_ptr < ContentRestriction > (new ContentRestriction);
}
SimpleContentType_ptr DataFactory::createSimpleContentType()
{
    return boost::intrusive_ptr < SimpleContentType > (new SimpleContentType);
}
ExtendedDataElement_ptr DataFactory::createExtendedDataElement()
{
    return boost::intrusive_ptr < ExtendedDataElement
            > (new ExtendedDataElement);
}
DataRelationship_ptr DataFactory::createDataRelationship()
{
    return boost::intrusive_ptr < DataRelationship > (new DataRelationship);
}
MixedContent_ptr DataFactory::createMixedContent()
{
    return boost::intrusive_ptr < MixedContent > (new MixedContent);
}
ContentReference_ptr DataFactory::createContentReference()
{
    return boost::intrusive_ptr < ContentReference > (new ContentReference);
}
DataAction_ptr DataFactory::createDataAction()
{
    return boost::intrusive_ptr < DataAction > (new DataAction);
}
ReadsColumnSet_ptr DataFactory::createReadsColumnSet()
{
    return boost::intrusive_ptr < ReadsColumnSet > (new ReadsColumnSet);
}
ContentAttribute_ptr DataFactory::createContentAttribute()
{
    return boost::intrusive_ptr < ContentAttribute > (new ContentAttribute);
}
TypedBy_ptr DataFactory::createTypedBy()
{
    return boost::intrusive_ptr < TypedBy > (new TypedBy);
}
ReferenceTo_ptr DataFactory::createReferenceTo()
{
    return boost::intrusive_ptr < ReferenceTo > (new ReferenceTo);
}
RestrictionOf_ptr DataFactory::createRestrictionOf()
{
    return boost::intrusive_ptr < RestrictionOf > (new RestrictionOf);
}
ExtensionTo_ptr DataFactory::createExtensionTo()
{
    return boost::intrusive_ptr < ExtensionTo > (new ExtensionTo);
}
DatatypeOf_ptr DataFactory::createDatatypeOf()
{
    return boost::intrusive_ptr < DatatypeOf > (new DatatypeOf);
}
HasContent_ptr DataFactory::createHasContent()
{
    return boost::intrusive_ptr < HasContent > (new HasContent);
}
WritesColumnSet_ptr DataFactory::createWritesColumnSet()
{
    return boost::intrusive_ptr < WritesColumnSet > (new WritesColumnSet);
}
ProducesDataEvent_ptr DataFactory::createProducesDataEvent()
{
    return boost::intrusive_ptr < ProducesDataEvent > (new ProducesDataEvent);
}
DataSegment_ptr DataFactory::createDataSegment()
{
    return boost::intrusive_ptr < DataSegment > (new DataSegment);
}
ContentElement_ptr DataFactory::createContentElement()
{
    return boost::intrusive_ptr < ContentElement > (new ContentElement);
}
ManagesData_ptr DataFactory::createManagesData()
{
    return boost::intrusive_ptr < ManagesData > (new ManagesData);
}

