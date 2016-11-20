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
        typedef KDMFramework* KDMFramework_ptr;

// KDMModel
        class KDMModel;
        typedef KDMModel* KDMModel_ptr;

// Audit
        class Audit;
        typedef Audit* Audit_ptr;

// Segment
        class Segment;
        typedef Segment* Segment_ptr;

// Attribute
        class Attribute;
        typedef Attribute* Attribute_ptr;

// Annotation
        class Annotation;
        typedef Annotation* Annotation_ptr;

// TagDefinition
        class TagDefinition;
        typedef TagDefinition* TagDefinition_ptr;

// ExtendedValue
        class ExtendedValue;
        typedef ExtendedValue* ExtendedValue_ptr;

// Stereotype
        class Stereotype;
        typedef Stereotype* Stereotype_ptr;

// ExtensionFamily
        class ExtensionFamily;
        typedef ExtensionFamily* ExtensionFamily_ptr;

// TaggedRef
        class TaggedRef;
        typedef TaggedRef* TaggedRef_ptr;

// TaggedValue
        class TaggedValue;
        typedef TaggedValue* TaggedValue_ptr;

// EEnum

// Package & Factory
        class KdmFactory;
        typedef KdmFactory * KdmFactory_ptr;
        class KdmPackage;
        typedef KdmPackage * KdmPackage_ptr;

        template< typename T, typename S >
        inline T* instanceOf(S* _s)
        {
            return dynamic_cast< T* >(_s);
        }

    } // kdm
} // kdm

#endif // _KDM_KDM_FORWARD_HPP

