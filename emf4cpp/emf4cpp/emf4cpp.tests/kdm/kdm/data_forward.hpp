// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/data_forward.hpp
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
        typedef DataModel* DataModel_ptr;

        // AbstractDataElement
        class AbstractDataElement;
        typedef AbstractDataElement* AbstractDataElement_ptr;

        // DataResource
        class DataResource;
        typedef DataResource* DataResource_ptr;

        // IndexElement
        class IndexElement;
        typedef IndexElement* IndexElement_ptr;

        // UniqueKey
        class UniqueKey;
        typedef UniqueKey* UniqueKey_ptr;

        // Index
        class Index;
        typedef Index* Index_ptr;

        // AbstractDataRelationship
        class AbstractDataRelationship;
        typedef AbstractDataRelationship* AbstractDataRelationship_ptr;

        // KeyRelation
        class KeyRelation;
        typedef KeyRelation* KeyRelation_ptr;

        // ReferenceKey
        class ReferenceKey;
        typedef ReferenceKey* ReferenceKey_ptr;

        // DataContainer
        class DataContainer;
        typedef DataContainer* DataContainer_ptr;

        // Catalog
        class Catalog;
        typedef Catalog* Catalog_ptr;

        // RelationalSchema
        class RelationalSchema;
        typedef RelationalSchema* RelationalSchema_ptr;

        // ColumnSet
        class ColumnSet;
        typedef ColumnSet* ColumnSet_ptr;

        // RelationalTable
        class RelationalTable;
        typedef RelationalTable* RelationalTable_ptr;

        // RelationalView
        class RelationalView;
        typedef RelationalView* RelationalView_ptr;

        // RecordFile
        class RecordFile;
        typedef RecordFile* RecordFile_ptr;

        // DataEvent
        class DataEvent;
        typedef DataEvent* DataEvent_ptr;

        // XMLSchema
        class XMLSchema;
        typedef XMLSchema* XMLSchema_ptr;

        // AbstractContentElement
        class AbstractContentElement;
        typedef AbstractContentElement* AbstractContentElement_ptr;

        // ComplexContentType
        class ComplexContentType;
        typedef ComplexContentType* ComplexContentType_ptr;

        // AllContent
        class AllContent;
        typedef AllContent* AllContent_ptr;

        // SeqContent
        class SeqContent;
        typedef SeqContent* SeqContent_ptr;

        // ChoiceContent
        class ChoiceContent;
        typedef ChoiceContent* ChoiceContent_ptr;

        // ContentItem
        class ContentItem;
        typedef ContentItem* ContentItem_ptr;

        // GroupContent
        class GroupContent;
        typedef GroupContent* GroupContent_ptr;

        // ContentRestriction
        class ContentRestriction;
        typedef ContentRestriction* ContentRestriction_ptr;

        // SimpleContentType
        class SimpleContentType;
        typedef SimpleContentType* SimpleContentType_ptr;

        // ExtendedDataElement
        class ExtendedDataElement;
        typedef ExtendedDataElement* ExtendedDataElement_ptr;

        // DataRelationship
        class DataRelationship;
        typedef DataRelationship* DataRelationship_ptr;

        // MixedContent
        class MixedContent;
        typedef MixedContent* MixedContent_ptr;

        // ContentReference
        class ContentReference;
        typedef ContentReference* ContentReference_ptr;

        // DataAction
        class DataAction;
        typedef DataAction* DataAction_ptr;

        // ReadsColumnSet
        class ReadsColumnSet;
        typedef ReadsColumnSet* ReadsColumnSet_ptr;

        // ContentAttribute
        class ContentAttribute;
        typedef ContentAttribute* ContentAttribute_ptr;

        // TypedBy
        class TypedBy;
        typedef TypedBy* TypedBy_ptr;

        // ReferenceTo
        class ReferenceTo;
        typedef ReferenceTo* ReferenceTo_ptr;

        // RestrictionOf
        class RestrictionOf;
        typedef RestrictionOf* RestrictionOf_ptr;

        // ExtensionTo
        class ExtensionTo;
        typedef ExtensionTo* ExtensionTo_ptr;

        // DatatypeOf
        class DatatypeOf;
        typedef DatatypeOf* DatatypeOf_ptr;

        // HasContent
        class HasContent;
        typedef HasContent* HasContent_ptr;

        // WritesColumnSet
        class WritesColumnSet;
        typedef WritesColumnSet* WritesColumnSet_ptr;

        // ProducesDataEvent
        class ProducesDataEvent;
        typedef ProducesDataEvent* ProducesDataEvent_ptr;

        // DataSegment
        class DataSegment;
        typedef DataSegment* DataSegment_ptr;

        // ContentElement
        class ContentElement;
        typedef ContentElement* ContentElement_ptr;

        // ManagesData
        class ManagesData;
        typedef ManagesData* ManagesData_ptr;

        // Package & Factory
        class DataFactory;
        typedef DataFactory * DataFactory_ptr;
        class DataPackage;
        typedef DataPackage * DataPackage_ptr;

        template< typename T, typename S >
        inline T* instanceOf(S* _s)
        {
            return dynamic_cast< T* > (_s);
        }

    } // data
} // kdm


#endif // _KDM_DATA_FORWARD_HPP
