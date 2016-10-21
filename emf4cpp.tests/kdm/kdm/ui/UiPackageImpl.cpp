// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/ui/UiPackageImpl.cpp
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

#include <kdm/ui/UiPackage.hpp>
#include <kdm/ui/UiFactory.hpp>
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
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/core/CorePackage.hpp>
#include <kdm/source/SourcePackage.hpp>
#include <kdm/code/CodePackage.hpp>
#include <kdm/action/ActionPackage.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/source/Image.hpp>
#include <kdm/core/KDMEntity.hpp>

using namespace ::kdm::ui;

UiPackage::UiPackage()
{

    // Feature definitions of AbstractUIElement
    m_AbstractUIElement__source = new ::ecore::EReference();
    m_AbstractUIElement__UIRelation = new ::ecore::EReference();
    m_AbstractUIElement__implementation = new ::ecore::EReference();
    m_AbstractUIElement__abstraction = new ::ecore::EReference();

    // Feature definitions of UIResource
    m_UIResource__UIElement = new ::ecore::EReference();

    // Feature definitions of UIDisplay

    // Feature definitions of Screen

    // Feature definitions of Report

    // Feature definitions of UIModel
    m_UIModel__UIElement = new ::ecore::EReference();

    // Feature definitions of AbstractUIRelationship

    // Feature definitions of UILayout
    m_UILayout__to = new ::ecore::EReference();
    m_UILayout__from = new ::ecore::EReference();

    // Feature definitions of UIField

    // Feature definitions of DisplaysImage
    m_DisplaysImage__to = new ::ecore::EReference();
    m_DisplaysImage__from = new ::ecore::EReference();

    // Feature definitions of Displays
    m_Displays__to = new ::ecore::EReference();
    m_Displays__from = new ::ecore::EReference();

    // Feature definitions of UIFlow
    m_UIFlow__to = new ::ecore::EReference();
    m_UIFlow__from = new ::ecore::EReference();

    // Feature definitions of UIElement

    // Feature definitions of UIRelationship
    m_UIRelationship__to = new ::ecore::EReference();
    m_UIRelationship__from = new ::ecore::EReference();

    // Feature definitions of UIAction
    m_UIAction__kind = new ::ecore::EAttribute();
    m_UIAction__UIElement = new ::ecore::EReference();

    // Feature definitions of UIEvent
    m_UIEvent__kind = new ::ecore::EAttribute();

    // Feature definitions of ReadsUI
    m_ReadsUI__to = new ::ecore::EReference();
    m_ReadsUI__from = new ::ecore::EReference();

    // Feature definitions of WritesUI
    m_WritesUI__to = new ::ecore::EReference();
    m_WritesUI__from = new ::ecore::EReference();

    // Feature definitions of ManagesUI
    m_ManagesUI__to = new ::ecore::EReference();
    m_ManagesUI__from = new ::ecore::EReference();

    /* Now one can safely ask for a feature definition of
     * a class, though it is not yet usable. */
    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = UiFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    // Create classes and their features

    // AbstractUIElement
    m_AbstractUIElementEClass = new ::ecore::EClass();
    m_AbstractUIElementEClass->setClassifierID(ABSTRACTUIELEMENT);
    m_AbstractUIElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_AbstractUIElementEClass);
    // m_AbstractUIElement__source has already been allocated above
    m_AbstractUIElement__source->setFeatureID(
            ::kdm::ui::UiPackage::ABSTRACTUIELEMENT__SOURCE);
    m_AbstractUIElementEClass->getEStructuralFeatures().push_back(
            m_AbstractUIElement__source);
    // m_AbstractUIElement__UIRelation has already been allocated above
    m_AbstractUIElement__UIRelation->setFeatureID(
            ::kdm::ui::UiPackage::ABSTRACTUIELEMENT__UIRELATION);
    m_AbstractUIElementEClass->getEStructuralFeatures().push_back(
            m_AbstractUIElement__UIRelation);
    // m_AbstractUIElement__implementation has already been allocated above
    m_AbstractUIElement__implementation->setFeatureID(
            ::kdm::ui::UiPackage::ABSTRACTUIELEMENT__IMPLEMENTATION);
    m_AbstractUIElementEClass->getEStructuralFeatures().push_back(
            m_AbstractUIElement__implementation);
    // m_AbstractUIElement__abstraction has already been allocated above
    m_AbstractUIElement__abstraction->setFeatureID(
            ::kdm::ui::UiPackage::ABSTRACTUIELEMENT__ABSTRACTION);
    m_AbstractUIElementEClass->getEStructuralFeatures().push_back(
            m_AbstractUIElement__abstraction);

    // UIResource
    m_UIResourceEClass = new ::ecore::EClass();
    m_UIResourceEClass->setClassifierID(UIRESOURCE);
    m_UIResourceEClass->setEPackage(this);
    getEClassifiers().push_back(m_UIResourceEClass);
    // m_UIResource__UIElement has already been allocated above
    m_UIResource__UIElement->setFeatureID(
            ::kdm::ui::UiPackage::UIRESOURCE__UIELEMENT);
    m_UIResourceEClass->getEStructuralFeatures().push_back(
            m_UIResource__UIElement);

    // UIDisplay
    m_UIDisplayEClass = new ::ecore::EClass();
    m_UIDisplayEClass->setClassifierID(UIDISPLAY);
    m_UIDisplayEClass->setEPackage(this);
    getEClassifiers().push_back(m_UIDisplayEClass);

    // Screen
    m_ScreenEClass = new ::ecore::EClass();
    m_ScreenEClass->setClassifierID(SCREEN);
    m_ScreenEClass->setEPackage(this);
    getEClassifiers().push_back(m_ScreenEClass);

    // Report
    m_ReportEClass = new ::ecore::EClass();
    m_ReportEClass->setClassifierID(REPORT);
    m_ReportEClass->setEPackage(this);
    getEClassifiers().push_back(m_ReportEClass);

    // UIModel
    m_UIModelEClass = new ::ecore::EClass();
    m_UIModelEClass->setClassifierID(UIMODEL);
    m_UIModelEClass->setEPackage(this);
    getEClassifiers().push_back(m_UIModelEClass);
    // m_UIModel__UIElement has already been allocated above
    m_UIModel__UIElement->setFeatureID(
            ::kdm::ui::UiPackage::UIMODEL__UIELEMENT);
    m_UIModelEClass->getEStructuralFeatures().push_back(m_UIModel__UIElement);

    // AbstractUIRelationship
    m_AbstractUIRelationshipEClass = new ::ecore::EClass();
    m_AbstractUIRelationshipEClass->setClassifierID(ABSTRACTUIRELATIONSHIP);
    m_AbstractUIRelationshipEClass->setEPackage(this);
    getEClassifiers().push_back(m_AbstractUIRelationshipEClass);

    // UILayout
    m_UILayoutEClass = new ::ecore::EClass();
    m_UILayoutEClass->setClassifierID(UILAYOUT);
    m_UILayoutEClass->setEPackage(this);
    getEClassifiers().push_back(m_UILayoutEClass);
    // m_UILayout__to has already been allocated above
    m_UILayout__to->setFeatureID(::kdm::ui::UiPackage::UILAYOUT__TO);
    m_UILayoutEClass->getEStructuralFeatures().push_back(m_UILayout__to);
    // m_UILayout__from has already been allocated above
    m_UILayout__from->setFeatureID(::kdm::ui::UiPackage::UILAYOUT__FROM);
    m_UILayoutEClass->getEStructuralFeatures().push_back(m_UILayout__from);

    // UIField
    m_UIFieldEClass = new ::ecore::EClass();
    m_UIFieldEClass->setClassifierID(UIFIELD);
    m_UIFieldEClass->setEPackage(this);
    getEClassifiers().push_back(m_UIFieldEClass);

    // DisplaysImage
    m_DisplaysImageEClass = new ::ecore::EClass();
    m_DisplaysImageEClass->setClassifierID(DISPLAYSIMAGE);
    m_DisplaysImageEClass->setEPackage(this);
    getEClassifiers().push_back(m_DisplaysImageEClass);
    // m_DisplaysImage__to has already been allocated above
    m_DisplaysImage__to->setFeatureID(::kdm::ui::UiPackage::DISPLAYSIMAGE__TO);
    m_DisplaysImageEClass->getEStructuralFeatures().push_back(
            m_DisplaysImage__to);
    // m_DisplaysImage__from has already been allocated above
    m_DisplaysImage__from->setFeatureID(
            ::kdm::ui::UiPackage::DISPLAYSIMAGE__FROM);
    m_DisplaysImageEClass->getEStructuralFeatures().push_back(
            m_DisplaysImage__from);

    // Displays
    m_DisplaysEClass = new ::ecore::EClass();
    m_DisplaysEClass->setClassifierID(DISPLAYS);
    m_DisplaysEClass->setEPackage(this);
    getEClassifiers().push_back(m_DisplaysEClass);
    // m_Displays__to has already been allocated above
    m_Displays__to->setFeatureID(::kdm::ui::UiPackage::DISPLAYS__TO);
    m_DisplaysEClass->getEStructuralFeatures().push_back(m_Displays__to);
    // m_Displays__from has already been allocated above
    m_Displays__from->setFeatureID(::kdm::ui::UiPackage::DISPLAYS__FROM);
    m_DisplaysEClass->getEStructuralFeatures().push_back(m_Displays__from);

    // UIFlow
    m_UIFlowEClass = new ::ecore::EClass();
    m_UIFlowEClass->setClassifierID(UIFLOW);
    m_UIFlowEClass->setEPackage(this);
    getEClassifiers().push_back(m_UIFlowEClass);
    // m_UIFlow__to has already been allocated above
    m_UIFlow__to->setFeatureID(::kdm::ui::UiPackage::UIFLOW__TO);
    m_UIFlowEClass->getEStructuralFeatures().push_back(m_UIFlow__to);
    // m_UIFlow__from has already been allocated above
    m_UIFlow__from->setFeatureID(::kdm::ui::UiPackage::UIFLOW__FROM);
    m_UIFlowEClass->getEStructuralFeatures().push_back(m_UIFlow__from);

    // UIElement
    m_UIElementEClass = new ::ecore::EClass();
    m_UIElementEClass->setClassifierID(UIELEMENT);
    m_UIElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_UIElementEClass);

    // UIRelationship
    m_UIRelationshipEClass = new ::ecore::EClass();
    m_UIRelationshipEClass->setClassifierID(UIRELATIONSHIP);
    m_UIRelationshipEClass->setEPackage(this);
    getEClassifiers().push_back(m_UIRelationshipEClass);
    // m_UIRelationship__to has already been allocated above
    m_UIRelationship__to->setFeatureID(
            ::kdm::ui::UiPackage::UIRELATIONSHIP__TO);
    m_UIRelationshipEClass->getEStructuralFeatures().push_back(
            m_UIRelationship__to);
    // m_UIRelationship__from has already been allocated above
    m_UIRelationship__from->setFeatureID(
            ::kdm::ui::UiPackage::UIRELATIONSHIP__FROM);
    m_UIRelationshipEClass->getEStructuralFeatures().push_back(
            m_UIRelationship__from);

    // UIAction
    m_UIActionEClass = new ::ecore::EClass();
    m_UIActionEClass->setClassifierID(UIACTION);
    m_UIActionEClass->setEPackage(this);
    getEClassifiers().push_back(m_UIActionEClass);
    // m_UIAction__kind has already been allocated above
    m_UIAction__kind->setFeatureID(::kdm::ui::UiPackage::UIACTION__KIND);
    m_UIActionEClass->getEStructuralFeatures().push_back(m_UIAction__kind);
    // m_UIAction__UIElement has already been allocated above
    m_UIAction__UIElement->setFeatureID(
            ::kdm::ui::UiPackage::UIACTION__UIELEMENT);
    m_UIActionEClass->getEStructuralFeatures().push_back(m_UIAction__UIElement);

    // UIEvent
    m_UIEventEClass = new ::ecore::EClass();
    m_UIEventEClass->setClassifierID(UIEVENT);
    m_UIEventEClass->setEPackage(this);
    getEClassifiers().push_back(m_UIEventEClass);
    // m_UIEvent__kind has already been allocated above
    m_UIEvent__kind->setFeatureID(::kdm::ui::UiPackage::UIEVENT__KIND);
    m_UIEventEClass->getEStructuralFeatures().push_back(m_UIEvent__kind);

    // ReadsUI
    m_ReadsUIEClass = new ::ecore::EClass();
    m_ReadsUIEClass->setClassifierID(READSUI);
    m_ReadsUIEClass->setEPackage(this);
    getEClassifiers().push_back(m_ReadsUIEClass);
    // m_ReadsUI__to has already been allocated above
    m_ReadsUI__to->setFeatureID(::kdm::ui::UiPackage::READSUI__TO);
    m_ReadsUIEClass->getEStructuralFeatures().push_back(m_ReadsUI__to);
    // m_ReadsUI__from has already been allocated above
    m_ReadsUI__from->setFeatureID(::kdm::ui::UiPackage::READSUI__FROM);
    m_ReadsUIEClass->getEStructuralFeatures().push_back(m_ReadsUI__from);

    // WritesUI
    m_WritesUIEClass = new ::ecore::EClass();
    m_WritesUIEClass->setClassifierID(WRITESUI);
    m_WritesUIEClass->setEPackage(this);
    getEClassifiers().push_back(m_WritesUIEClass);
    // m_WritesUI__to has already been allocated above
    m_WritesUI__to->setFeatureID(::kdm::ui::UiPackage::WRITESUI__TO);
    m_WritesUIEClass->getEStructuralFeatures().push_back(m_WritesUI__to);
    // m_WritesUI__from has already been allocated above
    m_WritesUI__from->setFeatureID(::kdm::ui::UiPackage::WRITESUI__FROM);
    m_WritesUIEClass->getEStructuralFeatures().push_back(m_WritesUI__from);

    // ManagesUI
    m_ManagesUIEClass = new ::ecore::EClass();
    m_ManagesUIEClass->setClassifierID(MANAGESUI);
    m_ManagesUIEClass->setEPackage(this);
    getEClassifiers().push_back(m_ManagesUIEClass);
    // m_ManagesUI__to has already been allocated above
    m_ManagesUI__to->setFeatureID(::kdm::ui::UiPackage::MANAGESUI__TO);
    m_ManagesUIEClass->getEStructuralFeatures().push_back(m_ManagesUI__to);
    // m_ManagesUI__from has already been allocated above
    m_ManagesUI__from->setFeatureID(::kdm::ui::UiPackage::MANAGESUI__FROM);
    m_ManagesUIEClass->getEStructuralFeatures().push_back(m_ManagesUI__from);

    // Create enums

    // Create data types

    // Initialize package
    setName("ui");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_AbstractUIElementEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMEntity());
    m_UIResourceEClass->getESuperTypes().push_back(m_AbstractUIElementEClass);
    m_UIDisplayEClass->getESuperTypes().push_back(m_UIResourceEClass);
    m_ScreenEClass->getESuperTypes().push_back(m_UIDisplayEClass);
    m_ReportEClass->getESuperTypes().push_back(m_UIDisplayEClass);
    m_UIModelEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::kdm::KdmPackage* >(::kdm::kdm::KdmPackage::_instance())->getKDMModel());
    m_AbstractUIRelationshipEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMRelationship());
    m_UILayoutEClass->getESuperTypes().push_back(
            m_AbstractUIRelationshipEClass);
    m_UIFieldEClass->getESuperTypes().push_back(m_UIResourceEClass);
    m_DisplaysImageEClass->getESuperTypes().push_back(
            m_AbstractUIRelationshipEClass);
    m_DisplaysEClass->getESuperTypes().push_back(
            m_AbstractUIRelationshipEClass);
    m_UIFlowEClass->getESuperTypes().push_back(m_AbstractUIRelationshipEClass);
    m_UIElementEClass->getESuperTypes().push_back(m_AbstractUIElementEClass);
    m_UIRelationshipEClass->getESuperTypes().push_back(
            m_AbstractUIRelationshipEClass);
    m_UIActionEClass->getESuperTypes().push_back(m_AbstractUIElementEClass);
    m_UIEventEClass->getESuperTypes().push_back(m_AbstractUIElementEClass);
    m_ReadsUIEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getAbstractActionRelationship());
    m_WritesUIEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getAbstractActionRelationship());
    m_ManagesUIEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getAbstractActionRelationship());

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // AbstractUIElement
    m_AbstractUIElementEClass->setName("AbstractUIElement");
    m_AbstractUIElementEClass->setAbstract(true);
    m_AbstractUIElementEClass->setInterface(false);
    m_AbstractUIElement__source->setEType(
            dynamic_cast< ::kdm::source::SourcePackage* >(::kdm::source::SourcePackage::_instance())->getSourceRef());
    m_AbstractUIElement__source->setName("source");
    m_AbstractUIElement__source->setDefaultValueLiteral("");
    m_AbstractUIElement__source->setLowerBound(0);
    m_AbstractUIElement__source->setUpperBound(-1);
    m_AbstractUIElement__source->setTransient(false);
    m_AbstractUIElement__source->setVolatile(false);
    m_AbstractUIElement__source->setChangeable(true);
    m_AbstractUIElement__source->setContainment(true);
    m_AbstractUIElement__source->setResolveProxies(true);
    m_AbstractUIElement__source->setUnique(true);
    m_AbstractUIElement__source->setDerived(false);
    m_AbstractUIElement__source->setOrdered(false);
    m_AbstractUIElement__UIRelation->setEType(m_AbstractUIRelationshipEClass);
    m_AbstractUIElement__UIRelation->setName("UIRelation");
    m_AbstractUIElement__UIRelation->setDefaultValueLiteral("");
    m_AbstractUIElement__UIRelation->setLowerBound(0);
    m_AbstractUIElement__UIRelation->setUpperBound(-1);
    m_AbstractUIElement__UIRelation->setTransient(false);
    m_AbstractUIElement__UIRelation->setVolatile(false);
    m_AbstractUIElement__UIRelation->setChangeable(true);
    m_AbstractUIElement__UIRelation->setContainment(true);
    m_AbstractUIElement__UIRelation->setResolveProxies(true);
    m_AbstractUIElement__UIRelation->setUnique(true);
    m_AbstractUIElement__UIRelation->setDerived(false);
    m_AbstractUIElement__UIRelation->setOrdered(false);
    m_AbstractUIElement__implementation->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance())->getAbstractCodeElement());
    m_AbstractUIElement__implementation->setName("implementation");
    m_AbstractUIElement__implementation->setDefaultValueLiteral("");
    m_AbstractUIElement__implementation->setLowerBound(0);
    m_AbstractUIElement__implementation->setUpperBound(-1);
    m_AbstractUIElement__implementation->setTransient(false);
    m_AbstractUIElement__implementation->setVolatile(false);
    m_AbstractUIElement__implementation->setChangeable(true);
    m_AbstractUIElement__implementation->setContainment(false);
    m_AbstractUIElement__implementation->setResolveProxies(true);
    m_AbstractUIElement__implementation->setUnique(true);
    m_AbstractUIElement__implementation->setDerived(false);
    m_AbstractUIElement__implementation->setOrdered(false);
    m_AbstractUIElement__abstraction->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getActionElement());
    m_AbstractUIElement__abstraction->setName("abstraction");
    m_AbstractUIElement__abstraction->setDefaultValueLiteral("");
    m_AbstractUIElement__abstraction->setLowerBound(0);
    m_AbstractUIElement__abstraction->setUpperBound(-1);
    m_AbstractUIElement__abstraction->setTransient(false);
    m_AbstractUIElement__abstraction->setVolatile(false);
    m_AbstractUIElement__abstraction->setChangeable(true);
    m_AbstractUIElement__abstraction->setContainment(true);
    m_AbstractUIElement__abstraction->setResolveProxies(true);
    m_AbstractUIElement__abstraction->setUnique(true);
    m_AbstractUIElement__abstraction->setDerived(false);
    m_AbstractUIElement__abstraction->setOrdered(true);
    // UIResource
    m_UIResourceEClass->setName("UIResource");
    m_UIResourceEClass->setAbstract(false);
    m_UIResourceEClass->setInterface(false);
    m_UIResource__UIElement->setEType(m_AbstractUIElementEClass);
    m_UIResource__UIElement->setName("UIElement");
    m_UIResource__UIElement->setDefaultValueLiteral("");
    m_UIResource__UIElement->setLowerBound(0);
    m_UIResource__UIElement->setUpperBound(-1);
    m_UIResource__UIElement->setTransient(false);
    m_UIResource__UIElement->setVolatile(false);
    m_UIResource__UIElement->setChangeable(true);
    m_UIResource__UIElement->setContainment(true);
    m_UIResource__UIElement->setResolveProxies(true);
    m_UIResource__UIElement->setUnique(true);
    m_UIResource__UIElement->setDerived(false);
    m_UIResource__UIElement->setOrdered(false);
    // UIDisplay
    m_UIDisplayEClass->setName("UIDisplay");
    m_UIDisplayEClass->setAbstract(false);
    m_UIDisplayEClass->setInterface(false);
    // Screen
    m_ScreenEClass->setName("Screen");
    m_ScreenEClass->setAbstract(false);
    m_ScreenEClass->setInterface(false);
    // Report
    m_ReportEClass->setName("Report");
    m_ReportEClass->setAbstract(false);
    m_ReportEClass->setInterface(false);
    // UIModel
    m_UIModelEClass->setName("UIModel");
    m_UIModelEClass->setAbstract(false);
    m_UIModelEClass->setInterface(false);
    m_UIModel__UIElement->setEType(m_AbstractUIElementEClass);
    m_UIModel__UIElement->setName("UIElement");
    m_UIModel__UIElement->setDefaultValueLiteral("");
    m_UIModel__UIElement->setLowerBound(0);
    m_UIModel__UIElement->setUpperBound(-1);
    m_UIModel__UIElement->setTransient(false);
    m_UIModel__UIElement->setVolatile(false);
    m_UIModel__UIElement->setChangeable(true);
    m_UIModel__UIElement->setContainment(true);
    m_UIModel__UIElement->setResolveProxies(true);
    m_UIModel__UIElement->setUnique(true);
    m_UIModel__UIElement->setDerived(false);
    m_UIModel__UIElement->setOrdered(false);
    // AbstractUIRelationship
    m_AbstractUIRelationshipEClass->setName("AbstractUIRelationship");
    m_AbstractUIRelationshipEClass->setAbstract(true);
    m_AbstractUIRelationshipEClass->setInterface(false);
    // UILayout
    m_UILayoutEClass->setName("UILayout");
    m_UILayoutEClass->setAbstract(false);
    m_UILayoutEClass->setInterface(false);
    m_UILayout__to->setEType(m_UIResourceEClass);
    m_UILayout__to->setName("to");
    m_UILayout__to->setDefaultValueLiteral("");
    m_UILayout__to->setLowerBound(1);
    m_UILayout__to->setUpperBound(1);
    m_UILayout__to->setTransient(false);
    m_UILayout__to->setVolatile(false);
    m_UILayout__to->setChangeable(true);
    m_UILayout__to->setContainment(false);
    m_UILayout__to->setResolveProxies(true);
    m_UILayout__to->setUnique(true);
    m_UILayout__to->setDerived(false);
    m_UILayout__to->setOrdered(false);
    m_UILayout__from->setEType(m_UIResourceEClass);
    m_UILayout__from->setName("from");
    m_UILayout__from->setDefaultValueLiteral("");
    m_UILayout__from->setLowerBound(1);
    m_UILayout__from->setUpperBound(1);
    m_UILayout__from->setTransient(false);
    m_UILayout__from->setVolatile(false);
    m_UILayout__from->setChangeable(true);
    m_UILayout__from->setContainment(false);
    m_UILayout__from->setResolveProxies(true);
    m_UILayout__from->setUnique(true);
    m_UILayout__from->setDerived(false);
    m_UILayout__from->setOrdered(false);
    // UIField
    m_UIFieldEClass->setName("UIField");
    m_UIFieldEClass->setAbstract(false);
    m_UIFieldEClass->setInterface(false);
    // DisplaysImage
    m_DisplaysImageEClass->setName("DisplaysImage");
    m_DisplaysImageEClass->setAbstract(false);
    m_DisplaysImageEClass->setInterface(false);
    m_DisplaysImage__to->setEType(
            dynamic_cast< ::kdm::source::SourcePackage* >(::kdm::source::SourcePackage::_instance())->getImage());
    m_DisplaysImage__to->setName("to");
    m_DisplaysImage__to->setDefaultValueLiteral("");
    m_DisplaysImage__to->setLowerBound(1);
    m_DisplaysImage__to->setUpperBound(1);
    m_DisplaysImage__to->setTransient(false);
    m_DisplaysImage__to->setVolatile(false);
    m_DisplaysImage__to->setChangeable(true);
    m_DisplaysImage__to->setContainment(false);
    m_DisplaysImage__to->setResolveProxies(true);
    m_DisplaysImage__to->setUnique(true);
    m_DisplaysImage__to->setDerived(false);
    m_DisplaysImage__to->setOrdered(false);
    m_DisplaysImage__from->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getActionElement());
    m_DisplaysImage__from->setName("from");
    m_DisplaysImage__from->setDefaultValueLiteral("");
    m_DisplaysImage__from->setLowerBound(1);
    m_DisplaysImage__from->setUpperBound(1);
    m_DisplaysImage__from->setTransient(false);
    m_DisplaysImage__from->setVolatile(false);
    m_DisplaysImage__from->setChangeable(true);
    m_DisplaysImage__from->setContainment(false);
    m_DisplaysImage__from->setResolveProxies(true);
    m_DisplaysImage__from->setUnique(true);
    m_DisplaysImage__from->setDerived(false);
    m_DisplaysImage__from->setOrdered(false);
    // Displays
    m_DisplaysEClass->setName("Displays");
    m_DisplaysEClass->setAbstract(false);
    m_DisplaysEClass->setInterface(false);
    m_Displays__to->setEType(m_UIResourceEClass);
    m_Displays__to->setName("to");
    m_Displays__to->setDefaultValueLiteral("");
    m_Displays__to->setLowerBound(1);
    m_Displays__to->setUpperBound(1);
    m_Displays__to->setTransient(false);
    m_Displays__to->setVolatile(false);
    m_Displays__to->setChangeable(true);
    m_Displays__to->setContainment(false);
    m_Displays__to->setResolveProxies(true);
    m_Displays__to->setUnique(true);
    m_Displays__to->setDerived(false);
    m_Displays__to->setOrdered(false);
    m_Displays__from->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getActionElement());
    m_Displays__from->setName("from");
    m_Displays__from->setDefaultValueLiteral("");
    m_Displays__from->setLowerBound(1);
    m_Displays__from->setUpperBound(1);
    m_Displays__from->setTransient(false);
    m_Displays__from->setVolatile(false);
    m_Displays__from->setChangeable(true);
    m_Displays__from->setContainment(false);
    m_Displays__from->setResolveProxies(true);
    m_Displays__from->setUnique(true);
    m_Displays__from->setDerived(false);
    m_Displays__from->setOrdered(false);
    // UIFlow
    m_UIFlowEClass->setName("UIFlow");
    m_UIFlowEClass->setAbstract(false);
    m_UIFlowEClass->setInterface(false);
    m_UIFlow__to->setEType(m_AbstractUIElementEClass);
    m_UIFlow__to->setName("to");
    m_UIFlow__to->setDefaultValueLiteral("");
    m_UIFlow__to->setLowerBound(1);
    m_UIFlow__to->setUpperBound(1);
    m_UIFlow__to->setTransient(false);
    m_UIFlow__to->setVolatile(false);
    m_UIFlow__to->setChangeable(true);
    m_UIFlow__to->setContainment(false);
    m_UIFlow__to->setResolveProxies(true);
    m_UIFlow__to->setUnique(true);
    m_UIFlow__to->setDerived(false);
    m_UIFlow__to->setOrdered(false);
    m_UIFlow__from->setEType(m_AbstractUIElementEClass);
    m_UIFlow__from->setName("from");
    m_UIFlow__from->setDefaultValueLiteral("");
    m_UIFlow__from->setLowerBound(1);
    m_UIFlow__from->setUpperBound(1);
    m_UIFlow__from->setTransient(false);
    m_UIFlow__from->setVolatile(false);
    m_UIFlow__from->setChangeable(true);
    m_UIFlow__from->setContainment(false);
    m_UIFlow__from->setResolveProxies(true);
    m_UIFlow__from->setUnique(true);
    m_UIFlow__from->setDerived(false);
    m_UIFlow__from->setOrdered(false);
    // UIElement
    m_UIElementEClass->setName("UIElement");
    m_UIElementEClass->setAbstract(false);
    m_UIElementEClass->setInterface(false);
    // UIRelationship
    m_UIRelationshipEClass->setName("UIRelationship");
    m_UIRelationshipEClass->setAbstract(false);
    m_UIRelationshipEClass->setInterface(false);
    m_UIRelationship__to->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getKDMEntity());
    m_UIRelationship__to->setName("to");
    m_UIRelationship__to->setDefaultValueLiteral("");
    m_UIRelationship__to->setLowerBound(1);
    m_UIRelationship__to->setUpperBound(1);
    m_UIRelationship__to->setTransient(false);
    m_UIRelationship__to->setVolatile(false);
    m_UIRelationship__to->setChangeable(true);
    m_UIRelationship__to->setContainment(false);
    m_UIRelationship__to->setResolveProxies(true);
    m_UIRelationship__to->setUnique(true);
    m_UIRelationship__to->setDerived(false);
    m_UIRelationship__to->setOrdered(false);
    m_UIRelationship__from->setEType(m_AbstractUIElementEClass);
    m_UIRelationship__from->setName("from");
    m_UIRelationship__from->setDefaultValueLiteral("");
    m_UIRelationship__from->setLowerBound(1);
    m_UIRelationship__from->setUpperBound(1);
    m_UIRelationship__from->setTransient(false);
    m_UIRelationship__from->setVolatile(false);
    m_UIRelationship__from->setChangeable(true);
    m_UIRelationship__from->setContainment(false);
    m_UIRelationship__from->setResolveProxies(true);
    m_UIRelationship__from->setUnique(true);
    m_UIRelationship__from->setDerived(false);
    m_UIRelationship__from->setOrdered(false);
    // UIAction
    m_UIActionEClass->setName("UIAction");
    m_UIActionEClass->setAbstract(false);
    m_UIActionEClass->setInterface(false);
    m_UIAction__kind->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_UIAction__kind->setName("kind");
    m_UIAction__kind->setDefaultValueLiteral("");
    m_UIAction__kind->setLowerBound(0);
    m_UIAction__kind->setUpperBound(1);
    m_UIAction__kind->setTransient(false);
    m_UIAction__kind->setVolatile(false);
    m_UIAction__kind->setChangeable(true);
    m_UIAction__kind->setUnsettable(false);
    m_UIAction__kind->setID(false);
    m_UIAction__kind->setUnique(false);
    m_UIAction__kind->setDerived(false);
    m_UIAction__kind->setOrdered(false);
    m_UIAction__UIElement->setEType(m_UIEventEClass);
    m_UIAction__UIElement->setName("UIElement");
    m_UIAction__UIElement->setDefaultValueLiteral("");
    m_UIAction__UIElement->setLowerBound(0);
    m_UIAction__UIElement->setUpperBound(-1);
    m_UIAction__UIElement->setTransient(false);
    m_UIAction__UIElement->setVolatile(false);
    m_UIAction__UIElement->setChangeable(true);
    m_UIAction__UIElement->setContainment(true);
    m_UIAction__UIElement->setResolveProxies(true);
    m_UIAction__UIElement->setUnique(true);
    m_UIAction__UIElement->setDerived(false);
    m_UIAction__UIElement->setOrdered(false);
    // UIEvent
    m_UIEventEClass->setName("UIEvent");
    m_UIEventEClass->setAbstract(false);
    m_UIEventEClass->setInterface(false);
    m_UIEvent__kind->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance())->getString());
    m_UIEvent__kind->setName("kind");
    m_UIEvent__kind->setDefaultValueLiteral("");
    m_UIEvent__kind->setLowerBound(0);
    m_UIEvent__kind->setUpperBound(1);
    m_UIEvent__kind->setTransient(false);
    m_UIEvent__kind->setVolatile(false);
    m_UIEvent__kind->setChangeable(true);
    m_UIEvent__kind->setUnsettable(false);
    m_UIEvent__kind->setID(false);
    m_UIEvent__kind->setUnique(false);
    m_UIEvent__kind->setDerived(false);
    m_UIEvent__kind->setOrdered(false);
    // ReadsUI
    m_ReadsUIEClass->setName("ReadsUI");
    m_ReadsUIEClass->setAbstract(false);
    m_ReadsUIEClass->setInterface(false);
    m_ReadsUI__to->setEType(m_UIResourceEClass);
    m_ReadsUI__to->setName("to");
    m_ReadsUI__to->setDefaultValueLiteral("");
    m_ReadsUI__to->setLowerBound(1);
    m_ReadsUI__to->setUpperBound(1);
    m_ReadsUI__to->setTransient(false);
    m_ReadsUI__to->setVolatile(false);
    m_ReadsUI__to->setChangeable(true);
    m_ReadsUI__to->setContainment(false);
    m_ReadsUI__to->setResolveProxies(true);
    m_ReadsUI__to->setUnique(true);
    m_ReadsUI__to->setDerived(false);
    m_ReadsUI__to->setOrdered(false);
    m_ReadsUI__from->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getActionElement());
    m_ReadsUI__from->setName("from");
    m_ReadsUI__from->setDefaultValueLiteral("");
    m_ReadsUI__from->setLowerBound(1);
    m_ReadsUI__from->setUpperBound(1);
    m_ReadsUI__from->setTransient(false);
    m_ReadsUI__from->setVolatile(false);
    m_ReadsUI__from->setChangeable(true);
    m_ReadsUI__from->setContainment(false);
    m_ReadsUI__from->setResolveProxies(true);
    m_ReadsUI__from->setUnique(true);
    m_ReadsUI__from->setDerived(false);
    m_ReadsUI__from->setOrdered(false);
    // WritesUI
    m_WritesUIEClass->setName("WritesUI");
    m_WritesUIEClass->setAbstract(false);
    m_WritesUIEClass->setInterface(false);
    m_WritesUI__to->setEType(m_UIResourceEClass);
    m_WritesUI__to->setName("to");
    m_WritesUI__to->setDefaultValueLiteral("");
    m_WritesUI__to->setLowerBound(1);
    m_WritesUI__to->setUpperBound(1);
    m_WritesUI__to->setTransient(false);
    m_WritesUI__to->setVolatile(false);
    m_WritesUI__to->setChangeable(true);
    m_WritesUI__to->setContainment(false);
    m_WritesUI__to->setResolveProxies(true);
    m_WritesUI__to->setUnique(true);
    m_WritesUI__to->setDerived(false);
    m_WritesUI__to->setOrdered(false);
    m_WritesUI__from->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getActionElement());
    m_WritesUI__from->setName("from");
    m_WritesUI__from->setDefaultValueLiteral("");
    m_WritesUI__from->setLowerBound(1);
    m_WritesUI__from->setUpperBound(1);
    m_WritesUI__from->setTransient(false);
    m_WritesUI__from->setVolatile(false);
    m_WritesUI__from->setChangeable(true);
    m_WritesUI__from->setContainment(false);
    m_WritesUI__from->setResolveProxies(true);
    m_WritesUI__from->setUnique(true);
    m_WritesUI__from->setDerived(false);
    m_WritesUI__from->setOrdered(false);
    // ManagesUI
    m_ManagesUIEClass->setName("ManagesUI");
    m_ManagesUIEClass->setAbstract(false);
    m_ManagesUIEClass->setInterface(false);
    m_ManagesUI__to->setEType(m_UIResourceEClass);
    m_ManagesUI__to->setName("to");
    m_ManagesUI__to->setDefaultValueLiteral("");
    m_ManagesUI__to->setLowerBound(1);
    m_ManagesUI__to->setUpperBound(1);
    m_ManagesUI__to->setTransient(false);
    m_ManagesUI__to->setVolatile(false);
    m_ManagesUI__to->setChangeable(true);
    m_ManagesUI__to->setContainment(false);
    m_ManagesUI__to->setResolveProxies(true);
    m_ManagesUI__to->setUnique(true);
    m_ManagesUI__to->setDerived(false);
    m_ManagesUI__to->setOrdered(false);
    m_ManagesUI__from->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance())->getActionElement());
    m_ManagesUI__from->setName("from");
    m_ManagesUI__from->setDefaultValueLiteral("");
    m_ManagesUI__from->setLowerBound(1);
    m_ManagesUI__from->setUpperBound(1);
    m_ManagesUI__from->setTransient(false);
    m_ManagesUI__from->setVolatile(false);
    m_ManagesUI__from->setChangeable(true);
    m_ManagesUI__from->setContainment(false);
    m_ManagesUI__from->setResolveProxies(true);
    m_ManagesUI__from->setUnique(true);
    m_ManagesUI__from->setDerived(false);
    m_ManagesUI__from->setOrdered(false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr UiPackage::getAbstractUIElement()
{
    return m_AbstractUIElementEClass;
}
::ecore::EClass_ptr UiPackage::getUIResource()
{
    return m_UIResourceEClass;
}
::ecore::EClass_ptr UiPackage::getUIDisplay()
{
    return m_UIDisplayEClass;
}
::ecore::EClass_ptr UiPackage::getScreen()
{
    return m_ScreenEClass;
}
::ecore::EClass_ptr UiPackage::getReport()
{
    return m_ReportEClass;
}
::ecore::EClass_ptr UiPackage::getUIModel()
{
    return m_UIModelEClass;
}
::ecore::EClass_ptr UiPackage::getAbstractUIRelationship()
{
    return m_AbstractUIRelationshipEClass;
}
::ecore::EClass_ptr UiPackage::getUILayout()
{
    return m_UILayoutEClass;
}
::ecore::EClass_ptr UiPackage::getUIField()
{
    return m_UIFieldEClass;
}
::ecore::EClass_ptr UiPackage::getDisplaysImage()
{
    return m_DisplaysImageEClass;
}
::ecore::EClass_ptr UiPackage::getDisplays()
{
    return m_DisplaysEClass;
}
::ecore::EClass_ptr UiPackage::getUIFlow()
{
    return m_UIFlowEClass;
}
::ecore::EClass_ptr UiPackage::getUIElement()
{
    return m_UIElementEClass;
}
::ecore::EClass_ptr UiPackage::getUIRelationship()
{
    return m_UIRelationshipEClass;
}
::ecore::EClass_ptr UiPackage::getUIAction()
{
    return m_UIActionEClass;
}
::ecore::EClass_ptr UiPackage::getUIEvent()
{
    return m_UIEventEClass;
}
::ecore::EClass_ptr UiPackage::getReadsUI()
{
    return m_ReadsUIEClass;
}
::ecore::EClass_ptr UiPackage::getWritesUI()
{
    return m_WritesUIEClass;
}
::ecore::EClass_ptr UiPackage::getManagesUI()
{
    return m_ManagesUIEClass;
}

::ecore::EReference_ptr UiPackage::getElement__attribute()
{
    return m_Element__attribute;
}
::ecore::EReference_ptr UiPackage::getElement__annotation()
{
    return m_Element__annotation;
}
::ecore::EReference_ptr UiPackage::getModelElement__stereotype()
{
    return m_ModelElement__stereotype;
}
::ecore::EReference_ptr UiPackage::getModelElement__taggedValue()
{
    return m_ModelElement__taggedValue;
}
::ecore::EAttribute_ptr UiPackage::getKDMEntity__name()
{
    return m_KDMEntity__name;
}
::ecore::EReference_ptr UiPackage::getAbstractUIElement__source()
{
    return m_AbstractUIElement__source;
}
::ecore::EReference_ptr UiPackage::getAbstractUIElement__UIRelation()
{
    return m_AbstractUIElement__UIRelation;
}
::ecore::EReference_ptr UiPackage::getAbstractUIElement__implementation()
{
    return m_AbstractUIElement__implementation;
}
::ecore::EReference_ptr UiPackage::getAbstractUIElement__abstraction()
{
    return m_AbstractUIElement__abstraction;
}
::ecore::EReference_ptr UiPackage::getUIResource__UIElement()
{
    return m_UIResource__UIElement;
}
::ecore::EReference_ptr UiPackage::getKDMFramework__audit()
{
    return m_KDMFramework__audit;
}
::ecore::EReference_ptr UiPackage::getKDMFramework__extensionFamily()
{
    return m_KDMFramework__extensionFamily;
}
::ecore::EAttribute_ptr UiPackage::getKDMFramework__name()
{
    return m_KDMFramework__name;
}
::ecore::EReference_ptr UiPackage::getUIModel__UIElement()
{
    return m_UIModel__UIElement;
}
::ecore::EReference_ptr UiPackage::getUILayout__to()
{
    return m_UILayout__to;
}
::ecore::EReference_ptr UiPackage::getUILayout__from()
{
    return m_UILayout__from;
}
::ecore::EReference_ptr UiPackage::getDisplaysImage__to()
{
    return m_DisplaysImage__to;
}
::ecore::EReference_ptr UiPackage::getDisplaysImage__from()
{
    return m_DisplaysImage__from;
}
::ecore::EReference_ptr UiPackage::getDisplays__to()
{
    return m_Displays__to;
}
::ecore::EReference_ptr UiPackage::getDisplays__from()
{
    return m_Displays__from;
}
::ecore::EReference_ptr UiPackage::getUIFlow__to()
{
    return m_UIFlow__to;
}
::ecore::EReference_ptr UiPackage::getUIFlow__from()
{
    return m_UIFlow__from;
}
::ecore::EReference_ptr UiPackage::getUIRelationship__to()
{
    return m_UIRelationship__to;
}
::ecore::EReference_ptr UiPackage::getUIRelationship__from()
{
    return m_UIRelationship__from;
}
::ecore::EAttribute_ptr UiPackage::getUIAction__kind()
{
    return m_UIAction__kind;
}
::ecore::EReference_ptr UiPackage::getUIAction__UIElement()
{
    return m_UIAction__UIElement;
}
::ecore::EAttribute_ptr UiPackage::getUIEvent__kind()
{
    return m_UIEvent__kind;
}
::ecore::EReference_ptr UiPackage::getReadsUI__to()
{
    return m_ReadsUI__to;
}
::ecore::EReference_ptr UiPackage::getReadsUI__from()
{
    return m_ReadsUI__from;
}
::ecore::EReference_ptr UiPackage::getWritesUI__to()
{
    return m_WritesUI__to;
}
::ecore::EReference_ptr UiPackage::getWritesUI__from()
{
    return m_WritesUI__from;
}
::ecore::EReference_ptr UiPackage::getManagesUI__to()
{
    return m_ManagesUI__to;
}
::ecore::EReference_ptr UiPackage::getManagesUI__from()
{
    return m_ManagesUI__from;
}

