// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Path.cpp
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

#include "Path.hpp"
#include <SVG/Shape.hpp>
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
Path::Path()
{

    /*PROTECTED REGION ID(PathImpl__PathImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Path::~Path()
{
}

/*PROTECTED REGION ID(Path.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::PrimitiveTypes::Double Path::getPathLength() const
{
    return m_pathLength;
}

void Path::setPathLength(::PrimitiveTypes::Double _pathLength)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::Double _old_pathLength = m_pathLength;
#endif
    m_pathLength = _pathLength;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getPath__pathLength(),
                _old_pathLength,
                m_pathLength
        );
        eNotify(&notification);
    }
#endif
}

::PrimitiveTypes::String Path::getD() const
{
    return m_d;
}

void Path::setD(::PrimitiveTypes::String _d)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::String _old_d = m_d;
#endif
    m_d = _d;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getPath__d(),
                _old_d,
                m_d
        );
        eNotify(&notification);
    }
#endif
}

::PrimitiveTypes::String Path::getMarkerEnd() const
{
    return m_markerEnd;
}

void Path::setMarkerEnd(::PrimitiveTypes::String _markerEnd)
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
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getPath__markerEnd(),
                _old_markerEnd,
                m_markerEnd
        );
        eNotify(&notification);
    }
#endif
}

::PrimitiveTypes::String Path::getMarkerStart() const
{
    return m_markerStart;
}

void Path::setMarkerStart(::PrimitiveTypes::String _markerStart)
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
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getPath__markerStart(),
                _old_markerStart,
                m_markerStart
        );
        eNotify(&notification);
    }
#endif
}

// References

