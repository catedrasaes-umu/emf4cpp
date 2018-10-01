// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm_forward.hpp
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

#ifndef _KDM_KDM_FORWARD_HPP
#define _KDM_KDM_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(kdm_kdm_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace kdm
{
    namespace kdm
    {

// EDataType

// EClass

// KDMFramework
        class KDMFramework;
        using KDMFramework_ptr = ::ecore::Ptr<KDMFramework>;

// KDMModel
        class KDMModel;
        using KDMModel_ptr = ::ecore::Ptr<KDMModel>;

// Audit
        class Audit;
        using Audit_ptr = ::ecore::Ptr<Audit>;

// Segment
        class Segment;
        using Segment_ptr = ::ecore::Ptr<Segment>;

// Attribute
        class Attribute;
        using Attribute_ptr = ::ecore::Ptr<Attribute>;

// Annotation
        class Annotation;
        using Annotation_ptr = ::ecore::Ptr<Annotation>;

// TagDefinition
        class TagDefinition;
        using TagDefinition_ptr = ::ecore::Ptr<TagDefinition>;

// ExtendedValue
        class ExtendedValue;
        using ExtendedValue_ptr = ::ecore::Ptr<ExtendedValue>;

// Stereotype
        class Stereotype;
        using Stereotype_ptr = ::ecore::Ptr<Stereotype>;

// ExtensionFamily
        class ExtensionFamily;
        using ExtensionFamily_ptr = ::ecore::Ptr<ExtensionFamily>;

// TaggedRef
        class TaggedRef;
        using TaggedRef_ptr = ::ecore::Ptr<TaggedRef>;

// TaggedValue
        class TaggedValue;
        using TaggedValue_ptr = ::ecore::Ptr<TaggedValue>;

// EEnum

// Package & Factory
        class KdmFactory;
        using KdmFactory_ptr = ::ecore::Ptr<KdmFactory>;
        class KdmPackage;
        using KdmPackage_ptr = ::ecore::Ptr<KdmPackage>;

    } // kdm
} // kdm

#endif // _KDM_KDM_FORWARD_HPP

