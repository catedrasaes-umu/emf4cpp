// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ResourceTests/ReferrerImpl.cpp
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

#include "Referrer.hpp"
#include <ResourceTests/ResourceTestsPackage.hpp>
#include <ResourceTests/ReferenceTarget.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ReferrerImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ResourceTests;

void Referrer::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(ReferrerImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Referrer::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ResourceTests::ResourceTestsPackage::REFERRER__REFERENCE:
    {
        if (m_reference)
            _any = m_reference->as< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void Referrer::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::ResourceTests::ResourceTestsPackage::REFERRER__REFERENCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ResourceTests::ReferenceTarget_ptr _t1 =
                dynamic_cast< ::ResourceTests::ReferenceTarget* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::ResourceTests::ReferenceTarget >(_t0);*/
        ::ResourceTests::Referrer::setReference(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Referrer::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ResourceTests::ResourceTestsPackage::REFERRER__REFERENCE:
        return (bool) m_reference;

    }
    throw "Error";
}

void Referrer::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Referrer::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::ResourceTests::ResourceTestsPackage* >(::ResourceTests::ResourceTestsPackage::_instance().get())->getReferrer();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Referrer::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::ResourceTests::ResourceTestsPackage::REFERRER__REFERENCE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Referrer::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::ResourceTests::ResourceTestsPackage::REFERRER__REFERENCE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

