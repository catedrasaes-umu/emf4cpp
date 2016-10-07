// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/SourceFactory.hpp
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

#ifndef _KDM_SOURCEFACTORY_HPP
#define _KDM_SOURCEFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/source.hpp>

namespace kdm
{
    namespace source
    {

        class SourceFactory: public virtual ::ecore::EFactory
        {
        public:

            static SourceFactory_ptr _instance();

            virtual SourceRef_ptr createSourceRef();
            virtual SourceRegion_ptr createSourceRegion();
            virtual InventoryModel_ptr createInventoryModel();
            virtual AbstractInventoryElement_ptr createAbstractInventoryElement();
            virtual InventoryItem_ptr createInventoryItem();
            virtual SourceFile_ptr createSourceFile();
            virtual Image_ptr createImage();
            virtual ResourceDescription_ptr createResourceDescription();
            virtual Configuration_ptr createConfiguration();
            virtual InventoryContainer_ptr createInventoryContainer();
            virtual Directory_ptr createDirectory();
            virtual Project_ptr createProject();
            virtual AbstractInventoryRelationship_ptr createAbstractInventoryRelationship();
            virtual BinaryFile_ptr createBinaryFile();
            virtual ExecutableFile_ptr createExecutableFile();
            virtual DependsOn_ptr createDependsOn();
            virtual InventoryElement_ptr createInventoryElement();
            virtual InventoryRelationship_ptr createInventoryRelationship();

            virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EJavaObject const& _instanceValue);

        protected:

            static std::unique_ptr< SourceFactory > s_instance;

            SourceFactory();

        };

        /** An object creation helper
         *
         * Usage (add namespaces as required):
         *   auto p = create<MyClass>();
         *
         */
        template< class T > inline T* create()
        {
            return (T*) nullptr;
        }

        template< > inline SourceRef_ptr create< SourceRef >()
        {
            auto eFactory = SourcePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< SourceFactory* >(eFactory);
            return packageFactory->createSourceRef();
        }
        template< > inline SourceRegion_ptr create< SourceRegion >()
        {
            auto eFactory = SourcePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< SourceFactory* >(eFactory);
            return packageFactory->createSourceRegion();
        }
        template< > inline InventoryModel_ptr create< InventoryModel >()
        {
            auto eFactory = SourcePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< SourceFactory* >(eFactory);
            return packageFactory->createInventoryModel();
        }
        template< > inline AbstractInventoryElement_ptr create<
                AbstractInventoryElement >()
        {
            auto eFactory = SourcePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< SourceFactory* >(eFactory);
            return packageFactory->createAbstractInventoryElement();
        }
        template< > inline InventoryItem_ptr create< InventoryItem >()
        {
            auto eFactory = SourcePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< SourceFactory* >(eFactory);
            return packageFactory->createInventoryItem();
        }
        template< > inline SourceFile_ptr create< SourceFile >()
        {
            auto eFactory = SourcePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< SourceFactory* >(eFactory);
            return packageFactory->createSourceFile();
        }
        template< > inline Image_ptr create< Image >()
        {
            auto eFactory = SourcePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< SourceFactory* >(eFactory);
            return packageFactory->createImage();
        }
        template< > inline ResourceDescription_ptr create< ResourceDescription >()
        {
            auto eFactory = SourcePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< SourceFactory* >(eFactory);
            return packageFactory->createResourceDescription();
        }
        template< > inline Configuration_ptr create< Configuration >()
        {
            auto eFactory = SourcePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< SourceFactory* >(eFactory);
            return packageFactory->createConfiguration();
        }
        template< > inline InventoryContainer_ptr create< InventoryContainer >()
        {
            auto eFactory = SourcePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< SourceFactory* >(eFactory);
            return packageFactory->createInventoryContainer();
        }
        template< > inline Directory_ptr create< Directory >()
        {
            auto eFactory = SourcePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< SourceFactory* >(eFactory);
            return packageFactory->createDirectory();
        }
        template< > inline Project_ptr create< Project >()
        {
            auto eFactory = SourcePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< SourceFactory* >(eFactory);
            return packageFactory->createProject();
        }
        template< > inline AbstractInventoryRelationship_ptr create<
                AbstractInventoryRelationship >()
        {
            auto eFactory = SourcePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< SourceFactory* >(eFactory);
            return packageFactory->createAbstractInventoryRelationship();
        }
        template< > inline BinaryFile_ptr create< BinaryFile >()
        {
            auto eFactory = SourcePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< SourceFactory* >(eFactory);
            return packageFactory->createBinaryFile();
        }
        template< > inline ExecutableFile_ptr create< ExecutableFile >()
        {
            auto eFactory = SourcePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< SourceFactory* >(eFactory);
            return packageFactory->createExecutableFile();
        }
        template< > inline DependsOn_ptr create< DependsOn >()
        {
            auto eFactory = SourcePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< SourceFactory* >(eFactory);
            return packageFactory->createDependsOn();
        }
        template< > inline InventoryElement_ptr create< InventoryElement >()
        {
            auto eFactory = SourcePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< SourceFactory* >(eFactory);
            return packageFactory->createInventoryElement();
        }
        template< > inline InventoryRelationship_ptr create<
                InventoryRelationship >()
        {
            auto eFactory = SourcePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< SourceFactory* >(eFactory);
            return packageFactory->createInventoryRelationship();
        }

    } // source
} // kdm

#endif // _KDM_SOURCEFACTORY_HPP

