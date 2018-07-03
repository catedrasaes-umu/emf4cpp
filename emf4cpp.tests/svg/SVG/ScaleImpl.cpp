// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/ScaleImpl.cpp
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

#include "Scale.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/Transform.hpp>
#include <SVG/Element.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::SVG;

/*PROTECTED REGION ID(ScaleImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Scale::_initialize()
{
    // Supertypes
    ::SVG::Transform::_initialize();

    // References

    /*PROTECTED REGION ID(ScaleImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Scale::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ATTRIBUTE__ATTOWNER:
    {
        _any = m_attOwner->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::SVG::SVGPackage::SCALE__SX:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::Double
                > ::toAny(_any, m_sx);
    }
        return _any;
    case ::SVG::SVGPackage::SCALE__SY:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::Double
                > ::toAny(_any, m_sy);
    }
        return _any;

    }
    throw "Error";
}

void Scale::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ATTRIBUTE__ATTOWNER:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::SVG::Attribute::getAttOwner().clear();
        ::SVG::Attribute::getAttOwner().insert_all(*_t0);
    }
        return;
    case ::SVG::SVGPackage::SCALE__SX:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::Double
                > ::fromAny(_newValue, m_sx);
    }
        return;
    case ::SVG::SVGPackage::SCALE__SY:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::Double
                > ::fromAny(_newValue, m_sy);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Scale::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ATTRIBUTE__ATTOWNER:
        return m_attOwner && m_attOwner->size();
    case ::SVG::SVGPackage::SCALE__SX:
        return ::ecorecpp::mapping::set_traits < ::PrimitiveTypes::Double
                > ::is_set(m_sx);
    case ::SVG::SVGPackage::SCALE__SY:
        return ::ecorecpp::mapping::set_traits < ::PrimitiveTypes::Double
                > ::is_set(m_sy);

    }
    throw "Error";
}

void Scale::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Scale::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::SVG::SVGPackage_ptr >(::SVG::SVGPackage::_instance())->getScale();
    return _eclass;
}

