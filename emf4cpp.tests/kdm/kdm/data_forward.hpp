// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/data_forward.hpp
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

#ifndef _KDM_DATA_FORWARD_HPP
#define _KDM_DATA_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(kdm_data_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace kdm
{
    namespace data
    {

// EDataType

// EClass

// DataModel
        class DataModel;
        using DataModel_ptr = ::ecore::Ptr<DataModel>;

// AbstractDataElement
        class AbstractDataElement;
        using AbstractDataElement_ptr = ::ecore::Ptr<AbstractDataElement>;

// DataResource
        class DataResource;
        using DataResource_ptr = ::ecore::Ptr<DataResource>;

// IndexElement
        class IndexElement;
        using IndexElement_ptr = ::ecore::Ptr<IndexElement>;

// UniqueKey
        class UniqueKey;
        using UniqueKey_ptr = ::ecore::Ptr<UniqueKey>;

// Index
        class Index;
        using Index_ptr = ::ecore::Ptr<Index>;

// AbstractDataRelationship
        class AbstractDataRelationship;
        using AbstractDataRelationship_ptr = ::ecore::Ptr<AbstractDataRelationship>;

// KeyRelation
        class KeyRelation;
        using KeyRelation_ptr = ::ecore::Ptr<KeyRelation>;

// ReferenceKey
        class ReferenceKey;
        using ReferenceKey_ptr = ::ecore::Ptr<ReferenceKey>;

// DataContainer
        class DataContainer;
        using DataContainer_ptr = ::ecore::Ptr<DataContainer>;

// Catalog
        class Catalog;
        using Catalog_ptr = ::ecore::Ptr<Catalog>;

// RelationalSchema
        class RelationalSchema;
        using RelationalSchema_ptr = ::ecore::Ptr<RelationalSchema>;

// ColumnSet
        class ColumnSet;
        using ColumnSet_ptr = ::ecore::Ptr<ColumnSet>;

// RelationalTable
        class RelationalTable;
        using RelationalTable_ptr = ::ecore::Ptr<RelationalTable>;

// RelationalView
        class RelationalView;
        using RelationalView_ptr = ::ecore::Ptr<RelationalView>;

// RecordFile
        class RecordFile;
        using RecordFile_ptr = ::ecore::Ptr<RecordFile>;

// DataEvent
        class DataEvent;
        using DataEvent_ptr = ::ecore::Ptr<DataEvent>;

// XMLSchema
        class XMLSchema;
        using XMLSchema_ptr = ::ecore::Ptr<XMLSchema>;

// AbstractContentElement
        class AbstractContentElement;
        using AbstractContentElement_ptr = ::ecore::Ptr<AbstractContentElement>;

// ComplexContentType
        class ComplexContentType;
        using ComplexContentType_ptr = ::ecore::Ptr<ComplexContentType>;

// AllContent
        class AllContent;
        using AllContent_ptr = ::ecore::Ptr<AllContent>;

// SeqContent
        class SeqContent;
        using SeqContent_ptr = ::ecore::Ptr<SeqContent>;

// ChoiceContent
        class ChoiceContent;
        using ChoiceContent_ptr = ::ecore::Ptr<ChoiceContent>;

// ContentItem
        class ContentItem;
        using ContentItem_ptr = ::ecore::Ptr<ContentItem>;

// GroupContent
        class GroupContent;
        using GroupContent_ptr = ::ecore::Ptr<GroupContent>;

// ContentRestriction
        class ContentRestriction;
        using ContentRestriction_ptr = ::ecore::Ptr<ContentRestriction>;

// SimpleContentType
        class SimpleContentType;
        using SimpleContentType_ptr = ::ecore::Ptr<SimpleContentType>;

// ExtendedDataElement
        class ExtendedDataElement;
        using ExtendedDataElement_ptr = ::ecore::Ptr<ExtendedDataElement>;

// DataRelationship
        class DataRelationship;
        using DataRelationship_ptr = ::ecore::Ptr<DataRelationship>;

// MixedContent
        class MixedContent;
        using MixedContent_ptr = ::ecore::Ptr<MixedContent>;

// ContentReference
        class ContentReference;
        using ContentReference_ptr = ::ecore::Ptr<ContentReference>;

// DataAction
        class DataAction;
        using DataAction_ptr = ::ecore::Ptr<DataAction>;

// ReadsColumnSet
        class ReadsColumnSet;
        using ReadsColumnSet_ptr = ::ecore::Ptr<ReadsColumnSet>;

// ContentAttribute
        class ContentAttribute;
        using ContentAttribute_ptr = ::ecore::Ptr<ContentAttribute>;

// TypedBy
        class TypedBy;
        using TypedBy_ptr = ::ecore::Ptr<TypedBy>;

// ReferenceTo
        class ReferenceTo;
        using ReferenceTo_ptr = ::ecore::Ptr<ReferenceTo>;

// RestrictionOf
        class RestrictionOf;
        using RestrictionOf_ptr = ::ecore::Ptr<RestrictionOf>;

// ExtensionTo
        class ExtensionTo;
        using ExtensionTo_ptr = ::ecore::Ptr<ExtensionTo>;

// DatatypeOf
        class DatatypeOf;
        using DatatypeOf_ptr = ::ecore::Ptr<DatatypeOf>;

// HasContent
        class HasContent;
        using HasContent_ptr = ::ecore::Ptr<HasContent>;

// WritesColumnSet
        class WritesColumnSet;
        using WritesColumnSet_ptr = ::ecore::Ptr<WritesColumnSet>;

// ProducesDataEvent
        class ProducesDataEvent;
        using ProducesDataEvent_ptr = ::ecore::Ptr<ProducesDataEvent>;

// DataSegment
        class DataSegment;
        using DataSegment_ptr = ::ecore::Ptr<DataSegment>;

// ContentElement
        class ContentElement;
        using ContentElement_ptr = ::ecore::Ptr<ContentElement>;

// ManagesData
        class ManagesData;
        using ManagesData_ptr = ::ecore::Ptr<ManagesData>;

// EEnum

// Package & Factory
        class DataFactory;
        using DataFactory_ptr = ::ecore::Ptr<DataFactory>;
        class DataPackage;
        using DataPackage_ptr = ::ecore::Ptr<DataPackage>;

    } // data
} // kdm

#endif // _KDM_DATA_FORWARD_HPP

