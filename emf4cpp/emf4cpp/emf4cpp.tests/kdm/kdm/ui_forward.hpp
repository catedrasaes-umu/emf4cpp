// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/ui_forward.hpp
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
        typedef AbstractUIElement* AbstractUIElement_ptr;

        // UIResource
        class UIResource;
        typedef UIResource* UIResource_ptr;

        // UIDisplay
        class UIDisplay;
        typedef UIDisplay* UIDisplay_ptr;

        // Screen
        class Screen;
        typedef Screen* Screen_ptr;

        // Report
        class Report;
        typedef Report* Report_ptr;

        // UIModel
        class UIModel;
        typedef UIModel* UIModel_ptr;

        // AbstractUIRelationship
        class AbstractUIRelationship;
        typedef AbstractUIRelationship* AbstractUIRelationship_ptr;

        // UILayout
        class UILayout;
        typedef UILayout* UILayout_ptr;

        // UIField
        class UIField;
        typedef UIField* UIField_ptr;

        // DisplaysImage
        class DisplaysImage;
        typedef DisplaysImage* DisplaysImage_ptr;

        // Displays
        class Displays;
        typedef Displays* Displays_ptr;

        // UIFlow
        class UIFlow;
        typedef UIFlow* UIFlow_ptr;

        // UIElement
        class UIElement;
        typedef UIElement* UIElement_ptr;

        // UIRelationship
        class UIRelationship;
        typedef UIRelationship* UIRelationship_ptr;

        // UIAction
        class UIAction;
        typedef UIAction* UIAction_ptr;

        // UIEvent
        class UIEvent;
        typedef UIEvent* UIEvent_ptr;

        // ReadsUI
        class ReadsUI;
        typedef ReadsUI* ReadsUI_ptr;

        // WritesUI
        class WritesUI;
        typedef WritesUI* WritesUI_ptr;

        // ManagesUI
        class ManagesUI;
        typedef ManagesUI* ManagesUI_ptr;

        // Package & Factory
        class UiFactory;
        typedef UiFactory * UiFactory_ptr;
        class UiPackage;
        typedef UiPackage * UiPackage_ptr;

        template< typename T, typename S >
        inline T* instanceOf(S* _s)
        {
            return dynamic_cast< T* > (_s);
        }

    } // ui
} // kdm


#endif // _KDM_UI_FORWARD_HPP
