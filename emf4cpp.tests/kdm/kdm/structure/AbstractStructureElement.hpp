// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/structure/AbstractStructureElement.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON Gmbh 2016 <soeren.henning@inchron.com>
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

#ifndef KDM_STRUCTURE_ABSTRACTSTRUCTUREELEMENT_HPP
#define KDM_STRUCTURE_ABSTRACTSTRUCTUREELEMENT_HPP

#include <kdm/structure_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <kdm/dllKdm.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/core_forward.hpp>
#include <kdm/core/KDMEntity.hpp>

/*PROTECTED REGION ID(AbstractStructureElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace structure
    {

    class EXPORT_KDM_DLL AbstractStructureElement : public virtual ::kdm::core::KDMEntity
    {
    public:
        AbstractStructureElement();

        virtual ~AbstractStructureElement();

        virtual void _initialize();

        // Operations

        // Attributes

        // References
        const ::ecorecpp::mapping::EList< ::kdm::core::AggregatedRelationship >& getAggregated () const;
        ::ecorecpp::mapping::EList< ::kdm::core::AggregatedRelationship >& getAggregated ();

        const ::ecorecpp::mapping::EList< ::kdm::core::KDMEntity >& getImplementation () const;
        ::ecorecpp::mapping::EList< ::kdm::core::KDMEntity >& getImplementation ();

        const ::ecorecpp::mapping::EList< ::kdm::structure::AbstractStructureElement >& getStructureElement () const;
        ::ecorecpp::mapping::EList< ::kdm::structure::AbstractStructureElement >& getStructureElement ();

        const ::ecorecpp::mapping::EList< ::kdm::structure::AbstractStructureRelationship >& getStructureRelationship () const;
        ::ecorecpp::mapping::EList< ::kdm::structure::AbstractStructureRelationship >& getStructureRelationship ();

        /*PROTECTED REGION ID(AbstractStructureElement) START*/
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

        /*PROTECTED REGION ID(AbstractStructureElementImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        // References

        ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList< ::kdm::core::AggregatedRelationship > > m_aggregated;

        ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList< ::kdm::core::KDMEntity > > m_implementation;

        ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList< ::kdm::structure::AbstractStructureElement > > m_structureElement;

        ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList< ::kdm::structure::AbstractStructureRelationship > > m_structureRelationship;

    };

}
 // structure
}// kdm

#endif // KDM_STRUCTURE_ABSTRACTSTRUCTUREELEMENT_HPP

