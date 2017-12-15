// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/DerivedType.cpp
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

#include "DerivedType.hpp"
#include <kdm/code/Datatype.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/code/CommentUnit.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>
#include <kdm/code/ItemUnit.hpp>
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

/*PROTECTED REGION ID(DerivedType.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::code;

// Default constructor
DerivedType::DerivedType() :
        m_itemUnit(0)
{

    /*PROTECTED REGION ID(DerivedTypeImpl__DerivedTypeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

DerivedType::~DerivedType()
{
    if (m_itemUnit)
    {
        m_itemUnit.reset();
    }
}

// Attributes

// References

::kdm::code::ItemUnit_ptr DerivedType::getItemUnit() const
{
    return m_itemUnit;
}

void DerivedType::setItemUnit(::kdm::code::ItemUnit_ptr _itemUnit)
{
    ::kdm::code::ItemUnit_ptr _old_itemUnit = m_itemUnit;

    m_itemUnit = _itemUnit;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::code::CodePackage::_instance()->getDerivedType__itemUnit(),
                _old_itemUnit,
                m_itemUnit
        );
        eNotify(&notification);
    }
#endif

    if (_old_itemUnit)
        _old_itemUnit->_setEContainer(DerivedType_ptr(),
                ::kdm::code::CodePackage::_instance()->getDerivedType__itemUnit());
    m_itemUnit->_setEContainer(_this(),
            ::kdm::code::CodePackage::_instance()->getDerivedType__itemUnit());
}

