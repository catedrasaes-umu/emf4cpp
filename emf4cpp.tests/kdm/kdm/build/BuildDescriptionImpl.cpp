// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build/BuildDescriptionImpl.cpp
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

#include "BuildDescription.hpp"
#include <kdm/build/BuildPackage.hpp>
#include <kdm/build/BuildResource.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/build/AbstractBuildRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/build/AbstractBuildElement.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::build;

/*PROTECTED REGION ID(BuildDescriptionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void BuildDescription::_initialize()
{
    // Supertypes
    ::kdm::build::BuildResource::_initialize();

    // References
    for (size_t i = 0; i < m_source->size(); i++)
    {
        (*m_source)[i]->_initialize();
        (*m_source)[i]->_setEContainer(this,
                ::kdm::build::BuildPackage::_instance()->getBuildDescription__source());
    }

    /*PROTECTED REGION ID(BuildDescriptionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject BuildDescription::eGet(::ecore::EInt _featureID,
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
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__BUILDRELATION:
    {
        _any = m_buildRelation->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::build::BuildPackage::BUILDRESOURCE__IMPLEMENTATION:
    {
        _any = m_implementation->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::build::BuildPackage::BUILDRESOURCE__GROUPEDBUILD:
    {
        _any = m_groupedBuild->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::build::BuildPackage::BUILDRESOURCE__BUILDELEMENT:
    {
        _any = m_buildElement->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::build::BuildPackage::BUILDDESCRIPTION__SOURCE:
    {
        _any = m_source->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::build::BuildPackage::BUILDDESCRIPTION__TEXT:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, m_text);
    }
        return _any;

    }
    throw "Error";
}

void BuildDescription::eSet(::ecore::EInt _featureID,
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
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__BUILDRELATION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::build::AbstractBuildElement::getBuildRelation().clear();
        ::kdm::build::AbstractBuildElement::getBuildRelation().insert_all(*_t0);
    }
        return;
    case ::kdm::build::BuildPackage::BUILDRESOURCE__IMPLEMENTATION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::build::BuildResource::getImplementation().clear();
        ::kdm::build::BuildResource::getImplementation().insert_all(*_t0);
    }
        return;
    case ::kdm::build::BuildPackage::BUILDRESOURCE__GROUPEDBUILD:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::build::BuildResource::getGroupedBuild().clear();
        ::kdm::build::BuildResource::getGroupedBuild().insert_all(*_t0);
    }
        return;
    case ::kdm::build::BuildPackage::BUILDRESOURCE__BUILDELEMENT:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::build::BuildResource::getBuildElement().clear();
        ::kdm::build::BuildResource::getBuildElement().insert_all(*_t0);
    }
        return;
    case ::kdm::build::BuildPackage::BUILDDESCRIPTION__SOURCE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::build::BuildDescription::getSource().clear();
        ::kdm::build::BuildDescription::getSource().insert_all(*_t0);
    }
        return;
    case ::kdm::build::BuildPackage::BUILDDESCRIPTION__TEXT:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, m_text);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean BuildDescription::eIsSet(::ecore::EInt _featureID)
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
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__BUILDRELATION:
        return m_buildRelation && m_buildRelation->size();
    case ::kdm::build::BuildPackage::BUILDRESOURCE__IMPLEMENTATION:
        return m_implementation && m_implementation->size();
    case ::kdm::build::BuildPackage::BUILDRESOURCE__GROUPEDBUILD:
        return m_groupedBuild && m_groupedBuild->size();
    case ::kdm::build::BuildPackage::BUILDRESOURCE__BUILDELEMENT:
        return m_buildElement && m_buildElement->size();
    case ::kdm::build::BuildPackage::BUILDDESCRIPTION__SOURCE:
        return m_source && m_source->size();
    case ::kdm::build::BuildPackage::BUILDDESCRIPTION__TEXT:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(m_text);

    }
    throw "Error";
}

void BuildDescription::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr BuildDescription::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::kdm::build::BuildPackage_ptr >(::kdm::build::BuildPackage::_instance())->getBuildDescription();
    return _eclass;
}

