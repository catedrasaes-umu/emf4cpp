// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/UnionDefImpl.cpp
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

/*PROTECTED REGION ID(UnionDefImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::idlmm;

void UnionDef::_initialize()
{
    // Supertypes
    ::idlmm::TypedefDef::_initialize();

    // References
    for (size_t i = 0; i < m_unionMembers->size(); i++)
    {
        (*m_unionMembers)[i]->_initialize();
    }
    if (m_containedDiscrim)
    {
        m_containedDiscrim->_initialize();
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
        ::ecorecpp::mapping::any_traits < ::idlmm::ETypeCode
                > ::toAny(_any, m_typeCode);
    }
        return _any;
    case ::idlmm::IdlmmPackage::CONTAINED__IDENTIFIER:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_identifier);
    }
        return _any;
    case ::idlmm::IdlmmPackage::CONTAINED__REPOSITORYID:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_repositoryId);
    }
        return _any;
    case ::idlmm::IdlmmPackage::CONTAINED__VERSION:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_version);
    }
        return _any;
    case ::idlmm::IdlmmPackage::CONTAINED__ABSOLUTENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_absoluteName);
    }
        return _any;
    case ::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN:
    {
        if (m_definedIn)
            _any = ::ecore::as < ::ecore::EObject > (m_definedIn);
    }
        return _any;
    case ::idlmm::IdlmmPackage::UNIONDEF__UNIONMEMBERS:
    {
        _any = m_unionMembers->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::idlmm::IdlmmPackage::UNIONDEF__CONTAINEDDISCRIM:
    {
        if (m_containedDiscrim)
            _any = ::ecore::as < ::ecore::EObject > (m_containedDiscrim);
    }
        return _any;
    case ::idlmm::IdlmmPackage::UNIONDEF__SHAREDDISCRIM:
    {
        if (m_sharedDiscrim)
            _any = ::ecore::as < ::ecore::EObject > (m_sharedDiscrim);
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
        ::idlmm::ETypeCode _t0;
        ::ecorecpp::mapping::any_traits < ::idlmm::ETypeCode
                > ::fromAny(_newValue, _t0);
        ::idlmm::IDLType::setTypeCode(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINED__IDENTIFIER:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::idlmm::Contained::setIdentifier(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINED__REPOSITORYID:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::idlmm::Contained::setRepositoryId(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINED__VERSION:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::idlmm::Contained::setVersion(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINED__ABSOLUTENAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::idlmm::Contained::setAbsoluteName(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::idlmm::Container_ptr _t1 =
                dynamic_cast< ::idlmm::Container* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::idlmm::Container >(_t0);*/
        ::idlmm::Contained::setDefinedIn(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__UNIONMEMBERS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::idlmm::UnionDef::getUnionMembers().clear();
        ::idlmm::UnionDef::getUnionMembers().insert_all(*_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__CONTAINEDDISCRIM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::idlmm::IDLType_ptr _t1 = dynamic_cast< ::idlmm::IDLType* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::idlmm::IDLType >(_t0);*/
        ::idlmm::UnionDef::setContainedDiscrim(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__SHAREDDISCRIM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::idlmm::TypedefDef_ptr _t1 =
                dynamic_cast< ::idlmm::TypedefDef* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::idlmm::TypedefDef >(_t0);*/
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
        return ::ecorecpp::mapping::set_traits < ::idlmm::ETypeCode
                > ::is_set(m_typeCode);
    case ::idlmm::IdlmmPackage::CONTAINED__IDENTIFIER:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_identifier);
    case ::idlmm::IdlmmPackage::CONTAINED__REPOSITORYID:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_repositoryId);
    case ::idlmm::IdlmmPackage::CONTAINED__VERSION:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_version);
    case ::idlmm::IdlmmPackage::CONTAINED__ABSOLUTENAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_absoluteName);
    case ::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN:
        return (bool) m_definedIn;
    case ::idlmm::IdlmmPackage::UNIONDEF__UNIONMEMBERS:
        return m_unionMembers && m_unionMembers->size();
    case ::idlmm::IdlmmPackage::UNIONDEF__CONTAINEDDISCRIM:
        return (bool) m_containedDiscrim;
    case ::idlmm::IdlmmPackage::UNIONDEF__SHAREDDISCRIM:
        return (bool) m_sharedDiscrim;

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
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::idlmm::IdlmmPackage* >(::idlmm::IdlmmPackage::_instance().get())->getUnionDef();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void UnionDef::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::idlmm::Container_ptr _t1 =
                dynamic_cast< ::idlmm::Container* >(_t0.get());

        // set reference
        basicsetDefinedIn(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__UNIONMEMBERS:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__CONTAINEDDISCRIM:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__SHAREDDISCRIM:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void UnionDef::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::idlmm::Container_ptr _t1 =
                dynamic_cast< ::idlmm::Container* >(_t0.get());

        // set reference
        if (basicgetDefinedIn() == _t1)
            basicsetDefinedIn(nullptr);
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__UNIONMEMBERS:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__CONTAINEDDISCRIM:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__SHAREDDISCRIM:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

