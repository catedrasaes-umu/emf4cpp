// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/structure.hpp
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

#ifndef KDM_STRUCTURE_HPP
#define KDM_STRUCTURE_HPP

#include "structure_forward.hpp"
#include <boost/intrusive_ptr.hpp>
#include <ecorecpp/mapping.hpp>

// EPackage

// EClass
#include "structure/AbstractStructureElement.hpp"
#include "structure/Subsystem.hpp"
#include "structure/Layer.hpp"
#include "structure/StructureModel.hpp"
#include "structure/Component.hpp"
#include "structure/SoftwareSystem.hpp"
#include "structure/AbstractStructureRelationship.hpp"
#include "structure/StructureRelationship.hpp"
#include "structure/ArchitectureView.hpp"
#include "structure/StructureElement.hpp"

// Package & Factory
#include "kdm/structure/StructurePackage.hpp"
#include "kdm/structure/StructureFactory.hpp"

#endif // KDM_STRUCTURE_HPP
