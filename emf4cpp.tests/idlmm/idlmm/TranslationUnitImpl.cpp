// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/TranslationUnitImpl.cpp
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

#include "TranslationUnit.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Contained.hpp>
#include <idlmm/Include.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::idlmm;

/*PROTECTED REGION ID(TranslationUnitImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void TranslationUnit::_initialize()
{
    // Supertypes

    // References
    for (size_t i = 0; i < m_contains->size(); i++)
    {
        (*m_contains)[i]->_initialize();
    }
    for (size_t i = 0; i < m_includes->size(); i++)
    {
        (*m_includes)[i]->_initialize();
    }

    /*PROTECTED REGION ID(TranslationUnitImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject TranslationUnit::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::TRANSLATIONUNIT__CONTAINS:
    {
        _any = m_contains->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::idlmm::IdlmmPackage::TRANSLATIONUNIT__IDENTIFIER:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_identifier);
    }
        return _any;
    case ::idlmm::IdlmmPackage::TRANSLATIONUNIT__INCLUDES:
    {
        _any = m_includes->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void TranslationUnit::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::TRANSLATIONUNIT__CONTAINS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::idlmm::TranslationUnit::getContains().clear();
        ::idlmm::TranslationUnit::getContains().insert_all(*_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::TRANSLATIONUNIT__IDENTIFIER:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_identifier);
    }
        return;
    case ::idlmm::IdlmmPackage::TRANSLATIONUNIT__INCLUDES:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::idlmm::TranslationUnit::getIncludes().clear();
        ::idlmm::TranslationUnit::getIncludes().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean TranslationUnit::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::TRANSLATIONUNIT__CONTAINS:
        return m_contains && m_contains->size();
    case ::idlmm::IdlmmPackage::TRANSLATIONUNIT__IDENTIFIER:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_identifier);
    case ::idlmm::IdlmmPackage::TRANSLATIONUNIT__INCLUDES:
        return m_includes && m_includes->size();

    }
    throw "Error";
}

void TranslationUnit::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr TranslationUnit::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::idlmm::IdlmmPackage_ptr >(::idlmm::IdlmmPackage::_instance())->getTranslationUnit();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TranslationUnit::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::TRANSLATIONUNIT__CONTAINS:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::TRANSLATIONUNIT__INCLUDES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TranslationUnit::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::TRANSLATIONUNIT__CONTAINS:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::TRANSLATIONUNIT__INCLUDES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

