// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/event/AbstractEventElementImpl.cpp
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

#include "AbstractEventElement.hpp"
#include <kdm/event/EventPackage.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/event/AbstractEventRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::event;

/*PROTECTED REGION ID(AbstractEventElementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void AbstractEventElement::_initialize()
{
    // Supertypes
    ::kdm::core::KDMEntity::_initialize();

    // References
    for (size_t i = 0; i < m_source->size(); i++)
    {
        (*m_source)[i]->_initialize();
    }
    for (size_t i = 0; i < m_eventRelation->size(); i++)
    {
        (*m_eventRelation)[i]->_initialize();
    }
    for (size_t i = 0; i < m_abstraction->size(); i++)
    {
        (*m_abstraction)[i]->_initialize();
    }

    /*PROTECTED REGION ID(AbstractEventElementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject AbstractEventElement::eGet(::ecore::EInt _featureID,
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
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__SOURCE:
    {
        _any = m_source->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__EVENTRELATION:
    {
        _any = m_eventRelation->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__ABSTRACTION:
    {
        _any = m_abstraction->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__IMPLEMENTATION:
    {
        _any = m_implementation->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void AbstractEventElement::eSet(::ecore::EInt _featureID,
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
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__SOURCE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::event::AbstractEventElement::getSource().clear();
        ::kdm::event::AbstractEventElement::getSource().insert_all(*_t0);
    }
        return;
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__EVENTRELATION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::event::AbstractEventElement::getEventRelation().clear();
        ::kdm::event::AbstractEventElement::getEventRelation().insert_all(*_t0);
    }
        return;
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__ABSTRACTION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::event::AbstractEventElement::getAbstraction().clear();
        ::kdm::event::AbstractEventElement::getAbstraction().insert_all(*_t0);
    }
        return;
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__IMPLEMENTATION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::event::AbstractEventElement::getImplementation().clear();
        ::kdm::event::AbstractEventElement::getImplementation().insert_all(
                *_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean AbstractEventElement::eIsSet(::ecore::EInt _featureID)
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
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__SOURCE:
        return m_source && m_source->size();
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__EVENTRELATION:
        return m_eventRelation && m_eventRelation->size();
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__ABSTRACTION:
        return m_abstraction && m_abstraction->size();
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__IMPLEMENTATION:
        return m_implementation && m_implementation->size();

    }
    throw "Error";
}

void AbstractEventElement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr AbstractEventElement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::kdm::event::EventPackage_ptr >(::kdm::event::EventPackage::_instance())->getAbstractEventElement();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void AbstractEventElement::_inverseAdd(::ecore::EInt _featureID,
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
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__SOURCE:
    {
    }
        return;
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__EVENTRELATION:
    {
    }
        return;
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__ABSTRACTION:
    {
    }
        return;
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__IMPLEMENTATION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void AbstractEventElement::_inverseRemove(::ecore::EInt _featureID,
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
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__SOURCE:
    {
    }
        return;
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__EVENTRELATION:
    {
    }
        return;
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__ABSTRACTION:
    {
    }
        return;
    case ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__IMPLEMENTATION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

