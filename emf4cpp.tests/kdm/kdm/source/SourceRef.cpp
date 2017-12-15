// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/SourceRef.cpp
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

#include "SourceRef.hpp"
#include <kdm/core/Element.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/source/SourceRegion.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/source/SourcePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(SourceRef.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::source;

// Default constructor
SourceRef::SourceRef()
{

    m_region.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::source::SourceRegion_ptr, -1, true, false >(this,
                    ::kdm::source::SourcePackage::_instance()->getSourceRef__region()));

    /*PROTECTED REGION ID(SourceRefImpl__SourceRefImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

SourceRef::~SourceRef()
{
}

// Attributes

::kdm::core::String SourceRef::getLanguage() const
{
    return m_language;
}

void SourceRef::setLanguage(::kdm::core::String _language)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::String _old_language = m_language;
#endif
    m_language = _language;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::source::SourcePackage::_instance()->getSourceRef__language(),
                _old_language,
                m_language
        );
        eNotify(&notification);
    }
#endif
}

::kdm::core::String SourceRef::getSnippet() const
{
    return m_snippet;
}

void SourceRef::setSnippet(::kdm::core::String _snippet)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::String _old_snippet = m_snippet;
#endif
    m_snippet = _snippet;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::source::SourcePackage::_instance()->getSourceRef__snippet(),
                _old_snippet,
                m_snippet
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::kdm::source::SourceRegion_ptr >& SourceRef::getRegion() const
{
    return *m_region;
}

::ecorecpp::mapping::EList< ::kdm::source::SourceRegion_ptr >& SourceRef::getRegion()
{
    return *m_region;
}

