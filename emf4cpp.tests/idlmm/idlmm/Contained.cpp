// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/Contained.cpp
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

#include "Contained.hpp"
#include <idlmm/Container.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "idlmm/IdlmmPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Contained.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::idlmm;

// Default constructor
Contained::Contained() :
        m_definedIn(0)
{

    /*PROTECTED REGION ID(ContainedImpl__ContainedImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Contained::~Contained()
{
}

// Attributes

::ecore::EString const& Contained::getIdentifier() const
{
    return m_identifier;
}

void Contained::setIdentifier(::ecore::EString const& _identifier)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_identifier = m_identifier;
#endif
    m_identifier = _identifier;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::idlmm::IdlmmPackage::_instance()->getContained__identifier(),
                _old_identifier,
                m_identifier
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& Contained::getRepositoryId() const
{
    return m_repositoryId;
}

void Contained::setRepositoryId(::ecore::EString const& _repositoryId)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_repositoryId = m_repositoryId;
#endif
    m_repositoryId = _repositoryId;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::idlmm::IdlmmPackage::_instance()->getContained__repositoryId(),
                _old_repositoryId,
                m_repositoryId
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& Contained::getVersion() const
{
    return m_version;
}

void Contained::setVersion(::ecore::EString const& _version)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_version = m_version;
#endif
    m_version = _version;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::idlmm::IdlmmPackage::_instance()->getContained__version(),
                _old_version,
                m_version
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& Contained::getAbsoluteName() const
{
    return m_absoluteName;
}

void Contained::setAbsoluteName(::ecore::EString const& _absoluteName)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_absoluteName = m_absoluteName;
#endif
    m_absoluteName = _absoluteName;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::idlmm::IdlmmPackage::_instance()->getContained__absoluteName(),
                _old_absoluteName,
                m_absoluteName
        );
        eNotify(&notification);
    }
#endif
}

// References

::idlmm::Container_ptr Contained::getDefinedIn() const
{
    return m_definedIn;
}

::idlmm::Container_ptr Contained::basicgetDefinedIn()
{
    return m_definedIn;
}

void Contained::basicsetDefinedIn(::idlmm::Container_ptr _definedIn)
{
    ::idlmm::Container_ptr _old_definedIn = m_definedIn;

    m_definedIn = _definedIn;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::idlmm::IdlmmPackage::_instance()->getContained__definedIn(),
                _old_definedIn,
                m_definedIn
        );
        eNotify(&notification);
    }
#endif

}

void Contained::setDefinedIn(::idlmm::Container_ptr _definedIn)
{
    if (_definedIn != m_definedIn)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (m_definedIn != nullptr)
        {
            m_definedIn->_inverseRemove(
                    ::idlmm::IdlmmPackage::CONTAINER__CONTAINS, _this);
        }
        if (_definedIn != nullptr)
        {
            _definedIn->_inverseAdd(::idlmm::IdlmmPackage::CONTAINER__CONTAINS,
                    _this);
        }
        basicsetDefinedIn(_definedIn);
    }
}

