// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/conceptual/ConceptualPackage.hpp
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

#ifndef _KDM_CONCEPTUALPACKAGE_HPP
#define _KDM_CONCEPTUALPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/conceptual_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/KdmPackage.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace conceptual
    {

    class EXPORT_KDM_DLL ConceptualPackage : public virtual ::ecore::EPackage
    {
    public:

        static ConceptualPackage_ptr _instance();
        static ConceptualPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifiers

        static const int ABSTRACTCONCEPTUALELEMENT = 0;

        static const int ABSTRACTCONCEPTUALRELATIONSHIP = 1;

        static const int BEHAVIORUNIT = 2;

        static const int CONCEPTUALCONTAINER = 3;

        static const int CONCEPTUALELEMENT = 4;

        static const int CONCEPTUALFLOW = 5;

        static const int CONCEPTUALMODEL = 6;

        static const int CONCEPTUALRELATIONSHIP = 7;

        static const int CONCEPTUALROLE = 8;

        static const int FACTUNIT = 9;

        static const int RULEUNIT = 10;

        static const int SCENARIOUNIT = 11;

        static const int TERMUNIT = 12;

        static const int CONCEPTUALMODEL__CONCEPTUALELEMENT = 123;

        static const int ABSTRACTCONCEPTUALELEMENT__SOURCE = 124;

        static const int ABSTRACTCONCEPTUALELEMENT__IMPLEMENTATION = 125;

        static const int ABSTRACTCONCEPTUALELEMENT__CONCEPTUALRELATION = 126;

        static const int ABSTRACTCONCEPTUALELEMENT__ABSTRACTION = 127;

        static const int CONCEPTUALCONTAINER__CONCEPTUALELEMENT = 128;

        static const int CONCEPTUALRELATIONSHIP__TO = 129;

        static const int CONCEPTUALRELATIONSHIP__FROM = 130;

        static const int CONCEPTUALFLOW__TO = 131;

        static const int CONCEPTUALFLOW__FROM = 132;

        static const int CONCEPTUALROLE__CONCEPTUALELEMENT = 133;

        // IDs for classifiers for class AbstractConceptualElement 

        static const int ABSTRACTCONCEPTUALELEMENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int ABSTRACTCONCEPTUALELEMENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int ABSTRACTCONCEPTUALELEMENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int ABSTRACTCONCEPTUALELEMENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int ABSTRACTCONCEPTUALELEMENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        // IDs for classifiers for class AbstractConceptualRelationship 

        static const int ABSTRACTCONCEPTUALRELATIONSHIP__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int ABSTRACTCONCEPTUALRELATIONSHIP__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int ABSTRACTCONCEPTUALRELATIONSHIP__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int ABSTRACTCONCEPTUALRELATIONSHIP__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class BehaviorUnit 

        static const int BEHAVIORUNIT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int BEHAVIORUNIT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int BEHAVIORUNIT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int BEHAVIORUNIT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int BEHAVIORUNIT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int BEHAVIORUNIT__SOURCE = ABSTRACTCONCEPTUALELEMENT__SOURCE;

        static const int BEHAVIORUNIT__IMPLEMENTATION = ABSTRACTCONCEPTUALELEMENT__IMPLEMENTATION;

        static const int BEHAVIORUNIT__CONCEPTUALRELATION = ABSTRACTCONCEPTUALELEMENT__CONCEPTUALRELATION;

        static const int BEHAVIORUNIT__ABSTRACTION = ABSTRACTCONCEPTUALELEMENT__ABSTRACTION;

        static const int BEHAVIORUNIT__CONCEPTUALELEMENT = CONCEPTUALCONTAINER__CONCEPTUALELEMENT;

        // IDs for classifiers for class ConceptualContainer 

        static const int CONCEPTUALCONTAINER__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int CONCEPTUALCONTAINER__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int CONCEPTUALCONTAINER__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int CONCEPTUALCONTAINER__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int CONCEPTUALCONTAINER__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int CONCEPTUALCONTAINER__SOURCE = ABSTRACTCONCEPTUALELEMENT__SOURCE;

        static const int CONCEPTUALCONTAINER__IMPLEMENTATION = ABSTRACTCONCEPTUALELEMENT__IMPLEMENTATION;

        static const int CONCEPTUALCONTAINER__CONCEPTUALRELATION = ABSTRACTCONCEPTUALELEMENT__CONCEPTUALRELATION;

        static const int CONCEPTUALCONTAINER__ABSTRACTION = ABSTRACTCONCEPTUALELEMENT__ABSTRACTION;

        // IDs for classifiers for class ConceptualElement 

        static const int CONCEPTUALELEMENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int CONCEPTUALELEMENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int CONCEPTUALELEMENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int CONCEPTUALELEMENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int CONCEPTUALELEMENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int CONCEPTUALELEMENT__SOURCE = ABSTRACTCONCEPTUALELEMENT__SOURCE;

        static const int CONCEPTUALELEMENT__IMPLEMENTATION = ABSTRACTCONCEPTUALELEMENT__IMPLEMENTATION;

        static const int CONCEPTUALELEMENT__CONCEPTUALRELATION = ABSTRACTCONCEPTUALELEMENT__CONCEPTUALRELATION;

        static const int CONCEPTUALELEMENT__ABSTRACTION = ABSTRACTCONCEPTUALELEMENT__ABSTRACTION;

        // IDs for classifiers for class ConceptualFlow 

        static const int CONCEPTUALFLOW__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int CONCEPTUALFLOW__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int CONCEPTUALFLOW__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int CONCEPTUALFLOW__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class ConceptualModel 

        static const int CONCEPTUALMODEL__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int CONCEPTUALMODEL__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int CONCEPTUALMODEL__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int CONCEPTUALMODEL__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int CONCEPTUALMODEL__AUDIT = ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT;

        static const int CONCEPTUALMODEL__EXTENSIONFAMILY = ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY;

        static const int CONCEPTUALMODEL__NAME = ::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME;

        // IDs for classifiers for class ConceptualRelationship 

        static const int CONCEPTUALRELATIONSHIP__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int CONCEPTUALRELATIONSHIP__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int CONCEPTUALRELATIONSHIP__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int CONCEPTUALRELATIONSHIP__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class ConceptualRole 

        static const int CONCEPTUALROLE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int CONCEPTUALROLE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int CONCEPTUALROLE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int CONCEPTUALROLE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int CONCEPTUALROLE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int CONCEPTUALROLE__SOURCE = ABSTRACTCONCEPTUALELEMENT__SOURCE;

        static const int CONCEPTUALROLE__IMPLEMENTATION = ABSTRACTCONCEPTUALELEMENT__IMPLEMENTATION;

        static const int CONCEPTUALROLE__CONCEPTUALRELATION = ABSTRACTCONCEPTUALELEMENT__CONCEPTUALRELATION;

        static const int CONCEPTUALROLE__ABSTRACTION = ABSTRACTCONCEPTUALELEMENT__ABSTRACTION;

        // IDs for classifiers for class FactUnit 

        static const int FACTUNIT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int FACTUNIT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int FACTUNIT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int FACTUNIT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int FACTUNIT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int FACTUNIT__SOURCE = ABSTRACTCONCEPTUALELEMENT__SOURCE;

        static const int FACTUNIT__IMPLEMENTATION = ABSTRACTCONCEPTUALELEMENT__IMPLEMENTATION;

        static const int FACTUNIT__CONCEPTUALRELATION = ABSTRACTCONCEPTUALELEMENT__CONCEPTUALRELATION;

        static const int FACTUNIT__ABSTRACTION = ABSTRACTCONCEPTUALELEMENT__ABSTRACTION;

        static const int FACTUNIT__CONCEPTUALELEMENT = CONCEPTUALCONTAINER__CONCEPTUALELEMENT;

        // IDs for classifiers for class RuleUnit 

        static const int RULEUNIT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int RULEUNIT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int RULEUNIT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int RULEUNIT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int RULEUNIT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int RULEUNIT__SOURCE = ABSTRACTCONCEPTUALELEMENT__SOURCE;

        static const int RULEUNIT__IMPLEMENTATION = ABSTRACTCONCEPTUALELEMENT__IMPLEMENTATION;

        static const int RULEUNIT__CONCEPTUALRELATION = ABSTRACTCONCEPTUALELEMENT__CONCEPTUALRELATION;

        static const int RULEUNIT__ABSTRACTION = ABSTRACTCONCEPTUALELEMENT__ABSTRACTION;

        static const int RULEUNIT__CONCEPTUALELEMENT = CONCEPTUALCONTAINER__CONCEPTUALELEMENT;

        // IDs for classifiers for class ScenarioUnit 

        static const int SCENARIOUNIT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int SCENARIOUNIT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int SCENARIOUNIT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int SCENARIOUNIT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int SCENARIOUNIT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int SCENARIOUNIT__SOURCE = ABSTRACTCONCEPTUALELEMENT__SOURCE;

        static const int SCENARIOUNIT__IMPLEMENTATION = ABSTRACTCONCEPTUALELEMENT__IMPLEMENTATION;

        static const int SCENARIOUNIT__CONCEPTUALRELATION = ABSTRACTCONCEPTUALELEMENT__CONCEPTUALRELATION;

        static const int SCENARIOUNIT__ABSTRACTION = ABSTRACTCONCEPTUALELEMENT__ABSTRACTION;

        static const int SCENARIOUNIT__CONCEPTUALELEMENT = CONCEPTUALCONTAINER__CONCEPTUALELEMENT;

        // IDs for classifiers for class TermUnit 

        static const int TERMUNIT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int TERMUNIT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int TERMUNIT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int TERMUNIT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int TERMUNIT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int TERMUNIT__SOURCE = ABSTRACTCONCEPTUALELEMENT__SOURCE;

        static const int TERMUNIT__IMPLEMENTATION = ABSTRACTCONCEPTUALELEMENT__IMPLEMENTATION;

        static const int TERMUNIT__CONCEPTUALRELATION = ABSTRACTCONCEPTUALELEMENT__CONCEPTUALRELATION;

        static const int TERMUNIT__ABSTRACTION = ABSTRACTCONCEPTUALELEMENT__ABSTRACTION;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getConceptualModel();

        virtual ::ecore::EClass_ptr getAbstractConceptualElement();

        virtual ::ecore::EClass_ptr getTermUnit();

        virtual ::ecore::EClass_ptr getConceptualContainer();

        virtual ::ecore::EClass_ptr getFactUnit();

        virtual ::ecore::EClass_ptr getAbstractConceptualRelationship();

        virtual ::ecore::EClass_ptr getConceptualRelationship();

        virtual ::ecore::EClass_ptr getBehaviorUnit();

        virtual ::ecore::EClass_ptr getRuleUnit();

        virtual ::ecore::EClass_ptr getScenarioUnit();

        virtual ::ecore::EClass_ptr getConceptualFlow();

        virtual ::ecore::EClass_ptr getConceptualElement();

        virtual ::ecore::EClass_ptr getConceptualRole();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getElement__attribute();

        virtual ::ecore::EReference_ptr getElement__annotation();

        virtual ::ecore::EReference_ptr getModelElement__stereotype();

        virtual ::ecore::EReference_ptr getModelElement__taggedValue();

        virtual ::ecore::EReference_ptr getKDMFramework__audit();

        virtual ::ecore::EReference_ptr getKDMFramework__extensionFamily();

        virtual ::ecore::EAttribute_ptr getKDMFramework__name();

        virtual ::ecore::EReference_ptr getConceptualModel__conceptualElement();

        virtual ::ecore::EAttribute_ptr getKDMEntity__name();

        virtual ::ecore::EReference_ptr getAbstractConceptualElement__source();

        virtual ::ecore::EReference_ptr getAbstractConceptualElement__implementation();

        virtual ::ecore::EReference_ptr getAbstractConceptualElement__conceptualRelation();

        virtual ::ecore::EReference_ptr getAbstractConceptualElement__abstraction();

        virtual ::ecore::EReference_ptr getConceptualContainer__conceptualElement();

        virtual ::ecore::EReference_ptr getConceptualRelationship__to();

        virtual ::ecore::EReference_ptr getConceptualRelationship__from();

        virtual ::ecore::EReference_ptr getConceptualFlow__to();

        virtual ::ecore::EReference_ptr getConceptualFlow__from();

        virtual ::ecore::EReference_ptr getConceptualRole__conceptualElement();

    protected:

        static std::unique_ptr< ConceptualPackage, ::ecorecpp::PackageDeleter<ConceptualPackage> > s_instance;

        ConceptualPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_ConceptualModelEClass;

        ::ecore::EClass_ptr m_AbstractConceptualElementEClass;

        ::ecore::EClass_ptr m_TermUnitEClass;

        ::ecore::EClass_ptr m_ConceptualContainerEClass;

        ::ecore::EClass_ptr m_FactUnitEClass;

        ::ecore::EClass_ptr m_AbstractConceptualRelationshipEClass;

        ::ecore::EClass_ptr m_ConceptualRelationshipEClass;

        ::ecore::EClass_ptr m_BehaviorUnitEClass;

        ::ecore::EClass_ptr m_RuleUnitEClass;

        ::ecore::EClass_ptr m_ScenarioUnitEClass;

        ::ecore::EClass_ptr m_ConceptualFlowEClass;

        ::ecore::EClass_ptr m_ConceptualElementEClass;

        ::ecore::EClass_ptr m_ConceptualRoleEClass;

        // EEnuminstances 

        // EDataType instances 

        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_Element__attribute;

        ::ecore::EReference_ptr m_Element__annotation;

        ::ecore::EReference_ptr m_ModelElement__stereotype;

        ::ecore::EReference_ptr m_ModelElement__taggedValue;

        ::ecore::EReference_ptr m_KDMFramework__audit;

        ::ecore::EReference_ptr m_KDMFramework__extensionFamily;

        ::ecore::EAttribute_ptr m_KDMFramework__name;

        ::ecore::EReference_ptr m_ConceptualModel__conceptualElement;

        ::ecore::EAttribute_ptr m_KDMEntity__name;

        ::ecore::EReference_ptr m_AbstractConceptualElement__source;

        ::ecore::EReference_ptr m_AbstractConceptualElement__implementation;

        ::ecore::EReference_ptr m_AbstractConceptualElement__conceptualRelation;

        ::ecore::EReference_ptr m_AbstractConceptualElement__abstraction;

        ::ecore::EReference_ptr m_ConceptualContainer__conceptualElement;

        ::ecore::EReference_ptr m_ConceptualRelationship__to;

        ::ecore::EReference_ptr m_ConceptualRelationship__from;

        ::ecore::EReference_ptr m_ConceptualFlow__to;

        ::ecore::EReference_ptr m_ConceptualFlow__from;

        ::ecore::EReference_ptr m_ConceptualRole__conceptualElement;

    };

}
 // conceptual
}// kdm

#endif // _KDM_CONCEPTUALPACKAGE_HPP

