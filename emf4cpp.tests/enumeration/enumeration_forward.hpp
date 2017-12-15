// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * enumeration_forward.hpp
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

#ifndef _ENUMERATION_FORWARD_HPP
#define _ENUMERATION_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(enumeration_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace enumeration
{

// EDataType

// EClass

// Bird
    class Bird;
    using Bird_ptr = boost::intrusive_ptr<Bird>;

// EEnum

// BirdType
    enum class BirdType
    ;

// Package & Factory
    class EnumerationFactory;
    using EnumerationFactory_ptr = boost::intrusive_ptr<EnumerationFactory>;
    class EnumerationPackage;
    using EnumerationPackage_ptr = boost::intrusive_ptr<EnumerationPackage>;

    template< typename T, typename S >
    inline boost::intrusive_ptr< T > instanceOf(const S& _s)
    {
        return boost::intrusive_ptr < T > (dynamic_cast< T* >(_s.get()));
    }

} // enumeration

#endif // _ENUMERATION_FORWARD_HPP

