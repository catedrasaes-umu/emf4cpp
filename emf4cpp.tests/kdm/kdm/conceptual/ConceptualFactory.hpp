// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/conceptual/ConceptualFactory.hpp
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

#ifndef _KDM_CONCEPTUALFACTORY_HPP
#define _KDM_CONCEPTUALFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/conceptual.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace conceptual
    {

        class EXPORT_KDM_DLL ConceptualFactory : public virtual ::ecore::EFactory
        {
        public:

            static ConceptualFactory_ptr _instance();

            virtual ConceptualModel_ptr createConceptualModel();
            virtual AbstractConceptualElement_ptr createAbstractConceptualElement();
            virtual TermUnit_ptr createTermUnit();
            virtual ConceptualContainer_ptr createConceptualContainer();
            virtual FactUnit_ptr createFactUnit();
            virtual AbstractConceptualRelationship_ptr createAbstractConceptualRelationship();
            virtual ConceptualRelationship_ptr createConceptualRelationship();
            virtual BehaviorUnit_ptr createBehaviorUnit();
            virtual RuleUnit_ptr createRuleUnit();
            virtual ScenarioUnit_ptr createScenarioUnit();
            virtual ConceptualFlow_ptr createConceptualFlow();
            virtual ConceptualElement_ptr createConceptualElement();
            virtual ConceptualRole_ptr createConceptualRole();

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static boost::intrusive_ptr< ConceptualFactory > s_holder;

            ConceptualFactory();

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

        template< > inline ConceptualModel_ptr create< ConceptualModel >()
        {
            auto eFactory =
                    ConceptualPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ConceptualFactory* >(eFactory.get());
            return packageFactory->createConceptualModel();
        }

        template< > inline AbstractConceptualElement_ptr create<
                AbstractConceptualElement >()
        {
            auto eFactory =
                    ConceptualPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ConceptualFactory* >(eFactory.get());
            return packageFactory->createAbstractConceptualElement();
        }

        template< > inline TermUnit_ptr create< TermUnit >()
        {
            auto eFactory =
                    ConceptualPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ConceptualFactory* >(eFactory.get());
            return packageFactory->createTermUnit();
        }

        template< > inline ConceptualContainer_ptr create< ConceptualContainer >()
        {
            auto eFactory =
                    ConceptualPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ConceptualFactory* >(eFactory.get());
            return packageFactory->createConceptualContainer();
        }

        template< > inline FactUnit_ptr create< FactUnit >()
        {
            auto eFactory =
                    ConceptualPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ConceptualFactory* >(eFactory.get());
            return packageFactory->createFactUnit();
        }

        template< > inline AbstractConceptualRelationship_ptr create<
                AbstractConceptualRelationship >()
        {
            auto eFactory =
                    ConceptualPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ConceptualFactory* >(eFactory.get());
            return packageFactory->createAbstractConceptualRelationship();
        }

        template< > inline ConceptualRelationship_ptr create<
                ConceptualRelationship >()
        {
            auto eFactory =
                    ConceptualPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ConceptualFactory* >(eFactory.get());
            return packageFactory->createConceptualRelationship();
        }

        template< > inline BehaviorUnit_ptr create< BehaviorUnit >()
        {
            auto eFactory =
                    ConceptualPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ConceptualFactory* >(eFactory.get());
            return packageFactory->createBehaviorUnit();
        }

        template< > inline RuleUnit_ptr create< RuleUnit >()
        {
            auto eFactory =
                    ConceptualPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ConceptualFactory* >(eFactory.get());
            return packageFactory->createRuleUnit();
        }

        template< > inline ScenarioUnit_ptr create< ScenarioUnit >()
        {
            auto eFactory =
                    ConceptualPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ConceptualFactory* >(eFactory.get());
            return packageFactory->createScenarioUnit();
        }

        template< > inline ConceptualFlow_ptr create< ConceptualFlow >()
        {
            auto eFactory =
                    ConceptualPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ConceptualFactory* >(eFactory.get());
            return packageFactory->createConceptualFlow();
        }

        template< > inline ConceptualElement_ptr create< ConceptualElement >()
        {
            auto eFactory =
                    ConceptualPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ConceptualFactory* >(eFactory.get());
            return packageFactory->createConceptualElement();
        }

        template< > inline ConceptualRole_ptr create< ConceptualRole >()
        {
            auto eFactory =
                    ConceptualPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ConceptualFactory* >(eFactory.get());
            return packageFactory->createConceptualRole();
        }

    } // conceptual
} // kdm

#endif // _KDM_CONCEPTUALFACTORY_HPP

