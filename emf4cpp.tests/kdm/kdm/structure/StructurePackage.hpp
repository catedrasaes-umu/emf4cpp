// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/structure/StructurePackage.hpp
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

#ifndef _KDM_STRUCTUREPACKAGE_HPP
#define _KDM_STRUCTUREPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/structure_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/KdmPackage.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace structure
    {

    class EXPORT_KDM_DLL StructurePackage : public virtual ::ecore::EPackage
    {
    public:

        static StructurePackage_ptr _instance();
        static StructurePackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifiers

        static const int ABSTRACTSTRUCTUREELEMENT = 0;

        static const int ABSTRACTSTRUCTURERELATIONSHIP = 1;

        static const int ARCHITECTUREVIEW = 2;

        static const int COMPONENT = 3;

        static const int LAYER = 4;

        static const int SOFTWARESYSTEM = 5;

        static const int STRUCTUREELEMENT = 6;

        static const int STRUCTUREMODEL = 7;

        static const int STRUCTURERELATIONSHIP = 8;

        static const int SUBSYSTEM = 9;

        static const int ABSTRACTSTRUCTUREELEMENT__AGGREGATED = 262;

        static const int ABSTRACTSTRUCTUREELEMENT__IMPLEMENTATION = 263;

        static const int ABSTRACTSTRUCTUREELEMENT__STRUCTUREELEMENT = 264;

        static const int ABSTRACTSTRUCTUREELEMENT__STRUCTURERELATIONSHIP = 265;

        static const int STRUCTUREMODEL__STRUCTUREELEMENT = 266;

        static const int STRUCTURERELATIONSHIP__TO = 267;

        static const int STRUCTURERELATIONSHIP__FROM = 268;

        // IDs for classifiers for class AbstractStructureElement 

        static const int ABSTRACTSTRUCTUREELEMENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int ABSTRACTSTRUCTUREELEMENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int ABSTRACTSTRUCTUREELEMENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int ABSTRACTSTRUCTUREELEMENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int ABSTRACTSTRUCTUREELEMENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        // IDs for classifiers for class AbstractStructureRelationship 

        static const int ABSTRACTSTRUCTURERELATIONSHIP__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int ABSTRACTSTRUCTURERELATIONSHIP__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int ABSTRACTSTRUCTURERELATIONSHIP__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int ABSTRACTSTRUCTURERELATIONSHIP__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class ArchitectureView 

        static const int ARCHITECTUREVIEW__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int ARCHITECTUREVIEW__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int ARCHITECTUREVIEW__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int ARCHITECTUREVIEW__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int ARCHITECTUREVIEW__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int ARCHITECTUREVIEW__AGGREGATED = ABSTRACTSTRUCTUREELEMENT__AGGREGATED;

        static const int ARCHITECTUREVIEW__IMPLEMENTATION = ABSTRACTSTRUCTUREELEMENT__IMPLEMENTATION;

        static const int ARCHITECTUREVIEW__STRUCTUREELEMENT = ABSTRACTSTRUCTUREELEMENT__STRUCTUREELEMENT;

        static const int ARCHITECTUREVIEW__STRUCTURERELATIONSHIP = ABSTRACTSTRUCTUREELEMENT__STRUCTURERELATIONSHIP;

        // IDs for classifiers for class Component 

        static const int COMPONENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int COMPONENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int COMPONENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int COMPONENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int COMPONENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int COMPONENT__AGGREGATED = ABSTRACTSTRUCTUREELEMENT__AGGREGATED;

        static const int COMPONENT__IMPLEMENTATION = ABSTRACTSTRUCTUREELEMENT__IMPLEMENTATION;

        static const int COMPONENT__STRUCTUREELEMENT = ABSTRACTSTRUCTUREELEMENT__STRUCTUREELEMENT;

        static const int COMPONENT__STRUCTURERELATIONSHIP = ABSTRACTSTRUCTUREELEMENT__STRUCTURERELATIONSHIP;

        // IDs for classifiers for class Layer 

        static const int LAYER__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int LAYER__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int LAYER__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int LAYER__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int LAYER__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int LAYER__AGGREGATED = ABSTRACTSTRUCTUREELEMENT__AGGREGATED;

        static const int LAYER__IMPLEMENTATION = ABSTRACTSTRUCTUREELEMENT__IMPLEMENTATION;

        static const int LAYER__STRUCTUREELEMENT = ABSTRACTSTRUCTUREELEMENT__STRUCTUREELEMENT;

        static const int LAYER__STRUCTURERELATIONSHIP = ABSTRACTSTRUCTUREELEMENT__STRUCTURERELATIONSHIP;

        // IDs for classifiers for class SoftwareSystem 

        static const int SOFTWARESYSTEM__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int SOFTWARESYSTEM__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int SOFTWARESYSTEM__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int SOFTWARESYSTEM__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int SOFTWARESYSTEM__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int SOFTWARESYSTEM__AGGREGATED = ABSTRACTSTRUCTUREELEMENT__AGGREGATED;

        static const int SOFTWARESYSTEM__IMPLEMENTATION = ABSTRACTSTRUCTUREELEMENT__IMPLEMENTATION;

        static const int SOFTWARESYSTEM__STRUCTUREELEMENT = ABSTRACTSTRUCTUREELEMENT__STRUCTUREELEMENT;

        static const int SOFTWARESYSTEM__STRUCTURERELATIONSHIP = ABSTRACTSTRUCTUREELEMENT__STRUCTURERELATIONSHIP;

        // IDs for classifiers for class StructureElement 

        static const int STRUCTUREELEMENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int STRUCTUREELEMENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int STRUCTUREELEMENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int STRUCTUREELEMENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int STRUCTUREELEMENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int STRUCTUREELEMENT__AGGREGATED = ABSTRACTSTRUCTUREELEMENT__AGGREGATED;

        static const int STRUCTUREELEMENT__IMPLEMENTATION = ABSTRACTSTRUCTUREELEMENT__IMPLEMENTATION;

        static const int STRUCTUREELEMENT__STRUCTUREELEMENT = ABSTRACTSTRUCTUREELEMENT__STRUCTUREELEMENT;

        static const int STRUCTUREELEMENT__STRUCTURERELATIONSHIP = ABSTRACTSTRUCTUREELEMENT__STRUCTURERELATIONSHIP;

        // IDs for classifiers for class StructureModel 

        static const int STRUCTUREMODEL__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int STRUCTUREMODEL__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int STRUCTUREMODEL__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int STRUCTUREMODEL__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int STRUCTUREMODEL__AUDIT = ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT;

        static const int STRUCTUREMODEL__EXTENSIONFAMILY = ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY;

        static const int STRUCTUREMODEL__NAME = ::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME;

        // IDs for classifiers for class StructureRelationship 

        static const int STRUCTURERELATIONSHIP__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int STRUCTURERELATIONSHIP__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int STRUCTURERELATIONSHIP__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int STRUCTURERELATIONSHIP__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class Subsystem 

        static const int SUBSYSTEM__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int SUBSYSTEM__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int SUBSYSTEM__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int SUBSYSTEM__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int SUBSYSTEM__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int SUBSYSTEM__AGGREGATED = ABSTRACTSTRUCTUREELEMENT__AGGREGATED;

        static const int SUBSYSTEM__IMPLEMENTATION = ABSTRACTSTRUCTUREELEMENT__IMPLEMENTATION;

        static const int SUBSYSTEM__STRUCTUREELEMENT = ABSTRACTSTRUCTUREELEMENT__STRUCTUREELEMENT;

        static const int SUBSYSTEM__STRUCTURERELATIONSHIP = ABSTRACTSTRUCTUREELEMENT__STRUCTURERELATIONSHIP;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getAbstractStructureElement();

        virtual ::ecore::EClass_ptr getSubsystem();

        virtual ::ecore::EClass_ptr getLayer();

        virtual ::ecore::EClass_ptr getStructureModel();

        virtual ::ecore::EClass_ptr getComponent();

        virtual ::ecore::EClass_ptr getSoftwareSystem();

        virtual ::ecore::EClass_ptr getAbstractStructureRelationship();

        virtual ::ecore::EClass_ptr getStructureRelationship();

        virtual ::ecore::EClass_ptr getArchitectureView();

        virtual ::ecore::EClass_ptr getStructureElement();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getElement__attribute();

        virtual ::ecore::EReference_ptr getElement__annotation();

        virtual ::ecore::EReference_ptr getModelElement__stereotype();

        virtual ::ecore::EReference_ptr getModelElement__taggedValue();

        virtual ::ecore::EAttribute_ptr getKDMEntity__name();

        virtual ::ecore::EReference_ptr getAbstractStructureElement__aggregated();

        virtual ::ecore::EReference_ptr getAbstractStructureElement__implementation();

        virtual ::ecore::EReference_ptr getAbstractStructureElement__structureElement();

        virtual ::ecore::EReference_ptr getAbstractStructureElement__structureRelationship();

        virtual ::ecore::EReference_ptr getKDMFramework__audit();

        virtual ::ecore::EReference_ptr getKDMFramework__extensionFamily();

        virtual ::ecore::EAttribute_ptr getKDMFramework__name();

        virtual ::ecore::EReference_ptr getStructureModel__structureElement();

        virtual ::ecore::EReference_ptr getStructureRelationship__to();

        virtual ::ecore::EReference_ptr getStructureRelationship__from();

    protected:

        static boost::intrusive_ptr< StructurePackage > s_instance;

        StructurePackage();
        void _initPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_AbstractStructureElementEClass;

        ::ecore::EClass_ptr m_SubsystemEClass;

        ::ecore::EClass_ptr m_LayerEClass;

        ::ecore::EClass_ptr m_StructureModelEClass;

        ::ecore::EClass_ptr m_ComponentEClass;

        ::ecore::EClass_ptr m_SoftwareSystemEClass;

        ::ecore::EClass_ptr m_AbstractStructureRelationshipEClass;

        ::ecore::EClass_ptr m_StructureRelationshipEClass;

        ::ecore::EClass_ptr m_ArchitectureViewEClass;

        ::ecore::EClass_ptr m_StructureElementEClass;

        // EEnuminstances 

        // EDataType instances 

        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_Element__attribute;

        ::ecore::EReference_ptr m_Element__annotation;

        ::ecore::EReference_ptr m_ModelElement__stereotype;

        ::ecore::EReference_ptr m_ModelElement__taggedValue;

        ::ecore::EAttribute_ptr m_KDMEntity__name;

        ::ecore::EReference_ptr m_AbstractStructureElement__aggregated;

        ::ecore::EReference_ptr m_AbstractStructureElement__implementation;

        ::ecore::EReference_ptr m_AbstractStructureElement__structureElement;

        ::ecore::EReference_ptr m_AbstractStructureElement__structureRelationship;

        ::ecore::EReference_ptr m_KDMFramework__audit;

        ::ecore::EReference_ptr m_KDMFramework__extensionFamily;

        ::ecore::EAttribute_ptr m_KDMFramework__name;

        ::ecore::EReference_ptr m_StructureModel__structureElement;

        ::ecore::EReference_ptr m_StructureRelationship__to;

        ::ecore::EReference_ptr m_StructureRelationship__from;

    };

}
 // structure
}// kdm

#endif // _KDM_STRUCTUREPACKAGE_HPP

