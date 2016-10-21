// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/UnionDef.hpp
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

#ifndef IDLMM_UNIONDEF_HPP
#define IDLMM_UNIONDEF_HPP

#include <idlmm_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <idlmm/dllIdlmm.hpp>

#include <ecore_forward.hpp>
#include <idlmm/TypedefDef.hpp>

/*PROTECTED REGION ID(UnionDef_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace idlmm
{

class EXPORT_IDLMM_DLL UnionDef : public virtual ::idlmm::TypedefDef
{
public:
    UnionDef();

    virtual ~UnionDef();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    ::ecorecpp::mapping::EList< ::idlmm::UnionField >& getUnionMembers ();

    ::idlmm::IDLType_ptr getContainedDiscrim ();
    void setContainedDiscrim (::idlmm::IDLType_ptr _containedDiscrim);

    ::idlmm::TypedefDef_ptr getSharedDiscrim ();
    void setSharedDiscrim (::idlmm::TypedefDef_ptr _sharedDiscrim);

    /*PROTECTED REGION ID(UnionDef) START*/
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

    /*PROTECTED REGION ID(UnionDefImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    // Attributes

    // References

    ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList< ::idlmm::UnionField > > m_unionMembers;

    ::idlmm::IDLType_ptr m_containedDiscrim;

    ::idlmm::TypedefDef_ptr m_sharedDiscrim;

};

}
 // idlmm

#endif // IDLMM_UNIONDEF_HPP

