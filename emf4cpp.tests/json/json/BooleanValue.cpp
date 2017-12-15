// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * json/BooleanValue.cpp
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

#include "BooleanValue.hpp"
#include <json/Value.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "json/JsonPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(BooleanValue.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::json;

// Default constructor
BooleanValue::BooleanValue()
{

    /*PROTECTED REGION ID(BooleanValueImpl__BooleanValueImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

BooleanValue::~BooleanValue()
{
}

// Attributes

::ecore::EBoolean BooleanValue::isValue() const
{
    return m_value;
}

void BooleanValue::setValue(::ecore::EBoolean _value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_value = m_value;
#endif
    m_value = _value;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::json::JsonPackage::_instance()->getBooleanValue__value(),
                _old_value,
                m_value
        );
        eNotify(&notification);
    }
#endif
}

// References

