// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/ui/UiFactoryImpl.cpp
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

#include <kdm/ui/UiFactory.hpp>
#include <kdm/ui/UiPackage.hpp>
#include <kdm/ui/AbstractUIElement.hpp>
#include <kdm/ui/UIResource.hpp>
#include <kdm/ui/UIDisplay.hpp>
#include <kdm/ui/Screen.hpp>
#include <kdm/ui/Report.hpp>
#include <kdm/ui/UIModel.hpp>
#include <kdm/ui/AbstractUIRelationship.hpp>
#include <kdm/ui/UILayout.hpp>
#include <kdm/ui/UIField.hpp>
#include <kdm/ui/DisplaysImage.hpp>
#include <kdm/ui/Displays.hpp>
#include <kdm/ui/UIFlow.hpp>
#include <kdm/ui/UIElement.hpp>
#include <kdm/ui/UIRelationship.hpp>
#include <kdm/ui/UIAction.hpp>
#include <kdm/ui/UIEvent.hpp>
#include <kdm/ui/ReadsUI.hpp>
#include <kdm/ui/WritesUI.hpp>
#include <kdm/ui/ManagesUI.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::ui;

UiFactory::UiFactory()
{
    s_instance.reset(this);
}

::ecore::EObject_ptr UiFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case UiPackage::ABSTRACTUIELEMENT:
        return createAbstractUIElement();
    case UiPackage::UIRESOURCE:
        return createUIResource();
    case UiPackage::UIDISPLAY:
        return createUIDisplay();
    case UiPackage::SCREEN:
        return createScreen();
    case UiPackage::REPORT:
        return createReport();
    case UiPackage::UIMODEL:
        return createUIModel();
    case UiPackage::ABSTRACTUIRELATIONSHIP:
        return createAbstractUIRelationship();
    case UiPackage::UILAYOUT:
        return createUILayout();
    case UiPackage::UIFIELD:
        return createUIField();
    case UiPackage::DISPLAYSIMAGE:
        return createDisplaysImage();
    case UiPackage::DISPLAYS:
        return createDisplays();
    case UiPackage::UIFLOW:
        return createUIFlow();
    case UiPackage::UIELEMENT:
        return createUIElement();
    case UiPackage::UIRELATIONSHIP:
        return createUIRelationship();
    case UiPackage::UIACTION:
        return createUIAction();
    case UiPackage::UIEVENT:
        return createUIEvent();
    case UiPackage::READSUI:
        return createReadsUI();
    case UiPackage::WRITESUI:
        return createWritesUI();
    case UiPackage::MANAGESUI:
        return createManagesUI();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject UiFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString UiFactory::convertToString(::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

AbstractUIElement_ptr UiFactory::createAbstractUIElement()
{
    return new AbstractUIElement();
}
UIResource_ptr UiFactory::createUIResource()
{
    return new UIResource();
}
UIDisplay_ptr UiFactory::createUIDisplay()
{
    return new UIDisplay();
}
Screen_ptr UiFactory::createScreen()
{
    return new Screen();
}
Report_ptr UiFactory::createReport()
{
    return new Report();
}
UIModel_ptr UiFactory::createUIModel()
{
    return new UIModel();
}
AbstractUIRelationship_ptr UiFactory::createAbstractUIRelationship()
{
    return new AbstractUIRelationship();
}
UILayout_ptr UiFactory::createUILayout()
{
    return new UILayout();
}
UIField_ptr UiFactory::createUIField()
{
    return new UIField();
}
DisplaysImage_ptr UiFactory::createDisplaysImage()
{
    return new DisplaysImage();
}
Displays_ptr UiFactory::createDisplays()
{
    return new Displays();
}
UIFlow_ptr UiFactory::createUIFlow()
{
    return new UIFlow();
}
UIElement_ptr UiFactory::createUIElement()
{
    return new UIElement();
}
UIRelationship_ptr UiFactory::createUIRelationship()
{
    return new UIRelationship();
}
UIAction_ptr UiFactory::createUIAction()
{
    return new UIAction();
}
UIEvent_ptr UiFactory::createUIEvent()
{
    return new UIEvent();
}
ReadsUI_ptr UiFactory::createReadsUI()
{
    return new ReadsUI();
}
WritesUI_ptr UiFactory::createWritesUI()
{
    return new WritesUI();
}
ManagesUI_ptr UiFactory::createManagesUI()
{
    return new ManagesUI();
}

