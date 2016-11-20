// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/KdmPackage.hpp
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

#ifndef _KDM_KDMPACKAGE_HPP
#define _KDM_KDMPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/kdm_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <kdm/core/CorePackage.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace kdm
    {

    class EXPORT_KDM_DLL KdmPackage : public virtual ::ecore::EPackage
    {
    public:

        static KdmPackage_ptr _instance();
        static KdmPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifiers

        static const int ANNOTATION = 0;

        static const int ATTRIBUTE = 1;

        static const int AUDIT = 2;

        static const int EXTENDEDVALUE = 3;

        static const int EXTENSIONFAMILY = 4;

        static const int KDMFRAMEWORK = 5;

        static const int KDMMODEL = 6;

        static const int SEGMENT = 7;

        static const int STEREOTYPE = 8;

        static const int TAGDEFINITION = 9;

        static const int TAGGEDREF = 10;

        static const int TAGGEDVALUE = 11;

        static const int KDMFRAMEWORK__AUDIT = 269;

        static const int KDMFRAMEWORK__EXTENSIONFAMILY = 270;

        static const int KDMFRAMEWORK__NAME = 271;

        static const int AUDIT__DESCRIPTION = 272;

        static const int AUDIT__AUTHOR = 273;

        static const int AUDIT__DATE = 274;

        static const int SEGMENT__SEGMENT = 275;

        static const int SEGMENT__MODEL = 276;

        static const int ATTRIBUTE__TAG = 277;

        static const int ATTRIBUTE__VALUE = 278;

        static const int ANNOTATION__TEXT = 279;

        static const int TAGDEFINITION__TAG = 280;

        static const int TAGDEFINITION__TYPE = 281;

        static const int EXTENDEDVALUE__TAG = 282;

        static const int STEREOTYPE__TAG = 283;

        static const int STEREOTYPE__NAME = 284;

        static const int STEREOTYPE__TYPE = 285;

        static const int EXTENSIONFAMILY__STEREOTYPE = 286;

        static const int EXTENSIONFAMILY__NAME = 287;

        static const int TAGGEDREF__REFERENCE = 288;

        static const int TAGGEDVALUE__VALUE = 289;

        // IDs for classifiers for class Annotation 

        static const int ANNOTATION__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int ANNOTATION__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        // IDs for classifiers for class Attribute 

        static const int ATTRIBUTE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int ATTRIBUTE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        // IDs for classifiers for class Audit 

        static const int AUDIT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int AUDIT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        // IDs for classifiers for class ExtendedValue 

        static const int EXTENDEDVALUE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int EXTENDEDVALUE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        // IDs for classifiers for class ExtensionFamily 

        static const int EXTENSIONFAMILY__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int EXTENSIONFAMILY__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        // IDs for classifiers for class KDMFramework 

        static const int KDMFRAMEWORK__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int KDMFRAMEWORK__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int KDMFRAMEWORK__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int KDMFRAMEWORK__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class KDMModel 

        static const int KDMMODEL__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int KDMMODEL__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int KDMMODEL__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int KDMMODEL__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int KDMMODEL__AUDIT = KDMFRAMEWORK__AUDIT;

        static const int KDMMODEL__EXTENSIONFAMILY = KDMFRAMEWORK__EXTENSIONFAMILY;

        static const int KDMMODEL__NAME = KDMFRAMEWORK__NAME;

        // IDs for classifiers for class Segment 

        static const int SEGMENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int SEGMENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int SEGMENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int SEGMENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int SEGMENT__AUDIT = KDMFRAMEWORK__AUDIT;

        static const int SEGMENT__EXTENSIONFAMILY = KDMFRAMEWORK__EXTENSIONFAMILY;

        static const int SEGMENT__NAME = KDMFRAMEWORK__NAME;

        // IDs for classifiers for class Stereotype 

        static const int STEREOTYPE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int STEREOTYPE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        // IDs for classifiers for class TagDefinition 

        static const int TAGDEFINITION__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int TAGDEFINITION__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        // IDs for classifiers for class TaggedRef 

        static const int TAGGEDREF__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int TAGGEDREF__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int TAGGEDREF__TAG = EXTENDEDVALUE__TAG;

        // IDs for classifiers for class TaggedValue 

        static const int TAGGEDVALUE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int TAGGEDVALUE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int TAGGEDVALUE__TAG = EXTENDEDVALUE__TAG;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getKDMFramework();

        virtual ::ecore::EClass_ptr getKDMModel();

        virtual ::ecore::EClass_ptr getAudit();

        virtual ::ecore::EClass_ptr getSegment();

        virtual ::ecore::EClass_ptr getAttribute();

        virtual ::ecore::EClass_ptr getAnnotation();

        virtual ::ecore::EClass_ptr getTagDefinition();

        virtual ::ecore::EClass_ptr getExtendedValue();

        virtual ::ecore::EClass_ptr getStereotype();

        virtual ::ecore::EClass_ptr getExtensionFamily();

        virtual ::ecore::EClass_ptr getTaggedRef();

        virtual ::ecore::EClass_ptr getTaggedValue();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getElement__attribute();

        virtual ::ecore::EReference_ptr getElement__annotation();

        virtual ::ecore::EReference_ptr getModelElement__stereotype();

        virtual ::ecore::EReference_ptr getModelElement__taggedValue();

        virtual ::ecore::EReference_ptr getKDMFramework__audit();

        virtual ::ecore::EReference_ptr getKDMFramework__extensionFamily();

        virtual ::ecore::EAttribute_ptr getKDMFramework__name();

        virtual ::ecore::EAttribute_ptr getAudit__description();

        virtual ::ecore::EAttribute_ptr getAudit__author();

        virtual ::ecore::EAttribute_ptr getAudit__date();

        virtual ::ecore::EReference_ptr getSegment__segment();

        virtual ::ecore::EReference_ptr getSegment__model();

        virtual ::ecore::EAttribute_ptr getAttribute__tag();

        virtual ::ecore::EAttribute_ptr getAttribute__value();

        virtual ::ecore::EAttribute_ptr getAnnotation__text();

        virtual ::ecore::EAttribute_ptr getTagDefinition__tag();

        virtual ::ecore::EAttribute_ptr getTagDefinition__type();

        virtual ::ecore::EReference_ptr getExtendedValue__tag();

        virtual ::ecore::EReference_ptr getStereotype__tag();

        virtual ::ecore::EAttribute_ptr getStereotype__name();

        virtual ::ecore::EAttribute_ptr getStereotype__type();

        virtual ::ecore::EReference_ptr getExtensionFamily__stereotype();

        virtual ::ecore::EAttribute_ptr getExtensionFamily__name();

        virtual ::ecore::EReference_ptr getTaggedRef__reference();

        virtual ::ecore::EAttribute_ptr getTaggedValue__value();

    protected:

        static std::unique_ptr< KdmPackage, ::ecorecpp::PackageDeleter<KdmPackage> > s_instance;

        KdmPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_KDMFrameworkEClass;

        ::ecore::EClass_ptr m_KDMModelEClass;

        ::ecore::EClass_ptr m_AuditEClass;

        ::ecore::EClass_ptr m_SegmentEClass;

        ::ecore::EClass_ptr m_AttributeEClass;

        ::ecore::EClass_ptr m_AnnotationEClass;

        ::ecore::EClass_ptr m_TagDefinitionEClass;

        ::ecore::EClass_ptr m_ExtendedValueEClass;

        ::ecore::EClass_ptr m_StereotypeEClass;

        ::ecore::EClass_ptr m_ExtensionFamilyEClass;

        ::ecore::EClass_ptr m_TaggedRefEClass;

        ::ecore::EClass_ptr m_TaggedValueEClass;

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

        ::ecore::EAttribute_ptr m_Audit__description;

        ::ecore::EAttribute_ptr m_Audit__author;

        ::ecore::EAttribute_ptr m_Audit__date;

        ::ecore::EReference_ptr m_Segment__segment;

        ::ecore::EReference_ptr m_Segment__model;

        ::ecore::EAttribute_ptr m_Attribute__tag;

        ::ecore::EAttribute_ptr m_Attribute__value;

        ::ecore::EAttribute_ptr m_Annotation__text;

        ::ecore::EAttribute_ptr m_TagDefinition__tag;

        ::ecore::EAttribute_ptr m_TagDefinition__type;

        ::ecore::EReference_ptr m_ExtendedValue__tag;

        ::ecore::EReference_ptr m_Stereotype__tag;

        ::ecore::EAttribute_ptr m_Stereotype__name;

        ::ecore::EAttribute_ptr m_Stereotype__type;

        ::ecore::EReference_ptr m_ExtensionFamily__stereotype;

        ::ecore::EAttribute_ptr m_ExtensionFamily__name;

        ::ecore::EReference_ptr m_TaggedRef__reference;

        ::ecore::EAttribute_ptr m_TaggedValue__value;

    };

}
 // kdm
}// kdm

#endif // _KDM_KDMPACKAGE_HPP

