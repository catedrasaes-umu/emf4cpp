// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ResourceTests/Referrer.cpp
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

#include "Referrer.hpp"
#include <ResourceTests/ReferenceTarget.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ResourceTests/ResourceTestsPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Referrer.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ResourceTests;

// Default constructor
Referrer::Referrer() :
        m_reference(0)
{

    /*PROTECTED REGION ID(ReferrerImpl__ReferrerImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Referrer::~Referrer()
{
}

// Attributes

// References

::ResourceTests::ReferenceTarget_ptr Referrer::getReference() const
{
    return m_reference;
}

void Referrer::setReference(::ResourceTests::ReferenceTarget_ptr _reference)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ResourceTests::ReferenceTarget_ptr _old_reference = m_reference;
#endif
    m_reference = _reference;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ResourceTests::ResourceTestsPackage::_instance()->getReferrer__reference(),
                _old_reference,
                m_reference
        );
        eNotify(&notification);
    }
#endif
}

