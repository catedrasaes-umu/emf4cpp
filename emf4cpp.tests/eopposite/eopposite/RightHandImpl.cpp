// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/RightHandImpl.cpp
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

#include "RightHand.hpp"
#include <eopposite/EoppositePackage.hpp>
#include <eopposite/NamedObject.hpp>
#include <eopposite/LeftHand.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(RightHandImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::eopposite;

void RightHand::_initialize()
{
    // Supertypes
    ::eopposite::NamedObject::_initialize();

    // References

    /*PROTECTED REGION ID(RightHandImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject RightHand::eGet(::ecore::EInt _featureID,
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
    case ::eopposite::EoppositePackage::RIGHTHAND__LEFTEE:
    {
        if (m_leftee)
            _any = m_leftee->as< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void RightHand::eSet(::ecore::EInt _featureID,
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
    case ::eopposite::EoppositePackage::RIGHTHAND__LEFTEE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::eopposite::LeftHand_ptr _t1 =
                dynamic_cast< ::eopposite::LeftHand* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::eopposite::LeftHand >(_t0);*/
        ::eopposite::RightHand::setLeftee(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean RightHand::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::NAMEDOBJECT__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::eopposite::EoppositePackage::RIGHTHAND__LEFTEE:
        return (bool) m_leftee;

    }
    throw "Error";
}

void RightHand::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr RightHand::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::eopposite::EoppositePackage* >(::eopposite::EoppositePackage::_instance().get())->getRightHand();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void RightHand::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::RIGHTHAND__LEFTEE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::eopposite::LeftHand_ptr _t1 =
                dynamic_cast< ::eopposite::LeftHand* >(_t0.get());

        // set reference
        basicsetLeftee(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void RightHand::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::RIGHTHAND__LEFTEE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::eopposite::LeftHand_ptr _t1 =
                dynamic_cast< ::eopposite::LeftHand* >(_t0.get());

        // set reference
        if (basicgetLeftee() == _t1)
            basicsetLeftee(nullptr);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

