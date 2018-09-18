// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite_forward.hpp
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

#ifndef _EOPPOSITE_FORWARD_HPP
#define _EOPPOSITE_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(eopposite_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace eopposite
{

// EDataType

// EClass

// TopLevel
    class TopLevel;
    using TopLevel_ptr = ::ecore::Ptr<TopLevel>;

// NamedObject
    class NamedObject;
    using NamedObject_ptr = ::ecore::Ptr<NamedObject>;

// LeftHand
    class LeftHand;
    using LeftHand_ptr = ::ecore::Ptr<LeftHand>;

// RightHand
    class RightHand;
    using RightHand_ptr = ::ecore::Ptr<RightHand>;

// RightMultiple
    class RightMultiple;
    using RightMultiple_ptr = ::ecore::Ptr<RightMultiple>;

// EEnum

// Package & Factory
    class EoppositeFactory;
    using EoppositeFactory_ptr = ::ecore::Ptr<EoppositeFactory>;
    class EoppositePackage;
    using EoppositePackage_ptr = ::ecore::Ptr<EoppositePackage>;

} // eopposite

#endif // _EOPPOSITE_FORWARD_HPP

