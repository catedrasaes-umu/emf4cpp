// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source_forward.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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
        typedef SourceRef* SourceRef_ptr;

        // SourceRegion
        class SourceRegion;
        typedef SourceRegion* SourceRegion_ptr;

        // InventoryModel
        class InventoryModel;
        typedef InventoryModel* InventoryModel_ptr;

        // AbstractInventoryElement
        class AbstractInventoryElement;
        typedef AbstractInventoryElement* AbstractInventoryElement_ptr;

        // InventoryItem
        class InventoryItem;
        typedef InventoryItem* InventoryItem_ptr;

        // SourceFile
        class SourceFile;
        typedef SourceFile* SourceFile_ptr;

        // Image
        class Image;
        typedef Image* Image_ptr;

        // ResourceDescription
        class ResourceDescription;
        typedef ResourceDescription* ResourceDescription_ptr;

        // Configuration
        class Configuration;
        typedef Configuration* Configuration_ptr;

        // InventoryContainer
        class InventoryContainer;
        typedef InventoryContainer* InventoryContainer_ptr;

        // Directory
        class Directory;
        typedef Directory* Directory_ptr;

        // Project
        class Project;
        typedef Project* Project_ptr;

        // AbstractInventoryRelationship
        class AbstractInventoryRelationship;
        typedef AbstractInventoryRelationship
                * AbstractInventoryRelationship_ptr;

        // BinaryFile
        class BinaryFile;
        typedef BinaryFile* BinaryFile_ptr;

        // ExecutableFile
        class ExecutableFile;
        typedef ExecutableFile* ExecutableFile_ptr;

        // DependsOn
        class DependsOn;
        typedef DependsOn* DependsOn_ptr;

        // InventoryElement
        class InventoryElement;
        typedef InventoryElement* InventoryElement_ptr;

        // InventoryRelationship
        class InventoryRelationship;
        typedef InventoryRelationship* InventoryRelationship_ptr;

        // Package & Factory
        class SourceFactory;
        typedef SourceFactory * SourceFactory_ptr;
        class SourcePackage;
        typedef SourcePackage * SourcePackage_ptr;

        template< typename T, typename S >
        inline T* instanceOf(S* _s)
        {
            return dynamic_cast< T* > (_s);
        }

    } // source
} // kdm


#endif // _KDM_SOURCE_FORWARD_HPP
