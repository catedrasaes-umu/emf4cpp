// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/KDMFramework.hpp
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

#ifndef KDM_KDM_KDMFRAMEWORK_HPP
#define KDM_KDM_KDMFRAMEWORK_HPP

#include <kdm/kdm_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <kdm/core_forward.hpp>
#include <kdm/core/ModelElement.hpp>

/*PROTECTED REGION ID(KDMFramework_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace kdm
    {

        class KDMFramework: public virtual ::kdm::core::ModelElement
        {
        public:
            KDMFramework();

            virtual ~KDMFramework();

            virtual void _initialize();

            // Operations

            // Attributes
            ::kdm::core::String getName() const;
            void setName(::kdm::core::String _name);

            // References
            ::ecorecpp::mapping::EList< ::kdm::kdm::Audit >& getAudit();

            ::ecorecpp::mapping::EList< ::kdm::kdm::ExtensionFamily >& getExtensionFamily();

            /*PROTECTED REGION ID(KDMFramework) START*/
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

            /*PROTECTED REGION ID(KDMFrameworkImpl) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

        protected:
            // Attributes

            ::kdm::core::String m_name;

            // References

            ::ecorecpp::mapping::out_ptr<
                    ::ecorecpp::mapping::EList< ::kdm::kdm::Audit > > m_audit;

            ::ecorecpp::mapping::out_ptr<
                    ::ecorecpp::mapping::EList< ::kdm::kdm::ExtensionFamily > > m_extensionFamily;

        };

    } // kdm
} // kdm

#endif // KDM_KDM_KDMFRAMEWORK_HPP

