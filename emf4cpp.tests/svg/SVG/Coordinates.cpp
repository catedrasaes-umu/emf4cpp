// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Coordinates.cpp
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

#include "Coordinates.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "SVG/SVGPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Coordinates.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::SVG;

// Default constructor
Coordinates::Coordinates()
{

    /*PROTECTED REGION ID(CoordinatesImpl__CoordinatesImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Coordinates::~Coordinates()
{
}

// Attributes

::PrimitiveTypes::Double Coordinates::getX() const
{
    return m_x;
}

void Coordinates::setX(::PrimitiveTypes::Double _x)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::Double _old_x = m_x;
#endif
    m_x = _x;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::SVG::SVGPackage::_instance()->getCoordinates__x(),
                _old_x,
                m_x
        );
        eNotify(&notification);
    }
#endif
}

::PrimitiveTypes::Double Coordinates::getY() const
{
    return m_y;
}

void Coordinates::setY(::PrimitiveTypes::Double _y)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::Double _old_y = m_y;
#endif
    m_y = _y;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::SVG::SVGPackage::_instance()->getCoordinates__y(),
                _old_y,
                m_y
        );
        eNotify(&notification);
    }
#endif
}

// References

