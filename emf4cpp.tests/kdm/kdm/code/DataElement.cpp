// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/DataElement.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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

#include "DataElement.hpp"
#include <kdm/code/ComputationalObject.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/code/CommentUnit.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>
#include <kdm/code/Datatype.hpp>
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
DataElement::DataElement() :
        m_type(0)
{

    m_codeElement.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::kdm::code::Datatype,
                    -1, true, false >(this, NULL));

    /*PROTECTED REGION ID(DataElementImpl__DataElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

DataElement::~DataElement()
{
}

/*PROTECTED REGION ID(DataElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::kdm::core::String DataElement::getExt() const
{
    return m_ext;
}

void DataElement::setExt(::kdm::core::String _ext)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::String _old_ext = m_ext;
#endif
    m_ext = _ext;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::kdm::code::CodePackage::_instance()->getDataElement__ext(),
                _old_ext,
                m_ext
        );
        eNotify(&notification);
    }
#endif
}

::kdm::core::Integer DataElement::getSize() const
{
    return m_size;
}

void DataElement::setSize(::kdm::core::Integer _size)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::Integer _old_size = m_size;
#endif
    m_size = _size;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::kdm::code::CodePackage::_instance()->getDataElement__size(),
                _old_size,
                m_size
        );
        eNotify(&notification);
    }
#endif
}

// References
::kdm::code::Datatype_ptr DataElement::getType()
{
    return m_type;
}

void DataElement::setType(::kdm::code::Datatype_ptr _type)
{
    ::kdm::code::Datatype_ptr _old_type = m_type;

    m_type = _type;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::kdm::code::CodePackage::_instance()->getDataElement__type(),
                _old_type,
                m_type
        );
        eNotify(&notification);
    }
#endif

}

::ecorecpp::mapping::EList< ::kdm::code::Datatype >& DataElement::getCodeElement()
{
    return *m_codeElement;
}

