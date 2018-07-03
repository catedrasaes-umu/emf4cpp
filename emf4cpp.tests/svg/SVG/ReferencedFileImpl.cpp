// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/ReferencedFileImpl.cpp
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

#include "ReferencedFile.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/Image.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::SVG;

/*PROTECTED REGION ID(ReferencedFileImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void ReferencedFile::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(ReferencedFileImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ReferencedFile::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::SVG::SVGPackage::REFERENCEDFILE__REFERER:
    {
        _any = m_referer->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::SVG::SVGPackage::REFERENCEDFILE__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::String
                > ::toAny(_any, m_name);
    }
        return _any;

    }
    throw "Error";
}

void ReferencedFile::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::REFERENCEDFILE__REFERER:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::SVG::ReferencedFile::getReferer().clear();
        ::SVG::ReferencedFile::getReferer().insert_all(*_t0);
    }
        return;
    case ::SVG::SVGPackage::REFERENCEDFILE__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::String
                > ::fromAny(_newValue, m_name);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ReferencedFile::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::REFERENCEDFILE__REFERER:
        return m_referer && m_referer->size();
    case ::SVG::SVGPackage::REFERENCEDFILE__NAME:
        return ::ecorecpp::mapping::set_traits < ::PrimitiveTypes::String
                > ::is_set(m_name);

    }
    throw "Error";
}

void ReferencedFile::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ReferencedFile::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::SVG::SVGPackage_ptr >(::SVG::SVGPackage::_instance())->getReferencedFile();
    return _eclass;
}

