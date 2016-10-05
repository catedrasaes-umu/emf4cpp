// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * myDsl/MyDslPackageImpl.cpp
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

#include <myDsl/MyDslPackage.hpp>
#include <myDsl/MyDslFactory.hpp>
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

using namespace ::myDsl;

MyDslPackage::MyDslPackage()
{

    // Feature definitions of Model
    m_Model__imports = new ::ecore::EReference();
    m_Model__elements = new ::ecore::EReference();

    // Feature definitions of Import
    m_Import__importURI = new ::ecore::EAttribute();

    // Feature definitions of Type
    m_Type__name = new ::ecore::EAttribute();

    // Feature definitions of SimpleType

    // Feature definitions of Entity
    m_Entity__extends = new ::ecore::EReference();
    m_Entity__properties = new ::ecore::EReference();

    // Feature definitions of Property
    m_Property__name = new ::ecore::EAttribute();
    m_Property__many = new ::ecore::EAttribute();
    m_Property__type = new ::ecore::EReference();

    /* Now one can safely ask for a feature definition of
     * a class, though it is not yet usable. */
    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = MyDslFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    // Create classes and their features

    // Model
    m_ModelEClass = new ::ecore::EClass();
    m_ModelEClass->setClassifierID(MODEL);
    m_ModelEClass->setEPackage(this);
    getEClassifiers().push_back(m_ModelEClass);
    // m_Model__imports has already been allocated above
    m_Model__imports->setFeatureID(::myDsl::MyDslPackage::MODEL__IMPORTS);
    m_ModelEClass->getEStructuralFeatures().push_back(m_Model__imports);
    // m_Model__elements has already been allocated above
    m_Model__elements->setFeatureID(::myDsl::MyDslPackage::MODEL__ELEMENTS);
    m_ModelEClass->getEStructuralFeatures().push_back(m_Model__elements);

    // Import
    m_ImportEClass = new ::ecore::EClass();
    m_ImportEClass->setClassifierID(IMPORT);
    m_ImportEClass->setEPackage(this);
    getEClassifiers().push_back(m_ImportEClass);
    // m_Import__importURI has already been allocated above
    m_Import__importURI->setFeatureID(::myDsl::MyDslPackage::IMPORT__IMPORTURI);
    m_ImportEClass->getEStructuralFeatures().push_back(m_Import__importURI);

    // Type
    m_TypeEClass = new ::ecore::EClass();
    m_TypeEClass->setClassifierID(TYPE);
    m_TypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_TypeEClass);
    // m_Type__name has already been allocated above
    m_Type__name->setFeatureID(::myDsl::MyDslPackage::TYPE__NAME);
    m_TypeEClass->getEStructuralFeatures().push_back(m_Type__name);

    // SimpleType
    m_SimpleTypeEClass = new ::ecore::EClass();
    m_SimpleTypeEClass->setClassifierID(SIMPLETYPE);
    m_SimpleTypeEClass->setEPackage(this);
    getEClassifiers().push_back(m_SimpleTypeEClass);

    // Entity
    m_EntityEClass = new ::ecore::EClass();
    m_EntityEClass->setClassifierID(ENTITY);
    m_EntityEClass->setEPackage(this);
    getEClassifiers().push_back(m_EntityEClass);
    // m_Entity__extends has already been allocated above
    m_Entity__extends->setFeatureID(::myDsl::MyDslPackage::ENTITY__EXTENDS);
    m_EntityEClass->getEStructuralFeatures().push_back(m_Entity__extends);
    // m_Entity__properties has already been allocated above
    m_Entity__properties->setFeatureID(
            ::myDsl::MyDslPackage::ENTITY__PROPERTIES);
    m_EntityEClass->getEStructuralFeatures().push_back(m_Entity__properties);

    // Property
    m_PropertyEClass = new ::ecore::EClass();
    m_PropertyEClass->setClassifierID(PROPERTY);
    m_PropertyEClass->setEPackage(this);
    getEClassifiers().push_back(m_PropertyEClass);
    // m_Property__name has already been allocated above
    m_Property__name->setFeatureID(::myDsl::MyDslPackage::PROPERTY__NAME);
    m_PropertyEClass->getEStructuralFeatures().push_back(m_Property__name);
    // m_Property__many has already been allocated above
    m_Property__many->setFeatureID(::myDsl::MyDslPackage::PROPERTY__MANY);
    m_PropertyEClass->getEStructuralFeatures().push_back(m_Property__many);
    // m_Property__type has already been allocated above
    m_Property__type->setFeatureID(::myDsl::MyDslPackage::PROPERTY__TYPE);
    m_PropertyEClass->getEStructuralFeatures().push_back(m_Property__type);

    // Create enums

    // Create data types

    // Initialize package
    setName("myDsl");
    setNsPrefix("myDsl");
    setNsURI("http://www.xtext.org/example/MyDsl");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_SimpleTypeEClass->getESuperTypes().push_back(m_TypeEClass);
    m_EntityEClass->getESuperTypes().push_back(m_TypeEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // Model
    m_ModelEClass->setName("Model");
    m_ModelEClass->setAbstract(false);
    m_ModelEClass->setInterface(false);
    m_Model__imports->setEType(m_ImportEClass);
    m_Model__imports->setName("imports");
    m_Model__imports->setDefaultValueLiteral("");
    m_Model__imports->setLowerBound(0);
    m_Model__imports->setUpperBound(-1);
    m_Model__imports->setTransient(false);
    m_Model__imports->setVolatile(false);
    m_Model__imports->setChangeable(true);
    m_Model__imports->setContainment(true);
    m_Model__imports->setResolveProxies(true);
    m_Model__imports->setUnique(true);
    m_Model__imports->setDerived(false);
    m_Model__imports->setOrdered(true);
    m_Model__elements->setEType(m_TypeEClass);
    m_Model__elements->setName("elements");
    m_Model__elements->setDefaultValueLiteral("");
    m_Model__elements->setLowerBound(0);
    m_Model__elements->setUpperBound(-1);
    m_Model__elements->setTransient(false);
    m_Model__elements->setVolatile(false);
    m_Model__elements->setChangeable(true);
    m_Model__elements->setContainment(true);
    m_Model__elements->setResolveProxies(true);
    m_Model__elements->setUnique(true);
    m_Model__elements->setDerived(false);
    m_Model__elements->setOrdered(true);
    // Import
    m_ImportEClass->setName("Import");
    m_ImportEClass->setAbstract(false);
    m_ImportEClass->setInterface(false);
    m_Import__importURI->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEString());
    m_Import__importURI->setName("importURI");
    m_Import__importURI->setDefaultValueLiteral("");
    m_Import__importURI->setLowerBound(0);
    m_Import__importURI->setUpperBound(1);
    m_Import__importURI->setTransient(false);
    m_Import__importURI->setVolatile(false);
    m_Import__importURI->setChangeable(true);
    m_Import__importURI->setUnsettable(false);
    m_Import__importURI->setID(false);
    m_Import__importURI->setUnique(true);
    m_Import__importURI->setDerived(false);
    m_Import__importURI->setOrdered(true);
    // Type
    m_TypeEClass->setName("Type");
    m_TypeEClass->setAbstract(false);
    m_TypeEClass->setInterface(false);
    m_Type__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEString());
    m_Type__name->setName("name");
    m_Type__name->setDefaultValueLiteral("");
    m_Type__name->setLowerBound(0);
    m_Type__name->setUpperBound(1);
    m_Type__name->setTransient(false);
    m_Type__name->setVolatile(false);
    m_Type__name->setChangeable(true);
    m_Type__name->setUnsettable(false);
    m_Type__name->setID(false);
    m_Type__name->setUnique(true);
    m_Type__name->setDerived(false);
    m_Type__name->setOrdered(true);
    // SimpleType
    m_SimpleTypeEClass->setName("SimpleType");
    m_SimpleTypeEClass->setAbstract(false);
    m_SimpleTypeEClass->setInterface(false);
    // Entity
    m_EntityEClass->setName("Entity");
    m_EntityEClass->setAbstract(false);
    m_EntityEClass->setInterface(false);
    m_Entity__extends->setEType(m_EntityEClass);
    m_Entity__extends->setName("extends");
    m_Entity__extends->setDefaultValueLiteral("");
    m_Entity__extends->setLowerBound(0);
    m_Entity__extends->setUpperBound(1);
    m_Entity__extends->setTransient(false);
    m_Entity__extends->setVolatile(false);
    m_Entity__extends->setChangeable(true);
    m_Entity__extends->setContainment(false);
    m_Entity__extends->setResolveProxies(true);
    m_Entity__extends->setUnique(true);
    m_Entity__extends->setDerived(false);
    m_Entity__extends->setOrdered(true);
    m_Entity__properties->setEType(m_PropertyEClass);
    m_Entity__properties->setName("properties");
    m_Entity__properties->setDefaultValueLiteral("");
    m_Entity__properties->setLowerBound(0);
    m_Entity__properties->setUpperBound(-1);
    m_Entity__properties->setTransient(false);
    m_Entity__properties->setVolatile(false);
    m_Entity__properties->setChangeable(true);
    m_Entity__properties->setContainment(true);
    m_Entity__properties->setResolveProxies(true);
    m_Entity__properties->setUnique(true);
    m_Entity__properties->setDerived(false);
    m_Entity__properties->setOrdered(true);
    // Property
    m_PropertyEClass->setName("Property");
    m_PropertyEClass->setAbstract(false);
    m_PropertyEClass->setInterface(false);
    m_Property__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEString());
    m_Property__name->setName("name");
    m_Property__name->setDefaultValueLiteral("");
    m_Property__name->setLowerBound(0);
    m_Property__name->setUpperBound(1);
    m_Property__name->setTransient(false);
    m_Property__name->setVolatile(false);
    m_Property__name->setChangeable(true);
    m_Property__name->setUnsettable(false);
    m_Property__name->setID(false);
    m_Property__name->setUnique(true);
    m_Property__name->setDerived(false);
    m_Property__name->setOrdered(true);
    m_Property__many->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEBoolean());
    m_Property__many->setName("many");
    m_Property__many->setDefaultValueLiteral("");
    m_Property__many->setLowerBound(0);
    m_Property__many->setUpperBound(1);
    m_Property__many->setTransient(false);
    m_Property__many->setVolatile(false);
    m_Property__many->setChangeable(true);
    m_Property__many->setUnsettable(false);
    m_Property__many->setID(false);
    m_Property__many->setUnique(true);
    m_Property__many->setDerived(false);
    m_Property__many->setOrdered(true);
    m_Property__type->setEType(m_TypeEClass);
    m_Property__type->setName("type");
    m_Property__type->setDefaultValueLiteral("");
    m_Property__type->setLowerBound(0);
    m_Property__type->setUpperBound(1);
    m_Property__type->setTransient(false);
    m_Property__type->setVolatile(false);
    m_Property__type->setChangeable(true);
    m_Property__type->setContainment(false);
    m_Property__type->setResolveProxies(true);
    m_Property__type->setUnique(true);
    m_Property__type->setDerived(false);
    m_Property__type->setOrdered(true);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr MyDslPackage::getModel()
{
    return m_ModelEClass;
}
::ecore::EClass_ptr MyDslPackage::getImport()
{
    return m_ImportEClass;
}
::ecore::EClass_ptr MyDslPackage::getType()
{
    return m_TypeEClass;
}
::ecore::EClass_ptr MyDslPackage::getSimpleType()
{
    return m_SimpleTypeEClass;
}
::ecore::EClass_ptr MyDslPackage::getEntity()
{
    return m_EntityEClass;
}
::ecore::EClass_ptr MyDslPackage::getProperty()
{
    return m_PropertyEClass;
}

::ecore::EReference_ptr MyDslPackage::getModel__imports()
{
    return m_Model__imports;
}
::ecore::EReference_ptr MyDslPackage::getModel__elements()
{
    return m_Model__elements;
}
::ecore::EAttribute_ptr MyDslPackage::getImport__importURI()
{
    return m_Import__importURI;
}
::ecore::EAttribute_ptr MyDslPackage::getType__name()
{
    return m_Type__name;
}
::ecore::EReference_ptr MyDslPackage::getEntity__extends()
{
    return m_Entity__extends;
}
::ecore::EReference_ptr MyDslPackage::getEntity__properties()
{
    return m_Entity__properties;
}
::ecore::EAttribute_ptr MyDslPackage::getProperty__name()
{
    return m_Property__name;
}
::ecore::EReference_ptr MyDslPackage::getProperty__type()
{
    return m_Property__type;
}
::ecore::EAttribute_ptr MyDslPackage::getProperty__many()
{
    return m_Property__many;
}

