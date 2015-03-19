// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EcoreFactoryImpl.cpp
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

#include <ecore/EcoreFactory.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EFactory.hpp>
#include <ecore/EModelElement.hpp>
#include <ecore/ENamedElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/ETypedElement.hpp>
#include <ecore/EStringToStringMapEntry.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::ecore;

EcoreFactory::EcoreFactory()
{
    s_instance.reset(this);
}

::ecore::EObject_ptr EcoreFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case EcorePackage::EATTRIBUTE:
        return createEAttribute();
    case EcorePackage::EANNOTATION:
        return createEAnnotation();
    case EcorePackage::ECLASS:
        return createEClass();
    case EcorePackage::ECLASSIFIER:
        return createEClassifier();
    case EcorePackage::EDATATYPE:
        return createEDataType();
    case EcorePackage::EENUM:
        return createEEnum();
    case EcorePackage::EENUMLITERAL:
        return createEEnumLiteral();
    case EcorePackage::EFACTORY:
        return createEFactory();
    case EcorePackage::EMODELELEMENT:
        return createEModelElement();
    case EcorePackage::ENAMEDELEMENT:
        return createENamedElement();
    case EcorePackage::EOBJECT:
        return createEObject();
    case EcorePackage::EOPERATION:
        return createEOperation();
    case EcorePackage::EPACKAGE:
        return createEPackage();
    case EcorePackage::EPARAMETER:
        return createEParameter();
    case EcorePackage::EREFERENCE:
        return createEReference();
    case EcorePackage::ESTRUCTURALFEATURE:
        return createEStructuralFeature();
    case EcorePackage::ETYPEDELEMENT:
        return createETypedElement();
    case EcorePackage::ESTRINGTOSTRINGMAPENTRY:
        return createEStringToStringMapEntry();
    case EcorePackage::EGENERICTYPE:
        return createEGenericType();
    case EcorePackage::ETYPEPARAMETER:
        return createETypeParameter();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject EcoreFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    case EcorePackage::EBIGDECIMAL:
        return ::ecorecpp::mapping::string_traits< ::ecore::EBigDecimal >::fromString(
                _literalValue);
    case EcorePackage::EBIGINTEGER:
        return ::ecorecpp::mapping::string_traits< ::ecore::EBigInteger >::fromString(
                _literalValue);
    case EcorePackage::EBOOLEAN:
        return ::ecorecpp::mapping::string_traits< ::ecore::EBoolean >::fromString(
                _literalValue);
    case EcorePackage::EBOOLEANOBJECT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EBooleanObject >::fromString(
                _literalValue);
    case EcorePackage::EBYTE:
        return ::ecorecpp::mapping::string_traits< ::ecore::EByte >::fromString(
                _literalValue);
    case EcorePackage::EBYTEARRAY:
        return ::ecorecpp::mapping::string_traits< ::ecore::EByteArray >::fromString(
                _literalValue);
    case EcorePackage::EBYTEOBJECT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EByteObject >::fromString(
                _literalValue);
    case EcorePackage::ECHAR:
        return ::ecorecpp::mapping::string_traits< ::ecore::EChar >::fromString(
                _literalValue);
    case EcorePackage::ECHARACTEROBJECT:
        return ::ecorecpp::mapping::string_traits< ::ecore::ECharacterObject >::fromString(
                _literalValue);
    case EcorePackage::EDATE:
        return ::ecorecpp::mapping::string_traits< ::ecore::EDate >::fromString(
                _literalValue);
    case EcorePackage::EDOUBLE:
        return ::ecorecpp::mapping::string_traits< ::ecore::EDouble >::fromString(
                _literalValue);
    case EcorePackage::EDOUBLEOBJECT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EDoubleObject >::fromString(
                _literalValue);
    case EcorePackage::EFLOAT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EFloat >::fromString(
                _literalValue);
    case EcorePackage::EFLOATOBJECT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EFloatObject >::fromString(
                _literalValue);
    case EcorePackage::EINT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EInt >::fromString(
                _literalValue);
    case EcorePackage::EINTEGEROBJECT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EIntegerObject >::fromString(
                _literalValue);
    case EcorePackage::EJAVAOBJECT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EJavaObject >::fromString(
                _literalValue);
    case EcorePackage::ELONG:
        return ::ecorecpp::mapping::string_traits< ::ecore::ELong >::fromString(
                _literalValue);
    case EcorePackage::ELONGOBJECT:
        return ::ecorecpp::mapping::string_traits< ::ecore::ELongObject >::fromString(
                _literalValue);
    case EcorePackage::ESHORT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EShort >::fromString(
                _literalValue);
    case EcorePackage::ESHORTOBJECT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EShortObject >::fromString(
                _literalValue);
    case EcorePackage::ESTRING:
        return ::ecorecpp::mapping::string_traits< ::ecore::EString >::fromString(
                _literalValue);
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString EcoreFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    case EcorePackage::EBIGDECIMAL:
        return ::ecorecpp::mapping::string_traits< ::ecore::EBigDecimal >::toString(
                _instanceValue);
    case EcorePackage::EBIGINTEGER:
        return ::ecorecpp::mapping::string_traits< ::ecore::EBigInteger >::toString(
                _instanceValue);
    case EcorePackage::EBOOLEAN:
        return ::ecorecpp::mapping::string_traits< ::ecore::EBoolean >::toString(
                _instanceValue);
    case EcorePackage::EBOOLEANOBJECT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EBooleanObject >::toString(
                _instanceValue);
    case EcorePackage::EBYTE:
        return ::ecorecpp::mapping::string_traits< ::ecore::EByte >::toString(
                _instanceValue);
    case EcorePackage::EBYTEARRAY:
        return ::ecorecpp::mapping::string_traits< ::ecore::EByteArray >::toString(
                _instanceValue);
    case EcorePackage::EBYTEOBJECT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EByteObject >::toString(
                _instanceValue);
    case EcorePackage::ECHAR:
        return ::ecorecpp::mapping::string_traits< ::ecore::EChar >::toString(
                _instanceValue);
    case EcorePackage::ECHARACTEROBJECT:
        return ::ecorecpp::mapping::string_traits< ::ecore::ECharacterObject >::toString(
                _instanceValue);
    case EcorePackage::EDATE:
        return ::ecorecpp::mapping::string_traits< ::ecore::EDate >::toString(
                _instanceValue);
    case EcorePackage::EDOUBLE:
        return ::ecorecpp::mapping::string_traits< ::ecore::EDouble >::toString(
                _instanceValue);
    case EcorePackage::EDOUBLEOBJECT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EDoubleObject >::toString(
                _instanceValue);
    case EcorePackage::EFLOAT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EFloat >::toString(
                _instanceValue);
    case EcorePackage::EFLOATOBJECT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EFloatObject >::toString(
                _instanceValue);
    case EcorePackage::EINT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EInt >::toString(
                _instanceValue);
    case EcorePackage::EINTEGEROBJECT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EIntegerObject >::toString(
                _instanceValue);
    case EcorePackage::EJAVAOBJECT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EJavaObject >::toString(
                _instanceValue);
    case EcorePackage::ELONG:
        return ::ecorecpp::mapping::string_traits< ::ecore::ELong >::toString(
                _instanceValue);
    case EcorePackage::ELONGOBJECT:
        return ::ecorecpp::mapping::string_traits< ::ecore::ELongObject >::toString(
                _instanceValue);
    case EcorePackage::ESHORT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EShort >::toString(
                _instanceValue);
    case EcorePackage::ESHORTOBJECT:
        return ::ecorecpp::mapping::string_traits< ::ecore::EShortObject >::toString(
                _instanceValue);
    case EcorePackage::ESTRING:
        return ::ecorecpp::mapping::string_traits< ::ecore::EString >::toString(
                _instanceValue);
    default:
        throw "IllegalArgumentException";
    }
}

EAttribute_ptr EcoreFactory::createEAttribute()
{
    return new EAttribute();
}
EAnnotation_ptr EcoreFactory::createEAnnotation()
{
    return new EAnnotation();
}
EClass_ptr EcoreFactory::createEClass()
{
    return new EClass();
}
EClassifier_ptr EcoreFactory::createEClassifier()
{
    return new EClassifier();
}
EDataType_ptr EcoreFactory::createEDataType()
{
    return new EDataType();
}
EEnum_ptr EcoreFactory::createEEnum()
{
    return new EEnum();
}
EEnumLiteral_ptr EcoreFactory::createEEnumLiteral()
{
    return new EEnumLiteral();
}
EFactory_ptr EcoreFactory::createEFactory()
{
    return new EFactory();
}
EModelElement_ptr EcoreFactory::createEModelElement()
{
    return new EModelElement();
}
ENamedElement_ptr EcoreFactory::createENamedElement()
{
    return new ENamedElement();
}
EObject_ptr EcoreFactory::createEObject()
{
    return new EObject();
}
EOperation_ptr EcoreFactory::createEOperation()
{
    return new EOperation();
}
EPackage_ptr EcoreFactory::createEPackage()
{
    return new EPackage();
}
EParameter_ptr EcoreFactory::createEParameter()
{
    return new EParameter();
}
EReference_ptr EcoreFactory::createEReference()
{
    return new EReference();
}
EStructuralFeature_ptr EcoreFactory::createEStructuralFeature()
{
    return new EStructuralFeature();
}
ETypedElement_ptr EcoreFactory::createETypedElement()
{
    return new ETypedElement();
}
EStringToStringMapEntry_ptr EcoreFactory::createEStringToStringMapEntry()
{
    return new EStringToStringMapEntry();
}
EGenericType_ptr EcoreFactory::createEGenericType()
{
    return new EGenericType();
}
ETypeParameter_ptr EcoreFactory::createETypeParameter()
{
    return new ETypeParameter();
}

