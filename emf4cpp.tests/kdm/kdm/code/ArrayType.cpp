// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/ArrayType.cpp
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

#include "ArrayType.hpp"
#include <kdm/code/DerivedType.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/code/CommentUnit.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>
#include <kdm/code/ItemUnit.hpp>
#include <kdm/code/IndexUnit.hpp>
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
ArrayType::ArrayType() :
        m_indexUnit(0)
{

    /*PROTECTED REGION ID(ArrayTypeImpl__ArrayTypeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ArrayType::~ArrayType()
{
    if (m_indexUnit)
    {
        delete m_indexUnit;
    }
}

/*PROTECTED REGION ID(ArrayType.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::kdm::core::Integer ArrayType::getSize() const
{
    return m_size;
}

void ArrayType::setSize(::kdm::core::Integer _size)
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
                (::ecore::EStructuralFeature_ptr) ::kdm::code::CodePackage::_instance()->getArrayType__size(),
                _old_size,
                m_size
        );
        eNotify(&notification);
    }
#endif
}

// References
::kdm::code::IndexUnit_ptr ArrayType::getIndexUnit()
{
    return m_indexUnit;
}

void ArrayType::setIndexUnit(::kdm::code::IndexUnit_ptr _indexUnit)
{
    ::kdm::code::IndexUnit_ptr _old_indexUnit = m_indexUnit;

    m_indexUnit = _indexUnit;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::kdm::code::CodePackage::_instance()->getArrayType__indexUnit(),
                _old_indexUnit,
                m_indexUnit
        );
        eNotify(&notification);
    }
#endif

    delete _old_indexUnit;
    m_indexUnit->_setEContainer(this,
            ::kdm::code::CodePackage::_instance()->getArrayType__indexUnit());
}

