// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/data/DataFactory.hpp
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

#ifndef _KDM_DATAFACTORY_HPP
#define _KDM_DATAFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/data.hpp>

namespace kdm
{
    namespace data
    {

        class DataFactory: public virtual ::ecore::EFactory
        {
        public:

            static DataFactory_ptr _instance();

            virtual DataModel_ptr createDataModel();
            virtual AbstractDataElement_ptr createAbstractDataElement();
            virtual DataResource_ptr createDataResource();
            virtual IndexElement_ptr createIndexElement();
            virtual UniqueKey_ptr createUniqueKey();
            virtual Index_ptr createIndex();
            virtual AbstractDataRelationship_ptr
                    createAbstractDataRelationship();
            virtual KeyRelation_ptr createKeyRelation();
            virtual ReferenceKey_ptr createReferenceKey();
            virtual DataContainer_ptr createDataContainer();
            virtual Catalog_ptr createCatalog();
            virtual RelationalSchema_ptr createRelationalSchema();
            virtual ColumnSet_ptr createColumnSet();
            virtual RelationalTable_ptr createRelationalTable();
            virtual RelationalView_ptr createRelationalView();
            virtual RecordFile_ptr createRecordFile();
            virtual DataEvent_ptr createDataEvent();
            virtual XMLSchema_ptr createXMLSchema();
            virtual AbstractContentElement_ptr createAbstractContentElement();
            virtual ComplexContentType_ptr createComplexContentType();
            virtual AllContent_ptr createAllContent();
            virtual SeqContent_ptr createSeqContent();
            virtual ChoiceContent_ptr createChoiceContent();
            virtual ContentItem_ptr createContentItem();
            virtual GroupContent_ptr createGroupContent();
            virtual ContentRestriction_ptr createContentRestriction();
            virtual SimpleContentType_ptr createSimpleContentType();
            virtual ExtendedDataElement_ptr createExtendedDataElement();
            virtual DataRelationship_ptr createDataRelationship();
            virtual MixedContent_ptr createMixedContent();
            virtual ContentReference_ptr createContentReference();
            virtual DataAction_ptr createDataAction();
            virtual ReadsColumnSet_ptr createReadsColumnSet();
            virtual ContentAttribute_ptr createContentAttribute();
            virtual TypedBy_ptr createTypedBy();
            virtual ReferenceTo_ptr createReferenceTo();
            virtual RestrictionOf_ptr createRestrictionOf();
            virtual ExtensionTo_ptr createExtensionTo();
            virtual DatatypeOf_ptr createDatatypeOf();
            virtual HasContent_ptr createHasContent();
            virtual WritesColumnSet_ptr createWritesColumnSet();
            virtual ProducesDataEvent_ptr createProducesDataEvent();
            virtual DataSegment_ptr createDataSegment();
            virtual ContentElement_ptr createContentElement();
            virtual ManagesData_ptr createManagesData();

            virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EJavaObject const& _instanceValue);

        protected:

            static std::auto_ptr< DataFactory > s_instance;

            DataFactory();

        };

    } // data
} // kdm


#endif // _KDM_DATAFACTORY_HPP
