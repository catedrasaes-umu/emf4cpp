// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/action/BlockUnitImpl.cpp
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

#include "BlockUnit.hpp"
#include <kdm/action/ActionPackage.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/code/CommentUnit.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::action;

/*PROTECTED REGION ID(BlockUnitImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void BlockUnit::_initialize()
{
    // Supertypes
    ::kdm::action::ActionElement::_initialize();

    // References

    /*PROTECTED REGION ID(BlockUnitImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject BlockUnit::eGet(::ecore::EInt _featureID,
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
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__SOURCE:
    {
        _any = m_source->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__COMMENT:
    {
        _any = m_comment->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__CODERELATION:
    {
        _any = m_codeRelation->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::action::ActionPackage::ACTIONELEMENT__KIND:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, m_kind);
    }
        return _any;
    case ::kdm::action::ActionPackage::ACTIONELEMENT__CODEELEMENT:
    {
        _any = m_codeElement->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::action::ActionPackage::ACTIONELEMENT__ACTIONRELATION:
    {
        _any = m_actionRelation->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void BlockUnit::eSet(::ecore::EInt _featureID,
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
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__SOURCE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::code::AbstractCodeElement::getSource().clear();
        ::kdm::code::AbstractCodeElement::getSource().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__COMMENT:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::code::AbstractCodeElement::getComment().clear();
        ::kdm::code::AbstractCodeElement::getComment().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__CODERELATION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::code::AbstractCodeElement::getCodeRelation().clear();
        ::kdm::code::AbstractCodeElement::getCodeRelation().insert_all(*_t0);
    }
        return;
    case ::kdm::action::ActionPackage::ACTIONELEMENT__KIND:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, m_kind);
    }
        return;
    case ::kdm::action::ActionPackage::ACTIONELEMENT__CODEELEMENT:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::action::ActionElement::getCodeElement().clear();
        ::kdm::action::ActionElement::getCodeElement().insert_all(*_t0);
    }
        return;
    case ::kdm::action::ActionPackage::ACTIONELEMENT__ACTIONRELATION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::action::ActionElement::getActionRelation().clear();
        ::kdm::action::ActionElement::getActionRelation().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean BlockUnit::eIsSet(::ecore::EInt _featureID)
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
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__SOURCE:
        return m_source && m_source->size();
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__COMMENT:
        return m_comment && m_comment->size();
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__CODERELATION:
        return m_codeRelation && m_codeRelation->size();
    case ::kdm::action::ActionPackage::ACTIONELEMENT__KIND:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(m_kind);
    case ::kdm::action::ActionPackage::ACTIONELEMENT__CODEELEMENT:
        return m_codeElement && m_codeElement->size();
    case ::kdm::action::ActionPackage::ACTIONELEMENT__ACTIONRELATION:
        return m_actionRelation && m_actionRelation->size();

    }
    throw "Error";
}

void BlockUnit::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr BlockUnit::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::kdm::action::ActionPackage_ptr >(::kdm::action::ActionPackage::_instance())->getBlockUnit();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void BlockUnit::_inverseAdd(::ecore::EInt _featureID,
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
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__SOURCE:
    {
    }
        return;
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__COMMENT:
    {
    }
        return;
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__CODERELATION:
    {
    }
        return;
    case ::kdm::action::ActionPackage::ACTIONELEMENT__CODEELEMENT:
    {
    }
        return;
    case ::kdm::action::ActionPackage::ACTIONELEMENT__ACTIONRELATION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void BlockUnit::_inverseRemove(::ecore::EInt _featureID,
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
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__SOURCE:
    {
    }
        return;
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__COMMENT:
    {
    }
        return;
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__CODERELATION:
    {
    }
        return;
    case ::kdm::action::ActionPackage::ACTIONELEMENT__CODEELEMENT:
    {
    }
        return;
    case ::kdm::action::ActionPackage::ACTIONELEMENT__ACTIONRELATION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

