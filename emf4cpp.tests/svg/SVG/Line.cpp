// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Line.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON Gmbh 2016 <soeren.henning@inchron.com>
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

#include "Line.hpp"
#include <SVG/Shape.hpp>
#include <SVG/SvgFile.hpp>
#include <SVG/Use.hpp>
#include <SVG/Attribute.hpp>
#include <SVG/Coordinates.hpp>
#include <SVG/Dimension.hpp>
#include <SVG/Svg.hpp>
#include <SVG/GroupingElement.hpp>
#include <SVG/Marker.hpp>
#include <SVG/Point.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "SVG/SVGPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::SVG;

// Default constructor
Line::Line()
{

    m_between.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Point, 2, false,
                    false >(this,
                    ::SVG::SVGPackage::_instance()->getLine__between()));

    /*PROTECTED REGION ID(LineImpl__LineImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Line::~Line()
{
}

/*PROTECTED REGION ID(Line.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::PrimitiveTypes::String Line::getMarkerEnd() const
{
    return m_markerEnd;
}

void Line::setMarkerEnd(::PrimitiveTypes::String _markerEnd)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::String _old_markerEnd = m_markerEnd;
#endif
    m_markerEnd = _markerEnd;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getLine__markerEnd(),
                _old_markerEnd,
                m_markerEnd
        );
        eNotify(&notification);
    }
#endif
}

::PrimitiveTypes::String Line::getMarkerStart() const
{
    return m_markerStart;
}

void Line::setMarkerStart(::PrimitiveTypes::String _markerStart)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::String _old_markerStart = m_markerStart;
#endif
    m_markerStart = _markerStart;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getLine__markerStart(),
                _old_markerStart,
                m_markerStart
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::SVG::Point >& Line::getBetween() const
{
    return *m_between;
}

::ecorecpp::mapping::EList< ::SVG::Point >& Line::getBetween()
{
    return *m_between;
}

