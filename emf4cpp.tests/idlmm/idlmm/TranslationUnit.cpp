// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/TranslationUnit.cpp
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

#include "TranslationUnit.hpp"
#include <idlmm/Contained.hpp>
#include <idlmm/Include.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "idlmm/IdlmmPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::idlmm;

// Default constructor
TranslationUnit::TranslationUnit()
{

    m_contains.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::idlmm::Contained, -1,
                    true, false >(this,
                    ::idlmm::IdlmmPackage::_instance()->getTranslationUnit__contains()));
    m_includes.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::idlmm::Include, -1,
                    true, false >(this,
                    ::idlmm::IdlmmPackage::_instance()->getTranslationUnit__includes()));

    /*PROTECTED REGION ID(TranslationUnitImpl__TranslationUnitImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

TranslationUnit::~TranslationUnit()
{
}

/*PROTECTED REGION ID(TranslationUnit.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::ecore::EString const& TranslationUnit::getIdentifier() const
{
    return m_identifier;
}

void TranslationUnit::setIdentifier(::ecore::EString const& _identifier)
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
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::idlmm::IdlmmPackage::_instance()->getTranslationUnit__identifier(),
                _old_identifier,
                m_identifier
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::idlmm::Contained >& TranslationUnit::getContains() const
{
    return *m_contains;
}

::ecorecpp::mapping::EList< ::idlmm::Contained >& TranslationUnit::getContains()
{
    return *m_contains;
}

const ::ecorecpp::mapping::EList< ::idlmm::Include >& TranslationUnit::getIncludes() const
{
    return *m_includes;
}

::ecorecpp::mapping::EList< ::idlmm::Include >& TranslationUnit::getIncludes()
{
    return *m_includes;
}

