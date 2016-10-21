// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build.hpp
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

#ifndef KDM_BUILD_HPP
#define KDM_BUILD_HPP

#include "build_forward.hpp"
#include <ecorecpp/mapping.hpp>

// EPackage

// EClass
#include "build/AbstractBuildElement.hpp"
#include "build/BuildResource.hpp"
#include "build/BuildDescription.hpp"
#include "build/SymbolicLink.hpp"
#include "build/AbstractBuildRelationship.hpp"
#include "build/LinksTo.hpp"
#include "build/Consumes.hpp"
#include "build/BuildModel.hpp"
#include "build/BuildComponent.hpp"
#include "build/Supplier.hpp"
#include "build/Tool.hpp"
#include "build/BuildElement.hpp"
#include "build/BuildRelationship.hpp"
#include "build/SuppliedBy.hpp"
#include "build/Library.hpp"
#include "build/BuildStep.hpp"
#include "build/Produces.hpp"
#include "build/SupportedBy.hpp"
#include "build/BuildProduct.hpp"
#include "build/DescribedBy.hpp"

// Package & Factory
#include "kdm/build/BuildPackage.hpp"
#include "kdm/build/BuildFactory.hpp"

#endif // KDM_BUILD_HPP
