// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/platform/PlatformFactory.hpp
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

#ifndef _KDM_PLATFORMFACTORY_HPP
#define _KDM_PLATFORMFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/platform.hpp>

namespace kdm
{
    namespace platform
    {

        class PlatformFactory: public virtual ::ecore::EFactory
        {
        public:

            static PlatformFactory_ptr _instance();

            virtual AbstractPlatformElement_ptr createAbstractPlatformElement();
            virtual PlatformModel_ptr createPlatformModel();
            virtual AbstractPlatformRelationship_ptr
                    createAbstractPlatformRelationship();
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

            virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EJavaObject const& _instanceValue);

        protected:

            static std::auto_ptr< PlatformFactory > s_instance;

            PlatformFactory();

        };

    } // platform
} // kdm


#endif // _KDM_PLATFORMFACTORY_HPP
