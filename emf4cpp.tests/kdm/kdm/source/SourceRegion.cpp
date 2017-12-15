// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/SourceRegion.cpp
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

#include "SourceRegion.hpp"
#include <kdm/core/Element.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/source/SourceFile.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/source/SourcePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(SourceRegion.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::source;

// Default constructor
SourceRegion::SourceRegion() :
        m_file(0)
{

    /*PROTECTED REGION ID(SourceRegionImpl__SourceRegionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

SourceRegion::~SourceRegion()
{
}

// Attributes

::kdm::core::Integer SourceRegion::getStartLine() const
{
    return m_startLine;
}

void SourceRegion::setStartLine(::kdm::core::Integer _startLine)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::Integer _old_startLine = m_startLine;
#endif
    m_startLine = _startLine;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::source::SourcePackage::_instance()->getSourceRegion__startLine(),
                _old_startLine,
                m_startLine
        );
        eNotify(&notification);
    }
#endif
}

::kdm::core::Integer SourceRegion::getStartPosition() const
{
    return m_startPosition;
}

void SourceRegion::setStartPosition(::kdm::core::Integer _startPosition)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::Integer _old_startPosition = m_startPosition;
#endif
    m_startPosition = _startPosition;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::source::SourcePackage::_instance()->getSourceRegion__startPosition(),
                _old_startPosition,
                m_startPosition
        );
        eNotify(&notification);
    }
#endif
}

::kdm::core::Integer SourceRegion::getEndLine() const
{
    return m_endLine;
}

void SourceRegion::setEndLine(::kdm::core::Integer _endLine)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::Integer _old_endLine = m_endLine;
#endif
    m_endLine = _endLine;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::source::SourcePackage::_instance()->getSourceRegion__endLine(),
                _old_endLine,
                m_endLine
        );
        eNotify(&notification);
    }
#endif
}

::kdm::core::Integer SourceRegion::getEndPosition() const
{
    return m_endPosition;
}

void SourceRegion::setEndPosition(::kdm::core::Integer _endPosition)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::Integer _old_endPosition = m_endPosition;
#endif
    m_endPosition = _endPosition;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::source::SourcePackage::_instance()->getSourceRegion__endPosition(),
                _old_endPosition,
                m_endPosition
        );
        eNotify(&notification);
    }
#endif
}

::kdm::core::String SourceRegion::getLanguage() const
{
    return m_language;
}

void SourceRegion::setLanguage(::kdm::core::String _language)
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
                ::kdm::source::SourcePackage::_instance()->getSourceRegion__language(),
                _old_language,
                m_language
        );
        eNotify(&notification);
    }
#endif
}

::kdm::core::String SourceRegion::getPath() const
{
    return m_path;
}

void SourceRegion::setPath(::kdm::core::String _path)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::String _old_path = m_path;
#endif
    m_path = _path;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::source::SourcePackage::_instance()->getSourceRegion__path(),
                _old_path,
                m_path
        );
        eNotify(&notification);
    }
#endif
}

// References

::kdm::source::SourceFile_ptr SourceRegion::getFile() const
{
    return m_file;
}

void SourceRegion::setFile(::kdm::source::SourceFile_ptr _file)
{
    ::kdm::source::SourceFile_ptr _old_file = m_file;

    m_file = _file;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::source::SourcePackage::_instance()->getSourceRegion__file(),
                _old_file,
                m_file
        );
        eNotify(&notification);
    }
#endif

}

