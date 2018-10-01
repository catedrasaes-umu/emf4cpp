// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/data/DataFactory.hpp
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

#ifndef _KDM_DATAFACTORY_HPP
#define _KDM_DATAFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/data.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace data
    {

        class EXPORT_KDM_DLL DataFactory : public virtual ::ecore::EFactory
        {
        public:

            static DataFactory_ptr _instance();

            virtual DataModel_ptr createDataModel();
            virtual AbstractDataElement_ptr createAbstractDataElement();
            virtual DataResource_ptr createDataResource();
            virtual IndexElement_ptr createIndexElement();
            virtual UniqueKey_ptr createUniqueKey();
            virtual Index_ptr createIndex();
            virtual AbstractDataRelationship_ptr createAbstractDataRelationship();
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

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static ::ecore::Ptr< DataFactory > s_holder;

            DataFactory();

        };

        /** An object creation helper
         *
         * Usage (add namespaces as required):
         *   auto p = create<MyClass>();
         *
         */
        template< class T > inline ::ecore::Ptr< T > create()
        {
            return ::ecore::Ptr< T >();
        }

        template< > inline DataModel_ptr create< DataModel >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createDataModel();
        }

        template< > inline AbstractDataElement_ptr create< AbstractDataElement >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createAbstractDataElement();
        }

        template< > inline DataResource_ptr create< DataResource >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createDataResource();
        }

        template< > inline IndexElement_ptr create< IndexElement >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createIndexElement();
        }

        template< > inline UniqueKey_ptr create< UniqueKey >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createUniqueKey();
        }

        template< > inline Index_ptr create< Index >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createIndex();
        }

        template< > inline AbstractDataRelationship_ptr create<
                AbstractDataRelationship >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createAbstractDataRelationship();
        }

        template< > inline KeyRelation_ptr create< KeyRelation >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createKeyRelation();
        }

        template< > inline ReferenceKey_ptr create< ReferenceKey >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createReferenceKey();
        }

        template< > inline DataContainer_ptr create< DataContainer >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createDataContainer();
        }

        template< > inline Catalog_ptr create< Catalog >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createCatalog();
        }

        template< > inline RelationalSchema_ptr create< RelationalSchema >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createRelationalSchema();
        }

        template< > inline ColumnSet_ptr create< ColumnSet >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createColumnSet();
        }

        template< > inline RelationalTable_ptr create< RelationalTable >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createRelationalTable();
        }

        template< > inline RelationalView_ptr create< RelationalView >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createRelationalView();
        }

        template< > inline RecordFile_ptr create< RecordFile >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createRecordFile();
        }

        template< > inline DataEvent_ptr create< DataEvent >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createDataEvent();
        }

        template< > inline XMLSchema_ptr create< XMLSchema >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createXMLSchema();
        }

        template< > inline AbstractContentElement_ptr create<
                AbstractContentElement >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createAbstractContentElement();
        }

        template< > inline ComplexContentType_ptr create< ComplexContentType >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createComplexContentType();
        }

        template< > inline AllContent_ptr create< AllContent >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createAllContent();
        }

        template< > inline SeqContent_ptr create< SeqContent >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createSeqContent();
        }

        template< > inline ChoiceContent_ptr create< ChoiceContent >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createChoiceContent();
        }

        template< > inline ContentItem_ptr create< ContentItem >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createContentItem();
        }

        template< > inline GroupContent_ptr create< GroupContent >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createGroupContent();
        }

        template< > inline ContentRestriction_ptr create< ContentRestriction >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createContentRestriction();
        }

        template< > inline SimpleContentType_ptr create< SimpleContentType >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createSimpleContentType();
        }

        template< > inline ExtendedDataElement_ptr create< ExtendedDataElement >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createExtendedDataElement();
        }

        template< > inline DataRelationship_ptr create< DataRelationship >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createDataRelationship();
        }

        template< > inline MixedContent_ptr create< MixedContent >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createMixedContent();
        }

        template< > inline ContentReference_ptr create< ContentReference >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createContentReference();
        }

        template< > inline DataAction_ptr create< DataAction >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createDataAction();
        }

        template< > inline ReadsColumnSet_ptr create< ReadsColumnSet >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createReadsColumnSet();
        }

        template< > inline ContentAttribute_ptr create< ContentAttribute >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createContentAttribute();
        }

        template< > inline TypedBy_ptr create< TypedBy >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createTypedBy();
        }

        template< > inline ReferenceTo_ptr create< ReferenceTo >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createReferenceTo();
        }

        template< > inline RestrictionOf_ptr create< RestrictionOf >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createRestrictionOf();
        }

        template< > inline ExtensionTo_ptr create< ExtensionTo >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createExtensionTo();
        }

        template< > inline DatatypeOf_ptr create< DatatypeOf >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createDatatypeOf();
        }

        template< > inline HasContent_ptr create< HasContent >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createHasContent();
        }

        template< > inline WritesColumnSet_ptr create< WritesColumnSet >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createWritesColumnSet();
        }

        template< > inline ProducesDataEvent_ptr create< ProducesDataEvent >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createProducesDataEvent();
        }

        template< > inline DataSegment_ptr create< DataSegment >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createDataSegment();
        }

        template< > inline ContentElement_ptr create< ContentElement >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createContentElement();
        }

        template< > inline ManagesData_ptr create< ManagesData >()
        {
            auto eFactory = DataPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< DataFactory* >(eFactory.get());
            return packageFactory->createManagesData();
        }

    } // data
} // kdm

#endif // _KDM_DATAFACTORY_HPP

