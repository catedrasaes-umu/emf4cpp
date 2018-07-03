// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/structure_forward.hpp
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

#ifndef _KDM_STRUCTURE_FORWARD_HPP
#define _KDM_STRUCTURE_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(kdm_structure_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace kdm
{
    namespace structure
    {

// EDataType

// EClass

// AbstractStructureElement
        class AbstractStructureElement;
        typedef AbstractStructureElement* AbstractStructureElement_ptr;

// Subsystem
        class Subsystem;
        typedef Subsystem* Subsystem_ptr;

// Layer
        class Layer;
        typedef Layer* Layer_ptr;

// StructureModel
        class StructureModel;
        typedef StructureModel* StructureModel_ptr;

// Component
        class Component;
        typedef Component* Component_ptr;

// SoftwareSystem
        class SoftwareSystem;
        typedef SoftwareSystem* SoftwareSystem_ptr;

// AbstractStructureRelationship
        class AbstractStructureRelationship;
        typedef AbstractStructureRelationship* AbstractStructureRelationship_ptr;

// StructureRelationship
        class StructureRelationship;
        typedef StructureRelationship* StructureRelationship_ptr;

// ArchitectureView
        class ArchitectureView;
        typedef ArchitectureView* ArchitectureView_ptr;

// StructureElement
        class StructureElement;
        typedef StructureElement* StructureElement_ptr;

// EEnum

// Package & Factory
        class StructureFactory;
        typedef StructureFactory * StructureFactory_ptr;
        class StructurePackage;
        typedef StructurePackage * StructurePackage_ptr;

        template< typename T, typename S >
        inline T* instanceOf(S* _s)
        {
            return dynamic_cast< T* >(_s);
        }

    } // structure
} // kdm

#endif // _KDM_STRUCTURE_FORWARD_HPP

