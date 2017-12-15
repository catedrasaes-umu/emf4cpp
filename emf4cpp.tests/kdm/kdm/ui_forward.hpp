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
        using AbstractUIElement_ptr = boost::intrusive_ptr<AbstractUIElement>;

// UIResource
        class UIResource;
        using UIResource_ptr = boost::intrusive_ptr<UIResource>;

// UIDisplay
        class UIDisplay;
        using UIDisplay_ptr = boost::intrusive_ptr<UIDisplay>;

// Screen
        class Screen;
        using Screen_ptr = boost::intrusive_ptr<Screen>;

// Report
        class Report;
        using Report_ptr = boost::intrusive_ptr<Report>;

// UIModel
        class UIModel;
        using UIModel_ptr = boost::intrusive_ptr<UIModel>;

// AbstractUIRelationship
        class AbstractUIRelationship;
        using AbstractUIRelationship_ptr = boost::intrusive_ptr<AbstractUIRelationship>;

// UILayout
        class UILayout;
        using UILayout_ptr = boost::intrusive_ptr<UILayout>;

// UIField
        class UIField;
        using UIField_ptr = boost::intrusive_ptr<UIField>;

// DisplaysImage
        class DisplaysImage;
        using DisplaysImage_ptr = boost::intrusive_ptr<DisplaysImage>;

// Displays
        class Displays;
        using Displays_ptr = boost::intrusive_ptr<Displays>;

// UIFlow
        class UIFlow;
        using UIFlow_ptr = boost::intrusive_ptr<UIFlow>;

// UIElement
        class UIElement;
        using UIElement_ptr = boost::intrusive_ptr<UIElement>;

// UIRelationship
        class UIRelationship;
        using UIRelationship_ptr = boost::intrusive_ptr<UIRelationship>;

// UIAction
        class UIAction;
        using UIAction_ptr = boost::intrusive_ptr<UIAction>;

// UIEvent
        class UIEvent;
        using UIEvent_ptr = boost::intrusive_ptr<UIEvent>;

// ReadsUI
        class ReadsUI;
        using ReadsUI_ptr = boost::intrusive_ptr<ReadsUI>;

// WritesUI
        class WritesUI;
        using WritesUI_ptr = boost::intrusive_ptr<WritesUI>;

// ManagesUI
        class ManagesUI;
        using ManagesUI_ptr = boost::intrusive_ptr<ManagesUI>;

// EEnum

// Package & Factory
        class UiFactory;
        using UiFactory_ptr = boost::intrusive_ptr<UiFactory>;
        class UiPackage;
        using UiPackage_ptr = boost::intrusive_ptr<UiPackage>;

        template< typename T, typename S >
        inline boost::intrusive_ptr< T > instanceOf(const S& _s)
        {
            return boost::intrusive_ptr < T > (dynamic_cast< T* >(_s.get()));
        }

    } // ui
} // kdm

#endif // _KDM_UI_FORWARD_HPP

