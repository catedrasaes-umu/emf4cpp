// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/TextElement.cpp
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

#include "TextElement.hpp"
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
#include "SVG/SVGPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::SVG;

// Default constructor
TextElement::TextElement()
{

    /*PROTECTED REGION ID(TextElementImpl__TextElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

TextElement::~TextElement()
{
}

/*PROTECTED REGION ID(TextElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::PrimitiveTypes::Double TextElement::getRotate() const
{
    return m_rotate;
}

void TextElement::setRotate(::PrimitiveTypes::Double _rotate)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::Double _old_rotate = m_rotate;
#endif
    m_rotate = _rotate;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getTextElement__rotate(),
                _old_rotate,
                m_rotate
        );
        eNotify(&notification);
    }
#endif
}

::PrimitiveTypes::String TextElement::getTextLength() const
{
    return m_textLength;
}

void TextElement::setTextLength(::PrimitiveTypes::String _textLength)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::String _old_textLength = m_textLength;
#endif
    m_textLength = _textLength;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getTextElement__textLength(),
                _old_textLength,
                m_textLength
        );
        eNotify(&notification);
    }
#endif
}

::PrimitiveTypes::String TextElement::getFontSize() const
{
    return m_fontSize;
}

void TextElement::setFontSize(::PrimitiveTypes::String _fontSize)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::String _old_fontSize = m_fontSize;
#endif
    m_fontSize = _fontSize;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getTextElement__fontSize(),
                _old_fontSize,
                m_fontSize
        );
        eNotify(&notification);
    }
#endif
}

// References

