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
    using ObjectValue_ptr = boost::intrusive_ptr<ObjectValue>;

// NVPair
    class NVPair;
    using NVPair_ptr = boost::intrusive_ptr<NVPair>;

// Value
    class Value;
    using Value_ptr = boost::intrusive_ptr<Value>;

// StringValue
    class StringValue;
    using StringValue_ptr = boost::intrusive_ptr<StringValue>;

// NumberValue
    class NumberValue;
    using NumberValue_ptr = boost::intrusive_ptr<NumberValue>;

// BooleanValue
    class BooleanValue;
    using BooleanValue_ptr = boost::intrusive_ptr<BooleanValue>;

// ArrayValue
    class ArrayValue;
    using ArrayValue_ptr = boost::intrusive_ptr<ArrayValue>;

// NullValue
    class NullValue;
    using NullValue_ptr = boost::intrusive_ptr<NullValue>;

// EEnum

// Package & Factory
    class JsonFactory;
    using JsonFactory_ptr = boost::intrusive_ptr<JsonFactory>;
    class JsonPackage;
    using JsonPackage_ptr = boost::intrusive_ptr<JsonPackage>;

    template< typename T, typename S >
    inline boost::intrusive_ptr< T > instanceOf(const S& _s)
    {
        return boost::intrusive_ptr < T > (dynamic_cast< T* >(_s.get()));
    }

} // json

#endif // _JSON_FORWARD_HPP

