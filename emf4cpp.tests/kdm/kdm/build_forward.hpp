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
        typedef AbstractBuildElement* AbstractBuildElement_ptr;

// BuildResource
        class BuildResource;
        typedef BuildResource* BuildResource_ptr;

// BuildDescription
        class BuildDescription;
        typedef BuildDescription* BuildDescription_ptr;

// SymbolicLink
        class SymbolicLink;
        typedef SymbolicLink* SymbolicLink_ptr;

// AbstractBuildRelationship
        class AbstractBuildRelationship;
        typedef AbstractBuildRelationship* AbstractBuildRelationship_ptr;

// LinksTo
        class LinksTo;
        typedef LinksTo* LinksTo_ptr;

// Consumes
        class Consumes;
        typedef Consumes* Consumes_ptr;

// BuildModel
        class BuildModel;
        typedef BuildModel* BuildModel_ptr;

// BuildComponent
        class BuildComponent;
        typedef BuildComponent* BuildComponent_ptr;

// Supplier
        class Supplier;
        typedef Supplier* Supplier_ptr;

// Tool
        class Tool;
        typedef Tool* Tool_ptr;

// BuildElement
        class BuildElement;
        typedef BuildElement* BuildElement_ptr;

// BuildRelationship
        class BuildRelationship;
        typedef BuildRelationship* BuildRelationship_ptr;

// SuppliedBy
        class SuppliedBy;
        typedef SuppliedBy* SuppliedBy_ptr;

// Library
        class Library;
        typedef Library* Library_ptr;

// BuildStep
        class BuildStep;
        typedef BuildStep* BuildStep_ptr;

// Produces
        class Produces;
        typedef Produces* Produces_ptr;

// SupportedBy
        class SupportedBy;
        typedef SupportedBy* SupportedBy_ptr;

// BuildProduct
        class BuildProduct;
        typedef BuildProduct* BuildProduct_ptr;

// DescribedBy
        class DescribedBy;
        typedef DescribedBy* DescribedBy_ptr;

// EEnum

// Package & Factory
        class BuildFactory;
        typedef BuildFactory * BuildFactory_ptr;
        class BuildPackage;
        typedef BuildPackage * BuildPackage_ptr;

        template< typename T, typename S >
        inline T* instanceOf(S* _s)
        {
            return dynamic_cast< T* >(_s);
        }

    } // build
} // kdm

#endif // _KDM_BUILD_FORWARD_HPP

