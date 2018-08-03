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
        using SourceRef_ptr = ::ecore::Ptr<SourceRef>;

// SourceRegion
        class SourceRegion;
        using SourceRegion_ptr = ::ecore::Ptr<SourceRegion>;

// InventoryModel
        class InventoryModel;
        using InventoryModel_ptr = ::ecore::Ptr<InventoryModel>;

// AbstractInventoryElement
        class AbstractInventoryElement;
        using AbstractInventoryElement_ptr = ::ecore::Ptr<AbstractInventoryElement>;

// InventoryItem
        class InventoryItem;
        using InventoryItem_ptr = ::ecore::Ptr<InventoryItem>;

// SourceFile
        class SourceFile;
        using SourceFile_ptr = ::ecore::Ptr<SourceFile>;

// Image
        class Image;
        using Image_ptr = ::ecore::Ptr<Image>;

// ResourceDescription
        class ResourceDescription;
        using ResourceDescription_ptr = ::ecore::Ptr<ResourceDescription>;

// Configuration
        class Configuration;
        using Configuration_ptr = ::ecore::Ptr<Configuration>;

// InventoryContainer
        class InventoryContainer;
        using InventoryContainer_ptr = ::ecore::Ptr<InventoryContainer>;

// Directory
        class Directory;
        using Directory_ptr = ::ecore::Ptr<Directory>;

// Project
        class Project;
        using Project_ptr = ::ecore::Ptr<Project>;

// AbstractInventoryRelationship
        class AbstractInventoryRelationship;
        using AbstractInventoryRelationship_ptr = ::ecore::Ptr<AbstractInventoryRelationship>;

// BinaryFile
        class BinaryFile;
        using BinaryFile_ptr = ::ecore::Ptr<BinaryFile>;

// ExecutableFile
        class ExecutableFile;
        using ExecutableFile_ptr = ::ecore::Ptr<ExecutableFile>;

// DependsOn
        class DependsOn;
        using DependsOn_ptr = ::ecore::Ptr<DependsOn>;

// InventoryElement
        class InventoryElement;
        using InventoryElement_ptr = ::ecore::Ptr<InventoryElement>;

// InventoryRelationship
        class InventoryRelationship;
        using InventoryRelationship_ptr = ::ecore::Ptr<InventoryRelationship>;

// EEnum

// Package & Factory
        class SourceFactory;
        using SourceFactory_ptr = ::ecore::Ptr<SourceFactory>;
        class SourcePackage;
        using SourcePackage_ptr = ::ecore::Ptr<SourcePackage>;

    } // source
} // kdm

#endif // _KDM_SOURCE_FORWARD_HPP

