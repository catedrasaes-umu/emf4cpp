// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/core_forward.hpp
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

#ifndef _KDM_CORE_FORWARD_HPP
#define _KDM_CORE_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(kdm_core_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace kdm
{
    namespace core
    {

// EDataType
        /*PROTECTED REGION ID(kdm_core_String) ENABLED START*/
        typedef std::string String;
        /*PROTECTED REGION END*/
        /*PROTECTED REGION ID(kdm_core_Integer) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
        typedef int Integer;
        /*PROTECTED REGION END*/
        /*PROTECTED REGION ID(kdm_core_Boolean) ENABLED START*/
        typedef bool Boolean;
        /*PROTECTED REGION END*/

// EClass
// Element
        class Element;
        using Element_ptr = ::ecore::Ptr<Element>;

// ModelElement
        class ModelElement;
        using ModelElement_ptr = ::ecore::Ptr<ModelElement>;

// KDMEntity
        class KDMEntity;
        using KDMEntity_ptr = ::ecore::Ptr<KDMEntity>;

// KDMRelationship
        class KDMRelationship;
        using KDMRelationship_ptr = ::ecore::Ptr<KDMRelationship>;

// AggregatedRelationship
        class AggregatedRelationship;
        using AggregatedRelationship_ptr = ::ecore::Ptr<AggregatedRelationship>;

// EEnum

// Package & Factory
        class CoreFactory;
        using CoreFactory_ptr = ::ecore::Ptr<CoreFactory>;
        class CorePackage;
        using CorePackage_ptr = ::ecore::Ptr<CorePackage>;

    } // core
} // kdm

#endif // _KDM_CORE_FORWARD_HPP

