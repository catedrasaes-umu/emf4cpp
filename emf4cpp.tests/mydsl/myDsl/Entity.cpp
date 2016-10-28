// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * myDsl/Entity.cpp
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

#include "Entity.hpp"
#include <myDsl/Type.hpp>
#include <myDsl/Entity.hpp>
#include <myDsl/Property.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "myDsl/MyDslPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::myDsl;

// Default constructor
Entity::Entity() :
        m_extends(0)
{

    m_properties.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::myDsl::Property, -1,
                    true, false >(this,
                    ::myDsl::MyDslPackage::_instance()->getEntity__properties()));

    /*PROTECTED REGION ID(EntityImpl__EntityImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Entity::~Entity()
{
}

/*PROTECTED REGION ID(Entity.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
::myDsl::Entity_ptr Entity::getExtends() const
{
    return m_extends;
}

void Entity::setExtends(::myDsl::Entity_ptr _extends)
{
    ::myDsl::Entity_ptr _old_extends = m_extends;

    m_extends = _extends;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::myDsl::MyDslPackage::_instance()->getEntity__extends(),
                _old_extends,
                m_extends
        );
        eNotify(&notification);
    }
#endif

}

const ::ecorecpp::mapping::EList< ::myDsl::Property >& Entity::getProperties() const
{
    return *m_properties;
}

::ecorecpp::mapping::EList< ::myDsl::Property >& Entity::getProperties()
{
    return *m_properties;
}

