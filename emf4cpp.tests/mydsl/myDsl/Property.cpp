// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * myDsl/Property.cpp
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

#include "Property.hpp"
#include <myDsl/Type.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "myDsl/MyDslPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Property.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::myDsl;

// Default constructor
Property::Property() :
        m_type(0)
{

    /*PROTECTED REGION ID(PropertyImpl__PropertyImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Property::~Property()
{
}

// Attributes

::ecore::EString const& Property::getName() const
{
    return m_name;
}

void Property::setName(::ecore::EString const& _name)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_name = m_name;
#endif
    m_name = _name;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::myDsl::MyDslPackage::_instance()->getProperty__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean Property::isMany() const
{
    return m_many;
}

void Property::setMany(::ecore::EBoolean _many)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_many = m_many;
#endif
    m_many = _many;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::myDsl::MyDslPackage::_instance()->getProperty__many(),
                _old_many,
                m_many
        );
        eNotify(&notification);
    }
#endif
}

// References

::myDsl::Type_ptr Property::getType() const
{
    return m_type;
}

void Property::setType(::myDsl::Type_ptr _type)
{
    ::myDsl::Type_ptr _old_type = m_type;

    m_type = _type;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::myDsl::MyDslPackage::_instance()->getProperty__type(),
                _old_type,
                m_type
        );
        eNotify(&notification);
    }
#endif

}

