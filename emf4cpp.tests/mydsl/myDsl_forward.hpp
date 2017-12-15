// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * myDsl_forward.hpp
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

#ifndef _MYDSL_FORWARD_HPP
#define _MYDSL_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(myDsl_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace myDsl
{

// EDataType

// EClass

// Model
    class Model;
    using Model_ptr = boost::intrusive_ptr<Model>;

// Import
    class Import;
    using Import_ptr = boost::intrusive_ptr<Import>;

// Type
    class Type;
    using Type_ptr = boost::intrusive_ptr<Type>;

// SimpleType
    class SimpleType;
    using SimpleType_ptr = boost::intrusive_ptr<SimpleType>;

// Entity
    class Entity;
    using Entity_ptr = boost::intrusive_ptr<Entity>;

// Property
    class Property;
    using Property_ptr = boost::intrusive_ptr<Property>;

// EEnum

// Package & Factory
    class MyDslFactory;
    using MyDslFactory_ptr = boost::intrusive_ptr<MyDslFactory>;
    class MyDslPackage;
    using MyDslPackage_ptr = boost::intrusive_ptr<MyDslPackage>;

    template< typename T, typename S >
    inline boost::intrusive_ptr< T > instanceOf(const S& _s)
    {
        return boost::intrusive_ptr < T > (dynamic_cast< T* >(_s.get()));
    }

} // myDsl

#endif // _MYDSL_FORWARD_HPP

