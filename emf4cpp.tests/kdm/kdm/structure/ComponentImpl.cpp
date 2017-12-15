// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/structure/ComponentImpl.cpp
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

#include "Component.hpp"
#include <kdm/structure/StructurePackage.hpp>
#include <kdm/structure/AbstractStructureElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/structure/AbstractStructureRelationship.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ComponentImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::structure;

void Component::_initialize()
{
    // Supertypes
    ::kdm::structure::AbstractStructureElement::_initialize();

    // References

    /*PROTECTED REGION ID(ComponentImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Component::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
        _any = m_attribute->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
        _any = m_annotation->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
        _any = m_stereotype->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
        _any = m_taggedValue->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::core::CorePackage::KDMENTITY__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__AGGREGATED:
    {
        _any = m_aggregated->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__IMPLEMENTATION:
    {
        _any = m_implementation->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__STRUCTUREELEMENT:
    {
        _any = m_structureElement->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__STRUCTURERELATIONSHIP:
    {
        _any = m_structureRelationship->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void Component::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::kdm::core::Element::getAttribute().clear();
        ::kdm::core::Element::getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::kdm::core::Element::getAnnotation().clear();
        ::kdm::core::Element::getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::kdm::core::ModelElement::getStereotype().clear();
        ::kdm::core::ModelElement::getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::kdm::core::ModelElement::getTaggedValue().clear();
        ::kdm::core::ModelElement::getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::KDMENTITY__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, m_name);
    }
        return;
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__AGGREGATED:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::kdm::structure::AbstractStructureElement::getAggregated().clear();
        ::kdm::structure::AbstractStructureElement::getAggregated().insert_all(
                *_t0);
    }
        return;
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__IMPLEMENTATION:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::kdm::structure::AbstractStructureElement::getImplementation().clear();
        ::kdm::structure::AbstractStructureElement::getImplementation().insert_all(
                *_t0);
    }
        return;
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__STRUCTUREELEMENT:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::kdm::structure::AbstractStructureElement::getStructureElement().clear();
        ::kdm::structure::AbstractStructureElement::getStructureElement().insert_all(
                *_t0);
    }
        return;
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__STRUCTURERELATIONSHIP:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::kdm::structure::AbstractStructureElement::getStructureRelationship().clear();
        ::kdm::structure::AbstractStructureElement::getStructureRelationship().insert_all(
                *_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Component::eIsSet(::ecore::EInt _featureID)
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
    case ::kdm::core::CorePackage::KDMENTITY__NAME:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(m_name);
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__AGGREGATED:
        return m_aggregated && m_aggregated->size();
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__IMPLEMENTATION:
        return m_implementation && m_implementation->size();
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__STRUCTUREELEMENT:
        return m_structureElement && m_structureElement->size();
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__STRUCTURERELATIONSHIP:
        return m_structureRelationship && m_structureRelationship->size();

    }
    throw "Error";
}

void Component::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Component::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::kdm::structure::StructurePackage* >(::kdm::structure::StructurePackage::_instance().get())->getComponent();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Component::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__AGGREGATED:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__IMPLEMENTATION:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__STRUCTUREELEMENT:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__STRUCTURERELATIONSHIP:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Component::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__AGGREGATED:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__IMPLEMENTATION:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__STRUCTUREELEMENT:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__STRUCTURERELATIONSHIP:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

