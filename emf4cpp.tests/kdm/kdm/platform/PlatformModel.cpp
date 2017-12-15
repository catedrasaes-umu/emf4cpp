// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/platform/PlatformModel.cpp
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

#include "PlatformModel.hpp"
#include <kdm/kdm/KDMModel.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/platform/PlatformPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(PlatformModel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::platform;

// Default constructor
PlatformModel::PlatformModel()
{

    m_platformElement.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::platform::AbstractPlatformElement_ptr, -1, true,
                    false >(this,
                    ::kdm::platform::PlatformPackage::_instance()->getPlatformModel__platformElement()));

    /*PROTECTED REGION ID(PlatformModelImpl__PlatformModelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

PlatformModel::~PlatformModel()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::kdm::platform::AbstractPlatformElement_ptr >& PlatformModel::getPlatformElement() const
{
    return *m_platformElement;
}

::ecorecpp::mapping::EList< ::kdm::platform::AbstractPlatformElement_ptr >& PlatformModel::getPlatformElement()
{
    return *m_platformElement;
}

