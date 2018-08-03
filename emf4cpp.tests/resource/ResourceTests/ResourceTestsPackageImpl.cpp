// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ResourceTests/ResourceTestsPackageImpl.cpp
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

#include <ResourceTests/ResourceTestsPackage.hpp>
#include <ResourceTests/ResourceTestsFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EcorePackage.hpp>

using namespace ::ResourceTests;

ResourceTestsPackage::ResourceTestsPackage()
{

    // Feature definitions of Root
    m_Root__target = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Root__referrers = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ReferenceTarget

    // Feature definitions of Referrer
    m_Referrer__reference = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ETypes
    m_ETypes__string = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ETypes__emptyString = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ETypes__date = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ETypes__char = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ETypes__bool = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ETypes__double = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ETypes__int = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

}

void ResourceTestsPackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = ResourceTestsFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    // Create classes and their features

    // Root
    m_RootEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_RootEClass->setClassifierID(ROOT);
    m_RootEClass->setEPackage(_this());
    getEClassifiers().push_back(m_RootEClass);
    // m_Root__target has already been allocated above
    m_Root__target->setFeatureID(
            ::ResourceTests::ResourceTestsPackage::ROOT__TARGET);
    m_RootEClass->getEStructuralFeatures().push_back(m_Root__target);
    // m_Root__referrers has already been allocated above
    m_Root__referrers->setFeatureID(
            ::ResourceTests::ResourceTestsPackage::ROOT__REFERRERS);
    m_RootEClass->getEStructuralFeatures().push_back(m_Root__referrers);

    // ReferenceTarget
    m_ReferenceTargetEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ReferenceTargetEClass->setClassifierID(REFERENCETARGET);
    m_ReferenceTargetEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ReferenceTargetEClass);

    // Referrer
    m_ReferrerEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_ReferrerEClass->setClassifierID(REFERRER);
    m_ReferrerEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ReferrerEClass);
    // m_Referrer__reference has already been allocated above
    m_Referrer__reference->setFeatureID(
            ::ResourceTests::ResourceTestsPackage::REFERRER__REFERENCE);
    m_ReferrerEClass->getEStructuralFeatures().push_back(m_Referrer__reference);

    // ETypes
    m_ETypesEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_ETypesEClass->setClassifierID(ETYPES);
    m_ETypesEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ETypesEClass);
    // m_ETypes__string has already been allocated above
    m_ETypes__string->setFeatureID(
            ::ResourceTests::ResourceTestsPackage::ETYPES__STRING);
    m_ETypesEClass->getEStructuralFeatures().push_back(m_ETypes__string);
    // m_ETypes__emptyString has already been allocated above
    m_ETypes__emptyString->setFeatureID(
            ::ResourceTests::ResourceTestsPackage::ETYPES__EMPTYSTRING);
    m_ETypesEClass->getEStructuralFeatures().push_back(m_ETypes__emptyString);
    // m_ETypes__date has already been allocated above
    m_ETypes__date->setFeatureID(
            ::ResourceTests::ResourceTestsPackage::ETYPES__DATE);
    m_ETypesEClass->getEStructuralFeatures().push_back(m_ETypes__date);
    // m_ETypes__char has already been allocated above
    m_ETypes__char->setFeatureID(
            ::ResourceTests::ResourceTestsPackage::ETYPES__CHAR);
    m_ETypesEClass->getEStructuralFeatures().push_back(m_ETypes__char);
    // m_ETypes__bool has already been allocated above
    m_ETypes__bool->setFeatureID(
            ::ResourceTests::ResourceTestsPackage::ETYPES__BOOL);
    m_ETypesEClass->getEStructuralFeatures().push_back(m_ETypes__bool);
    // m_ETypes__double has already been allocated above
    m_ETypes__double->setFeatureID(
            ::ResourceTests::ResourceTestsPackage::ETYPES__DOUBLE);
    m_ETypesEClass->getEStructuralFeatures().push_back(m_ETypes__double);
    // m_ETypes__int has already been allocated above
    m_ETypes__int->setFeatureID(
            ::ResourceTests::ResourceTestsPackage::ETYPES__INT);
    m_ETypesEClass->getEStructuralFeatures().push_back(m_ETypes__int);

    // Create enums

    // Create data types

    // Initialize package
    setName("ResourceTests");
    setNsPrefix("ResourceTests");
    setNsURI("http://www.example.org/ResourceTests");

    // TODO: bounds for type parameters

    // Add supertypes to classes

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // Root
    m_RootEClass->setName("Root");
    m_RootEClass->setAbstract(false);
    m_RootEClass->setInterface(false);
    m_Root__target->setEType(m_ReferenceTargetEClass);
    m_Root__target->setName("target");
    m_Root__target->setDefaultValueLiteral("");
    m_Root__target->setLowerBound(0);
    m_Root__target->setUpperBound(1);
    m_Root__target->setTransient(false);
    m_Root__target->setVolatile(false);
    m_Root__target->setChangeable(true);
    m_Root__target->setContainment(true);
    m_Root__target->setResolveProxies(true);
    m_Root__target->setUnique(true);
    m_Root__target->setDerived(false);
    m_Root__target->setOrdered(true);
    m_Root__referrers->setEType(m_ReferrerEClass);
    m_Root__referrers->setName("referrers");
    m_Root__referrers->setDefaultValueLiteral("");
    m_Root__referrers->setLowerBound(0);
    m_Root__referrers->setUpperBound(-1);
    m_Root__referrers->setTransient(false);
    m_Root__referrers->setVolatile(false);
    m_Root__referrers->setChangeable(true);
    m_Root__referrers->setContainment(true);
    m_Root__referrers->setResolveProxies(true);
    m_Root__referrers->setUnique(true);
    m_Root__referrers->setDerived(false);
    m_Root__referrers->setOrdered(true);
    // ReferenceTarget
    m_ReferenceTargetEClass->setName("ReferenceTarget");
    m_ReferenceTargetEClass->setAbstract(false);
    m_ReferenceTargetEClass->setInterface(false);
    // Referrer
    m_ReferrerEClass->setName("Referrer");
    m_ReferrerEClass->setAbstract(false);
    m_ReferrerEClass->setInterface(false);
    m_Referrer__reference->setEType(m_ReferenceTargetEClass);
    m_Referrer__reference->setName("reference");
    m_Referrer__reference->setDefaultValueLiteral("");
    m_Referrer__reference->setLowerBound(0);
    m_Referrer__reference->setUpperBound(1);
    m_Referrer__reference->setTransient(false);
    m_Referrer__reference->setVolatile(false);
    m_Referrer__reference->setChangeable(true);
    m_Referrer__reference->setContainment(false);
    m_Referrer__reference->setResolveProxies(true);
    m_Referrer__reference->setUnique(true);
    m_Referrer__reference->setDerived(false);
    m_Referrer__reference->setOrdered(true);
    // ETypes
    m_ETypesEClass->setName("ETypes");
    m_ETypesEClass->setAbstract(false);
    m_ETypesEClass->setInterface(false);
    m_ETypes__string->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_ETypes__string->setName("string");
    m_ETypes__string->setDefaultValueLiteral("Hallo Welt!");
    m_ETypes__string->setLowerBound(0);
    m_ETypes__string->setUpperBound(1);
    m_ETypes__string->setTransient(false);
    m_ETypes__string->setVolatile(false);
    m_ETypes__string->setChangeable(true);
    m_ETypes__string->setUnsettable(false);
    m_ETypes__string->setID(false);
    m_ETypes__string->setUnique(true);
    m_ETypes__string->setDerived(false);
    m_ETypes__string->setOrdered(true);
    m_ETypes__emptyString->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_ETypes__emptyString->setName("emptyString");
    m_ETypes__emptyString->setDefaultValueLiteral("");
    m_ETypes__emptyString->setLowerBound(0);
    m_ETypes__emptyString->setUpperBound(1);
    m_ETypes__emptyString->setTransient(false);
    m_ETypes__emptyString->setVolatile(false);
    m_ETypes__emptyString->setChangeable(true);
    m_ETypes__emptyString->setUnsettable(false);
    m_ETypes__emptyString->setID(false);
    m_ETypes__emptyString->setUnique(true);
    m_ETypes__emptyString->setDerived(false);
    m_ETypes__emptyString->setOrdered(true);
    m_ETypes__date->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEDate());
    m_ETypes__date->setName("date");
    m_ETypes__date->setDefaultValueLiteral("1976-05-27T12:13:14.123-0300");
    m_ETypes__date->setLowerBound(0);
    m_ETypes__date->setUpperBound(1);
    m_ETypes__date->setTransient(false);
    m_ETypes__date->setVolatile(false);
    m_ETypes__date->setChangeable(true);
    m_ETypes__date->setUnsettable(false);
    m_ETypes__date->setID(false);
    m_ETypes__date->setUnique(true);
    m_ETypes__date->setDerived(false);
    m_ETypes__date->setOrdered(true);
    m_ETypes__char->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEChar());
    m_ETypes__char->setName("char");
    m_ETypes__char->setDefaultValueLiteral("98");
    m_ETypes__char->setLowerBound(0);
    m_ETypes__char->setUpperBound(1);
    m_ETypes__char->setTransient(false);
    m_ETypes__char->setVolatile(false);
    m_ETypes__char->setChangeable(true);
    m_ETypes__char->setUnsettable(false);
    m_ETypes__char->setID(false);
    m_ETypes__char->setUnique(true);
    m_ETypes__char->setDerived(false);
    m_ETypes__char->setOrdered(true);
    m_ETypes__bool->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBoolean());
    m_ETypes__bool->setName("bool");
    m_ETypes__bool->setDefaultValueLiteral("true");
    m_ETypes__bool->setLowerBound(0);
    m_ETypes__bool->setUpperBound(1);
    m_ETypes__bool->setTransient(false);
    m_ETypes__bool->setVolatile(false);
    m_ETypes__bool->setChangeable(true);
    m_ETypes__bool->setUnsettable(false);
    m_ETypes__bool->setID(false);
    m_ETypes__bool->setUnique(true);
    m_ETypes__bool->setDerived(false);
    m_ETypes__bool->setOrdered(true);
    m_ETypes__double->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEDouble());
    m_ETypes__double->setName("double");
    m_ETypes__double->setDefaultValueLiteral("3.14");
    m_ETypes__double->setLowerBound(0);
    m_ETypes__double->setUpperBound(1);
    m_ETypes__double->setTransient(false);
    m_ETypes__double->setVolatile(false);
    m_ETypes__double->setChangeable(true);
    m_ETypes__double->setUnsettable(false);
    m_ETypes__double->setID(false);
    m_ETypes__double->setUnique(true);
    m_ETypes__double->setDerived(false);
    m_ETypes__double->setOrdered(true);
    m_ETypes__int->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEInt());
    m_ETypes__int->setName("int");
    m_ETypes__int->setDefaultValueLiteral("10");
    m_ETypes__int->setLowerBound(0);
    m_ETypes__int->setUpperBound(1);
    m_ETypes__int->setTransient(false);
    m_ETypes__int->setVolatile(false);
    m_ETypes__int->setChangeable(true);
    m_ETypes__int->setUnsettable(false);
    m_ETypes__int->setID(false);
    m_ETypes__int->setUnique(true);
    m_ETypes__int->setDerived(false);
    m_ETypes__int->setOrdered(true);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr ResourceTestsPackage::getRoot()
{
    return m_RootEClass;
}
::ecore::EClass_ptr ResourceTestsPackage::getReferenceTarget()
{
    return m_ReferenceTargetEClass;
}
::ecore::EClass_ptr ResourceTestsPackage::getReferrer()
{
    return m_ReferrerEClass;
}
::ecore::EClass_ptr ResourceTestsPackage::getETypes()
{
    return m_ETypesEClass;
}

::ecore::EReference_ptr ResourceTestsPackage::getRoot__target()
{
    return m_Root__target;
}
::ecore::EReference_ptr ResourceTestsPackage::getRoot__referrers()
{
    return m_Root__referrers;
}
::ecore::EReference_ptr ResourceTestsPackage::getReferrer__reference()
{
    return m_Referrer__reference;
}
::ecore::EAttribute_ptr ResourceTestsPackage::getETypes__string()
{
    return m_ETypes__string;
}
::ecore::EAttribute_ptr ResourceTestsPackage::getETypes__emptyString()
{
    return m_ETypes__emptyString;
}
::ecore::EAttribute_ptr ResourceTestsPackage::getETypes__date()
{
    return m_ETypes__date;
}
::ecore::EAttribute_ptr ResourceTestsPackage::getETypes__char()
{
    return m_ETypes__char;
}
::ecore::EAttribute_ptr ResourceTestsPackage::getETypes__bool()
{
    return m_ETypes__bool;
}
::ecore::EAttribute_ptr ResourceTestsPackage::getETypes__double()
{
    return m_ETypes__double;
}
::ecore::EAttribute_ptr ResourceTestsPackage::getETypes__int()
{
    return m_ETypes__int;
}

