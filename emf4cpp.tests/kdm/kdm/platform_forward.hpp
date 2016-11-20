// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/platform_forward.hpp
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

#ifndef _KDM_PLATFORM_FORWARD_HPP
#define _KDM_PLATFORM_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(kdm_platform_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace kdm
{
    namespace platform
    {

// EDataType

// EClass

// AbstractPlatformElement
        class AbstractPlatformElement;
        typedef AbstractPlatformElement* AbstractPlatformElement_ptr;

// PlatformModel
        class PlatformModel;
        typedef PlatformModel* PlatformModel_ptr;

// AbstractPlatformRelationship
        class AbstractPlatformRelationship;
        typedef AbstractPlatformRelationship* AbstractPlatformRelationship_ptr;

// Requires
        class Requires;
        typedef Requires* Requires_ptr;

// ResourceType
        class ResourceType;
        typedef ResourceType* ResourceType_ptr;

// NamingResource
        class NamingResource;
        typedef NamingResource* NamingResource_ptr;

// MarshalledResource
        class MarshalledResource;
        typedef MarshalledResource* MarshalledResource_ptr;

// MessagingResource
        class MessagingResource;
        typedef MessagingResource* MessagingResource_ptr;

// FileResource
        class FileResource;
        typedef FileResource* FileResource_ptr;

// ExecutionResource
        class ExecutionResource;
        typedef ExecutionResource* ExecutionResource_ptr;

// PlatformAction
        class PlatformAction;
        typedef PlatformAction* PlatformAction_ptr;

// ExternalActor
        class ExternalActor;
        typedef ExternalActor* ExternalActor_ptr;

// DataManager
        class DataManager;
        typedef DataManager* DataManager_ptr;

// BindsTo
        class BindsTo;
        typedef BindsTo* BindsTo_ptr;

// PlatformElement
        class PlatformElement;
        typedef PlatformElement* PlatformElement_ptr;

// PlatformRelationship
        class PlatformRelationship;
        typedef PlatformRelationship* PlatformRelationship_ptr;

// PlatformEvent
        class PlatformEvent;
        typedef PlatformEvent* PlatformEvent_ptr;

// LockResource
        class LockResource;
        typedef LockResource* LockResource_ptr;

// DeployedSoftwareSystem
        class DeployedSoftwareSystem;
        typedef DeployedSoftwareSystem* DeployedSoftwareSystem_ptr;

// Machine
        class Machine;
        typedef Machine* Machine_ptr;

// DeployedComponent
        class DeployedComponent;
        typedef DeployedComponent* DeployedComponent_ptr;

// DeployedResource
        class DeployedResource;
        typedef DeployedResource* DeployedResource_ptr;

// Loads
        class Loads;
        typedef Loads* Loads_ptr;

// Spawns
        class Spawns;
        typedef Spawns* Spawns_ptr;

// RuntimeResource
        class RuntimeResource;
        typedef RuntimeResource* RuntimeResource_ptr;

// Thread
        class Thread;
        typedef Thread* Thread_ptr;

// Process
        class Process;
        typedef Process* Process_ptr;

// ReadsResource
        class ReadsResource;
        typedef ReadsResource* ReadsResource_ptr;

// WritesResource
        class WritesResource;
        typedef WritesResource* WritesResource_ptr;

// ManagesResource
        class ManagesResource;
        typedef ManagesResource* ManagesResource_ptr;

// DefinedBy
        class DefinedBy;
        typedef DefinedBy* DefinedBy_ptr;

// StreamResource
        class StreamResource;
        typedef StreamResource* StreamResource_ptr;

// EEnum

// Package & Factory
        class PlatformFactory;
        typedef PlatformFactory * PlatformFactory_ptr;
        class PlatformPackage;
        typedef PlatformPackage * PlatformPackage_ptr;

        template< typename T, typename S >
        inline T* instanceOf(S* _s)
        {
            return dynamic_cast< T* >(_s);
        }

    } // platform
} // kdm

#endif // _KDM_PLATFORM_FORWARD_HPP

