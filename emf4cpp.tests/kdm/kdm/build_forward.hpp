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
        using AbstractBuildElement_ptr = boost::intrusive_ptr<AbstractBuildElement>;

// BuildResource
        class BuildResource;
        using BuildResource_ptr = boost::intrusive_ptr<BuildResource>;

// BuildDescription
        class BuildDescription;
        using BuildDescription_ptr = boost::intrusive_ptr<BuildDescription>;

// SymbolicLink
        class SymbolicLink;
        using SymbolicLink_ptr = boost::intrusive_ptr<SymbolicLink>;

// AbstractBuildRelationship
        class AbstractBuildRelationship;
        using AbstractBuildRelationship_ptr = boost::intrusive_ptr<AbstractBuildRelationship>;

// LinksTo
        class LinksTo;
        using LinksTo_ptr = boost::intrusive_ptr<LinksTo>;

// Consumes
        class Consumes;
        using Consumes_ptr = boost::intrusive_ptr<Consumes>;

// BuildModel
        class BuildModel;
        using BuildModel_ptr = boost::intrusive_ptr<BuildModel>;

// BuildComponent
        class BuildComponent;
        using BuildComponent_ptr = boost::intrusive_ptr<BuildComponent>;

// Supplier
        class Supplier;
        using Supplier_ptr = boost::intrusive_ptr<Supplier>;

// Tool
        class Tool;
        using Tool_ptr = boost::intrusive_ptr<Tool>;

// BuildElement
        class BuildElement;
        using BuildElement_ptr = boost::intrusive_ptr<BuildElement>;

// BuildRelationship
        class BuildRelationship;
        using BuildRelationship_ptr = boost::intrusive_ptr<BuildRelationship>;

// SuppliedBy
        class SuppliedBy;
        using SuppliedBy_ptr = boost::intrusive_ptr<SuppliedBy>;

// Library
        class Library;
        using Library_ptr = boost::intrusive_ptr<Library>;

// BuildStep
        class BuildStep;
        using BuildStep_ptr = boost::intrusive_ptr<BuildStep>;

// Produces
        class Produces;
        using Produces_ptr = boost::intrusive_ptr<Produces>;

// SupportedBy
        class SupportedBy;
        using SupportedBy_ptr = boost::intrusive_ptr<SupportedBy>;

// BuildProduct
        class BuildProduct;
        using BuildProduct_ptr = boost::intrusive_ptr<BuildProduct>;

// DescribedBy
        class DescribedBy;
        using DescribedBy_ptr = boost::intrusive_ptr<DescribedBy>;

// EEnum

// Package & Factory
        class BuildFactory;
        using BuildFactory_ptr = boost::intrusive_ptr<BuildFactory>;
        class BuildPackage;
        using BuildPackage_ptr = boost::intrusive_ptr<BuildPackage>;

        template< typename T, typename S >
        inline boost::intrusive_ptr< T > instanceOf(const S& _s)
        {
            return boost::intrusive_ptr < T > (dynamic_cast< T* >(_s.get()));
        }

    } // build
} // kdm

#endif // _KDM_BUILD_FORWARD_HPP

