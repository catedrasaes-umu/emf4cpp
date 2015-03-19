// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/AbsoluteCoordImpl.cpp
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

#include "AbsoluteCoord.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/Coordinates.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::SVG;

/*PROTECTED REGION ID(AbsoluteCoordImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void AbsoluteCoord::_initialize()
{
    // Supertypes
    ::SVG::Coordinates::_initialize();

    // Rerefences

    /*PROTECTED REGION ID(AbsoluteCoordImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject AbsoluteCoord::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::SVG::SVGPackage::COORDINATES__X:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::Double >::toAny(
                _any, m_x);
    }
        return _any;
    case ::SVG::SVGPackage::COORDINATES__Y:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::Double >::toAny(
                _any, m_y);
    }
        return _any;

    }
    throw "Error";
}

void AbsoluteCoord::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::COORDINATES__X:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::Double >::fromAny(
                _newValue, m_x);
    }
        return;
    case ::SVG::SVGPackage::COORDINATES__Y:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::Double >::fromAny(
                _newValue, m_y);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean AbsoluteCoord::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::COORDINATES__X:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::Double >::is_set(
                m_x);
    case ::SVG::SVGPackage::COORDINATES__Y:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::Double >::is_set(
                m_y);

    }
    throw "Error";
}

void AbsoluteCoord::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr AbsoluteCoord::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::SVG::SVGPackage_ptr > (::SVG::SVGPackage::_instance())->getAbsoluteCoord();
    return _eclass;
}

