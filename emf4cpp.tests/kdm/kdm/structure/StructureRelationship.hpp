// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/structure/StructureRelationship.hpp
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

#ifndef KDM_STRUCTURE_STRUCTURERELATIONSHIP_HPP
#define KDM_STRUCTURE_STRUCTURERELATIONSHIP_HPP

#include <kdm/structure_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/core_forward.hpp>
#include <kdm/structure/AbstractStructureRelationship.hpp>

/*PROTECTED REGION ID(StructureRelationship_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace structure
    {

        class StructureRelationship: public virtual ::kdm::structure::AbstractStructureRelationship
        {
        public:
            StructureRelationship();

            virtual ~StructureRelationship();

            virtual void _initialize();

            // Operations

            // Attributes

            // References
            ::kdm::core::KDMEntity_ptr getTo();
            void setTo(::kdm::core::KDMEntity_ptr _to);

            ::kdm::structure::AbstractStructureElement_ptr getFrom();
            void setFrom(::kdm::structure::AbstractStructureElement_ptr _from);

            /*PROTECTED REGION ID(StructureRelationship) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

            // EObjectImpl
            virtual ::ecore::EJavaObject eGet(::ecore::EInt _featureID,
                    ::ecore::EBoolean _resolve);
            virtual void eSet(::ecore::EInt _featureID,
                    ::ecore::EJavaObject const& _newValue);
            virtual ::ecore::EBoolean eIsSet(::ecore::EInt _featureID);
            virtual void eUnset(::ecore::EInt _featureID);
            virtual ::ecore::EClass_ptr _eClass();

            /*PROTECTED REGION ID(StructureRelationshipImpl) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

        protected:
            // Attributes

            // References

            ::kdm::core::KDMEntity_ptr m_to;

            ::kdm::structure::AbstractStructureElement_ptr m_from;

        };

    } // structure
} // kdm

#endif // KDM_STRUCTURE_STRUCTURERELATIONSHIP_HPP

