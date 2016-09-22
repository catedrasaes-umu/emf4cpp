// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * json.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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

#ifndef JSON_HPP
#define JSON_HPP

#include "json_forward.hpp"
#include <ecorecpp/mapping.hpp>

// EPackage

// EClass
#include "json/ObjectValue.hpp"
#include "json/NVPair.hpp"
#include "json/Value.hpp"
#include "json/StringValue.hpp"
#include "json/NumberValue.hpp"
#include "json/BooleanValue.hpp"
#include "json/ArrayValue.hpp"
#include "json/NullValue.hpp"

// Package & Factory
#include "json/JsonPackage.hpp"
#include "json/JsonFactory.hpp"

#endif // JSON_HPP
