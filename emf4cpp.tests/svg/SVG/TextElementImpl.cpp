// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/TextElementImpl.cpp
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

#include "TextElement.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/GraphicalElement.hpp>
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

/*PROTECTED REGION ID(TextElementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::SVG;

void TextElement::_initialize()
{
    // Supertypes
    ::SVG::GraphicalElement::_initialize();

    // References

    /*PROTECTED REGION ID(TextElementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject TextElement::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ELEMENT__OWNER:
    {
        _any = m_owner->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__TARGET:
    {
        _any = m_target->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__ATTRIBUTE:
    {
        _any = m_attribute->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__POSITION:
    {
        if (m_position)
            _any = m_position->as< ::ecore::EObject >();
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__SIZE:
    {
        if (m_size)
            _any = m_size->as< ::ecore::EObject >();
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__ROOT:
    {
        if (m_root)
            _any = m_root->as< ::ecore::EObject >();
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__FILL:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::String
                > ::toAny(_any, m_fill);
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__VIEWBOX:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::String
                > ::toAny(_any, m_viewBox);
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__GROUP:
    {
        if (m_group)
            _any = m_group->as< ::ecore::EObject >();
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__IDENTIFIER:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::String
                > ::toAny(_any, m_identifier);
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__DRAWSMARKER:
    {
        if (m_drawsMarker)
            _any = m_drawsMarker->as< ::ecore::EObject >();
    }
        return _any;
    case ::SVG::SVGPackage::GRAPHICALELEMENT__STROKE:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::String
                > ::toAny(_any, m_stroke);
    }
        return _any;
    case ::SVG::SVGPackage::TEXTELEMENT__ROTATE:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::Double
                > ::toAny(_any, m_rotate);
    }
        return _any;
    case ::SVG::SVGPackage::TEXTELEMENT__TEXTLENGTH:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::String
                > ::toAny(_any, m_textLength);
    }
        return _any;
    case ::SVG::SVGPackage::TEXTELEMENT__FONTSIZE:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::String
                > ::toAny(_any, m_fontSize);
    }
        return _any;

    }
    throw "Error";
}

void TextElement::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ELEMENT__OWNER:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::SVG::Element::getOwner().clear();
        ::SVG::Element::getOwner().insert_all(*_t0);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__TARGET:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::SVG::Element::getTarget().clear();
        ::SVG::Element::getTarget().insert_all(*_t0);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__ATTRIBUTE:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::SVG::Element::getAttribute().clear();
        ::SVG::Element::getAttribute().insert_all(*_t0);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__POSITION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::SVG::Coordinates_ptr _t1 =
                dynamic_cast< ::SVG::Coordinates* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::SVG::Coordinates >(_t0);*/
        ::SVG::Element::setPosition(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__SIZE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::SVG::Dimension_ptr _t1 = dynamic_cast< ::SVG::Dimension* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::SVG::Dimension >(_t0);*/
        ::SVG::Element::setSize(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__ROOT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::SVG::Svg_ptr _t1 = dynamic_cast< ::SVG::Svg* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::SVG::Svg >(_t0);*/
        ::SVG::Element::setRoot(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__FILL:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::String
                > ::fromAny(_newValue, m_fill);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__VIEWBOX:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::String
                > ::fromAny(_newValue, m_viewBox);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__GROUP:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::SVG::GroupingElement_ptr _t1 =
                dynamic_cast< ::SVG::GroupingElement* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::SVG::GroupingElement >(_t0);*/
        ::SVG::Element::setGroup(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__IDENTIFIER:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::String
                > ::fromAny(_newValue, m_identifier);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__DRAWSMARKER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::SVG::Marker_ptr _t1 = dynamic_cast< ::SVG::Marker* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::SVG::Marker >(_t0);*/
        ::SVG::Element::setDrawsMarker(_t1);
    }
        return;
    case ::SVG::SVGPackage::GRAPHICALELEMENT__STROKE:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::String
                > ::fromAny(_newValue, m_stroke);
    }
        return;
    case ::SVG::SVGPackage::TEXTELEMENT__ROTATE:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::Double
                > ::fromAny(_newValue, m_rotate);
    }
        return;
    case ::SVG::SVGPackage::TEXTELEMENT__TEXTLENGTH:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::String
                > ::fromAny(_newValue, m_textLength);
    }
        return;
    case ::SVG::SVGPackage::TEXTELEMENT__FONTSIZE:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::String
                > ::fromAny(_newValue, m_fontSize);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean TextElement::eIsSet(::ecore::EInt _featureID)
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
        return (bool) m_position;
    case ::SVG::SVGPackage::ELEMENT__SIZE:
        return (bool) m_size;
    case ::SVG::SVGPackage::ELEMENT__ROOT:
        return (bool) m_root;
    case ::SVG::SVGPackage::ELEMENT__FILL:
        return ::ecorecpp::mapping::set_traits < ::PrimitiveTypes::String
                > ::is_set(m_fill);
    case ::SVG::SVGPackage::ELEMENT__VIEWBOX:
        return ::ecorecpp::mapping::set_traits < ::PrimitiveTypes::String
                > ::is_set(m_viewBox);
    case ::SVG::SVGPackage::ELEMENT__GROUP:
        return (bool) m_group;
    case ::SVG::SVGPackage::ELEMENT__IDENTIFIER:
        return ::ecorecpp::mapping::set_traits < ::PrimitiveTypes::String
                > ::is_set(m_identifier);
    case ::SVG::SVGPackage::ELEMENT__DRAWSMARKER:
        return (bool) m_drawsMarker;
    case ::SVG::SVGPackage::GRAPHICALELEMENT__STROKE:
        return ::ecorecpp::mapping::set_traits < ::PrimitiveTypes::String
                > ::is_set(m_stroke);
    case ::SVG::SVGPackage::TEXTELEMENT__ROTATE:
        return ::ecorecpp::mapping::set_traits < ::PrimitiveTypes::Double
                > ::is_set(m_rotate);
    case ::SVG::SVGPackage::TEXTELEMENT__TEXTLENGTH:
        return ::ecorecpp::mapping::set_traits < ::PrimitiveTypes::String
                > ::is_set(m_textLength);
    case ::SVG::SVGPackage::TEXTELEMENT__FONTSIZE:
        return ::ecorecpp::mapping::set_traits < ::PrimitiveTypes::String
                > ::is_set(m_fontSize);

    }
    throw "Error";
}

void TextElement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr TextElement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::SVG::SVGPackage* >(::SVG::SVGPackage::_instance().get())->getTextElement();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TextElement::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ELEMENT__OWNER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::SVG::SvgFile_ptr _t1 = dynamic_cast< ::SVG::SvgFile* >(_t0.get());

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::SVG::SvgFile_ptr,
                        -1, false, true >&) ::SVG::Element::getOwner();
        container.basicAdd(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__TARGET:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::SVG::Use_ptr _t1 = dynamic_cast< ::SVG::Use* >(_t0.get());

        // add to a list
        auto& container = (::ecorecpp::mapping::ReferenceEListImpl<
                ::SVG::Use_ptr, -1, false, true >&) ::SVG::Element::getTarget();
        container.basicAdd(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__ATTRIBUTE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::SVG::Attribute_ptr _t1 = dynamic_cast< ::SVG::Attribute* >(_t0.get());

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Attribute_ptr,
                        -1, false, true >&) ::SVG::Element::getAttribute();
        container.basicAdd(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__POSITION:
    {
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__SIZE:
    {
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__ROOT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::SVG::Svg_ptr _t1 = dynamic_cast< ::SVG::Svg* >(_t0.get());

        // set reference
        basicsetRoot(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__GROUP:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::SVG::GroupingElement_ptr _t1 =
                dynamic_cast< ::SVG::GroupingElement* >(_t0.get());

        // set reference
        basicsetGroup(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__DRAWSMARKER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::SVG::Marker_ptr _t1 = dynamic_cast< ::SVG::Marker* >(_t0.get());

        // set reference
        basicsetDrawsMarker(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TextElement::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ELEMENT__OWNER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::SVG::SvgFile_ptr _t1 = dynamic_cast< ::SVG::SvgFile* >(_t0.get());

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::SVG::SvgFile_ptr,
                        -1, false, true >&) ::SVG::Element::getOwner();
        container.basicRemove(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__TARGET:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::SVG::Use_ptr _t1 = dynamic_cast< ::SVG::Use* >(_t0.get());

        // add to a list
        auto& container = (::ecorecpp::mapping::ReferenceEListImpl<
                ::SVG::Use_ptr, -1, false, true >&) ::SVG::Element::getTarget();
        container.basicRemove(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__ATTRIBUTE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::SVG::Attribute_ptr _t1 = dynamic_cast< ::SVG::Attribute* >(_t0.get());

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Attribute_ptr,
                        -1, false, true >&) ::SVG::Element::getAttribute();
        container.basicRemove(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__POSITION:
    {
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__SIZE:
    {
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__ROOT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::SVG::Svg_ptr _t1 = dynamic_cast< ::SVG::Svg* >(_t0.get());

        // set reference
        if (basicgetRoot() == _t1)
            basicsetRoot(nullptr);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__GROUP:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::SVG::GroupingElement_ptr _t1 =
                dynamic_cast< ::SVG::GroupingElement* >(_t0.get());

        // set reference
        if (basicgetGroup() == _t1)
            basicsetGroup(nullptr);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__DRAWSMARKER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::SVG::Marker_ptr _t1 = dynamic_cast< ::SVG::Marker* >(_t0.get());

        // set reference
        if (basicgetDrawsMarker() == _t1)
            basicsetDrawsMarker(nullptr);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

