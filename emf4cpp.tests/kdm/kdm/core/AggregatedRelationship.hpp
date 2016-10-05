// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/core/AggregatedRelationship.hpp
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

#ifndef KDM_CORE_AGGREGATEDRELATIONSHIP_HPP
#define KDM_CORE_AGGREGATEDRELATIONSHIP_HPP

#include <kdm/core_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/core/ModelElement.hpp>

/*PROTECTED REGION ID(AggregatedRelationship_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace core
    {

        class AggregatedRelationship: public virtual ::kdm::core::ModelElement
        {
        public:
            AggregatedRelationship();

            virtual ~AggregatedRelationship();

            virtual void _initialize();

            // Operations

            // Attributes
            ::kdm::core::Integer getDensity() const;
            void setDensity(::kdm::core::Integer _density);

            // References
            ::kdm::core::KDMEntity_ptr getFrom();
            void setFrom(::kdm::core::KDMEntity_ptr _from);

            ::kdm::core::KDMEntity_ptr getTo();
            void setTo(::kdm::core::KDMEntity_ptr _to);

            ::ecorecpp::mapping::EList< ::kdm::core::KDMRelationship >& getRelation();

            /*PROTECTED REGION ID(AggregatedRelationship) START*/
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
            virtual void _inverseAdd(::ecore::EInt _featureID,
                    ::ecore::EJavaObject const& _newValue);
            virtual void _inverseRemove(::ecore::EInt _featureID,
                    ::ecore::EJavaObject const& _oldValue);

            /*PROTECTED REGION ID(AggregatedRelationshipImpl) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

        protected:
            // Attributes

            ::kdm::core::Integer m_density;

            // References

            ::kdm::core::KDMEntity_ptr m_from;

            ::kdm::core::KDMEntity_ptr m_to;

            ::ecorecpp::mapping::out_ptr<
                    ::ecorecpp::mapping::EList< ::kdm::core::KDMRelationship > > m_relation;

        };

    } // core
} // kdm

#endif // KDM_CORE_AGGREGATEDRELATIONSHIP_HPP

