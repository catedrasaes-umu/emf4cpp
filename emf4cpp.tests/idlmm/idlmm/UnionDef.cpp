// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/UnionDef.cpp
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

#include "UnionDef.hpp"
#include <idlmm/TypedefDef.hpp>
#include <idlmm/Container.hpp>
#include <idlmm/UnionField.hpp>
#include <idlmm/IDLType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "idlmm/IdlmmPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::idlmm;

// Default constructor
UnionDef::UnionDef() :
        m_containedDiscrim(0), m_sharedDiscrim(0)
{

    m_unionMembers.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::idlmm::UnionField,
                    -1, true, false >(this,
                    ::idlmm::IdlmmPackage::_instance()->getUnionDef__unionMembers()));

    /*PROTECTED REGION ID(UnionDefImpl__UnionDefImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

UnionDef::~UnionDef()
{
    if (m_containedDiscrim)
    {
        delete m_containedDiscrim;
    }
}

/*PROTECTED REGION ID(UnionDef.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
const ::ecorecpp::mapping::EList< ::idlmm::UnionField >& UnionDef::getUnionMembers() const
{
    return *m_unionMembers;
}

::ecorecpp::mapping::EList< ::idlmm::UnionField >& UnionDef::getUnionMembers()
{
    return *m_unionMembers;
}

::idlmm::IDLType_ptr UnionDef::getContainedDiscrim() const
{
    return m_containedDiscrim;
}

void UnionDef::setContainedDiscrim(::idlmm::IDLType_ptr _containedDiscrim)
{
    ::idlmm::IDLType_ptr _old_containedDiscrim = m_containedDiscrim;

    m_containedDiscrim = _containedDiscrim;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::idlmm::IdlmmPackage::_instance()->getUnionDef__containedDiscrim(),
                _old_containedDiscrim,
                m_containedDiscrim
        );
        eNotify(&notification);
    }
#endif

    delete _old_containedDiscrim;
    m_containedDiscrim->_setEContainer(this,
            ::idlmm::IdlmmPackage::_instance()->getUnionDef__containedDiscrim());
}

::idlmm::TypedefDef_ptr UnionDef::getSharedDiscrim() const
{
    return m_sharedDiscrim;
}

void UnionDef::setSharedDiscrim(::idlmm::TypedefDef_ptr _sharedDiscrim)
{
    ::idlmm::TypedefDef_ptr _old_sharedDiscrim = m_sharedDiscrim;

    m_sharedDiscrim = _sharedDiscrim;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::idlmm::IdlmmPackage::_instance()->getUnionDef__sharedDiscrim(),
                _old_sharedDiscrim,
                m_sharedDiscrim
        );
        eNotify(&notification);
    }
#endif

}

