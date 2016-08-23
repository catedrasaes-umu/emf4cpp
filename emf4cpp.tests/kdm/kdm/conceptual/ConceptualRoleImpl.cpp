// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/conceptual/ConceptualRoleImpl.cpp
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

#include "ConceptualRole.hpp"
#include <kdm/conceptual/ConceptualPackage.hpp>
#include <kdm/conceptual/AbstractConceptualElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/conceptual/AbstractConceptualRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::conceptual;

/*PROTECTED REGION ID(ConceptualRoleImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void ConceptualRole::_initialize()
{
    // Supertypes
    ::kdm::conceptual::AbstractConceptualElement::_initialize();

    // Rerefences

    /*PROTECTED REGION ID(ConceptualRoleImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ConceptualRole::eGet(::ecore::EInt _featureID,
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
    case ::kdm::core::CorePackage::KDMENTITY__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__SOURCE:
    {
        _any = m_source->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__IMPLEMENTATION:
    {
        _any = m_implementation->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__CONCEPTUALRELATION:
    {
        _any = m_conceptualRelation->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__ABSTRACTION:
    {
        _any = m_abstraction->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::conceptual::ConceptualPackage::CONCEPTUALROLE__CONCEPTUALELEMENT:
    {
        _any = static_cast< ::ecore::EObject* >(m_conceptualElement);
    }
        return _any;

    }
    throw "Error";
}

void ConceptualRole::eSet(::ecore::EInt _featureID,
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
    case ::kdm::core::CorePackage::KDMENTITY__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, m_name);
    }
        return;
    case ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__SOURCE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::conceptual::AbstractConceptualElement::getSource().clear();
        ::kdm::conceptual::AbstractConceptualElement::getSource().insert_all(
                *_t0);
    }
        return;
    case ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__IMPLEMENTATION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::conceptual::AbstractConceptualElement::getImplementation().clear();
        ::kdm::conceptual::AbstractConceptualElement::getImplementation().insert_all(
                *_t0);
    }
        return;
    case ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__CONCEPTUALRELATION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::conceptual::AbstractConceptualElement::getConceptualRelation().clear();
        ::kdm::conceptual::AbstractConceptualElement::getConceptualRelation().insert_all(
                *_t0);
    }
        return;
    case ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__ABSTRACTION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::conceptual::AbstractConceptualElement::getAbstraction().clear();
        ::kdm::conceptual::AbstractConceptualElement::getAbstraction().insert_all(
                *_t0);
    }
        return;
    case ::kdm::conceptual::ConceptualPackage::CONCEPTUALROLE__CONCEPTUALELEMENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::kdm::conceptual::AbstractConceptualElement_ptr _t1 =
                dynamic_cast< ::kdm::conceptual::AbstractConceptualElement_ptr >(_t0);
        ::kdm::conceptual::ConceptualRole::setConceptualElement(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ConceptualRole::eIsSet(::ecore::EInt _featureID)
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
    case ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__SOURCE:
        return m_source && m_source->size();
    case ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__IMPLEMENTATION:
        return m_implementation && m_implementation->size();
    case ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__CONCEPTUALRELATION:
        return m_conceptualRelation && m_conceptualRelation->size();
    case ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__ABSTRACTION:
        return m_abstraction && m_abstraction->size();
    case ::kdm::conceptual::ConceptualPackage::CONCEPTUALROLE__CONCEPTUALELEMENT:
        return m_conceptualElement;

    }
    throw "Error";
}

void ConceptualRole::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ConceptualRole::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::kdm::conceptual::ConceptualPackage_ptr >(::kdm::conceptual::ConceptualPackage::_instance())->getConceptualRole();
    return _eclass;
}

