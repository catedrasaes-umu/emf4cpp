// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/core/Element.hpp
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

#ifndef KDM_CORE_ELEMENT_HPP
#define KDM_CORE_ELEMENT_HPP

#include <kdm/core_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <kdm/kdm_forward.hpp>

#include <ecore/EObject.hpp>

/*PROTECTED REGION ID(Element_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace core
    {

        class Element: public virtual ::ecore::EObject

        {
        public:
            Element();

            virtual ~Element();

            virtual void _initialize();

            // Operations

            // Attributes

            // References
            ::ecorecpp::mapping::EList< ::kdm::kdm::Attribute >& getAttribute();

            ::ecorecpp::mapping::EList< ::kdm::kdm::Annotation >& getAnnotation();

            /*PROTECTED REGION ID(Element) START*/
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

            /*PROTECTED REGION ID(ElementImpl) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

        protected:
            // Attributes

            // References

            ::ecorecpp::mapping::out_ptr<
                    ::ecorecpp::mapping::EList< ::kdm::kdm::Attribute > > m_attribute;

            ::ecorecpp::mapping::out_ptr<
                    ::ecorecpp::mapping::EList< ::kdm::kdm::Annotation > > m_annotation;

        };

    } // core
} // kdm

#endif // KDM_CORE_ELEMENT_HPP

