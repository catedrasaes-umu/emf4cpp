// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source_forward.hpp
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

#ifndef _KDM_SOURCE_FORWARD_HPP
#define _KDM_SOURCE_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(kdm_source_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace kdm
{
    namespace source
    {

// EDataType

// EClass

// SourceRef
        class SourceRef;
        using SourceRef_ptr = boost::intrusive_ptr<SourceRef>;

// SourceRegion
        class SourceRegion;
        using SourceRegion_ptr = boost::intrusive_ptr<SourceRegion>;

// InventoryModel
        class InventoryModel;
        using InventoryModel_ptr = boost::intrusive_ptr<InventoryModel>;

// AbstractInventoryElement
        class AbstractInventoryElement;
        using AbstractInventoryElement_ptr = boost::intrusive_ptr<AbstractInventoryElement>;

// InventoryItem
        class InventoryItem;
        using InventoryItem_ptr = boost::intrusive_ptr<InventoryItem>;

// SourceFile
        class SourceFile;
        using SourceFile_ptr = boost::intrusive_ptr<SourceFile>;

// Image
        class Image;
        using Image_ptr = boost::intrusive_ptr<Image>;

// ResourceDescription
        class ResourceDescription;
        using ResourceDescription_ptr = boost::intrusive_ptr<ResourceDescription>;

// Configuration
        class Configuration;
        using Configuration_ptr = boost::intrusive_ptr<Configuration>;

// InventoryContainer
        class InventoryContainer;
        using InventoryContainer_ptr = boost::intrusive_ptr<InventoryContainer>;

// Directory
        class Directory;
        using Directory_ptr = boost::intrusive_ptr<Directory>;

// Project
        class Project;
        using Project_ptr = boost::intrusive_ptr<Project>;

// AbstractInventoryRelationship
        class AbstractInventoryRelationship;
        using AbstractInventoryRelationship_ptr = boost::intrusive_ptr<AbstractInventoryRelationship>;

// BinaryFile
        class BinaryFile;
        using BinaryFile_ptr = boost::intrusive_ptr<BinaryFile>;

// ExecutableFile
        class ExecutableFile;
        using ExecutableFile_ptr = boost::intrusive_ptr<ExecutableFile>;

// DependsOn
        class DependsOn;
        using DependsOn_ptr = boost::intrusive_ptr<DependsOn>;

// InventoryElement
        class InventoryElement;
        using InventoryElement_ptr = boost::intrusive_ptr<InventoryElement>;

// InventoryRelationship
        class InventoryRelationship;
        using InventoryRelationship_ptr = boost::intrusive_ptr<InventoryRelationship>;

// EEnum

// Package & Factory
        class SourceFactory;
        using SourceFactory_ptr = boost::intrusive_ptr<SourceFactory>;
        class SourcePackage;
        using SourcePackage_ptr = boost::intrusive_ptr<SourcePackage>;

        template< typename T, typename S >
        inline boost::intrusive_ptr< T > instanceOf(const S& _s)
        {
            return boost::intrusive_ptr < T > (dynamic_cast< T* >(_s.get()));
        }

    } // source
} // kdm

#endif // _KDM_SOURCE_FORWARD_HPP

