// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ResourceTests/Root.cpp
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

#include "Root.hpp"
#include <ResourceTests/ReferenceTarget.hpp>
#include <ResourceTests/Referrer.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ResourceTests/ResourceTestsPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Root.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ResourceTests;

// Default constructor
Root::Root() :
        m_target(0)
{

    m_referrers.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::ResourceTests::Referrer_ptr, -1, true, false >(this,
                    ::ResourceTests::ResourceTestsPackage::_instance()->getRoot__referrers()));

    /*PROTECTED REGION ID(RootImpl__RootImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Root::~Root()
{
    if (m_target)
    {
        m_target.reset();
    }
}

// Attributes

// References

::ResourceTests::ReferenceTarget_ptr Root::getTarget() const
{
    return m_target;
}

void Root::setTarget(::ResourceTests::ReferenceTarget_ptr _target)
{
    if (m_target)
        m_target->_setEContainer(Root_ptr(),
                ::ResourceTests::ResourceTestsPackage::_instance()->getRoot__target());
    if (_target)
        _target->_setEContainer(_this(),
                ::ResourceTests::ResourceTestsPackage::_instance()->getRoot__target());

#ifdef ECORECPP_NOTIFICATION_API
    ::ResourceTests::ReferenceTarget_ptr _old_target = m_target;
#endif
    m_target = _target;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ResourceTests::ResourceTestsPackage::_instance()->getRoot__target(),
                _old_target,
                m_target
        );
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::ResourceTests::Referrer_ptr >& Root::getReferrers() const
{
    return *m_referrers;
}

::ecorecpp::mapping::EList< ::ResourceTests::Referrer_ptr >& Root::getReferrers()
{
    return *m_referrers;
}

