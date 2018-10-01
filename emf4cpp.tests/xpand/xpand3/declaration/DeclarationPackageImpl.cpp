// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/DeclarationPackageImpl.cpp
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

#include <xpand3/declaration/DeclarationPackage.hpp>
#include <xpand3/declaration/DeclarationFactory.hpp>
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
#include <xpand3/Xpand3Package.hpp>
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/File.hpp>
#include <xpand3/DeclaredParameter.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <xpand3/statement/AbstractStatement.hpp>

using namespace ::xpand3::declaration;

DeclarationPackage::DeclarationPackage()
{

    // Feature definitions of AbstractDeclaration
    m_AbstractDeclaration__isPrivate = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_AbstractDeclaration__owner = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_AbstractDeclaration__params = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_AbstractDeclaration__guard = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of AbstractNamedDeclaration
    m_AbstractNamedDeclaration__name = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Definition
    m_Definition__body = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Extension
    m_Extension__cached = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Extension__body = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Extension__returnType = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of AbstractAspect
    m_AbstractAspect__wildparams = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_AbstractAspect__pointcut = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ExtensionAspect
    m_ExtensionAspect__expression = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of DefinitionAspect
    m_DefinitionAspect__body = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Check
    m_Check__errorSeverity = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Check__feature = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Check__msg = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Check__constraint = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of CreateExtension
    m_CreateExtension__toBeCreated = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of JavaExtension
    m_JavaExtension__javaType = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_JavaExtension__javaMethod = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_JavaExtension__javaParamTypes = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

}

void DeclarationPackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = DeclarationFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    // Create classes and their features

    // AbstractDeclaration
    m_AbstractDeclarationEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AbstractDeclarationEClass->setClassifierID(ABSTRACTDECLARATION);
    m_AbstractDeclarationEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AbstractDeclarationEClass);
    // m_AbstractDeclaration__isPrivate has already been allocated above
    m_AbstractDeclaration__isPrivate->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__ISPRIVATE);
    m_AbstractDeclarationEClass->getEStructuralFeatures().push_back(
            m_AbstractDeclaration__isPrivate);
    // m_AbstractDeclaration__owner has already been allocated above
    m_AbstractDeclaration__owner->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__OWNER);
    m_AbstractDeclarationEClass->getEStructuralFeatures().push_back(
            m_AbstractDeclaration__owner);
    // m_AbstractDeclaration__params has already been allocated above
    m_AbstractDeclaration__params->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__PARAMS);
    m_AbstractDeclarationEClass->getEStructuralFeatures().push_back(
            m_AbstractDeclaration__params);
    // m_AbstractDeclaration__guard has already been allocated above
    m_AbstractDeclaration__guard->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__GUARD);
    m_AbstractDeclarationEClass->getEStructuralFeatures().push_back(
            m_AbstractDeclaration__guard);

    // AbstractNamedDeclaration
    m_AbstractNamedDeclarationEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AbstractNamedDeclarationEClass->setClassifierID(ABSTRACTNAMEDDECLARATION);
    m_AbstractNamedDeclarationEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AbstractNamedDeclarationEClass);
    // m_AbstractNamedDeclaration__name has already been allocated above
    m_AbstractNamedDeclaration__name->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::ABSTRACTNAMEDDECLARATION__NAME);
    m_AbstractNamedDeclarationEClass->getEStructuralFeatures().push_back(
            m_AbstractNamedDeclaration__name);

    // Definition
    m_DefinitionEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_DefinitionEClass->setClassifierID(DEFINITION);
    m_DefinitionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_DefinitionEClass);
    // m_Definition__body has already been allocated above
    m_Definition__body->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::DEFINITION__BODY);
    m_DefinitionEClass->getEStructuralFeatures().push_back(m_Definition__body);

    // Extension
    m_ExtensionEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_ExtensionEClass->setClassifierID(EXTENSION);
    m_ExtensionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ExtensionEClass);
    // m_Extension__cached has already been allocated above
    m_Extension__cached->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::EXTENSION__CACHED);
    m_ExtensionEClass->getEStructuralFeatures().push_back(m_Extension__cached);
    // m_Extension__body has already been allocated above
    m_Extension__body->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::EXTENSION__BODY);
    m_ExtensionEClass->getEStructuralFeatures().push_back(m_Extension__body);
    // m_Extension__returnType has already been allocated above
    m_Extension__returnType->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::EXTENSION__RETURNTYPE);
    m_ExtensionEClass->getEStructuralFeatures().push_back(
            m_Extension__returnType);

    // AbstractAspect
    m_AbstractAspectEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AbstractAspectEClass->setClassifierID(ABSTRACTASPECT);
    m_AbstractAspectEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AbstractAspectEClass);
    // m_AbstractAspect__wildparams has already been allocated above
    m_AbstractAspect__wildparams->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::ABSTRACTASPECT__WILDPARAMS);
    m_AbstractAspectEClass->getEStructuralFeatures().push_back(
            m_AbstractAspect__wildparams);
    // m_AbstractAspect__pointcut has already been allocated above
    m_AbstractAspect__pointcut->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::ABSTRACTASPECT__POINTCUT);
    m_AbstractAspectEClass->getEStructuralFeatures().push_back(
            m_AbstractAspect__pointcut);

    // ExtensionAspect
    m_ExtensionAspectEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ExtensionAspectEClass->setClassifierID(EXTENSIONASPECT);
    m_ExtensionAspectEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ExtensionAspectEClass);
    // m_ExtensionAspect__expression has already been allocated above
    m_ExtensionAspect__expression->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::EXTENSIONASPECT__EXPRESSION);
    m_ExtensionAspectEClass->getEStructuralFeatures().push_back(
            m_ExtensionAspect__expression);

    // DefinitionAspect
    m_DefinitionAspectEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_DefinitionAspectEClass->setClassifierID(DEFINITIONASPECT);
    m_DefinitionAspectEClass->setEPackage(_this());
    getEClassifiers().push_back(m_DefinitionAspectEClass);
    // m_DefinitionAspect__body has already been allocated above
    m_DefinitionAspect__body->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__BODY);
    m_DefinitionAspectEClass->getEStructuralFeatures().push_back(
            m_DefinitionAspect__body);

    // Check
    m_CheckEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_CheckEClass->setClassifierID(CHECK);
    m_CheckEClass->setEPackage(_this());
    getEClassifiers().push_back(m_CheckEClass);
    // m_Check__errorSeverity has already been allocated above
    m_Check__errorSeverity->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::CHECK__ERRORSEVERITY);
    m_CheckEClass->getEStructuralFeatures().push_back(m_Check__errorSeverity);
    // m_Check__feature has already been allocated above
    m_Check__feature->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::CHECK__FEATURE);
    m_CheckEClass->getEStructuralFeatures().push_back(m_Check__feature);
    // m_Check__msg has already been allocated above
    m_Check__msg->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::CHECK__MSG);
    m_CheckEClass->getEStructuralFeatures().push_back(m_Check__msg);
    // m_Check__constraint has already been allocated above
    m_Check__constraint->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::CHECK__CONSTRAINT);
    m_CheckEClass->getEStructuralFeatures().push_back(m_Check__constraint);

    // CreateExtension
    m_CreateExtensionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_CreateExtensionEClass->setClassifierID(CREATEEXTENSION);
    m_CreateExtensionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_CreateExtensionEClass);
    // m_CreateExtension__toBeCreated has already been allocated above
    m_CreateExtension__toBeCreated->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__TOBECREATED);
    m_CreateExtensionEClass->getEStructuralFeatures().push_back(
            m_CreateExtension__toBeCreated);

    // JavaExtension
    m_JavaExtensionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_JavaExtensionEClass->setClassifierID(JAVAEXTENSION);
    m_JavaExtensionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_JavaExtensionEClass);
    // m_JavaExtension__javaType has already been allocated above
    m_JavaExtension__javaType->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVATYPE);
    m_JavaExtensionEClass->getEStructuralFeatures().push_back(
            m_JavaExtension__javaType);
    // m_JavaExtension__javaMethod has already been allocated above
    m_JavaExtension__javaMethod->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVAMETHOD);
    m_JavaExtensionEClass->getEStructuralFeatures().push_back(
            m_JavaExtension__javaMethod);
    // m_JavaExtension__javaParamTypes has already been allocated above
    m_JavaExtension__javaParamTypes->setFeatureID(
            ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVAPARAMTYPES);
    m_JavaExtensionEClass->getEStructuralFeatures().push_back(
            m_JavaExtension__javaParamTypes);

    // Create enums

    // Create data types

    // Initialize package
    setName("declaration");
    setNsPrefix("declaration");
    setNsURI("http://www.eclipse.org/m2t/xpand/xpand3/declaration");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_AbstractDeclarationEClass->getESuperTypes().push_back(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance().get())->getSyntaxElement());
    m_AbstractNamedDeclarationEClass->getESuperTypes().push_back(
            m_AbstractDeclarationEClass);
    m_DefinitionEClass->getESuperTypes().push_back(
            m_AbstractNamedDeclarationEClass);
    m_ExtensionEClass->getESuperTypes().push_back(
            m_AbstractNamedDeclarationEClass);
    m_AbstractAspectEClass->getESuperTypes().push_back(
            m_AbstractDeclarationEClass);
    m_ExtensionAspectEClass->getESuperTypes().push_back(m_AbstractAspectEClass);
    m_DefinitionAspectEClass->getESuperTypes().push_back(
            m_AbstractAspectEClass);
    m_CheckEClass->getESuperTypes().push_back(m_AbstractDeclarationEClass);
    m_CreateExtensionEClass->getESuperTypes().push_back(m_ExtensionEClass);
    m_JavaExtensionEClass->getESuperTypes().push_back(
            m_AbstractNamedDeclarationEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // AbstractDeclaration
    m_AbstractDeclarationEClass->setName("AbstractDeclaration");
    m_AbstractDeclarationEClass->setAbstract(true);
    m_AbstractDeclarationEClass->setInterface(false);
    m_AbstractDeclaration__isPrivate->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBoolean());
    m_AbstractDeclaration__isPrivate->setName("isPrivate");
    m_AbstractDeclaration__isPrivate->setDefaultValueLiteral("");
    m_AbstractDeclaration__isPrivate->setLowerBound(0);
    m_AbstractDeclaration__isPrivate->setUpperBound(1);
    m_AbstractDeclaration__isPrivate->setTransient(false);
    m_AbstractDeclaration__isPrivate->setVolatile(false);
    m_AbstractDeclaration__isPrivate->setChangeable(true);
    m_AbstractDeclaration__isPrivate->setUnsettable(false);
    m_AbstractDeclaration__isPrivate->setID(false);
    m_AbstractDeclaration__isPrivate->setUnique(true);
    m_AbstractDeclaration__isPrivate->setDerived(false);
    m_AbstractDeclaration__isPrivate->setOrdered(true);
    m_AbstractDeclaration__owner->setEType(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance().get())->getFile());
    m_AbstractDeclaration__owner->setName("owner");
    m_AbstractDeclaration__owner->setDefaultValueLiteral("");
    m_AbstractDeclaration__owner->setLowerBound(1);
    m_AbstractDeclaration__owner->setUpperBound(1);
    m_AbstractDeclaration__owner->setTransient(false);
    m_AbstractDeclaration__owner->setVolatile(false);
    m_AbstractDeclaration__owner->setChangeable(true);
    m_AbstractDeclaration__owner->setContainment(true);
    m_AbstractDeclaration__owner->setResolveProxies(true);
    m_AbstractDeclaration__owner->setUnique(true);
    m_AbstractDeclaration__owner->setDerived(false);
    m_AbstractDeclaration__owner->setOrdered(true);
    m_AbstractDeclaration__params->setEType(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance().get())->getDeclaredParameter());
    m_AbstractDeclaration__params->setName("params");
    m_AbstractDeclaration__params->setDefaultValueLiteral("");
    m_AbstractDeclaration__params->setLowerBound(0);
    m_AbstractDeclaration__params->setUpperBound(-1);
    m_AbstractDeclaration__params->setTransient(false);
    m_AbstractDeclaration__params->setVolatile(false);
    m_AbstractDeclaration__params->setChangeable(true);
    m_AbstractDeclaration__params->setContainment(true);
    m_AbstractDeclaration__params->setResolveProxies(true);
    m_AbstractDeclaration__params->setUnique(true);
    m_AbstractDeclaration__params->setDerived(false);
    m_AbstractDeclaration__params->setOrdered(true);
    m_AbstractDeclaration__guard->setEType(
            dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getAbstractExpression());
    m_AbstractDeclaration__guard->setName("guard");
    m_AbstractDeclaration__guard->setDefaultValueLiteral("");
    m_AbstractDeclaration__guard->setLowerBound(0);
    m_AbstractDeclaration__guard->setUpperBound(1);
    m_AbstractDeclaration__guard->setTransient(false);
    m_AbstractDeclaration__guard->setVolatile(false);
    m_AbstractDeclaration__guard->setChangeable(true);
    m_AbstractDeclaration__guard->setContainment(true);
    m_AbstractDeclaration__guard->setResolveProxies(true);
    m_AbstractDeclaration__guard->setUnique(true);
    m_AbstractDeclaration__guard->setDerived(false);
    m_AbstractDeclaration__guard->setOrdered(true);
    // AbstractNamedDeclaration
    m_AbstractNamedDeclarationEClass->setName("AbstractNamedDeclaration");
    m_AbstractNamedDeclarationEClass->setAbstract(true);
    m_AbstractNamedDeclarationEClass->setInterface(false);
    m_AbstractNamedDeclaration__name->setEType(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance().get())->getIdentifier());
    m_AbstractNamedDeclaration__name->setName("name");
    m_AbstractNamedDeclaration__name->setDefaultValueLiteral("");
    m_AbstractNamedDeclaration__name->setLowerBound(0);
    m_AbstractNamedDeclaration__name->setUpperBound(1);
    m_AbstractNamedDeclaration__name->setTransient(false);
    m_AbstractNamedDeclaration__name->setVolatile(false);
    m_AbstractNamedDeclaration__name->setChangeable(true);
    m_AbstractNamedDeclaration__name->setContainment(true);
    m_AbstractNamedDeclaration__name->setResolveProxies(true);
    m_AbstractNamedDeclaration__name->setUnique(true);
    m_AbstractNamedDeclaration__name->setDerived(false);
    m_AbstractNamedDeclaration__name->setOrdered(true);
    // Definition
    m_DefinitionEClass->setName("Definition");
    m_DefinitionEClass->setAbstract(false);
    m_DefinitionEClass->setInterface(false);
    m_Definition__body->setEType(
            dynamic_cast< ::xpand3::statement::StatementPackage* >(::xpand3::statement::StatementPackage::_instance().get())->getAbstractStatement());
    m_Definition__body->setName("body");
    m_Definition__body->setDefaultValueLiteral("");
    m_Definition__body->setLowerBound(0);
    m_Definition__body->setUpperBound(-1);
    m_Definition__body->setTransient(false);
    m_Definition__body->setVolatile(false);
    m_Definition__body->setChangeable(true);
    m_Definition__body->setContainment(true);
    m_Definition__body->setResolveProxies(true);
    m_Definition__body->setUnique(true);
    m_Definition__body->setDerived(false);
    m_Definition__body->setOrdered(true);
    // Extension
    m_ExtensionEClass->setName("Extension");
    m_ExtensionEClass->setAbstract(false);
    m_ExtensionEClass->setInterface(false);
    m_Extension__cached->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBoolean());
    m_Extension__cached->setName("cached");
    m_Extension__cached->setDefaultValueLiteral("");
    m_Extension__cached->setLowerBound(0);
    m_Extension__cached->setUpperBound(1);
    m_Extension__cached->setTransient(false);
    m_Extension__cached->setVolatile(false);
    m_Extension__cached->setChangeable(true);
    m_Extension__cached->setUnsettable(false);
    m_Extension__cached->setID(false);
    m_Extension__cached->setUnique(true);
    m_Extension__cached->setDerived(false);
    m_Extension__cached->setOrdered(true);
    m_Extension__body->setEType(
            dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getAbstractExpression());
    m_Extension__body->setName("body");
    m_Extension__body->setDefaultValueLiteral("");
    m_Extension__body->setLowerBound(1);
    m_Extension__body->setUpperBound(1);
    m_Extension__body->setTransient(false);
    m_Extension__body->setVolatile(false);
    m_Extension__body->setChangeable(true);
    m_Extension__body->setContainment(true);
    m_Extension__body->setResolveProxies(true);
    m_Extension__body->setUnique(true);
    m_Extension__body->setDerived(false);
    m_Extension__body->setOrdered(true);
    m_Extension__returnType->setEType(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance().get())->getIdentifier());
    m_Extension__returnType->setName("returnType");
    m_Extension__returnType->setDefaultValueLiteral("");
    m_Extension__returnType->setLowerBound(0);
    m_Extension__returnType->setUpperBound(1);
    m_Extension__returnType->setTransient(false);
    m_Extension__returnType->setVolatile(false);
    m_Extension__returnType->setChangeable(true);
    m_Extension__returnType->setContainment(true);
    m_Extension__returnType->setResolveProxies(true);
    m_Extension__returnType->setUnique(true);
    m_Extension__returnType->setDerived(false);
    m_Extension__returnType->setOrdered(true);
    // AbstractAspect
    m_AbstractAspectEClass->setName("AbstractAspect");
    m_AbstractAspectEClass->setAbstract(true);
    m_AbstractAspectEClass->setInterface(false);
    m_AbstractAspect__wildparams->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBoolean());
    m_AbstractAspect__wildparams->setName("wildparams");
    m_AbstractAspect__wildparams->setDefaultValueLiteral("");
    m_AbstractAspect__wildparams->setLowerBound(0);
    m_AbstractAspect__wildparams->setUpperBound(1);
    m_AbstractAspect__wildparams->setTransient(false);
    m_AbstractAspect__wildparams->setVolatile(false);
    m_AbstractAspect__wildparams->setChangeable(true);
    m_AbstractAspect__wildparams->setUnsettable(false);
    m_AbstractAspect__wildparams->setID(false);
    m_AbstractAspect__wildparams->setUnique(true);
    m_AbstractAspect__wildparams->setDerived(false);
    m_AbstractAspect__wildparams->setOrdered(true);
    m_AbstractAspect__pointcut->setEType(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance().get())->getIdentifier());
    m_AbstractAspect__pointcut->setName("pointcut");
    m_AbstractAspect__pointcut->setDefaultValueLiteral("");
    m_AbstractAspect__pointcut->setLowerBound(0);
    m_AbstractAspect__pointcut->setUpperBound(1);
    m_AbstractAspect__pointcut->setTransient(false);
    m_AbstractAspect__pointcut->setVolatile(false);
    m_AbstractAspect__pointcut->setChangeable(true);
    m_AbstractAspect__pointcut->setContainment(true);
    m_AbstractAspect__pointcut->setResolveProxies(true);
    m_AbstractAspect__pointcut->setUnique(true);
    m_AbstractAspect__pointcut->setDerived(false);
    m_AbstractAspect__pointcut->setOrdered(true);
    // ExtensionAspect
    m_ExtensionAspectEClass->setName("ExtensionAspect");
    m_ExtensionAspectEClass->setAbstract(false);
    m_ExtensionAspectEClass->setInterface(false);
    m_ExtensionAspect__expression->setEType(
            dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getAbstractExpression());
    m_ExtensionAspect__expression->setName("expression");
    m_ExtensionAspect__expression->setDefaultValueLiteral("");
    m_ExtensionAspect__expression->setLowerBound(0);
    m_ExtensionAspect__expression->setUpperBound(1);
    m_ExtensionAspect__expression->setTransient(false);
    m_ExtensionAspect__expression->setVolatile(false);
    m_ExtensionAspect__expression->setChangeable(true);
    m_ExtensionAspect__expression->setContainment(true);
    m_ExtensionAspect__expression->setResolveProxies(true);
    m_ExtensionAspect__expression->setUnique(true);
    m_ExtensionAspect__expression->setDerived(false);
    m_ExtensionAspect__expression->setOrdered(true);
    // DefinitionAspect
    m_DefinitionAspectEClass->setName("DefinitionAspect");
    m_DefinitionAspectEClass->setAbstract(false);
    m_DefinitionAspectEClass->setInterface(false);
    m_DefinitionAspect__body->setEType(
            dynamic_cast< ::xpand3::statement::StatementPackage* >(::xpand3::statement::StatementPackage::_instance().get())->getAbstractStatement());
    m_DefinitionAspect__body->setName("body");
    m_DefinitionAspect__body->setDefaultValueLiteral("");
    m_DefinitionAspect__body->setLowerBound(0);
    m_DefinitionAspect__body->setUpperBound(-1);
    m_DefinitionAspect__body->setTransient(false);
    m_DefinitionAspect__body->setVolatile(false);
    m_DefinitionAspect__body->setChangeable(true);
    m_DefinitionAspect__body->setContainment(true);
    m_DefinitionAspect__body->setResolveProxies(true);
    m_DefinitionAspect__body->setUnique(true);
    m_DefinitionAspect__body->setDerived(false);
    m_DefinitionAspect__body->setOrdered(true);
    // Check
    m_CheckEClass->setName("Check");
    m_CheckEClass->setAbstract(false);
    m_CheckEClass->setInterface(false);
    m_Check__errorSeverity->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBoolean());
    m_Check__errorSeverity->setName("errorSeverity");
    m_Check__errorSeverity->setDefaultValueLiteral("");
    m_Check__errorSeverity->setLowerBound(0);
    m_Check__errorSeverity->setUpperBound(1);
    m_Check__errorSeverity->setTransient(false);
    m_Check__errorSeverity->setVolatile(false);
    m_Check__errorSeverity->setChangeable(true);
    m_Check__errorSeverity->setUnsettable(false);
    m_Check__errorSeverity->setID(false);
    m_Check__errorSeverity->setUnique(true);
    m_Check__errorSeverity->setDerived(false);
    m_Check__errorSeverity->setOrdered(true);
    m_Check__feature->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_Check__feature->setName("feature");
    m_Check__feature->setDefaultValueLiteral("");
    m_Check__feature->setLowerBound(0);
    m_Check__feature->setUpperBound(1);
    m_Check__feature->setTransient(false);
    m_Check__feature->setVolatile(false);
    m_Check__feature->setChangeable(true);
    m_Check__feature->setUnsettable(false);
    m_Check__feature->setID(false);
    m_Check__feature->setUnique(true);
    m_Check__feature->setDerived(false);
    m_Check__feature->setOrdered(true);
    m_Check__msg->setEType(
            dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getAbstractExpression());
    m_Check__msg->setName("msg");
    m_Check__msg->setDefaultValueLiteral("");
    m_Check__msg->setLowerBound(0);
    m_Check__msg->setUpperBound(1);
    m_Check__msg->setTransient(false);
    m_Check__msg->setVolatile(false);
    m_Check__msg->setChangeable(true);
    m_Check__msg->setContainment(true);
    m_Check__msg->setResolveProxies(true);
    m_Check__msg->setUnique(true);
    m_Check__msg->setDerived(false);
    m_Check__msg->setOrdered(true);
    m_Check__constraint->setEType(
            dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getAbstractExpression());
    m_Check__constraint->setName("constraint");
    m_Check__constraint->setDefaultValueLiteral("");
    m_Check__constraint->setLowerBound(0);
    m_Check__constraint->setUpperBound(1);
    m_Check__constraint->setTransient(false);
    m_Check__constraint->setVolatile(false);
    m_Check__constraint->setChangeable(true);
    m_Check__constraint->setContainment(true);
    m_Check__constraint->setResolveProxies(true);
    m_Check__constraint->setUnique(true);
    m_Check__constraint->setDerived(false);
    m_Check__constraint->setOrdered(true);
    // CreateExtension
    m_CreateExtensionEClass->setName("CreateExtension");
    m_CreateExtensionEClass->setAbstract(false);
    m_CreateExtensionEClass->setInterface(false);
    m_CreateExtension__toBeCreated->setEType(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance().get())->getDeclaredParameter());
    m_CreateExtension__toBeCreated->setName("toBeCreated");
    m_CreateExtension__toBeCreated->setDefaultValueLiteral("");
    m_CreateExtension__toBeCreated->setLowerBound(0);
    m_CreateExtension__toBeCreated->setUpperBound(1);
    m_CreateExtension__toBeCreated->setTransient(false);
    m_CreateExtension__toBeCreated->setVolatile(false);
    m_CreateExtension__toBeCreated->setChangeable(true);
    m_CreateExtension__toBeCreated->setContainment(false);
    m_CreateExtension__toBeCreated->setResolveProxies(true);
    m_CreateExtension__toBeCreated->setUnique(true);
    m_CreateExtension__toBeCreated->setDerived(false);
    m_CreateExtension__toBeCreated->setOrdered(true);
    // JavaExtension
    m_JavaExtensionEClass->setName("JavaExtension");
    m_JavaExtensionEClass->setAbstract(false);
    m_JavaExtensionEClass->setInterface(false);
    m_JavaExtension__javaType->setEType(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance().get())->getIdentifier());
    m_JavaExtension__javaType->setName("javaType");
    m_JavaExtension__javaType->setDefaultValueLiteral("");
    m_JavaExtension__javaType->setLowerBound(0);
    m_JavaExtension__javaType->setUpperBound(1);
    m_JavaExtension__javaType->setTransient(false);
    m_JavaExtension__javaType->setVolatile(false);
    m_JavaExtension__javaType->setChangeable(true);
    m_JavaExtension__javaType->setContainment(true);
    m_JavaExtension__javaType->setResolveProxies(true);
    m_JavaExtension__javaType->setUnique(true);
    m_JavaExtension__javaType->setDerived(false);
    m_JavaExtension__javaType->setOrdered(true);
    m_JavaExtension__javaMethod->setEType(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance().get())->getIdentifier());
    m_JavaExtension__javaMethod->setName("javaMethod");
    m_JavaExtension__javaMethod->setDefaultValueLiteral("");
    m_JavaExtension__javaMethod->setLowerBound(0);
    m_JavaExtension__javaMethod->setUpperBound(1);
    m_JavaExtension__javaMethod->setTransient(false);
    m_JavaExtension__javaMethod->setVolatile(false);
    m_JavaExtension__javaMethod->setChangeable(true);
    m_JavaExtension__javaMethod->setContainment(true);
    m_JavaExtension__javaMethod->setResolveProxies(true);
    m_JavaExtension__javaMethod->setUnique(true);
    m_JavaExtension__javaMethod->setDerived(false);
    m_JavaExtension__javaMethod->setOrdered(true);
    m_JavaExtension__javaParamTypes->setEType(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance().get())->getIdentifier());
    m_JavaExtension__javaParamTypes->setName("javaParamTypes");
    m_JavaExtension__javaParamTypes->setDefaultValueLiteral("");
    m_JavaExtension__javaParamTypes->setLowerBound(0);
    m_JavaExtension__javaParamTypes->setUpperBound(-1);
    m_JavaExtension__javaParamTypes->setTransient(false);
    m_JavaExtension__javaParamTypes->setVolatile(false);
    m_JavaExtension__javaParamTypes->setChangeable(true);
    m_JavaExtension__javaParamTypes->setContainment(true);
    m_JavaExtension__javaParamTypes->setResolveProxies(true);
    m_JavaExtension__javaParamTypes->setUnique(true);
    m_JavaExtension__javaParamTypes->setDerived(false);
    m_JavaExtension__javaParamTypes->setOrdered(true);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr DeclarationPackage::getAbstractDeclaration()
{
    return m_AbstractDeclarationEClass;
}
::ecore::EClass_ptr DeclarationPackage::getAbstractNamedDeclaration()
{
    return m_AbstractNamedDeclarationEClass;
}
::ecore::EClass_ptr DeclarationPackage::getDefinition()
{
    return m_DefinitionEClass;
}
::ecore::EClass_ptr DeclarationPackage::getExtension()
{
    return m_ExtensionEClass;
}
::ecore::EClass_ptr DeclarationPackage::getAbstractAspect()
{
    return m_AbstractAspectEClass;
}
::ecore::EClass_ptr DeclarationPackage::getExtensionAspect()
{
    return m_ExtensionAspectEClass;
}
::ecore::EClass_ptr DeclarationPackage::getDefinitionAspect()
{
    return m_DefinitionAspectEClass;
}
::ecore::EClass_ptr DeclarationPackage::getCheck()
{
    return m_CheckEClass;
}
::ecore::EClass_ptr DeclarationPackage::getCreateExtension()
{
    return m_CreateExtensionEClass;
}
::ecore::EClass_ptr DeclarationPackage::getJavaExtension()
{
    return m_JavaExtensionEClass;
}

::ecore::EAttribute_ptr DeclarationPackage::getSyntaxElement__line()
{
    return m_SyntaxElement__line;
}
::ecore::EAttribute_ptr DeclarationPackage::getSyntaxElement__start()
{
    return m_SyntaxElement__start;
}
::ecore::EAttribute_ptr DeclarationPackage::getSyntaxElement__end()
{
    return m_SyntaxElement__end;
}
::ecore::EAttribute_ptr DeclarationPackage::getSyntaxElement__fileName()
{
    return m_SyntaxElement__fileName;
}
::ecore::EReference_ptr DeclarationPackage::getAbstractDeclaration__owner()
{
    return m_AbstractDeclaration__owner;
}
::ecore::EReference_ptr DeclarationPackage::getAbstractDeclaration__params()
{
    return m_AbstractDeclaration__params;
}
::ecore::EAttribute_ptr DeclarationPackage::getAbstractDeclaration__isPrivate()
{
    return m_AbstractDeclaration__isPrivate;
}
::ecore::EReference_ptr DeclarationPackage::getAbstractDeclaration__guard()
{
    return m_AbstractDeclaration__guard;
}
::ecore::EReference_ptr DeclarationPackage::getAbstractNamedDeclaration__name()
{
    return m_AbstractNamedDeclaration__name;
}
::ecore::EReference_ptr DeclarationPackage::getDefinition__body()
{
    return m_Definition__body;
}
::ecore::EAttribute_ptr DeclarationPackage::getExtension__cached()
{
    return m_Extension__cached;
}
::ecore::EReference_ptr DeclarationPackage::getExtension__body()
{
    return m_Extension__body;
}
::ecore::EReference_ptr DeclarationPackage::getExtension__returnType()
{
    return m_Extension__returnType;
}
::ecore::EReference_ptr DeclarationPackage::getAbstractAspect__pointcut()
{
    return m_AbstractAspect__pointcut;
}
::ecore::EAttribute_ptr DeclarationPackage::getAbstractAspect__wildparams()
{
    return m_AbstractAspect__wildparams;
}
::ecore::EReference_ptr DeclarationPackage::getExtensionAspect__expression()
{
    return m_ExtensionAspect__expression;
}
::ecore::EReference_ptr DeclarationPackage::getDefinitionAspect__body()
{
    return m_DefinitionAspect__body;
}
::ecore::EAttribute_ptr DeclarationPackage::getCheck__errorSeverity()
{
    return m_Check__errorSeverity;
}
::ecore::EReference_ptr DeclarationPackage::getCheck__msg()
{
    return m_Check__msg;
}
::ecore::EReference_ptr DeclarationPackage::getCheck__constraint()
{
    return m_Check__constraint;
}
::ecore::EAttribute_ptr DeclarationPackage::getCheck__feature()
{
    return m_Check__feature;
}
::ecore::EReference_ptr DeclarationPackage::getCreateExtension__toBeCreated()
{
    return m_CreateExtension__toBeCreated;
}
::ecore::EReference_ptr DeclarationPackage::getJavaExtension__javaType()
{
    return m_JavaExtension__javaType;
}
::ecore::EReference_ptr DeclarationPackage::getJavaExtension__javaMethod()
{
    return m_JavaExtension__javaMethod;
}
::ecore::EReference_ptr DeclarationPackage::getJavaExtension__javaParamTypes()
{
    return m_JavaExtension__javaParamTypes;
}

