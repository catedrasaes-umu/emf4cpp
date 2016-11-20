// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/ControlElement.cpp
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

#include "ControlElement.hpp"
#include <kdm/code/ComputationalObject.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/code/CommentUnit.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>
#include <kdm/code/Datatype.hpp>
#include <kdm/action/EntryFlow.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/code/CodePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::kdm::code;

// Default constructor
ControlElement::ControlElement() :
        m_type(0)
{

    m_entryFlow.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::action::EntryFlow, -1, true, false >(this,
                    ::kdm::code::CodePackage::_instance()->getControlElement__entryFlow()));
    m_codeElement.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::code::AbstractCodeElement, -1, true, false >(this,
                    ::kdm::code::CodePackage::_instance()->getControlElement__codeElement()));

    /*PROTECTED REGION ID(ControlElementImpl__ControlElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ControlElement::~ControlElement()
{
}

/*PROTECTED REGION ID(ControlElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
::kdm::code::Datatype_ptr ControlElement::getType() const
{
    return m_type;
}

void ControlElement::setType(::kdm::code::Datatype_ptr _type)
{
    ::kdm::code::Datatype_ptr _old_type = m_type;

    m_type = _type;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::kdm::code::CodePackage::_instance()->getControlElement__type(),
                _old_type,
                m_type
        );
        eNotify(&notification);
    }
#endif

}

const ::ecorecpp::mapping::EList< ::kdm::action::EntryFlow >& ControlElement::getEntryFlow() const
{
    return *m_entryFlow;
}

::ecorecpp::mapping::EList< ::kdm::action::EntryFlow >& ControlElement::getEntryFlow()
{
    return *m_entryFlow;
}

const ::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeElement >& ControlElement::getCodeElement() const
{
    return *m_codeElement;
}

::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeElement >& ControlElement::getCodeElement()
{
    return *m_codeElement;
}

