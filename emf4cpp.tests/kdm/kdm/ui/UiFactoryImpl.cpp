// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/ui/UiFactoryImpl.cpp
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
    return ::ecore::Ptr < AbstractUIElement > (new AbstractUIElement);
}
UIResource_ptr UiFactory::createUIResource()
{
    return ::ecore::Ptr < UIResource > (new UIResource);
}
UIDisplay_ptr UiFactory::createUIDisplay()
{
    return ::ecore::Ptr < UIDisplay > (new UIDisplay);
}
Screen_ptr UiFactory::createScreen()
{
    return ::ecore::Ptr < Screen > (new Screen);
}
Report_ptr UiFactory::createReport()
{
    return ::ecore::Ptr < Report > (new Report);
}
UIModel_ptr UiFactory::createUIModel()
{
    return ::ecore::Ptr < UIModel > (new UIModel);
}
AbstractUIRelationship_ptr UiFactory::createAbstractUIRelationship()
{
    return ::ecore::Ptr < AbstractUIRelationship > (new AbstractUIRelationship);
}
UILayout_ptr UiFactory::createUILayout()
{
    return ::ecore::Ptr < UILayout > (new UILayout);
}
UIField_ptr UiFactory::createUIField()
{
    return ::ecore::Ptr < UIField > (new UIField);
}
DisplaysImage_ptr UiFactory::createDisplaysImage()
{
    return ::ecore::Ptr < DisplaysImage > (new DisplaysImage);
}
Displays_ptr UiFactory::createDisplays()
{
    return ::ecore::Ptr < Displays > (new Displays);
}
UIFlow_ptr UiFactory::createUIFlow()
{
    return ::ecore::Ptr < UIFlow > (new UIFlow);
}
UIElement_ptr UiFactory::createUIElement()
{
    return ::ecore::Ptr < UIElement > (new UIElement);
}
UIRelationship_ptr UiFactory::createUIRelationship()
{
    return ::ecore::Ptr < UIRelationship > (new UIRelationship);
}
UIAction_ptr UiFactory::createUIAction()
{
    return ::ecore::Ptr < UIAction > (new UIAction);
}
UIEvent_ptr UiFactory::createUIEvent()
{
    return ::ecore::Ptr < UIEvent > (new UIEvent);
}
ReadsUI_ptr UiFactory::createReadsUI()
{
    return ::ecore::Ptr < ReadsUI > (new ReadsUI);
}
WritesUI_ptr UiFactory::createWritesUI()
{
    return ::ecore::Ptr < WritesUI > (new WritesUI);
}
ManagesUI_ptr UiFactory::createManagesUI()
{
    return ::ecore::Ptr < ManagesUI > (new ManagesUI);
}

