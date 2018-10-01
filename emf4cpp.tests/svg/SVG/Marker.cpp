// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Marker.cpp
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

#include "Marker.hpp"
#include <SVG/Shape.hpp>
#include <SVG/SvgFile.hpp>
#include <SVG/Use.hpp>
#include <SVG/Attribute.hpp>
#include <SVG/Coordinates.hpp>
#include <SVG/Dimension.hpp>
#include <SVG/Svg.hpp>
#include <SVG/GroupingElement.hpp>
#include <SVG/Marker.hpp>
#include <SVG/Element.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "SVG/SVGPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Marker.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::SVG;

// Default constructor
Marker::Marker()
{

    m_drawing.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Element_ptr, -1,
                    true, true >(this,
                    ::SVG::SVGPackage::_instance()->getMarker__drawing(),
                    ::SVG::SVGPackage::ELEMENT__DRAWSMARKER));

    /*PROTECTED REGION ID(MarkerImpl__MarkerImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Marker::~Marker()
{
}

// Attributes

::PrimitiveTypes::String Marker::getMarkerUnits() const
{
    return m_markerUnits;
}

void Marker::setMarkerUnits(::PrimitiveTypes::String _markerUnits)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::String _old_markerUnits = m_markerUnits;
#endif
    m_markerUnits = _markerUnits;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::SVG::SVGPackage::_instance()->getMarker__markerUnits(),
                _old_markerUnits,
                m_markerUnits
        );
        eNotify(&notification);
    }
#endif
}

::PrimitiveTypes::Double Marker::getRefX() const
{
    return m_refX;
}

void Marker::setRefX(::PrimitiveTypes::Double _refX)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::Double _old_refX = m_refX;
#endif
    m_refX = _refX;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::SVG::SVGPackage::_instance()->getMarker__refX(),
                _old_refX,
                m_refX
        );
        eNotify(&notification);
    }
#endif
}

::PrimitiveTypes::Double Marker::getRefY() const
{
    return m_refY;
}

void Marker::setRefY(::PrimitiveTypes::Double _refY)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::Double _old_refY = m_refY;
#endif
    m_refY = _refY;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::SVG::SVGPackage::_instance()->getMarker__refY(),
                _old_refY,
                m_refY
        );
        eNotify(&notification);
    }
#endif
}

::PrimitiveTypes::Double Marker::getMarkerWidth() const
{
    return m_markerWidth;
}

void Marker::setMarkerWidth(::PrimitiveTypes::Double _markerWidth)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::Double _old_markerWidth = m_markerWidth;
#endif
    m_markerWidth = _markerWidth;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::SVG::SVGPackage::_instance()->getMarker__markerWidth(),
                _old_markerWidth,
                m_markerWidth
        );
        eNotify(&notification);
    }
#endif
}

::PrimitiveTypes::Double Marker::getMarkerHeight() const
{
    return m_markerHeight;
}

void Marker::setMarkerHeight(::PrimitiveTypes::Double _markerHeight)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::Double _old_markerHeight = m_markerHeight;
#endif
    m_markerHeight = _markerHeight;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::SVG::SVGPackage::_instance()->getMarker__markerHeight(),
                _old_markerHeight,
                m_markerHeight
        );
        eNotify(&notification);
    }
#endif
}

::PrimitiveTypes::String Marker::getOrient() const
{
    return m_orient;
}

void Marker::setOrient(::PrimitiveTypes::String _orient)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::String _old_orient = m_orient;
#endif
    m_orient = _orient;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::SVG::SVGPackage::_instance()->getMarker__orient(),
                _old_orient,
                m_orient
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::SVG::Element_ptr >& Marker::getDrawing() const
{
    return *m_drawing;
}

::ecorecpp::mapping::EList< ::SVG::Element_ptr >& Marker::getDrawing()
{
    return *m_drawing;
}

