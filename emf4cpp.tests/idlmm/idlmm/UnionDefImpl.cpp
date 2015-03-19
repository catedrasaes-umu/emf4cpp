// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/UnionDefImpl.cpp
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

#include "UnionDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/TypedefDef.hpp>
#include <idlmm/Container.hpp>
#include <idlmm/UnionField.hpp>
#include <idlmm/IDLType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::idlmm;

/*PROTECTED REGION ID(UnionDefImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void UnionDef::_initialize()
{
    // Supertypes
    ::idlmm::TypedefDef::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_unionMembers->size(); i++)
    {
        (*m_unionMembers)[i]->_initialize();
        (*m_unionMembers)[i]->_setEContainer(this,
                ::idlmm::IdlmmPackage::_instance()->getUnionDef__unionMembers());
    }
    if (m_containedDiscrim)
    {
        m_containedDiscrim->_initialize();
        m_containedDiscrim->_setEContainer(
                this,
                ::idlmm::IdlmmPackage::_instance()->getUnionDef__containedDiscrim());
    }

    /*PROTECTED REGION ID(UnionDefImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject UnionDef::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::IDLTYPE__TYPECODE:
    {
        ::ecorecpp::mapping::any_traits< ::idlmm::ETypeCode >::toAny(_any,
                m_typeCode);
    }
        return _any;
    case ::idlmm::IdlmmPackage::CONTAINED__IDENTIFIER:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::toAny(_any,
                m_identifier);
    }
        return _any;
    case ::idlmm::IdlmmPackage::CONTAINED__REPOSITORYID:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::toAny(_any,
                m_repositoryId);
    }
        return _any;
    case ::idlmm::IdlmmPackage::CONTAINED__VERSION:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::toAny(_any,
                m_version);
    }
        return _any;
    case ::idlmm::IdlmmPackage::CONTAINED__ABSOLUTENAME:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::toAny(_any,
                m_absoluteName);
    }
        return _any;
    case ::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN:
    {
        _any = static_cast< ::ecore::EObject* > (m_definedIn);
    }
        return _any;
    case ::idlmm::IdlmmPackage::UNIONDEF__UNIONMEMBERS:
    {
        _any = m_unionMembers->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::idlmm::IdlmmPackage::UNIONDEF__CONTAINEDDISCRIM:
    {
        _any = static_cast< ::ecore::EObject* > (m_containedDiscrim);
    }
        return _any;
    case ::idlmm::IdlmmPackage::UNIONDEF__SHAREDDISCRIM:
    {
        _any = static_cast< ::ecore::EObject* > (m_sharedDiscrim);
    }
        return _any;

    }
    throw "Error";
}

void UnionDef::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::IDLTYPE__TYPECODE:
    {
        ::ecorecpp::mapping::any_traits< ::idlmm::ETypeCode >::fromAny(
                _newValue, m_typeCode);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINED__IDENTIFIER:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::fromAny(_newValue,
                m_identifier);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINED__REPOSITORYID:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::fromAny(_newValue,
                m_repositoryId);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINED__VERSION:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::fromAny(_newValue,
                m_version);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINED__ABSOLUTENAME:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::fromAny(_newValue,
                m_absoluteName);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::idlmm::Container_ptr _t1 =
                dynamic_cast< ::idlmm::Container_ptr > (_t0);
        ::idlmm::Contained::setDefinedIn(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__UNIONMEMBERS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::idlmm::UnionDef::getUnionMembers().clear();
        ::idlmm::UnionDef::getUnionMembers().insert_all(*_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__CONTAINEDDISCRIM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::idlmm::IDLType_ptr _t1 = dynamic_cast< ::idlmm::IDLType_ptr > (_t0);
        ::idlmm::UnionDef::setContainedDiscrim(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__SHAREDDISCRIM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::idlmm::TypedefDef_ptr _t1 =
                dynamic_cast< ::idlmm::TypedefDef_ptr > (_t0);
        ::idlmm::UnionDef::setSharedDiscrim(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean UnionDef::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::IDLTYPE__TYPECODE:
        return ::ecorecpp::mapping::set_traits< ::idlmm::ETypeCode >::is_set(
                m_typeCode);
    case ::idlmm::IdlmmPackage::CONTAINED__IDENTIFIER:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_identifier);
    case ::idlmm::IdlmmPackage::CONTAINED__REPOSITORYID:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_repositoryId);
    case ::idlmm::IdlmmPackage::CONTAINED__VERSION:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_version);
    case ::idlmm::IdlmmPackage::CONTAINED__ABSOLUTENAME:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_absoluteName);
    case ::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN:
        return m_definedIn;
    case ::idlmm::IdlmmPackage::UNIONDEF__UNIONMEMBERS:
        return m_unionMembers && m_unionMembers->size();
    case ::idlmm::IdlmmPackage::UNIONDEF__CONTAINEDDISCRIM:
        return m_containedDiscrim;
    case ::idlmm::IdlmmPackage::UNIONDEF__SHAREDDISCRIM:
        return m_sharedDiscrim;

    }
    throw "Error";
}

void UnionDef::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr UnionDef::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::idlmm::IdlmmPackage_ptr > (::idlmm::IdlmmPackage::_instance())->getUnionDef();
    return _eclass;
}

