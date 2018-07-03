// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/IncludeImpl.cpp
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

#include "Include.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::idlmm;

/*PROTECTED REGION ID(IncludeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Include::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(IncludeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Include::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::INCLUDE__IMPORTURI:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_importURI);
    }
        return _any;

    }
    throw "Error";
}

void Include::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::INCLUDE__IMPORTURI:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_importURI);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Include::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::INCLUDE__IMPORTURI:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_importURI);

    }
    throw "Error";
}

void Include::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Include::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::idlmm::IdlmmPackage_ptr >(::idlmm::IdlmmPackage::_instance())->getInclude();
    return _eclass;
}

