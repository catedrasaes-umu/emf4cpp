// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/PrimitiveDef.hpp
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

#ifndef IDLMM_PRIMITIVEDEF_HPP
#define IDLMM_PRIMITIVEDEF_HPP

#include <idlmm_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <idlmm/IDLType.hpp>

/*PROTECTED REGION ID(PrimitiveDef_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace idlmm
{

    class PrimitiveDef: public virtual ::idlmm::IDLType
    {
    public:
        PrimitiveDef();

        virtual ~PrimitiveDef();

        virtual void _initialize();

        // Operations


        // Attributes
        ::idlmm::PrimitiveKind getKind() const;
        void setKind(::idlmm::PrimitiveKind _kind);

        // References


        /*PROTECTED REGION ID(PrimitiveDef) START*/
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

        /*PROTECTED REGION ID(PrimitiveDefImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::idlmm::PrimitiveKind m_kind;

        // References

    };

} // idlmm

#endif // IDLMM_PRIMITIVEDEF_HPP
