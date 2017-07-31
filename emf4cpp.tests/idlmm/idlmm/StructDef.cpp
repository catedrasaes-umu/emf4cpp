// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/StructDef.cpp
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

#include "StructDef.hpp"
#include <idlmm/TypedefDef.hpp>
#include <idlmm/Container.hpp>
#include <idlmm/Field.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "idlmm/IdlmmPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(StructDef.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::idlmm;

// Default constructor
StructDef::StructDef()
{

    m_members.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::idlmm::Field, -1,
                    true, false >(this,
                    ::idlmm::IdlmmPackage::_instance()->getStructDef__members()));

    /*PROTECTED REGION ID(StructDefImpl__StructDefImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

StructDef::~StructDef()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::idlmm::Field >& StructDef::getMembers() const
{
    return *m_members;
}

::ecorecpp::mapping::EList< ::idlmm::Field >& StructDef::getMembers()
{
    return *m_members;
}

