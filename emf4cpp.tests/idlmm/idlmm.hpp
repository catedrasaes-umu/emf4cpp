// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm.hpp
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

#ifndef IDLMM_HPP
#define IDLMM_HPP

#include "idlmm_forward.hpp"
#include <ecorecpp/mapping.hpp>

// EPackage

// EClass
#include "idlmm/Container.hpp"
#include "idlmm/Contained.hpp"
#include "idlmm/InterfaceDef.hpp"
#include "idlmm/ModuleDef.hpp"
#include "idlmm/IDLType.hpp"
#include "idlmm/OperationDef.hpp"
#include "idlmm/AttributeDef.hpp"
#include "idlmm/ConstantDef.hpp"
#include "idlmm/Typed.hpp"
#include "idlmm/ParameterDef.hpp"
#include "idlmm/PrimitiveDef.hpp"
#include "idlmm/ExceptionDef.hpp"
#include "idlmm/Field.hpp"
#include "idlmm/FixedDef.hpp"
#include "idlmm/WstringDef.hpp"
#include "idlmm/StringDef.hpp"
#include "idlmm/AliasDef.hpp"
#include "idlmm/ArrayDef.hpp"
#include "idlmm/SequenceDef.hpp"
#include "idlmm/UnionField.hpp"
#include "idlmm/TypedefDef.hpp"
#include "idlmm/UnionDef.hpp"
#include "idlmm/EnumDef.hpp"
#include "idlmm/StructDef.hpp"
#include "idlmm/TranslationUnit.hpp"
#include "idlmm/Include.hpp"

// Package & Factory
#include "idlmm/IdlmmPackage.hpp"
#include "idlmm/IdlmmFactory.hpp"

#endif // IDLMM_HPP
