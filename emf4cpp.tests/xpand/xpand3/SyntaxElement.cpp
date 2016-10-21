// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/SyntaxElement.cpp
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

#include "SyntaxElement.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/Xpand3Package.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::xpand3;

// Default constructor
SyntaxElement::SyntaxElement()
{

    /*PROTECTED REGION ID(SyntaxElementImpl__SyntaxElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

SyntaxElement::~SyntaxElement()
{
}

/*PROTECTED REGION ID(SyntaxElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::ecore::EInt SyntaxElement::getLine() const
{
    return m_line;
}

void SyntaxElement::setLine(::ecore::EInt _line)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_line = m_line;
#endif
    m_line = _line;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::Xpand3Package::_instance()->getSyntaxElement__line(),
                _old_line,
                m_line
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EInt SyntaxElement::getStart() const
{
    return m_start;
}

void SyntaxElement::setStart(::ecore::EInt _start)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_start = m_start;
#endif
    m_start = _start;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::Xpand3Package::_instance()->getSyntaxElement__start(),
                _old_start,
                m_start
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EInt SyntaxElement::getEnd() const
{
    return m_end;
}

void SyntaxElement::setEnd(::ecore::EInt _end)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_end = m_end;
#endif
    m_end = _end;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::Xpand3Package::_instance()->getSyntaxElement__end(),
                _old_end,
                m_end
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& SyntaxElement::getFileName() const
{
    return m_fileName;
}

void SyntaxElement::setFileName(::ecore::EString const& _fileName)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_fileName = m_fileName;
#endif
    m_fileName = _fileName;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::Xpand3Package::_instance()->getSyntaxElement__fileName(),
                _old_fileName,
                m_fileName
        );
        eNotify(&notification);
    }
#endif
}

// References

