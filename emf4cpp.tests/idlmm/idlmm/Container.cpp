// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/Container.cpp
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

#include "Container.hpp"
#include <idlmm/Contained.hpp>
#include <idlmm/Container.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "idlmm/IdlmmPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Container.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::idlmm;

// Default constructor
Container::Container()
{

    m_contains.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::idlmm::Contained_ptr,
                    -1, true, true >(this,
                    ::idlmm::IdlmmPackage::_instance()->getContainer__contains(),
                    ::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN));

    /*PROTECTED REGION ID(ContainerImpl__ContainerImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Container::~Container()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::idlmm::Contained_ptr >& Container::getContains() const
{
    return *m_contains;
}

::ecorecpp::mapping::EList< ::idlmm::Contained_ptr >& Container::getContains()
{
    return *m_contains;
}

