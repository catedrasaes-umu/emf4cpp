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
        using DataModel_ptr = boost::intrusive_ptr<DataModel>;

// AbstractDataElement
        class AbstractDataElement;
        using AbstractDataElement_ptr = boost::intrusive_ptr<AbstractDataElement>;

// DataResource
        class DataResource;
        using DataResource_ptr = boost::intrusive_ptr<DataResource>;

// IndexElement
        class IndexElement;
        using IndexElement_ptr = boost::intrusive_ptr<IndexElement>;

// UniqueKey
        class UniqueKey;
        using UniqueKey_ptr = boost::intrusive_ptr<UniqueKey>;

// Index
        class Index;
        using Index_ptr = boost::intrusive_ptr<Index>;

// AbstractDataRelationship
        class AbstractDataRelationship;
        using AbstractDataRelationship_ptr = boost::intrusive_ptr<AbstractDataRelationship>;

// KeyRelation
        class KeyRelation;
        using KeyRelation_ptr = boost::intrusive_ptr<KeyRelation>;

// ReferenceKey
        class ReferenceKey;
        using ReferenceKey_ptr = boost::intrusive_ptr<ReferenceKey>;

// DataContainer
        class DataContainer;
        using DataContainer_ptr = boost::intrusive_ptr<DataContainer>;

// Catalog
        class Catalog;
        using Catalog_ptr = boost::intrusive_ptr<Catalog>;

// RelationalSchema
        class RelationalSchema;
        using RelationalSchema_ptr = boost::intrusive_ptr<RelationalSchema>;

// ColumnSet
        class ColumnSet;
        using ColumnSet_ptr = boost::intrusive_ptr<ColumnSet>;

// RelationalTable
        class RelationalTable;
        using RelationalTable_ptr = boost::intrusive_ptr<RelationalTable>;

// RelationalView
        class RelationalView;
        using RelationalView_ptr = boost::intrusive_ptr<RelationalView>;

// RecordFile
        class RecordFile;
        using RecordFile_ptr = boost::intrusive_ptr<RecordFile>;

// DataEvent
        class DataEvent;
        using DataEvent_ptr = boost::intrusive_ptr<DataEvent>;

// XMLSchema
        class XMLSchema;
        using XMLSchema_ptr = boost::intrusive_ptr<XMLSchema>;

// AbstractContentElement
        class AbstractContentElement;
        using AbstractContentElement_ptr = boost::intrusive_ptr<AbstractContentElement>;

// ComplexContentType
        class ComplexContentType;
        using ComplexContentType_ptr = boost::intrusive_ptr<ComplexContentType>;

// AllContent
        class AllContent;
        using AllContent_ptr = boost::intrusive_ptr<AllContent>;

// SeqContent
        class SeqContent;
        using SeqContent_ptr = boost::intrusive_ptr<SeqContent>;

// ChoiceContent
        class ChoiceContent;
        using ChoiceContent_ptr = boost::intrusive_ptr<ChoiceContent>;

// ContentItem
        class ContentItem;
        using ContentItem_ptr = boost::intrusive_ptr<ContentItem>;

// GroupContent
        class GroupContent;
        using GroupContent_ptr = boost::intrusive_ptr<GroupContent>;

// ContentRestriction
        class ContentRestriction;
        using ContentRestriction_ptr = boost::intrusive_ptr<ContentRestriction>;

// SimpleContentType
        class SimpleContentType;
        using SimpleContentType_ptr = boost::intrusive_ptr<SimpleContentType>;

// ExtendedDataElement
        class ExtendedDataElement;
        using ExtendedDataElement_ptr = boost::intrusive_ptr<ExtendedDataElement>;

// DataRelationship
        class DataRelationship;
        using DataRelationship_ptr = boost::intrusive_ptr<DataRelationship>;

// MixedContent
        class MixedContent;
        using MixedContent_ptr = boost::intrusive_ptr<MixedContent>;

// ContentReference
        class ContentReference;
        using ContentReference_ptr = boost::intrusive_ptr<ContentReference>;

// DataAction
        class DataAction;
        using DataAction_ptr = boost::intrusive_ptr<DataAction>;

// ReadsColumnSet
        class ReadsColumnSet;
        using ReadsColumnSet_ptr = boost::intrusive_ptr<ReadsColumnSet>;

// ContentAttribute
        class ContentAttribute;
        using ContentAttribute_ptr = boost::intrusive_ptr<ContentAttribute>;

// TypedBy
        class TypedBy;
        using TypedBy_ptr = boost::intrusive_ptr<TypedBy>;

// ReferenceTo
        class ReferenceTo;
        using ReferenceTo_ptr = boost::intrusive_ptr<ReferenceTo>;

// RestrictionOf
        class RestrictionOf;
        using RestrictionOf_ptr = boost::intrusive_ptr<RestrictionOf>;

// ExtensionTo
        class ExtensionTo;
        using ExtensionTo_ptr = boost::intrusive_ptr<ExtensionTo>;

// DatatypeOf
        class DatatypeOf;
        using DatatypeOf_ptr = boost::intrusive_ptr<DatatypeOf>;

// HasContent
        class HasContent;
        using HasContent_ptr = boost::intrusive_ptr<HasContent>;

// WritesColumnSet
        class WritesColumnSet;
        using WritesColumnSet_ptr = boost::intrusive_ptr<WritesColumnSet>;

// ProducesDataEvent
        class ProducesDataEvent;
        using ProducesDataEvent_ptr = boost::intrusive_ptr<ProducesDataEvent>;

// DataSegment
        class DataSegment;
        using DataSegment_ptr = boost::intrusive_ptr<DataSegment>;

// ContentElement
        class ContentElement;
        using ContentElement_ptr = boost::intrusive_ptr<ContentElement>;

// ManagesData
        class ManagesData;
        using ManagesData_ptr = boost::intrusive_ptr<ManagesData>;

// EEnum

// Package & Factory
        class DataFactory;
        using DataFactory_ptr = boost::intrusive_ptr<DataFactory>;
        class DataPackage;
        using DataPackage_ptr = boost::intrusive_ptr<DataPackage>;

        template< typename T, typename S >
        inline boost::intrusive_ptr< T > instanceOf(const S& _s)
        {
            return boost::intrusive_ptr < T > (dynamic_cast< T* >(_s.get()));
        }

    } // data
} // kdm

#endif // _KDM_DATA_FORWARD_HPP

