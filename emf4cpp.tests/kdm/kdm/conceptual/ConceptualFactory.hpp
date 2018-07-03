// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/conceptual/ConceptualFactory.hpp
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

#ifndef _KDM_CONCEPTUALFACTORY_HPP
#define _KDM_CONCEPTUALFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/conceptual.hpp>

namespace kdm
{
    namespace conceptual
    {

        class ConceptualFactory: public virtual ::ecore::EFactory
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

            virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EJavaObject const& _instanceValue);

        protected:

            static std::unique_ptr< ConceptualFactory > s_instance;

            ConceptualFactory();

        };

    } // conceptual
} // kdm

#endif // _KDM_CONCEPTUALFACTORY_HPP

