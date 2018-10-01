// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build_forward.hpp
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

#ifndef _KDM_BUILD_FORWARD_HPP
#define _KDM_BUILD_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(kdm_build_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace kdm
{
    namespace build
    {

// EDataType

// EClass

// AbstractBuildElement
        class AbstractBuildElement;
        using AbstractBuildElement_ptr = ::ecore::Ptr<AbstractBuildElement>;

// BuildResource
        class BuildResource;
        using BuildResource_ptr = ::ecore::Ptr<BuildResource>;

// BuildDescription
        class BuildDescription;
        using BuildDescription_ptr = ::ecore::Ptr<BuildDescription>;

// SymbolicLink
        class SymbolicLink;
        using SymbolicLink_ptr = ::ecore::Ptr<SymbolicLink>;

// AbstractBuildRelationship
        class AbstractBuildRelationship;
        using AbstractBuildRelationship_ptr = ::ecore::Ptr<AbstractBuildRelationship>;

// LinksTo
        class LinksTo;
        using LinksTo_ptr = ::ecore::Ptr<LinksTo>;

// Consumes
        class Consumes;
        using Consumes_ptr = ::ecore::Ptr<Consumes>;

// BuildModel
        class BuildModel;
        using BuildModel_ptr = ::ecore::Ptr<BuildModel>;

// BuildComponent
        class BuildComponent;
        using BuildComponent_ptr = ::ecore::Ptr<BuildComponent>;

// Supplier
        class Supplier;
        using Supplier_ptr = ::ecore::Ptr<Supplier>;

// Tool
        class Tool;
        using Tool_ptr = ::ecore::Ptr<Tool>;

// BuildElement
        class BuildElement;
        using BuildElement_ptr = ::ecore::Ptr<BuildElement>;

// BuildRelationship
        class BuildRelationship;
        using BuildRelationship_ptr = ::ecore::Ptr<BuildRelationship>;

// SuppliedBy
        class SuppliedBy;
        using SuppliedBy_ptr = ::ecore::Ptr<SuppliedBy>;

// Library
        class Library;
        using Library_ptr = ::ecore::Ptr<Library>;

// BuildStep
        class BuildStep;
        using BuildStep_ptr = ::ecore::Ptr<BuildStep>;

// Produces
        class Produces;
        using Produces_ptr = ::ecore::Ptr<Produces>;

// SupportedBy
        class SupportedBy;
        using SupportedBy_ptr = ::ecore::Ptr<SupportedBy>;

// BuildProduct
        class BuildProduct;
        using BuildProduct_ptr = ::ecore::Ptr<BuildProduct>;

// DescribedBy
        class DescribedBy;
        using DescribedBy_ptr = ::ecore::Ptr<DescribedBy>;

// EEnum

// Package & Factory
        class BuildFactory;
        using BuildFactory_ptr = ::ecore::Ptr<BuildFactory>;
        class BuildPackage;
        using BuildPackage_ptr = ::ecore::Ptr<BuildPackage>;

    } // build
} // kdm

#endif // _KDM_BUILD_FORWARD_HPP

