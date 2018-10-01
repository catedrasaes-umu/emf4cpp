// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/core/CoreFactoryImpl.cpp
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

#include <kdm/core/CoreFactory.hpp>
#include <kdm/core/CorePackage.hpp>
#include <kdm/core/Element.hpp>
#include <kdm/core/ModelElement.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::core;

CoreFactory::CoreFactory()
{
}

::ecore::EObject_ptr CoreFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case CorePackage::ELEMENT:
        return createElement();
    case CorePackage::MODELELEMENT:
        return createModelElement();
    case CorePackage::KDMENTITY:
        return createKDMEntity();
    case CorePackage::KDMRELATIONSHIP:
        return createKDMRelationship();
    case CorePackage::AGGREGATEDRELATIONSHIP:
        return createAggregatedRelationship();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject CoreFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    case CorePackage::STRING:
        return ::ecorecpp::mapping::string_traits < ::kdm::core::String
                > ::fromString(_literalValue);
    case CorePackage::INTEGER:
        return ::ecorecpp::mapping::string_traits < ::kdm::core::Integer
                > ::fromString(_literalValue);
    case CorePackage::BOOLEAN:
        return ::ecorecpp::mapping::string_traits < ::kdm::core::Boolean
                > ::fromString(_literalValue);
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString CoreFactory::convertToString(::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    case CorePackage::STRING:
        return ::ecorecpp::mapping::string_traits < ::kdm::core::String
                > ::toString(_instanceValue);
    case CorePackage::INTEGER:
        return ::ecorecpp::mapping::string_traits < ::kdm::core::Integer
                > ::toString(_instanceValue);
    case CorePackage::BOOLEAN:
        return ::ecorecpp::mapping::string_traits < ::kdm::core::Boolean
                > ::toString(_instanceValue);
    default:
        throw "IllegalArgumentException";
    }
}

Element_ptr CoreFactory::createElement()
{
    return ::ecore::Ptr < Element > (new Element);
}
ModelElement_ptr CoreFactory::createModelElement()
{
    return ::ecore::Ptr < ModelElement > (new ModelElement);
}
KDMEntity_ptr CoreFactory::createKDMEntity()
{
    return ::ecore::Ptr < KDMEntity > (new KDMEntity);
}
KDMRelationship_ptr CoreFactory::createKDMRelationship()
{
    return ::ecore::Ptr < KDMRelationship > (new KDMRelationship);
}
AggregatedRelationship_ptr CoreFactory::createAggregatedRelationship()
{
    return ::ecore::Ptr < AggregatedRelationship > (new AggregatedRelationship);
}

