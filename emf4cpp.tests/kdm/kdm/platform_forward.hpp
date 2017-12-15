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
        using AbstractPlatformElement_ptr = boost::intrusive_ptr<AbstractPlatformElement>;

// PlatformModel
        class PlatformModel;
        using PlatformModel_ptr = boost::intrusive_ptr<PlatformModel>;

// AbstractPlatformRelationship
        class AbstractPlatformRelationship;
        using AbstractPlatformRelationship_ptr = boost::intrusive_ptr<AbstractPlatformRelationship>;

// Requires
        class Requires;
        using Requires_ptr = boost::intrusive_ptr<Requires>;

// ResourceType
        class ResourceType;
        using ResourceType_ptr = boost::intrusive_ptr<ResourceType>;

// NamingResource
        class NamingResource;
        using NamingResource_ptr = boost::intrusive_ptr<NamingResource>;

// MarshalledResource
        class MarshalledResource;
        using MarshalledResource_ptr = boost::intrusive_ptr<MarshalledResource>;

// MessagingResource
        class MessagingResource;
        using MessagingResource_ptr = boost::intrusive_ptr<MessagingResource>;

// FileResource
        class FileResource;
        using FileResource_ptr = boost::intrusive_ptr<FileResource>;

// ExecutionResource
        class ExecutionResource;
        using ExecutionResource_ptr = boost::intrusive_ptr<ExecutionResource>;

// PlatformAction
        class PlatformAction;
        using PlatformAction_ptr = boost::intrusive_ptr<PlatformAction>;

// ExternalActor
        class ExternalActor;
        using ExternalActor_ptr = boost::intrusive_ptr<ExternalActor>;

// DataManager
        class DataManager;
        using DataManager_ptr = boost::intrusive_ptr<DataManager>;

// BindsTo
        class BindsTo;
        using BindsTo_ptr = boost::intrusive_ptr<BindsTo>;

// PlatformElement
        class PlatformElement;
        using PlatformElement_ptr = boost::intrusive_ptr<PlatformElement>;

// PlatformRelationship
        class PlatformRelationship;
        using PlatformRelationship_ptr = boost::intrusive_ptr<PlatformRelationship>;

// PlatformEvent
        class PlatformEvent;
        using PlatformEvent_ptr = boost::intrusive_ptr<PlatformEvent>;

// LockResource
        class LockResource;
        using LockResource_ptr = boost::intrusive_ptr<LockResource>;

// DeployedSoftwareSystem
        class DeployedSoftwareSystem;
        using DeployedSoftwareSystem_ptr = boost::intrusive_ptr<DeployedSoftwareSystem>;

// Machine
        class Machine;
        using Machine_ptr = boost::intrusive_ptr<Machine>;

// DeployedComponent
        class DeployedComponent;
        using DeployedComponent_ptr = boost::intrusive_ptr<DeployedComponent>;

// DeployedResource
        class DeployedResource;
        using DeployedResource_ptr = boost::intrusive_ptr<DeployedResource>;

// Loads
        class Loads;
        using Loads_ptr = boost::intrusive_ptr<Loads>;

// Spawns
        class Spawns;
        using Spawns_ptr = boost::intrusive_ptr<Spawns>;

// RuntimeResource
        class RuntimeResource;
        using RuntimeResource_ptr = boost::intrusive_ptr<RuntimeResource>;

// Thread
        class Thread;
        using Thread_ptr = boost::intrusive_ptr<Thread>;

// Process
        class Process;
        using Process_ptr = boost::intrusive_ptr<Process>;

// ReadsResource
        class ReadsResource;
        using ReadsResource_ptr = boost::intrusive_ptr<ReadsResource>;

// WritesResource
        class WritesResource;
        using WritesResource_ptr = boost::intrusive_ptr<WritesResource>;

// ManagesResource
        class ManagesResource;
        using ManagesResource_ptr = boost::intrusive_ptr<ManagesResource>;

// DefinedBy
        class DefinedBy;
        using DefinedBy_ptr = boost::intrusive_ptr<DefinedBy>;

// StreamResource
        class StreamResource;
        using StreamResource_ptr = boost::intrusive_ptr<StreamResource>;

// EEnum

// Package & Factory
        class PlatformFactory;
        using PlatformFactory_ptr = boost::intrusive_ptr<PlatformFactory>;
        class PlatformPackage;
        using PlatformPackage_ptr = boost::intrusive_ptr<PlatformPackage>;

        template< typename T, typename S >
        inline boost::intrusive_ptr< T > instanceOf(const S& _s)
        {
            return boost::intrusive_ptr < T > (dynamic_cast< T* >(_s.get()));
        }

    } // platform
} // kdm

#endif // _KDM_PLATFORM_FORWARD_HPP

