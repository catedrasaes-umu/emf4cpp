// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/data/DatatypeOf.hpp
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

#ifndef KDM_DATA_DATATYPEOF_HPP
#define KDM_DATA_DATATYPEOF_HPP

#include <kdm/data_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/code_forward.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>

/*PROTECTED REGION ID(DatatypeOf_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace data
    {

        class DatatypeOf: public virtual ::kdm::data::AbstractDataRelationship
        {
        public:
            DatatypeOf();

            virtual ~DatatypeOf();

            virtual void _initialize();

            // Operations


            // Attributes

            // References
            ::kdm::code::Datatype_ptr getTo();
            void setTo(::kdm::code::Datatype_ptr _to);

            ::kdm::data::ComplexContentType_ptr getFrom();
            void setFrom(::kdm::data::ComplexContentType_ptr _from);

            /*PROTECTED REGION ID(DatatypeOf) START*/
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

            /*PROTECTED REGION ID(DatatypeOfImpl) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

        protected:
            // Attributes


            // References

            ::kdm::code::Datatype_ptr m_to;

            ::kdm::data::ComplexContentType_ptr m_from;

        };

    } // data
} // kdm

#endif // KDM_DATA_DATATYPEOF_HPP
