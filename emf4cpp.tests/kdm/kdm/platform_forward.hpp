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
        using AbstractPlatformElement_ptr = ::ecore::Ptr<AbstractPlatformElement>;

// PlatformModel
        class PlatformModel;
        using PlatformModel_ptr = ::ecore::Ptr<PlatformModel>;

// AbstractPlatformRelationship
        class AbstractPlatformRelationship;
        using AbstractPlatformRelationship_ptr = ::ecore::Ptr<AbstractPlatformRelationship>;

// Requires
        class Requires;
        using Requires_ptr = ::ecore::Ptr<Requires>;

// ResourceType
        class ResourceType;
        using ResourceType_ptr = ::ecore::Ptr<ResourceType>;

// NamingResource
        class NamingResource;
        using NamingResource_ptr = ::ecore::Ptr<NamingResource>;

// MarshalledResource
        class MarshalledResource;
        using MarshalledResource_ptr = ::ecore::Ptr<MarshalledResource>;

// MessagingResource
        class MessagingResource;
        using MessagingResource_ptr = ::ecore::Ptr<MessagingResource>;

// FileResource
        class FileResource;
        using FileResource_ptr = ::ecore::Ptr<FileResource>;

// ExecutionResource
        class ExecutionResource;
        using ExecutionResource_ptr = ::ecore::Ptr<ExecutionResource>;

// PlatformAction
        class PlatformAction;
        using PlatformAction_ptr = ::ecore::Ptr<PlatformAction>;

// ExternalActor
        class ExternalActor;
        using ExternalActor_ptr = ::ecore::Ptr<ExternalActor>;

// DataManager
        class DataManager;
        using DataManager_ptr = ::ecore::Ptr<DataManager>;

// BindsTo
        class BindsTo;
        using BindsTo_ptr = ::ecore::Ptr<BindsTo>;

// PlatformElement
        class PlatformElement;
        using PlatformElement_ptr = ::ecore::Ptr<PlatformElement>;

// PlatformRelationship
        class PlatformRelationship;
        using PlatformRelationship_ptr = ::ecore::Ptr<PlatformRelationship>;

// PlatformEvent
        class PlatformEvent;
        using PlatformEvent_ptr = ::ecore::Ptr<PlatformEvent>;

// LockResource
        class LockResource;
        using LockResource_ptr = ::ecore::Ptr<LockResource>;

// DeployedSoftwareSystem
        class DeployedSoftwareSystem;
        using DeployedSoftwareSystem_ptr = ::ecore::Ptr<DeployedSoftwareSystem>;

// Machine
        class Machine;
        using Machine_ptr = ::ecore::Ptr<Machine>;

// DeployedComponent
        class DeployedComponent;
        using DeployedComponent_ptr = ::ecore::Ptr<DeployedComponent>;

// DeployedResource
        class DeployedResource;
        using DeployedResource_ptr = ::ecore::Ptr<DeployedResource>;

// Loads
        class Loads;
        using Loads_ptr = ::ecore::Ptr<Loads>;

// Spawns
        class Spawns;
        using Spawns_ptr = ::ecore::Ptr<Spawns>;

// RuntimeResource
        class RuntimeResource;
        using RuntimeResource_ptr = ::ecore::Ptr<RuntimeResource>;

// Thread
        class Thread;
        using Thread_ptr = ::ecore::Ptr<Thread>;

// Process
        class Process;
        using Process_ptr = ::ecore::Ptr<Process>;

// ReadsResource
        class ReadsResource;
        using ReadsResource_ptr = ::ecore::Ptr<ReadsResource>;

// WritesResource
        class WritesResource;
        using WritesResource_ptr = ::ecore::Ptr<WritesResource>;

// ManagesResource
        class ManagesResource;
        using ManagesResource_ptr = ::ecore::Ptr<ManagesResource>;

// DefinedBy
        class DefinedBy;
        using DefinedBy_ptr = ::ecore::Ptr<DefinedBy>;

// StreamResource
        class StreamResource;
        using StreamResource_ptr = ::ecore::Ptr<StreamResource>;

// EEnum

// Package & Factory
        class PlatformFactory;
        using PlatformFactory_ptr = ::ecore::Ptr<PlatformFactory>;
        class PlatformPackage;
        using PlatformPackage_ptr = ::ecore::Ptr<PlatformPackage>;

    } // platform
} // kdm

#endif // _KDM_PLATFORM_FORWARD_HPP

