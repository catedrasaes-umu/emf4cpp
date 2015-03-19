// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EStringToStringMapEntryImpl.cpp
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

#include "EStringToStringMapEntry.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::ecore;

/*PROTECTED REGION ID(EStringToStringMapEntryImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void EStringToStringMapEntry::_initialize()
{
    // Supertypes

    // Rerefences

    /*PROTECTED REGION ID(EStringToStringMapEntryImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject EStringToStringMapEntry::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ecore::EcorePackage::ESTRINGTOSTRINGMAPENTRY__KEY:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::toAny(_any, m_key);
    }
        return _any;
    case ::ecore::EcorePackage::ESTRINGTOSTRINGMAPENTRY__VALUE:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::toAny(_any,
                m_value);
    }
        return _any;

    }
    throw "Error";
}

void EStringToStringMapEntry::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::ESTRINGTOSTRINGMAPENTRY__KEY:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::fromAny(_newValue,
                m_key);
    }
        return;
    case ::ecore::EcorePackage::ESTRINGTOSTRINGMAPENTRY__VALUE:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::fromAny(_newValue,
                m_value);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean EStringToStringMapEntry::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::ESTRINGTOSTRINGMAPENTRY__KEY:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_key);
    case ::ecore::EcorePackage::ESTRINGTOSTRINGMAPENTRY__VALUE:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_value);

    }
    throw "Error";
}

void EStringToStringMapEntry::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr EStringToStringMapEntry::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::ecore::EcorePackage_ptr > (::ecore::EcorePackage::_instance())->getEStringToStringMapEntry();
    return _eclass;
}

