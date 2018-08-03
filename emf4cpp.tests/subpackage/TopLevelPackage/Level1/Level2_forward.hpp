// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/Level1/Level2_forward.hpp
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

#ifndef _TOPLEVELPACKAGE_LEVEL1_LEVEL2_FORWARD_HPP
#define _TOPLEVELPACKAGE_LEVEL1_LEVEL2_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(TopLevelPackage_Level1_Level2_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage
#include <TopLevelPackage/Level1/Level2/Level3_forward.hpp>

#include <ecore_forward.hpp> // for EDataTypes

namespace TopLevelPackage
{
    namespace Level1
    {
        namespace Level2
        {

// EDataType

// EClass

// Level2Class
            class Level2Class;
            using Level2Class_ptr = ::ecore::Ptr<Level2Class>;

// EEnum

// Package & Factory
            class Level2Factory;
            using Level2Factory_ptr = ::ecore::Ptr<Level2Factory>;
            class Level2Package;
            using Level2Package_ptr = ::ecore::Ptr<Level2Package>;

        } // Level2
    } // Level1
} // TopLevelPackage

#endif // _TOPLEVELPACKAGE_LEVEL1_LEVEL2_FORWARD_HPP

