// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/InventoryModelImpl.cpp
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

#include "InventoryModel.hpp"
#include <kdm/source/SourcePackage.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/source/AbstractInventoryElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::source;

/*PROTECTED REGION ID(InventoryModelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void InventoryModel::_initialize()
{
    // Supertypes
    ::kdm::kdm::KDMModel::_initialize();

    // References
    for (size_t i = 0; i < m_inventoryElement->size(); i++)
    {
        (*m_inventoryElement)[i]->_initialize();
    }

    /*PROTECTED REGION ID(InventoryModelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject InventoryModel::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
        _any = m_attribute->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
        _any = m_annotation->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
        _any = m_stereotype->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
        _any = m_taggedValue->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT:
    {
        _any = m_audit->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY:
    {
        _any = m_extensionFamily->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__INVENTORYELEMENT:
    {
        _any = m_inventoryElement->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void InventoryModel::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::core::Element::getAttribute().clear();
        ::kdm::core::Element::getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::core::Element::getAnnotation().clear();
        ::kdm::core::Element::getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::core::ModelElement::getStereotype().clear();
        ::kdm::core::ModelElement::getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::core::ModelElement::getTaggedValue().clear();
        ::kdm::core::ModelElement::getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::kdm::KDMFramework::getAudit().clear();
        ::kdm::kdm::KDMFramework::getAudit().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::kdm::KDMFramework::getExtensionFamily().clear();
        ::kdm::kdm::KDMFramework::getExtensionFamily().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, m_name);
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__INVENTORYELEMENT:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::source::InventoryModel::getInventoryElement().clear();
        ::kdm::source::InventoryModel::getInventoryElement().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean InventoryModel::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
        return m_attribute && m_attribute->size();
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
        return m_annotation && m_annotation->size();
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
        return m_stereotype && m_stereotype->size();
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
        return m_taggedValue && m_taggedValue->size();
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT:
        return m_audit && m_audit->size();
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY:
        return m_extensionFamily && m_extensionFamily->size();
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(m_name);
    case ::kdm::source::SourcePackage::INVENTORYMODEL__INVENTORYELEMENT:
        return m_inventoryElement && m_inventoryElement->size();

    }
    throw "Error";
}

void InventoryModel::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr InventoryModel::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::kdm::source::SourcePackage_ptr >(::kdm::source::SourcePackage::_instance())->getInventoryModel();
    return _eclass;
}

