// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Scale.cpp
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
#include <SVG/Transform.hpp>
#include <SVG/Element.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "SVG/SVGPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::SVG;

// Default constructor
Scale::Scale()
{

    /*PROTECTED REGION ID(ScaleImpl__ScaleImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Scale::~Scale()
{
}

/*PROTECTED REGION ID(Scale.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::PrimitiveTypes::Double Scale::getSx() const
{
    return m_sx;
}

void Scale::setSx(::PrimitiveTypes::Double _sx)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::Double _old_sx = m_sx;
#endif
    m_sx = _sx;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getScale__sx(),
                _old_sx,
                m_sx
        );
        eNotify(&notification);
    }
#endif
}

::PrimitiveTypes::Double Scale::getSy() const
{
    return m_sy;
}

void Scale::setSy(::PrimitiveTypes::Double _sy)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::Double _old_sy = m_sy;
#endif
    m_sy = _sy;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getScale__sy(),
                _old_sy,
                m_sy
        );
        eNotify(&notification);
    }
#endif
}

// References

