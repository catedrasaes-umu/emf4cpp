// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/TopLevelImpl.cpp
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

#include "TopLevel.hpp"
#include <eopposite/EoppositePackage.hpp>
#include <eopposite/NamedObject.hpp>
#include <eopposite/LeftHand.hpp>
#include <eopposite/RightHand.hpp>
#include <eopposite/RightMultiple.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::eopposite;

/*PROTECTED REGION ID(TopLevelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void TopLevel::_initialize()
{
    // Supertypes
    ::eopposite::NamedObject::_initialize();

    // References
    for (size_t i = 0; i < m_leftees->size(); i++)
    {
        (*m_leftees)[i]->_initialize();
    }
    for (size_t i = 0; i < m_rightees->size(); i++)
    {
        (*m_rightees)[i]->_initialize();
    }
    for (size_t i = 0; i < m_rightMultiples->size(); i++)
    {
        (*m_rightMultiples)[i]->_initialize();
    }

    /*PROTECTED REGION ID(TopLevelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject TopLevel::eGet(::ecore::EInt _featureID,
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
    case ::eopposite::EoppositePackage::TOPLEVEL__LEFTEES:
    {
        _any = m_leftees->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTEES:
    {
        _any = m_rightees->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTMULTIPLES:
    {
        _any = m_rightMultiples->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void TopLevel::eSet(::ecore::EInt _featureID,
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
    case ::eopposite::EoppositePackage::TOPLEVEL__LEFTEES:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::eopposite::TopLevel::getLeftees().clear();
        ::eopposite::TopLevel::getLeftees().insert_all(*_t0);
    }
        return;
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTEES:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::eopposite::TopLevel::getRightees().clear();
        ::eopposite::TopLevel::getRightees().insert_all(*_t0);
    }
        return;
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTMULTIPLES:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::eopposite::TopLevel::getRightMultiples().clear();
        ::eopposite::TopLevel::getRightMultiples().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean TopLevel::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::NAMEDOBJECT__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::eopposite::EoppositePackage::TOPLEVEL__LEFTEES:
        return m_leftees && m_leftees->size();
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTEES:
        return m_rightees && m_rightees->size();
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTMULTIPLES:
        return m_rightMultiples && m_rightMultiples->size();

    }
    throw "Error";
}

void TopLevel::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr TopLevel::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::eopposite::EoppositePackage_ptr >(::eopposite::EoppositePackage::_instance())->getTopLevel();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TopLevel::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::TOPLEVEL__LEFTEES:
    {
    }
        return;
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTEES:
    {
    }
        return;
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTMULTIPLES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TopLevel::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::TOPLEVEL__LEFTEES:
    {
    }
        return;
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTEES:
    {
    }
        return;
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTMULTIPLES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

