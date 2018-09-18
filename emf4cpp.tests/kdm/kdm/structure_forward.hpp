// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/structure_forward.hpp
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
        using AbstractStructureElement_ptr = ::ecore::Ptr<AbstractStructureElement>;

// Subsystem
        class Subsystem;
        using Subsystem_ptr = ::ecore::Ptr<Subsystem>;

// Layer
        class Layer;
        using Layer_ptr = ::ecore::Ptr<Layer>;

// StructureModel
        class StructureModel;
        using StructureModel_ptr = ::ecore::Ptr<StructureModel>;

// Component
        class Component;
        using Component_ptr = ::ecore::Ptr<Component>;

// SoftwareSystem
        class SoftwareSystem;
        using SoftwareSystem_ptr = ::ecore::Ptr<SoftwareSystem>;

// AbstractStructureRelationship
        class AbstractStructureRelationship;
        using AbstractStructureRelationship_ptr = ::ecore::Ptr<AbstractStructureRelationship>;

// StructureRelationship
        class StructureRelationship;
        using StructureRelationship_ptr = ::ecore::Ptr<StructureRelationship>;

// ArchitectureView
        class ArchitectureView;
        using ArchitectureView_ptr = ::ecore::Ptr<ArchitectureView>;

// StructureElement
        class StructureElement;
        using StructureElement_ptr = ::ecore::Ptr<StructureElement>;

// EEnum

// Package & Factory
        class StructureFactory;
        using StructureFactory_ptr = ::ecore::Ptr<StructureFactory>;
        class StructurePackage;
        using StructurePackage_ptr = ::ecore::Ptr<StructurePackage>;

    } // structure
} // kdm

#endif // _KDM_STRUCTURE_FORWARD_HPP

