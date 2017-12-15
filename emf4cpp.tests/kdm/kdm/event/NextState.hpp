// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/event/NextState.hpp
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

#ifndef KDM_EVENT_NEXTSTATE_HPP
#define KDM_EVENT_NEXTSTATE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <kdm/dllKdm.hpp>
#include <kdm/event_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/event/AbstractEventRelationship.hpp>

#include "EventPackage.hpp"

/*PROTECTED REGION ID(NextState_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace event
    {

    class EXPORT_KDM_DLL NextState : public virtual ::kdm::event::AbstractEventRelationship
    {
    public:
        NextState();

        virtual ~NextState();

        virtual void _initialize();

        // Operations

        // Attributes

        // References
        virtual ::kdm::event::State_ptr getTo () const;
        virtual void setTo (::kdm::event::State_ptr _to);

        virtual ::kdm::event::Transition_ptr getFrom () const;
        virtual void setFrom (::kdm::event::Transition_ptr _from);

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = EventPackage::NEXTSTATE;

        /*PROTECTED REGION ID(NextState) START*/
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

        /*PROTECTED REGION ID(NextStateImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        NextState_ptr _this()
        {   return NextState_ptr(this);}

        // Attributes

        // References

        ::kdm::event::State_ptr m_to;

        ::kdm::event::Transition_ptr m_from;

    };

}
 // event
}// kdm

#endif // KDM_EVENT_NEXTSTATE_HPP

