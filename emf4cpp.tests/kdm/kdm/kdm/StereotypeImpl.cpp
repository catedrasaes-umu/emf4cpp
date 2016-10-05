// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/StereotypeImpl.cpp
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

#include "Stereotype.hpp"
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/core/Element.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/TagDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::kdm;

/*PROTECTED REGION ID(StereotypeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Stereotype::_initialize()
{
    // Supertypes
    ::kdm::core::Element::_initialize();

    // References
    for (size_t i = 0; i < m_tag->size(); i++)
    {
        (*m_tag)[i]->_initialize();
    }

    /*PROTECTED REGION ID(StereotypeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Stereotype::eGet(::ecore::EInt _featureID,
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
    case ::kdm::kdm::KdmPackage::STEREOTYPE__TAG:
    {
        _any = m_tag->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::STEREOTYPE__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::kdm::kdm::KdmPackage::STEREOTYPE__TYPE:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, m_type);
    }
        return _any;

    }
    throw "Error";
}

void Stereotype::eSet(::ecore::EInt _featureID,
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
    case ::kdm::kdm::KdmPackage::STEREOTYPE__TAG:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::kdm::Stereotype::getTag().clear();
        ::kdm::kdm::Stereotype::getTag().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::STEREOTYPE__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, m_name);
    }
        return;
    case ::kdm::kdm::KdmPackage::STEREOTYPE__TYPE:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, m_type);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Stereotype::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
        return m_attribute && m_attribute->size();
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
        return m_annotation && m_annotation->size();
    case ::kdm::kdm::KdmPackage::STEREOTYPE__TAG:
        return m_tag && m_tag->size();
    case ::kdm::kdm::KdmPackage::STEREOTYPE__NAME:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(m_name);
    case ::kdm::kdm::KdmPackage::STEREOTYPE__TYPE:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(m_type);

    }
    throw "Error";
}

void Stereotype::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Stereotype::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::kdm::kdm::KdmPackage_ptr >(::kdm::kdm::KdmPackage::_instance())->getStereotype();
    return _eclass;
}

