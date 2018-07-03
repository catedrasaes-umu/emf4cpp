// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/ui/UiFactory.hpp
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

#ifndef _KDM_UIFACTORY_HPP
#define _KDM_UIFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/ui.hpp>

namespace kdm
{
    namespace ui
    {

        class UiFactory: public virtual ::ecore::EFactory
        {
        public:

            static UiFactory_ptr _instance();

            virtual AbstractUIElement_ptr createAbstractUIElement();
            virtual UIResource_ptr createUIResource();
            virtual UIDisplay_ptr createUIDisplay();
            virtual Screen_ptr createScreen();
            virtual Report_ptr createReport();
            virtual UIModel_ptr createUIModel();
            virtual AbstractUIRelationship_ptr createAbstractUIRelationship();
            virtual UILayout_ptr createUILayout();
            virtual UIField_ptr createUIField();
            virtual DisplaysImage_ptr createDisplaysImage();
            virtual Displays_ptr createDisplays();
            virtual UIFlow_ptr createUIFlow();
            virtual UIElement_ptr createUIElement();
            virtual UIRelationship_ptr createUIRelationship();
            virtual UIAction_ptr createUIAction();
            virtual UIEvent_ptr createUIEvent();
            virtual ReadsUI_ptr createReadsUI();
            virtual WritesUI_ptr createWritesUI();
            virtual ManagesUI_ptr createManagesUI();

            virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EJavaObject const& _instanceValue);

        protected:

            static std::unique_ptr< UiFactory > s_instance;

            UiFactory();

        };

    } // ui
} // kdm

#endif // _KDM_UIFACTORY_HPP

