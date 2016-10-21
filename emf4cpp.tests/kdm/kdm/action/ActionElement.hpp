// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/action/ActionElement.hpp
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

#ifndef KDM_ACTION_ACTIONELEMENT_HPP
#define KDM_ACTION_ACTIONELEMENT_HPP

#include <kdm/action_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <kdm/dllKdm.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/core_forward.hpp>
#include <kdm/source_forward.hpp>
#include <kdm/code_forward.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

/*PROTECTED REGION ID(ActionElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace action
    {

    class EXPORT_KDM_DLL ActionElement : public virtual ::kdm::code::AbstractCodeElement
    {
    public:
        ActionElement();

        virtual ~ActionElement();

        virtual void _initialize();

        // Operations

        // Attributes
        ::kdm::core::String getKind () const;
        void setKind (::kdm::core::String _kind);

        // References
        ::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeElement >& getCodeElement ();

        ::ecorecpp::mapping::EList< ::kdm::action::AbstractActionRelationship >& getActionRelation ();

        /*PROTECTED REGION ID(ActionElement) START*/
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

        /*PROTECTED REGION ID(ActionElementImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::kdm::core::String m_kind;

        // References

        ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeElement > > m_codeElement;

        ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList< ::kdm::action::AbstractActionRelationship > > m_actionRelation;

    };

}
 // action
}// kdm

#endif // KDM_ACTION_ACTIONELEMENT_HPP

