// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * json_forward.hpp
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

#ifndef _JSON_FORWARD_HPP
#define _JSON_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(json_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace json
{

// EDataType

// EClass

// ObjectValue
    class ObjectValue;
    using ObjectValue_ptr = ::ecore::Ptr<ObjectValue>;

// NVPair
    class NVPair;
    using NVPair_ptr = ::ecore::Ptr<NVPair>;

// Value
    class Value;
    using Value_ptr = ::ecore::Ptr<Value>;

// StringValue
    class StringValue;
    using StringValue_ptr = ::ecore::Ptr<StringValue>;

// NumberValue
    class NumberValue;
    using NumberValue_ptr = ::ecore::Ptr<NumberValue>;

// BooleanValue
    class BooleanValue;
    using BooleanValue_ptr = ::ecore::Ptr<BooleanValue>;

// ArrayValue
    class ArrayValue;
    using ArrayValue_ptr = ::ecore::Ptr<ArrayValue>;

// NullValue
    class NullValue;
    using NullValue_ptr = ::ecore::Ptr<NullValue>;

// EEnum

// Package & Factory
    class JsonFactory;
    using JsonFactory_ptr = ::ecore::Ptr<JsonFactory>;
    class JsonPackage;
    using JsonPackage_ptr = ::ecore::Ptr<JsonPackage>;

} // json

#endif // _JSON_FORWARD_HPP

