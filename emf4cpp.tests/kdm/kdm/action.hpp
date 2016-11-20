// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/action.hpp
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

#ifndef KDM_ACTION_HPP
#define KDM_ACTION_HPP

#include "action_forward.hpp"
#include <ecorecpp/mapping.hpp>

// EPackage

// EClass
#include "action/ActionElement.hpp"
#include "action/AbstractActionRelationship.hpp"
#include "action/ControlFlow.hpp"
#include "action/Calls.hpp"
#include "action/Creates.hpp"
#include "action/Reads.hpp"
#include "action/Writes.hpp"
#include "action/CompliesTo.hpp"
#include "action/Flow.hpp"
#include "action/TrueFlow.hpp"
#include "action/FalseFlow.hpp"
#include "action/GuardedFlow.hpp"
#include "action/UsesType.hpp"
#include "action/Addresses.hpp"
#include "action/ActionRelationship.hpp"
#include "action/Throws.hpp"
#include "action/Dispatches.hpp"
#include "action/EntryFlow.hpp"
#include "action/BlockUnit.hpp"
#include "action/ExceptionUnit.hpp"
#include "action/TryUnit.hpp"
#include "action/FinallyUnit.hpp"
#include "action/CatchUnit.hpp"
#include "action/ExitFlow.hpp"
#include "action/ExceptionFlow.hpp"

// Package & Factory
#include "kdm/action/ActionPackage.hpp"
#include "kdm/action/ActionFactory.hpp"

#endif // KDM_ACTION_HPP
