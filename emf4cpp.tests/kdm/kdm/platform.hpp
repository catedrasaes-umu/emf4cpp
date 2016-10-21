// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/platform.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON Gmbh 2016 <soeren.henning@inchron.com>
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

#ifndef KDM_PLATFORM_HPP
#define KDM_PLATFORM_HPP

#include "platform_forward.hpp"
#include <ecorecpp/mapping.hpp>

// EPackage

// EClass
#include "platform/AbstractPlatformElement.hpp"
#include "platform/PlatformModel.hpp"
#include "platform/AbstractPlatformRelationship.hpp"
#include "platform/Requires.hpp"
#include "platform/ResourceType.hpp"
#include "platform/NamingResource.hpp"
#include "platform/MarshalledResource.hpp"
#include "platform/MessagingResource.hpp"
#include "platform/FileResource.hpp"
#include "platform/ExecutionResource.hpp"
#include "platform/PlatformAction.hpp"
#include "platform/ExternalActor.hpp"
#include "platform/DataManager.hpp"
#include "platform/BindsTo.hpp"
#include "platform/PlatformElement.hpp"
#include "platform/PlatformRelationship.hpp"
#include "platform/PlatformEvent.hpp"
#include "platform/LockResource.hpp"
#include "platform/DeployedSoftwareSystem.hpp"
#include "platform/Machine.hpp"
#include "platform/DeployedComponent.hpp"
#include "platform/DeployedResource.hpp"
#include "platform/Loads.hpp"
#include "platform/Spawns.hpp"
#include "platform/RuntimeResource.hpp"
#include "platform/Thread.hpp"
#include "platform/Process.hpp"
#include "platform/ReadsResource.hpp"
#include "platform/WritesResource.hpp"
#include "platform/ManagesResource.hpp"
#include "platform/DefinedBy.hpp"
#include "platform/StreamResource.hpp"

// Package & Factory
#include "kdm/platform/PlatformPackage.hpp"
#include "kdm/platform/PlatformFactory.hpp"

#endif // KDM_PLATFORM_HPP
