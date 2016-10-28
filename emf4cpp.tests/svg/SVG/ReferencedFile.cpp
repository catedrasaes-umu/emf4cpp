// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/ReferencedFile.cpp
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

#include "ReferencedFile.hpp"
#include <SVG/Image.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "SVG/SVGPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::SVG;

// Default constructor
ReferencedFile::ReferencedFile()
{

    m_referer.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Image, -1,
                    false, true >(this,
                    ::SVG::SVGPackage::_instance()->getReferencedFile__referer(),
                    ::SVG::SVGPackage::IMAGE__REFEREE));

    /*PROTECTED REGION ID(ReferencedFileImpl__ReferencedFileImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ReferencedFile::~ReferencedFile()
{
}

/*PROTECTED REGION ID(ReferencedFile.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::PrimitiveTypes::String ReferencedFile::getName() const
{
    return m_name;
}

void ReferencedFile::setName(::PrimitiveTypes::String _name)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::String _old_name = m_name;
#endif
    m_name = _name;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getReferencedFile__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::SVG::Image >& ReferencedFile::getReferer() const
{
    return *m_referer;
}

::ecorecpp::mapping::EList< ::SVG::Image >& ReferencedFile::getReferer()
{
    return *m_referer;
}

