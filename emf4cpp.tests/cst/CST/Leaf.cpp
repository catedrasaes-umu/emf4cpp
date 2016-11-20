// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * CST/Leaf.cpp
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

#include "Leaf.hpp"
#include <CST/Element.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "CST/CSTPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::CST;

// Default constructor
Leaf::Leaf()
{

    /*PROTECTED REGION ID(LeafImpl__LeafImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Leaf::~Leaf()
{
}

/*PROTECTED REGION ID(Leaf.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::ecore::EString const& Leaf::getValue() const
{
    return m_value;
}

void Leaf::setValue(::ecore::EString const& _value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_value = m_value;
#endif
    m_value = _value;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::CST::CSTPackage::_instance()->getLeaf__value(),
                _old_value,
                m_value
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EInt Leaf::getPos() const
{
    return m_pos;
}

void Leaf::setPos(::ecore::EInt _pos)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_pos = m_pos;
#endif
    m_pos = _pos;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::CST::CSTPackage::_instance()->getLeaf__pos(),
                _old_pos,
                m_pos
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EInt Leaf::getLine() const
{
    return m_line;
}

void Leaf::setLine(::ecore::EInt _line)
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
                (::ecore::EStructuralFeature_ptr) ::CST::CSTPackage::_instance()->getLeaf__line(),
                _old_line,
                m_line
        );
        eNotify(&notification);
    }
#endif
}

// References

