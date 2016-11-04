// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/SvgFileImpl.cpp
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

#include "SvgFile.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/ReferencedFile.hpp>
#include <SVG/Image.hpp>
#include <SVG/Svg.hpp>
#include <SVG/Element.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::SVG;

/*PROTECTED REGION ID(SvgFileImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void SvgFile::_initialize()
{
    // Supertypes
    ::SVG::ReferencedFile::_initialize();

    // References

    /*PROTECTED REGION ID(SvgFileImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SvgFile::eGet(::ecore::EInt _featureID,
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
    case ::SVG::SVGPackage::SVGFILE__TAG:
    {
        _any = static_cast< ::ecore::EObject* >(m_tag);
    }
        return _any;
    case ::SVG::SVGPackage::SVGFILE__ELEMENTS:
    {
        _any = m_elements->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void SvgFile::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::REFERENCEDFILE__REFERER:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject > ::ptr_type > (_newValue);
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
    case ::SVG::SVGPackage::SVGFILE__TAG:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::SVG::Svg_ptr _t1 = dynamic_cast< ::SVG::Svg_ptr >(_t0);
        ::SVG::SvgFile::setTag(_t1);
    }
        return;
    case ::SVG::SVGPackage::SVGFILE__ELEMENTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject > ::ptr_type > (_newValue);
        ::SVG::SvgFile::getElements().clear();
        ::SVG::SvgFile::getElements().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean SvgFile::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::REFERENCEDFILE__REFERER:
        return m_referer && m_referer->size();
    case ::SVG::SVGPackage::REFERENCEDFILE__NAME:
        return ::ecorecpp::mapping::set_traits < ::PrimitiveTypes::String
                > ::is_set(m_name);
    case ::SVG::SVGPackage::SVGFILE__TAG:
        return m_tag;
    case ::SVG::SVGPackage::SVGFILE__ELEMENTS:
        return m_elements && m_elements->size();

    }
    throw "Error";
}

void SvgFile::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr SvgFile::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::SVG::SVGPackage_ptr >(::SVG::SVGPackage::_instance())->getSvgFile();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SvgFile::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::REFERENCEDFILE__REFERER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::SVG::Image_ptr _t1 = dynamic_cast< ::SVG::Image_ptr >(_t0);

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Image, -1,
                        false, true >&) ::SVG::ReferencedFile::getReferer();
        container.basicAdd(_t1);
    }
        return;
    case ::SVG::SVGPackage::SVGFILE__TAG:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::SVG::Svg_ptr _t1 = dynamic_cast< ::SVG::Svg_ptr >(_t0);

        // set reference
        basicsetTag(_t1);
    }
        return;
    case ::SVG::SVGPackage::SVGFILE__ELEMENTS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::SVG::Element_ptr _t1 = dynamic_cast< ::SVG::Element_ptr >(_t0);

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Element, -1,
                        false, true >&) ::SVG::SvgFile::getElements();
        container.basicAdd(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SvgFile::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::REFERENCEDFILE__REFERER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::SVG::Image_ptr _t1 = dynamic_cast< ::SVG::Image_ptr >(_t0);

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Image, -1,
                        false, true >&) ::SVG::ReferencedFile::getReferer();
        container.basicRemove(_t1);
    }
        return;
    case ::SVG::SVGPackage::SVGFILE__TAG:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::SVG::Svg_ptr _t1 = dynamic_cast< ::SVG::Svg_ptr >(_t0);

        // set reference
        if (basicgetTag() == _t1)
            basicsetTag(nullptr);
    }
        return;
    case ::SVG::SVGPackage::SVGFILE__ELEMENTS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::SVG::Element_ptr _t1 = dynamic_cast< ::SVG::Element_ptr >(_t0);

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Element, -1,
                        false, true >&) ::SVG::SvgFile::getElements();
        container.basicRemove(_t1);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

