// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/DefinedType.cpp
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

#include "DefinedType.hpp"
#include <kdm/code/Datatype.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/code/CommentUnit.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>
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

/*PROTECTED REGION ID(DefinedType.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::code;

// Default constructor
DefinedType::DefinedType() :
        m_type(0), m_codeElement(0)
{

    /*PROTECTED REGION ID(DefinedTypeImpl__DefinedTypeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

DefinedType::~DefinedType()
{
    if (m_codeElement)
    {
        m_codeElement.reset();
    }
}

// Attributes

// References

::kdm::code::Datatype_ptr DefinedType::getType() const
{
    return m_type;
}

void DefinedType::setType(::kdm::code::Datatype_ptr _type)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::code::Datatype_ptr _old_type = m_type;
#endif
    m_type = _type;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::code::CodePackage::_instance()->getDefinedType__type(),
                _old_type,
                m_type
        );
        eNotify(&notification);
    }
#endif
}

::kdm::code::Datatype_ptr DefinedType::getCodeElement() const
{
    return m_codeElement;
}

void DefinedType::setCodeElement(::kdm::code::Datatype_ptr _codeElement)
{
    if (m_codeElement)
        m_codeElement->_setEContainer(DefinedType_ptr(),
                ::kdm::code::CodePackage::_instance()->getDefinedType__codeElement());
    if (_codeElement)
        _codeElement->_setEContainer(_this(),
                ::kdm::code::CodePackage::_instance()->getDefinedType__codeElement());

#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::code::Datatype_ptr _old_codeElement = m_codeElement;
#endif
    m_codeElement = _codeElement;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::code::CodePackage::_instance()->getDefinedType__codeElement(),
                _old_codeElement,
                m_codeElement
        );
        eNotify(&notification);
    }
#endif
}

