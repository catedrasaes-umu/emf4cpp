// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/RightMultipleImpl.cpp
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

#include "RightMultiple.hpp"
#include <eopposite/EoppositePackage.hpp>
#include <eopposite/NamedObject.hpp>
#include <eopposite/LeftHand.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::eopposite;

/*PROTECTED REGION ID(RightMultipleImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void RightMultiple::_initialize()
{
    // Supertypes
    ::eopposite::NamedObject::_initialize();

    // References

    /*PROTECTED REGION ID(RightMultipleImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject RightMultiple::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::NAMEDOBJECT__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::eopposite::EoppositePackage::RIGHTMULTIPLE__LEFTEES:
    {
        _any = m_leftees->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void RightMultiple::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::NAMEDOBJECT__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_name);
    }
        return;
    case ::eopposite::EoppositePackage::RIGHTMULTIPLE__LEFTEES:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::eopposite::RightMultiple::getLeftees().clear();
        ::eopposite::RightMultiple::getLeftees().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean RightMultiple::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::NAMEDOBJECT__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::eopposite::EoppositePackage::RIGHTMULTIPLE__LEFTEES:
        return m_leftees && m_leftees->size();

    }
    throw "Error";
}

void RightMultiple::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr RightMultiple::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::eopposite::EoppositePackage_ptr >(::eopposite::EoppositePackage::_instance())->getRightMultiple();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void RightMultiple::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::RIGHTMULTIPLE__LEFTEES:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::eopposite::LeftHand_ptr _t1 =
                dynamic_cast< ::eopposite::LeftHand_ptr >(_t0);

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::eopposite::LeftHand,
                        -1, false, true >&) ::eopposite::RightMultiple::getLeftees();
        container.basicAdd(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void RightMultiple::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::RIGHTMULTIPLE__LEFTEES:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::eopposite::LeftHand_ptr _t1 =
                dynamic_cast< ::eopposite::LeftHand_ptr >(_t0);

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::eopposite::LeftHand,
                        -1, false, true >&) ::eopposite::RightMultiple::getLeftees();
        container.basicRemove(_t1);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

