// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/core/KDMEntity.hpp
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

#ifndef KDM_CORE_KDMENTITY_HPP
#define KDM_CORE_KDMENTITY_HPP

#include <kdm/core_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/core/ModelElement.hpp>

/*PROTECTED REGION ID(KDMEntity_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace core
    {

        class KDMEntity: public virtual ::kdm::core::ModelElement
        {
        public:
            KDMEntity();

            virtual ~KDMEntity();

            virtual void _initialize();

            // Operations

            virtual void createAggregation(
                    ::kdm::core::KDMEntity_ptr _otherEntity);

            virtual void deleteAggregation(
                    ::kdm::core::AggregatedRelationship_ptr _aggregation);

            virtual ::kdm::core::KDMRelationship_ptr getInbound();

            virtual ::kdm::core::KDMRelationship_ptr getOutbound();

            virtual ::kdm::core::KDMRelationship_ptr getOwnedRelation();

            virtual ::kdm::core::AggregatedRelationship_ptr getInAggregated();

            virtual ::kdm::core::AggregatedRelationship_ptr getOutAggregated();

            virtual ::kdm::core::KDMEntity_ptr getOwner();

            virtual ::kdm::core::KDMEntity_ptr getOwnedElement();

            virtual ::kdm::core::KDMEntity_ptr getGroup();

            virtual ::kdm::core::KDMEntity_ptr getGroupedElement();

            virtual ::kdm::kdm::KDMModel_ptr getModel();

            // Attributes
            ::kdm::core::String getName() const;
            void setName(::kdm::core::String _name);

            // References

            /*PROTECTED REGION ID(KDMEntity) START*/
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

            /*PROTECTED REGION ID(KDMEntityImpl) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

        protected:
            // Attributes

            ::kdm::core::String m_name;

            // References

        };

    } // core
} // kdm

#endif // KDM_CORE_KDMENTITY_HPP

