// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/platform/PlatformFactory.hpp
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

#ifndef _KDM_PLATFORMFACTORY_HPP
#define _KDM_PLATFORMFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/platform.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace platform
    {

        class EXPORT_KDM_DLL PlatformFactory : public virtual ::ecore::EFactory
        {
        public:

            static PlatformFactory_ptr _instance();

            virtual AbstractPlatformElement_ptr createAbstractPlatformElement();
            virtual PlatformModel_ptr createPlatformModel();
            virtual AbstractPlatformRelationship_ptr createAbstractPlatformRelationship();
            virtual Requires_ptr createRequires();
            virtual ResourceType_ptr createResourceType();
            virtual NamingResource_ptr createNamingResource();
            virtual MarshalledResource_ptr createMarshalledResource();
            virtual MessagingResource_ptr createMessagingResource();
            virtual FileResource_ptr createFileResource();
            virtual ExecutionResource_ptr createExecutionResource();
            virtual PlatformAction_ptr createPlatformAction();
            virtual ExternalActor_ptr createExternalActor();
            virtual DataManager_ptr createDataManager();
            virtual BindsTo_ptr createBindsTo();
            virtual PlatformElement_ptr createPlatformElement();
            virtual PlatformRelationship_ptr createPlatformRelationship();
            virtual PlatformEvent_ptr createPlatformEvent();
            virtual LockResource_ptr createLockResource();
            virtual DeployedSoftwareSystem_ptr createDeployedSoftwareSystem();
            virtual Machine_ptr createMachine();
            virtual DeployedComponent_ptr createDeployedComponent();
            virtual DeployedResource_ptr createDeployedResource();
            virtual Loads_ptr createLoads();
            virtual Spawns_ptr createSpawns();
            virtual RuntimeResource_ptr createRuntimeResource();
            virtual Thread_ptr createThread();
            virtual Process_ptr createProcess();
            virtual ReadsResource_ptr createReadsResource();
            virtual WritesResource_ptr createWritesResource();
            virtual ManagesResource_ptr createManagesResource();
            virtual DefinedBy_ptr createDefinedBy();
            virtual StreamResource_ptr createStreamResource();

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static boost::intrusive_ptr< PlatformFactory > s_holder;

            PlatformFactory();

        };

        /** An object creation helper
         *
         * Usage (add namespaces as required):
         *   auto p = create<MyClass>();
         *
         */
        template< class T > inline boost::intrusive_ptr< T > create()
        {
            return boost::intrusive_ptr< T >();
        }

        template< > inline AbstractPlatformElement_ptr create<
                AbstractPlatformElement >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createAbstractPlatformElement();
        }

        template< > inline PlatformModel_ptr create< PlatformModel >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createPlatformModel();
        }

        template< > inline AbstractPlatformRelationship_ptr create<
                AbstractPlatformRelationship >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createAbstractPlatformRelationship();
        }

        template< > inline Requires_ptr create< Requires >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createRequires();
        }

        template< > inline ResourceType_ptr create< ResourceType >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createResourceType();
        }

        template< > inline NamingResource_ptr create< NamingResource >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createNamingResource();
        }

        template< > inline MarshalledResource_ptr create< MarshalledResource >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createMarshalledResource();
        }

        template< > inline MessagingResource_ptr create< MessagingResource >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createMessagingResource();
        }

        template< > inline FileResource_ptr create< FileResource >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createFileResource();
        }

        template< > inline ExecutionResource_ptr create< ExecutionResource >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createExecutionResource();
        }

        template< > inline PlatformAction_ptr create< PlatformAction >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createPlatformAction();
        }

        template< > inline ExternalActor_ptr create< ExternalActor >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createExternalActor();
        }

        template< > inline DataManager_ptr create< DataManager >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createDataManager();
        }

        template< > inline BindsTo_ptr create< BindsTo >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createBindsTo();
        }

        template< > inline PlatformElement_ptr create< PlatformElement >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createPlatformElement();
        }

        template< > inline PlatformRelationship_ptr create< PlatformRelationship >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createPlatformRelationship();
        }

        template< > inline PlatformEvent_ptr create< PlatformEvent >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createPlatformEvent();
        }

        template< > inline LockResource_ptr create< LockResource >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createLockResource();
        }

        template< > inline DeployedSoftwareSystem_ptr create<
                DeployedSoftwareSystem >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createDeployedSoftwareSystem();
        }

        template< > inline Machine_ptr create< Machine >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createMachine();
        }

        template< > inline DeployedComponent_ptr create< DeployedComponent >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createDeployedComponent();
        }

        template< > inline DeployedResource_ptr create< DeployedResource >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createDeployedResource();
        }

        template< > inline Loads_ptr create< Loads >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createLoads();
        }

        template< > inline Spawns_ptr create< Spawns >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createSpawns();
        }

        template< > inline RuntimeResource_ptr create< RuntimeResource >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createRuntimeResource();
        }

        template< > inline Thread_ptr create< Thread >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createThread();
        }

        template< > inline Process_ptr create< Process >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createProcess();
        }

        template< > inline ReadsResource_ptr create< ReadsResource >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createReadsResource();
        }

        template< > inline WritesResource_ptr create< WritesResource >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createWritesResource();
        }

        template< > inline ManagesResource_ptr create< ManagesResource >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createManagesResource();
        }

        template< > inline DefinedBy_ptr create< DefinedBy >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createDefinedBy();
        }

        template< > inline StreamResource_ptr create< StreamResource >()
        {
            auto eFactory = PlatformPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< PlatformFactory* >(eFactory.get());
            return packageFactory->createStreamResource();
        }

    } // platform
} // kdm

#endif // _KDM_PLATFORMFACTORY_HPP

