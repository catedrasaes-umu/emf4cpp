// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/SourceRef.hpp
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

#ifndef KDM_SOURCE_SOURCEREF_HPP
#define KDM_SOURCE_SOURCEREF_HPP

#include <kdm/source_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/core_forward.hpp>
#include <kdm/core/Element.hpp>

/*PROTECTED REGION ID(SourceRef_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace source
    {

        class SourceRef: public virtual ::kdm::core::Element
        {
        public:
            SourceRef();

            virtual ~SourceRef();

            virtual void _initialize();

            // Operations

            // Attributes
            ::kdm::core::String getLanguage() const;
            void setLanguage(::kdm::core::String _language);

            ::kdm::core::String getSnippet() const;
            void setSnippet(::kdm::core::String _snippet);

            // References
            ::ecorecpp::mapping::EList< ::kdm::source::SourceRegion >& getRegion();

            /*PROTECTED REGION ID(SourceRef) START*/
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

            /*PROTECTED REGION ID(SourceRefImpl) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

        protected:
            // Attributes

            ::kdm::core::String m_language;

            ::kdm::core::String m_snippet;

            // References

            ::ecorecpp::mapping::out_ptr<
                    ::ecorecpp::mapping::EList< ::kdm::source::SourceRegion > > m_region;

        };

    } // source
} // kdm

#endif // KDM_SOURCE_SOURCEREF_HPP

