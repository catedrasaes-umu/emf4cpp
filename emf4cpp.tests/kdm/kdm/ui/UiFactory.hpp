// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/ui/UiFactory.hpp
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

#ifndef _KDM_UIFACTORY_HPP
#define _KDM_UIFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/ui.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace ui
    {

        class EXPORT_KDM_DLL UiFactory : public virtual ::ecore::EFactory
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

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static boost::intrusive_ptr< UiFactory > s_holder;

            UiFactory();

        };

        /** An object creation helper
         *
         * Usage (add namespaces as required):
         *   auto p = create<MyClass>();
         *
         */
        template< class T > inline boost::intrusive_ptr< T > create()
        {
            return boost::intrusive_ptr< T >();
        }

        template< > inline AbstractUIElement_ptr create< AbstractUIElement >()
        {
            auto eFactory = UiPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< UiFactory* >(eFactory.get());
            return packageFactory->createAbstractUIElement();
        }

        template< > inline UIResource_ptr create< UIResource >()
        {
            auto eFactory = UiPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< UiFactory* >(eFactory.get());
            return packageFactory->createUIResource();
        }

        template< > inline UIDisplay_ptr create< UIDisplay >()
        {
            auto eFactory = UiPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< UiFactory* >(eFactory.get());
            return packageFactory->createUIDisplay();
        }

        template< > inline Screen_ptr create< Screen >()
        {
            auto eFactory = UiPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< UiFactory* >(eFactory.get());
            return packageFactory->createScreen();
        }

        template< > inline Report_ptr create< Report >()
        {
            auto eFactory = UiPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< UiFactory* >(eFactory.get());
            return packageFactory->createReport();
        }

        template< > inline UIModel_ptr create< UIModel >()
        {
            auto eFactory = UiPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< UiFactory* >(eFactory.get());
            return packageFactory->createUIModel();
        }

        template< > inline AbstractUIRelationship_ptr create<
                AbstractUIRelationship >()
        {
            auto eFactory = UiPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< UiFactory* >(eFactory.get());
            return packageFactory->createAbstractUIRelationship();
        }

        template< > inline UILayout_ptr create< UILayout >()
        {
            auto eFactory = UiPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< UiFactory* >(eFactory.get());
            return packageFactory->createUILayout();
        }

        template< > inline UIField_ptr create< UIField >()
        {
            auto eFactory = UiPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< UiFactory* >(eFactory.get());
            return packageFactory->createUIField();
        }

        template< > inline DisplaysImage_ptr create< DisplaysImage >()
        {
            auto eFactory = UiPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< UiFactory* >(eFactory.get());
            return packageFactory->createDisplaysImage();
        }

        template< > inline Displays_ptr create< Displays >()
        {
            auto eFactory = UiPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< UiFactory* >(eFactory.get());
            return packageFactory->createDisplays();
        }

        template< > inline UIFlow_ptr create< UIFlow >()
        {
            auto eFactory = UiPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< UiFactory* >(eFactory.get());
            return packageFactory->createUIFlow();
        }

        template< > inline UIElement_ptr create< UIElement >()
        {
            auto eFactory = UiPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< UiFactory* >(eFactory.get());
            return packageFactory->createUIElement();
        }

        template< > inline UIRelationship_ptr create< UIRelationship >()
        {
            auto eFactory = UiPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< UiFactory* >(eFactory.get());
            return packageFactory->createUIRelationship();
        }

        template< > inline UIAction_ptr create< UIAction >()
        {
            auto eFactory = UiPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< UiFactory* >(eFactory.get());
            return packageFactory->createUIAction();
        }

        template< > inline UIEvent_ptr create< UIEvent >()
        {
            auto eFactory = UiPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< UiFactory* >(eFactory.get());
            return packageFactory->createUIEvent();
        }

        template< > inline ReadsUI_ptr create< ReadsUI >()
        {
            auto eFactory = UiPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< UiFactory* >(eFactory.get());
            return packageFactory->createReadsUI();
        }

        template< > inline WritesUI_ptr create< WritesUI >()
        {
            auto eFactory = UiPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< UiFactory* >(eFactory.get());
            return packageFactory->createWritesUI();
        }

        template< > inline ManagesUI_ptr create< ManagesUI >()
        {
            auto eFactory = UiPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< UiFactory* >(eFactory.get());
            return packageFactory->createManagesUI();
        }

    } // ui
} // kdm

#endif // _KDM_UIFACTORY_HPP

