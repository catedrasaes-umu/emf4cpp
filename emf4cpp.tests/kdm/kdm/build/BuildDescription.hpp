// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build/BuildDescription.hpp
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

#ifndef KDM_BUILD_BUILDDESCRIPTION_HPP
#define KDM_BUILD_BUILDDESCRIPTION_HPP

#include <kdm/build_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <kdm/dllKdm.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/core_forward.hpp>
#include <kdm/source_forward.hpp>
#include <kdm/build/BuildResource.hpp>

/*PROTECTED REGION ID(BuildDescription_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace build
    {

    class EXPORT_KDM_DLL BuildDescription : public virtual ::kdm::build::BuildResource
    {
    public:
        BuildDescription();

        virtual ~BuildDescription();

        virtual void _initialize();

        // Operations

        // Attributes
        ::kdm::core::String getText () const;
        void setText (::kdm::core::String _text);

        // References
        const ::ecorecpp::mapping::EList< ::kdm::source::SourceRef >& getSource () const;
        ::ecorecpp::mapping::EList< ::kdm::source::SourceRef >& getSource ();

        /*PROTECTED REGION ID(BuildDescription) START*/
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

        /*PROTECTED REGION ID(BuildDescriptionImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::kdm::core::String m_text;

        // References

        ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList< ::kdm::source::SourceRef > > m_source;

    };

}
 // build
}// kdm

#endif // KDM_BUILD_BUILDDESCRIPTION_HPP

