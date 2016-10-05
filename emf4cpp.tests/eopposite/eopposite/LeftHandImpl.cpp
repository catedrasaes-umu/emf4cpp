// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/LeftHandImpl.cpp
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

#include "LeftHand.hpp"
#include <eopposite/EoppositePackage.hpp>
#include <eopposite/NamedObject.hpp>
#include <eopposite/RightHand.hpp>
#include <eopposite/RightMultiple.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::eopposite;

/*PROTECTED REGION ID(LeftHandImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void LeftHand::_initialize()
{
    // Supertypes
    ::eopposite::NamedObject::_initialize();

    // References

    /*PROTECTED REGION ID(LeftHandImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject LeftHand::eGet(::ecore::EInt _featureID,
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
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTEE:
    {
        _any = static_cast< ::ecore::EObject* >(m_rightee);
    }
        return _any;
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTMULTIPLE:
    {
        _any = static_cast< ::ecore::EObject* >(m_rightMultiple);
    }
        return _any;

    }
    throw "Error";
}

void LeftHand::eSet(::ecore::EInt _featureID,
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
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTEE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::eopposite::RightHand_ptr _t1 =
                dynamic_cast< ::eopposite::RightHand_ptr >(_t0);
        ::eopposite::LeftHand::setRightee(_t1);
    }
        return;
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTMULTIPLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::eopposite::RightMultiple_ptr _t1 =
                dynamic_cast< ::eopposite::RightMultiple_ptr >(_t0);
        ::eopposite::LeftHand::setRightMultiple(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean LeftHand::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::NAMEDOBJECT__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTEE:
        return m_rightee;
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTMULTIPLE:
        return m_rightMultiple;

    }
    throw "Error";
}

void LeftHand::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr LeftHand::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::eopposite::EoppositePackage_ptr >(::eopposite::EoppositePackage::_instance())->getLeftHand();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void LeftHand::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTEE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::eopposite::RightHand_ptr _t1 =
                dynamic_cast< ::eopposite::RightHand_ptr >(_t0);

        // set reference
        basicsetRightee(_t1);
    }
        return;
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTMULTIPLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::eopposite::RightMultiple_ptr _t1 =
                dynamic_cast< ::eopposite::RightMultiple_ptr >(_t0);

        // set reference
        basicsetRightMultiple(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void LeftHand::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTEE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::eopposite::RightHand_ptr _t1 =
                dynamic_cast< ::eopposite::RightHand_ptr >(_t0);

        // set reference
        if (basicgetRightee() == _t1)
            basicsetRightee(nullptr);
    }
        return;
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTMULTIPLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::eopposite::RightMultiple_ptr _t1 =
                dynamic_cast< ::eopposite::RightMultiple_ptr >(_t0);

        // set reference
        if (basicgetRightMultiple() == _t1)
            basicsetRightMultiple(nullptr);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

