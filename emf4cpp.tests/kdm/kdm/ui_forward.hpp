// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/ui_forward.hpp
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

#ifndef _KDM_UI_FORWARD_HPP
#define _KDM_UI_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(kdm_ui_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace kdm
{
    namespace ui
    {

// EDataType

// EClass

// AbstractUIElement
        class AbstractUIElement;
        using AbstractUIElement_ptr = ::ecore::Ptr<AbstractUIElement>;

// UIResource
        class UIResource;
        using UIResource_ptr = ::ecore::Ptr<UIResource>;

// UIDisplay
        class UIDisplay;
        using UIDisplay_ptr = ::ecore::Ptr<UIDisplay>;

// Screen
        class Screen;
        using Screen_ptr = ::ecore::Ptr<Screen>;

// Report
        class Report;
        using Report_ptr = ::ecore::Ptr<Report>;

// UIModel
        class UIModel;
        using UIModel_ptr = ::ecore::Ptr<UIModel>;

// AbstractUIRelationship
        class AbstractUIRelationship;
        using AbstractUIRelationship_ptr = ::ecore::Ptr<AbstractUIRelationship>;

// UILayout
        class UILayout;
        using UILayout_ptr = ::ecore::Ptr<UILayout>;

// UIField
        class UIField;
        using UIField_ptr = ::ecore::Ptr<UIField>;

// DisplaysImage
        class DisplaysImage;
        using DisplaysImage_ptr = ::ecore::Ptr<DisplaysImage>;

// Displays
        class Displays;
        using Displays_ptr = ::ecore::Ptr<Displays>;

// UIFlow
        class UIFlow;
        using UIFlow_ptr = ::ecore::Ptr<UIFlow>;

// UIElement
        class UIElement;
        using UIElement_ptr = ::ecore::Ptr<UIElement>;

// UIRelationship
        class UIRelationship;
        using UIRelationship_ptr = ::ecore::Ptr<UIRelationship>;

// UIAction
        class UIAction;
        using UIAction_ptr = ::ecore::Ptr<UIAction>;

// UIEvent
        class UIEvent;
        using UIEvent_ptr = ::ecore::Ptr<UIEvent>;

// ReadsUI
        class ReadsUI;
        using ReadsUI_ptr = ::ecore::Ptr<ReadsUI>;

// WritesUI
        class WritesUI;
        using WritesUI_ptr = ::ecore::Ptr<WritesUI>;

// ManagesUI
        class ManagesUI;
        using ManagesUI_ptr = ::ecore::Ptr<ManagesUI>;

// EEnum

// Package & Factory
        class UiFactory;
        using UiFactory_ptr = ::ecore::Ptr<UiFactory>;
        class UiPackage;
        using UiPackage_ptr = ::ecore::Ptr<UiPackage>;

    } // ui
} // kdm

#endif // _KDM_UI_FORWARD_HPP

