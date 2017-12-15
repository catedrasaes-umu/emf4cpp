// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source.hpp
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

#ifndef KDM_SOURCE_HPP
#define KDM_SOURCE_HPP

#include "source_forward.hpp"
#include <boost/intrusive_ptr.hpp>
#include <ecorecpp/mapping.hpp>

// EPackage

// EClass
#include "source/SourceRef.hpp"
#include "source/SourceRegion.hpp"
#include "source/InventoryModel.hpp"
#include "source/AbstractInventoryElement.hpp"
#include "source/InventoryItem.hpp"
#include "source/SourceFile.hpp"
#include "source/Image.hpp"
#include "source/ResourceDescription.hpp"
#include "source/Configuration.hpp"
#include "source/InventoryContainer.hpp"
#include "source/Directory.hpp"
#include "source/Project.hpp"
#include "source/AbstractInventoryRelationship.hpp"
#include "source/BinaryFile.hpp"
#include "source/ExecutableFile.hpp"
#include "source/DependsOn.hpp"
#include "source/InventoryElement.hpp"
#include "source/InventoryRelationship.hpp"

// Package & Factory
#include "kdm/source/SourcePackage.hpp"
#include "kdm/source/SourceFactory.hpp"

#endif // KDM_SOURCE_HPP
