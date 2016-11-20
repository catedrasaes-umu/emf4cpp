// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/core.hpp
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

#ifndef KDM_CORE_HPP
#define KDM_CORE_HPP

#include "core_forward.hpp"
#include <ecorecpp/mapping.hpp>

// EPackage

// EClass
#include "core/Element.hpp"
#include "core/ModelElement.hpp"
#include "core/KDMEntity.hpp"
#include "core/KDMRelationship.hpp"
#include "core/AggregatedRelationship.hpp"

// Package & Factory
#include "kdm/core/CorePackage.hpp"
#include "kdm/core/CoreFactory.hpp"

#endif // KDM_CORE_HPP
