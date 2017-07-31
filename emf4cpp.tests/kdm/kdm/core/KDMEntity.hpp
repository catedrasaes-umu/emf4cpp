// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/core/KDMEntity.hpp
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

#ifndef KDM_CORE_KDMENTITY_HPP
#define KDM_CORE_KDMENTITY_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <kdm/dllKdm.hpp>
#include <kdm/core_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/core/ModelElement.hpp>

#include "CorePackage.hpp"

/*PROTECTED REGION ID(KDMEntity_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace core
    {

    class EXPORT_KDM_DLL KDMEntity : public virtual ::kdm::core::ModelElement
    {
    public:
        KDMEntity();

        virtual ~KDMEntity();

        virtual void _initialize();

        // Operations

        virtual void createAggregation ( ::kdm::core::KDMEntity_ptr _otherEntity);

        virtual void deleteAggregation ( ::kdm::core::AggregatedRelationship_ptr _aggregation);

        virtual ::kdm::core::KDMRelationship_ptr getInbound ();

        virtual ::kdm::core::KDMRelationship_ptr getOutbound ();

        virtual ::kdm::core::KDMRelationship_ptr getOwnedRelation ();

        virtual ::kdm::core::AggregatedRelationship_ptr getInAggregated ();

        virtual ::kdm::core::AggregatedRelationship_ptr getOutAggregated ();

        virtual ::kdm::core::KDMEntity_ptr getOwner ();

        virtual ::kdm::core::KDMEntity_ptr getOwnedElement ();

        virtual ::kdm::core::KDMEntity_ptr getGroup ();

        virtual ::kdm::core::KDMEntity_ptr getGroupedElement ();

        virtual ::kdm::kdm::KDMModel_ptr getModel ();

        // Attributes
        virtual ::kdm::core::String getName () const;
        virtual void setName (::kdm::core::String _name);

        // References

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = CorePackage::KDMENTITY;

        /*PROTECTED REGION ID(KDMEntity) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

        // EObjectImpl
        virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve);
        virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
        virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID);
        virtual void eUnset ( ::ecore::EInt _featureID);
        virtual ::ecore::EClass_ptr _eClass ();
        virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
        virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue);

        /*PROTECTED REGION ID(KDMEntityImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::kdm::core::String m_name;

        // References

    };

}
 // core
}// kdm

#endif // KDM_CORE_KDMENTITY_HPP

