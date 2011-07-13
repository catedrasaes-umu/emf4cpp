// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/TextImpl.cpp
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

#include "Text.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/TextElement.hpp>
#include <SVG/SvgFile.hpp>
#include <SVG/Use.hpp>
#include <SVG/Attribute.hpp>
#include <SVG/Coordinates.hpp>
#include <SVG/Dimension.hpp>
#include <SVG/Svg.hpp>
#include <SVG/GroupingElement.hpp>
#include <SVG/Marker.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::SVG;

/*PROTECTED REGION ID(TextImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Text::_initialize()
{
    // Supertypes
    ::SVG::TextElement::_initialize();

    // Rerefences

    /*PROTECTED REGION ID(TextImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject Text::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ELEMENT__OWNER:
    {
        _any = m_owner->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__TARGET:
    {
        _any = m_target->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__ATTRIBUTE:
    {
        _any = m_attribute->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__POSITION:
    {
        _any = static_cast< ::ecore::EObject* > (m_position);
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__SIZE:
    {
        _any = static_cast< ::ecore::EObject* > (m_size);
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__ROOT:
    {
        _any = static_cast< ::ecore::EObject* > (m_root);
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__FILL:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::toAny(
                _any, m_fill);
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__VIEWBOX:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::toAny(
                _any, m_viewBox);
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__GROUP:
    {
        _any = static_cast< ::ecore::EObject* > (m_group);
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__IDENTIFIER:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::toAny(
                _any, m_identifier);
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__DRAWSMARKER:
    {
        _any = static_cast< ::ecore::EObject* > (m_drawsMarker);
    }
        return _any;
    case ::SVG::SVGPackage::GRAPHICALELEMENT__STROKE:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::toAny(
                _any, m_stroke);
    }
        return _any;
    case ::SVG::SVGPackage::TEXTELEMENT__ROTATE:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::Double >::toAny(
                _any, m_rotate);
    }
        return _any;
    case ::SVG::SVGPackage::TEXTELEMENT__TEXTLENGTH:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::toAny(
                _any, m_textLength);
    }
        return _any;
    case ::SVG::SVGPackage::TEXTELEMENT__FONTSIZE:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::toAny(
                _any, m_fontSize);
    }
        return _any;
    case ::SVG::SVGPackage::TEXT__LENGTHADJUST:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::toAny(
                _any, m_lengthAdjust);
    }
        return _any;
    case ::SVG::SVGPackage::TEXT__CONTENT:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::toAny(
                _any, m_content);
    }
        return _any;

    }
    throw "Error";
}

void Text::eSet(::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ELEMENT__OWNER:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::SVG::Element::getOwner().clear();
        ::SVG::Element::getOwner().insert_all(*_t0);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__TARGET:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::SVG::Element::getTarget().clear();
        ::SVG::Element::getTarget().insert_all(*_t0);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__ATTRIBUTE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::SVG::Element::getAttribute().clear();
        ::SVG::Element::getAttribute().insert_all(*_t0);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__POSITION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::SVG::Coordinates_ptr _t1 =
                dynamic_cast< ::SVG::Coordinates_ptr > (_t0);
        ::SVG::Element::setPosition(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__SIZE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::SVG::Dimension_ptr _t1 = dynamic_cast< ::SVG::Dimension_ptr > (_t0);
        ::SVG::Element::setSize(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__ROOT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::SVG::Svg_ptr _t1 = dynamic_cast< ::SVG::Svg_ptr > (_t0);
        ::SVG::Element::setRoot(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__FILL:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::fromAny(
                _newValue, m_fill);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__VIEWBOX:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::fromAny(
                _newValue, m_viewBox);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__GROUP:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::SVG::GroupingElement_ptr _t1 =
                dynamic_cast< ::SVG::GroupingElement_ptr > (_t0);
        ::SVG::Element::setGroup(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__IDENTIFIER:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::fromAny(
                _newValue, m_identifier);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__DRAWSMARKER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::SVG::Marker_ptr _t1 = dynamic_cast< ::SVG::Marker_ptr > (_t0);
        ::SVG::Element::setDrawsMarker(_t1);
    }
        return;
    case ::SVG::SVGPackage::GRAPHICALELEMENT__STROKE:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::fromAny(
                _newValue, m_stroke);
    }
        return;
    case ::SVG::SVGPackage::TEXTELEMENT__ROTATE:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::Double >::fromAny(
                _newValue, m_rotate);
    }
        return;
    case ::SVG::SVGPackage::TEXTELEMENT__TEXTLENGTH:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::fromAny(
                _newValue, m_textLength);
    }
        return;
    case ::SVG::SVGPackage::TEXTELEMENT__FONTSIZE:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::fromAny(
                _newValue, m_fontSize);
    }
        return;
    case ::SVG::SVGPackage::TEXT__LENGTHADJUST:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::fromAny(
                _newValue, m_lengthAdjust);
    }
        return;
    case ::SVG::SVGPackage::TEXT__CONTENT:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::fromAny(
                _newValue, m_content);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Text::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ELEMENT__OWNER:
        return m_owner && m_owner->size();
    case ::SVG::SVGPackage::ELEMENT__TARGET:
        return m_target && m_target->size();
    case ::SVG::SVGPackage::ELEMENT__ATTRIBUTE:
        return m_attribute && m_attribute->size();
    case ::SVG::SVGPackage::ELEMENT__POSITION:
        return m_position;
    case ::SVG::SVGPackage::ELEMENT__SIZE:
        return m_size;
    case ::SVG::SVGPackage::ELEMENT__ROOT:
        return m_root;
    case ::SVG::SVGPackage::ELEMENT__FILL:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::String >::is_set(
                m_fill);
    case ::SVG::SVGPackage::ELEMENT__VIEWBOX:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::String >::is_set(
                m_viewBox);
    case ::SVG::SVGPackage::ELEMENT__GROUP:
        return m_group;
    case ::SVG::SVGPackage::ELEMENT__IDENTIFIER:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::String >::is_set(
                m_identifier);
    case ::SVG::SVGPackage::ELEMENT__DRAWSMARKER:
        return m_drawsMarker;
    case ::SVG::SVGPackage::GRAPHICALELEMENT__STROKE:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::String >::is_set(
                m_stroke);
    case ::SVG::SVGPackage::TEXTELEMENT__ROTATE:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::Double >::is_set(
                m_rotate);
    case ::SVG::SVGPackage::TEXTELEMENT__TEXTLENGTH:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::String >::is_set(
                m_textLength);
    case ::SVG::SVGPackage::TEXTELEMENT__FONTSIZE:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::String >::is_set(
                m_fontSize);
    case ::SVG::SVGPackage::TEXT__LENGTHADJUST:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::String >::is_set(
                m_lengthAdjust);
    case ::SVG::SVGPackage::TEXT__CONTENT:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::String >::is_set(
                m_content);

    }
    throw "Error";
}

void Text::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Text::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::SVG::SVGPackage_ptr > (::SVG::SVGPackage::_instance())->getText();
    return _eclass;
}

