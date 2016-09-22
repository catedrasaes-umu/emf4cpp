// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/ui/UiPackage.hpp
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

#ifndef _KDM_UIPACKAGE_HPP
#define _KDM_UIPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/ui_forward.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/KdmPackage.hpp>

namespace kdm
{
    namespace ui
    {

        class UiPackage: public virtual ::ecore::EPackage
        {
        public:

            static UiPackage_ptr _instance();

            // IDs for classifiers

            static const int ABSTRACTUIELEMENT = 0;

            static const int ABSTRACTUIRELATIONSHIP = 1;

            static const int DISPLAYS = 2;

            static const int DISPLAYSIMAGE = 3;

            static const int MANAGESUI = 4;

            static const int READSUI = 5;

            static const int REPORT = 6;

            static const int SCREEN = 7;

            static const int UIACTION = 8;

            static const int UIDISPLAY = 9;

            static const int UIELEMENT = 10;

            static const int UIEVENT = 11;

            static const int UIFIELD = 12;

            static const int UIFLOW = 13;

            static const int UILAYOUT = 14;

            static const int UIMODEL = 15;

            static const int UIRELATIONSHIP = 16;

            static const int UIRESOURCE = 17;

            static const int WRITESUI = 18;

            static const int ABSTRACTUIELEMENT__SOURCE = 290;

            static const int ABSTRACTUIELEMENT__UIRELATION = 291;

            static const int ABSTRACTUIELEMENT__IMPLEMENTATION = 292;

            static const int ABSTRACTUIELEMENT__ABSTRACTION = 293;

            static const int UIRESOURCE__UIELEMENT = 294;

            static const int UIMODEL__UIELEMENT = 295;

            static const int UILAYOUT__TO = 296;

            static const int UILAYOUT__FROM = 297;

            static const int DISPLAYSIMAGE__TO = 298;

            static const int DISPLAYSIMAGE__FROM = 299;

            static const int DISPLAYS__TO = 300;

            static const int DISPLAYS__FROM = 301;

            static const int UIFLOW__TO = 302;

            static const int UIFLOW__FROM = 303;

            static const int UIRELATIONSHIP__TO = 304;

            static const int UIRELATIONSHIP__FROM = 305;

            static const int UIACTION__KIND = 306;

            static const int UIACTION__UIELEMENT = 307;

            static const int UIEVENT__KIND = 308;

            static const int READSUI__TO = 309;

            static const int READSUI__FROM = 310;

            static const int WRITESUI__TO = 311;

            static const int WRITESUI__FROM = 312;

            static const int MANAGESUI__TO = 313;

            static const int MANAGESUI__FROM = 314;

            // IDs for classifiers for class AbstractUIElement 

            static const int ABSTRACTUIELEMENT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int ABSTRACTUIELEMENT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int ABSTRACTUIELEMENT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int ABSTRACTUIELEMENT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int ABSTRACTUIELEMENT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            // IDs for classifiers for class AbstractUIRelationship 

            static const int ABSTRACTUIRELATIONSHIP__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int ABSTRACTUIRELATIONSHIP__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int ABSTRACTUIRELATIONSHIP__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int ABSTRACTUIRELATIONSHIP__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class Displays 

            static const int DISPLAYS__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int DISPLAYS__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int DISPLAYS__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int DISPLAYS__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class DisplaysImage 

            static const int DISPLAYSIMAGE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int DISPLAYSIMAGE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int DISPLAYSIMAGE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int DISPLAYSIMAGE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class ManagesUI 

            static const int MANAGESUI__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int MANAGESUI__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int MANAGESUI__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int MANAGESUI__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class ReadsUI 

            static const int READSUI__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int READSUI__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int READSUI__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int READSUI__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class Report 

            static const int REPORT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int REPORT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int REPORT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int REPORT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int REPORT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int REPORT__SOURCE = ABSTRACTUIELEMENT__SOURCE;

            static const int REPORT__UIRELATION = ABSTRACTUIELEMENT__UIRELATION;

            static const int REPORT__IMPLEMENTATION =
                    ABSTRACTUIELEMENT__IMPLEMENTATION;

            static const int REPORT__ABSTRACTION =
                    ABSTRACTUIELEMENT__ABSTRACTION;

            static const int REPORT__UIELEMENT = UIRESOURCE__UIELEMENT;

            // IDs for classifiers for class Screen 

            static const int SCREEN__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int SCREEN__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int SCREEN__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int SCREEN__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int SCREEN__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int SCREEN__SOURCE = ABSTRACTUIELEMENT__SOURCE;

            static const int SCREEN__UIRELATION = ABSTRACTUIELEMENT__UIRELATION;

            static const int SCREEN__IMPLEMENTATION =
                    ABSTRACTUIELEMENT__IMPLEMENTATION;

            static const int SCREEN__ABSTRACTION =
                    ABSTRACTUIELEMENT__ABSTRACTION;

            static const int SCREEN__UIELEMENT = UIRESOURCE__UIELEMENT;

            // IDs for classifiers for class UIAction 

            static const int UIACTION__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int UIACTION__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int UIACTION__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int UIACTION__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int UIACTION__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int UIACTION__SOURCE = ABSTRACTUIELEMENT__SOURCE;

            static const int UIACTION__UIRELATION =
                    ABSTRACTUIELEMENT__UIRELATION;

            static const int UIACTION__IMPLEMENTATION =
                    ABSTRACTUIELEMENT__IMPLEMENTATION;

            static const int UIACTION__ABSTRACTION =
                    ABSTRACTUIELEMENT__ABSTRACTION;

            // IDs for classifiers for class UIDisplay 

            static const int UIDISPLAY__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int UIDISPLAY__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int UIDISPLAY__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int UIDISPLAY__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int UIDISPLAY__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int UIDISPLAY__SOURCE = ABSTRACTUIELEMENT__SOURCE;

            static const int UIDISPLAY__UIRELATION =
                    ABSTRACTUIELEMENT__UIRELATION;

            static const int UIDISPLAY__IMPLEMENTATION =
                    ABSTRACTUIELEMENT__IMPLEMENTATION;

            static const int UIDISPLAY__ABSTRACTION =
                    ABSTRACTUIELEMENT__ABSTRACTION;

            static const int UIDISPLAY__UIELEMENT = UIRESOURCE__UIELEMENT;

            // IDs for classifiers for class UIElement 

            static const int UIELEMENT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int UIELEMENT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int UIELEMENT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int UIELEMENT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int UIELEMENT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int UIELEMENT__SOURCE = ABSTRACTUIELEMENT__SOURCE;

            static const int UIELEMENT__UIRELATION =
                    ABSTRACTUIELEMENT__UIRELATION;

            static const int UIELEMENT__IMPLEMENTATION =
                    ABSTRACTUIELEMENT__IMPLEMENTATION;

            static const int UIELEMENT__ABSTRACTION =
                    ABSTRACTUIELEMENT__ABSTRACTION;

            // IDs for classifiers for class UIEvent 

            static const int UIEVENT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int UIEVENT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int UIEVENT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int UIEVENT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int UIEVENT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int UIEVENT__SOURCE = ABSTRACTUIELEMENT__SOURCE;

            static const int UIEVENT__UIRELATION = ABSTRACTUIELEMENT__UIRELATION;

            static const int UIEVENT__IMPLEMENTATION =
                    ABSTRACTUIELEMENT__IMPLEMENTATION;

            static const int UIEVENT__ABSTRACTION =
                    ABSTRACTUIELEMENT__ABSTRACTION;

            // IDs for classifiers for class UIField 

            static const int UIFIELD__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int UIFIELD__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int UIFIELD__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int UIFIELD__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int UIFIELD__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int UIFIELD__SOURCE = ABSTRACTUIELEMENT__SOURCE;

            static const int UIFIELD__UIRELATION = ABSTRACTUIELEMENT__UIRELATION;

            static const int UIFIELD__IMPLEMENTATION =
                    ABSTRACTUIELEMENT__IMPLEMENTATION;

            static const int UIFIELD__ABSTRACTION =
                    ABSTRACTUIELEMENT__ABSTRACTION;

            static const int UIFIELD__UIELEMENT = UIRESOURCE__UIELEMENT;

            // IDs for classifiers for class UIFlow 

            static const int UIFLOW__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int UIFLOW__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int UIFLOW__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int UIFLOW__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class UILayout 

            static const int UILAYOUT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int UILAYOUT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int UILAYOUT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int UILAYOUT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class UIModel 

            static const int UIMODEL__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int UIMODEL__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int UIMODEL__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int UIMODEL__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int UIMODEL__AUDIT =
                    ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT;

            static const int UIMODEL__EXTENSIONFAMILY =
                    ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY;

            static const int UIMODEL__NAME =
                    ::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME;

            // IDs for classifiers for class UIRelationship 

            static const int UIRELATIONSHIP__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int UIRELATIONSHIP__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int UIRELATIONSHIP__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int UIRELATIONSHIP__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class UIResource 

            static const int UIRESOURCE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int UIRESOURCE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int UIRESOURCE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int UIRESOURCE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int UIRESOURCE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int UIRESOURCE__SOURCE = ABSTRACTUIELEMENT__SOURCE;

            static const int UIRESOURCE__UIRELATION =
                    ABSTRACTUIELEMENT__UIRELATION;

            static const int UIRESOURCE__IMPLEMENTATION =
                    ABSTRACTUIELEMENT__IMPLEMENTATION;

            static const int UIRESOURCE__ABSTRACTION =
                    ABSTRACTUIELEMENT__ABSTRACTION;

            // IDs for classifiers for class WritesUI 

            static const int WRITESUI__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int WRITESUI__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int WRITESUI__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int WRITESUI__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // EClassifiers methods

            virtual ::ecore::EClass_ptr getAbstractUIElement();

            virtual ::ecore::EClass_ptr getUIResource();

            virtual ::ecore::EClass_ptr getUIDisplay();

            virtual ::ecore::EClass_ptr getScreen();

            virtual ::ecore::EClass_ptr getReport();

            virtual ::ecore::EClass_ptr getUIModel();

            virtual ::ecore::EClass_ptr getAbstractUIRelationship();

            virtual ::ecore::EClass_ptr getUILayout();

            virtual ::ecore::EClass_ptr getUIField();

            virtual ::ecore::EClass_ptr getDisplaysImage();

            virtual ::ecore::EClass_ptr getDisplays();

            virtual ::ecore::EClass_ptr getUIFlow();

            virtual ::ecore::EClass_ptr getUIElement();

            virtual ::ecore::EClass_ptr getUIRelationship();

            virtual ::ecore::EClass_ptr getUIAction();

            virtual ::ecore::EClass_ptr getUIEvent();

            virtual ::ecore::EClass_ptr getReadsUI();

            virtual ::ecore::EClass_ptr getWritesUI();

            virtual ::ecore::EClass_ptr getManagesUI();

            // EStructuralFeatures methods

            virtual ::ecore::EReference_ptr getElement__attribute();

            virtual ::ecore::EReference_ptr getElement__annotation();

            virtual ::ecore::EReference_ptr getModelElement__stereotype();

            virtual ::ecore::EReference_ptr getModelElement__taggedValue();

            virtual ::ecore::EAttribute_ptr getKDMEntity__name();

            virtual ::ecore::EReference_ptr getAbstractUIElement__source();

            virtual ::ecore::EReference_ptr getAbstractUIElement__UIRelation();

            virtual ::ecore::EReference_ptr getAbstractUIElement__implementation();

            virtual ::ecore::EReference_ptr getAbstractUIElement__abstraction();

            virtual ::ecore::EReference_ptr getUIResource__UIElement();

            virtual ::ecore::EReference_ptr getKDMFramework__audit();

            virtual ::ecore::EReference_ptr getKDMFramework__extensionFamily();

            virtual ::ecore::EAttribute_ptr getKDMFramework__name();

            virtual ::ecore::EReference_ptr getUIModel__UIElement();

            virtual ::ecore::EReference_ptr getUILayout__to();

            virtual ::ecore::EReference_ptr getUILayout__from();

            virtual ::ecore::EReference_ptr getDisplaysImage__to();

            virtual ::ecore::EReference_ptr getDisplaysImage__from();

            virtual ::ecore::EReference_ptr getDisplays__to();

            virtual ::ecore::EReference_ptr getDisplays__from();

            virtual ::ecore::EReference_ptr getUIFlow__to();

            virtual ::ecore::EReference_ptr getUIFlow__from();

            virtual ::ecore::EReference_ptr getUIRelationship__to();

            virtual ::ecore::EReference_ptr getUIRelationship__from();

            virtual ::ecore::EAttribute_ptr getUIAction__kind();

            virtual ::ecore::EReference_ptr getUIAction__UIElement();

            virtual ::ecore::EAttribute_ptr getUIEvent__kind();

            virtual ::ecore::EReference_ptr getReadsUI__to();

            virtual ::ecore::EReference_ptr getReadsUI__from();

            virtual ::ecore::EReference_ptr getWritesUI__to();

            virtual ::ecore::EReference_ptr getWritesUI__from();

            virtual ::ecore::EReference_ptr getManagesUI__to();

            virtual ::ecore::EReference_ptr getManagesUI__from();

        protected:

            static std::auto_ptr< UiPackage > s_instance;

            UiPackage();

            // EClass instances 

            ::ecore::EClass_ptr m_AbstractUIElementEClass;

            ::ecore::EClass_ptr m_UIResourceEClass;

            ::ecore::EClass_ptr m_UIDisplayEClass;

            ::ecore::EClass_ptr m_ScreenEClass;

            ::ecore::EClass_ptr m_ReportEClass;

            ::ecore::EClass_ptr m_UIModelEClass;

            ::ecore::EClass_ptr m_AbstractUIRelationshipEClass;

            ::ecore::EClass_ptr m_UILayoutEClass;

            ::ecore::EClass_ptr m_UIFieldEClass;

            ::ecore::EClass_ptr m_DisplaysImageEClass;

            ::ecore::EClass_ptr m_DisplaysEClass;

            ::ecore::EClass_ptr m_UIFlowEClass;

            ::ecore::EClass_ptr m_UIElementEClass;

            ::ecore::EClass_ptr m_UIRelationshipEClass;

            ::ecore::EClass_ptr m_UIActionEClass;

            ::ecore::EClass_ptr m_UIEventEClass;

            ::ecore::EClass_ptr m_ReadsUIEClass;

            ::ecore::EClass_ptr m_WritesUIEClass;

            ::ecore::EClass_ptr m_ManagesUIEClass;

            // EEnuminstances 

            // EDataType instances 

            // EStructuralFeatures instances

            ::ecore::EReference_ptr m_Element__attribute;

            ::ecore::EReference_ptr m_Element__annotation;

            ::ecore::EReference_ptr m_ModelElement__stereotype;

            ::ecore::EReference_ptr m_ModelElement__taggedValue;

            ::ecore::EAttribute_ptr m_KDMEntity__name;

            ::ecore::EReference_ptr m_AbstractUIElement__source;

            ::ecore::EReference_ptr m_AbstractUIElement__UIRelation;

            ::ecore::EReference_ptr m_AbstractUIElement__implementation;

            ::ecore::EReference_ptr m_AbstractUIElement__abstraction;

            ::ecore::EReference_ptr m_UIResource__UIElement;

            ::ecore::EReference_ptr m_KDMFramework__audit;

            ::ecore::EReference_ptr m_KDMFramework__extensionFamily;

            ::ecore::EAttribute_ptr m_KDMFramework__name;

            ::ecore::EReference_ptr m_UIModel__UIElement;

            ::ecore::EReference_ptr m_UILayout__to;

            ::ecore::EReference_ptr m_UILayout__from;

            ::ecore::EReference_ptr m_DisplaysImage__to;

            ::ecore::EReference_ptr m_DisplaysImage__from;

            ::ecore::EReference_ptr m_Displays__to;

            ::ecore::EReference_ptr m_Displays__from;

            ::ecore::EReference_ptr m_UIFlow__to;

            ::ecore::EReference_ptr m_UIFlow__from;

            ::ecore::EReference_ptr m_UIRelationship__to;

            ::ecore::EReference_ptr m_UIRelationship__from;

            ::ecore::EAttribute_ptr m_UIAction__kind;

            ::ecore::EReference_ptr m_UIAction__UIElement;

            ::ecore::EAttribute_ptr m_UIEvent__kind;

            ::ecore::EReference_ptr m_ReadsUI__to;

            ::ecore::EReference_ptr m_ReadsUI__from;

            ::ecore::EReference_ptr m_WritesUI__to;

            ::ecore::EReference_ptr m_WritesUI__from;

            ::ecore::EReference_ptr m_ManagesUI__to;

            ::ecore::EReference_ptr m_ManagesUI__from;

        };

    } // ui
} // kdm

#endif // _KDM_UIPACKAGE_HPP

