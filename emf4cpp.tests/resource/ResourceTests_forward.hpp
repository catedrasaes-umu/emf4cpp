// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ResourceTests_forward.hpp
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

#ifndef _RESOURCETESTS_FORWARD_HPP
#define _RESOURCETESTS_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(ResourceTests_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace ResourceTests
{

// EDataType

// EClass

// Root
    class Root;
    using Root_ptr = ::ecore::Ptr<Root>;

// ReferenceTarget
    class ReferenceTarget;
    using ReferenceTarget_ptr = ::ecore::Ptr<ReferenceTarget>;

// Referrer
    class Referrer;
    using Referrer_ptr = ::ecore::Ptr<Referrer>;

// ETypes
    class ETypes;
    using ETypes_ptr = ::ecore::Ptr<ETypes>;

// EEnum

// Package & Factory
    class ResourceTestsFactory;
    using ResourceTestsFactory_ptr = ::ecore::Ptr<ResourceTestsFactory>;
    class ResourceTestsPackage;
    using ResourceTestsPackage_ptr = ::ecore::Ptr<ResourceTestsPackage>;

} // ResourceTests

#endif // _RESOURCETESTS_FORWARD_HPP

