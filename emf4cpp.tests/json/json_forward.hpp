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
    typedef ObjectValue* ObjectValue_ptr;

// NVPair
    class NVPair;
    typedef NVPair* NVPair_ptr;

// Value
    class Value;
    typedef Value* Value_ptr;

// StringValue
    class StringValue;
    typedef StringValue* StringValue_ptr;

// NumberValue
    class NumberValue;
    typedef NumberValue* NumberValue_ptr;

// BooleanValue
    class BooleanValue;
    typedef BooleanValue* BooleanValue_ptr;

// ArrayValue
    class ArrayValue;
    typedef ArrayValue* ArrayValue_ptr;

// NullValue
    class NullValue;
    typedef NullValue* NullValue_ptr;

// EEnum

// Package & Factory
    class JsonFactory;
    typedef JsonFactory * JsonFactory_ptr;
    class JsonPackage;
    typedef JsonPackage * JsonPackage_ptr;

    template< typename T, typename S >
    inline T* instanceOf(S* _s)
    {
        return dynamic_cast< T* >(_s);
    }

} // json

#endif // _JSON_FORWARD_HPP

