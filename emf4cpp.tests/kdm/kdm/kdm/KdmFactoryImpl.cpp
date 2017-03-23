// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/KdmFactoryImpl.cpp
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

#include <kdm/kdm/KdmFactory.hpp>
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/kdm/KDMFramework.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/Segment.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/TagDefinition.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/kdm/TaggedRef.hpp>
#include <kdm/kdm/TaggedValue.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::kdm;

KdmFactory::KdmFactory()
{
}

::ecore::EObject_ptr KdmFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case KdmPackage::KDMFRAMEWORK:
        return createKDMFramework();
    case KdmPackage::KDMMODEL:
        return createKDMModel();
    case KdmPackage::AUDIT:
        return createAudit();
    case KdmPackage::SEGMENT:
        return createSegment();
    case KdmPackage::ATTRIBUTE:
        return createAttribute();
    case KdmPackage::ANNOTATION:
        return createAnnotation();
    case KdmPackage::TAGDEFINITION:
        return createTagDefinition();
    case KdmPackage::EXTENDEDVALUE:
        return createExtendedValue();
    case KdmPackage::STEREOTYPE:
        return createStereotype();
    case KdmPackage::EXTENSIONFAMILY:
        return createExtensionFamily();
    case KdmPackage::TAGGEDREF:
        return createTaggedRef();
    case KdmPackage::TAGGEDVALUE:
        return createTaggedValue();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject KdmFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString KdmFactory::convertToString(::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

KDMFramework_ptr KdmFactory::createKDMFramework()
{
    return new KDMFramework();
}
KDMModel_ptr KdmFactory::createKDMModel()
{
    return new KDMModel();
}
Audit_ptr KdmFactory::createAudit()
{
    return new Audit();
}
Segment_ptr KdmFactory::createSegment()
{
    return new Segment();
}
Attribute_ptr KdmFactory::createAttribute()
{
    return new Attribute();
}
Annotation_ptr KdmFactory::createAnnotation()
{
    return new Annotation();
}
TagDefinition_ptr KdmFactory::createTagDefinition()
{
    return new TagDefinition();
}
ExtendedValue_ptr KdmFactory::createExtendedValue()
{
    return new ExtendedValue();
}
Stereotype_ptr KdmFactory::createStereotype()
{
    return new Stereotype();
}
ExtensionFamily_ptr KdmFactory::createExtensionFamily()
{
    return new ExtensionFamily();
}
TaggedRef_ptr KdmFactory::createTaggedRef()
{
    return new TaggedRef();
}
TaggedValue_ptr KdmFactory::createTaggedValue()
{
    return new TaggedValue();
}

