// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/OperationDef.hpp
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

#ifndef IDLMM_OPERATIONDEF_HPP
#define IDLMM_OPERATIONDEF_HPP

#include <idlmm_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <ecore_forward.hpp>
#include <idlmm/Contained.hpp>
#include <idlmm/Typed.hpp>

/*PROTECTED REGION ID(OperationDef_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace idlmm
{

    class OperationDef: public virtual ::idlmm::Contained,
            public virtual ::idlmm::Typed
    {
    public:
        OperationDef();

        virtual ~OperationDef();

        virtual void _initialize();

        // Operations


        // Attributes
        ::ecore::EBoolean isIsOneway() const;
        void setIsOneway(::ecore::EBoolean _isOneway);

        std::vector< ::ecore::EString > const& getContexts() const;
        void setContexts(std::vector< ::ecore::EString > const& _contexts);

        void addContexts(::ecore::EString const& _new_element_in_contexts);
        void setContextsAt(size_t _position,
                ::ecore::EString const& _new_element_in_contexts);
        void deleteContextsAt(size_t _position);

        // References
        ::ecorecpp::mapping::EList< ::idlmm::ParameterDef >& getParameters();

        ::ecorecpp::mapping::EList< ::idlmm::ExceptionDef >& getCanRaise();

        /*PROTECTED REGION ID(OperationDef) START*/
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

        /*PROTECTED REGION ID(OperationDefImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::ecore::EBoolean m_isOneway;

        std::vector< ::ecore::EString > m_contexts;

        // References

        ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList<
                ::idlmm::ParameterDef > > m_parameters;

        ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList<
                ::idlmm::ExceptionDef > > m_canRaise;

    };

} // idlmm

#endif // IDLMM_OPERATIONDEF_HPP
