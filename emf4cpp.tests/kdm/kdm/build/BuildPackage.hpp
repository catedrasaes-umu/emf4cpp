// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build/BuildPackage.hpp
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

#ifndef _KDM_BUILDPACKAGE_HPP
#define _KDM_BUILDPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/build_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/KdmPackage.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace build
    {

    class EXPORT_KDM_DLL BuildPackage : public virtual ::ecore::EPackage
    {
    public:

        static BuildPackage_ptr _instance();
        static BuildPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifiers

        static const int ABSTRACTBUILDELEMENT = 0;

        static const int ABSTRACTBUILDRELATIONSHIP = 1;

        static const int BUILDCOMPONENT = 2;

        static const int BUILDDESCRIPTION = 3;

        static const int BUILDELEMENT = 4;

        static const int BUILDMODEL = 5;

        static const int BUILDPRODUCT = 6;

        static const int BUILDRELATIONSHIP = 7;

        static const int BUILDRESOURCE = 8;

        static const int BUILDSTEP = 9;

        static const int CONSUMES = 10;

        static const int DESCRIBEDBY = 11;

        static const int LIBRARY = 12;

        static const int LINKSTO = 13;

        static const int PRODUCES = 14;

        static const int SUPPLIEDBY = 15;

        static const int SUPPLIER = 16;

        static const int SUPPORTEDBY = 17;

        static const int SYMBOLICLINK = 18;

        static const int TOOL = 19;

        static const int ABSTRACTBUILDELEMENT__BUILDRELATION = 31;

        static const int BUILDRESOURCE__IMPLEMENTATION = 32;

        static const int BUILDRESOURCE__GROUPEDBUILD = 33;

        static const int BUILDRESOURCE__BUILDELEMENT = 34;

        static const int BUILDDESCRIPTION__SOURCE = 35;

        static const int BUILDDESCRIPTION__TEXT = 36;

        static const int LINKSTO__TO = 37;

        static const int LINKSTO__FROM = 38;

        static const int CONSUMES__TO = 39;

        static const int CONSUMES__FROM = 40;

        static const int BUILDMODEL__BUILDELEMENT = 41;

        static const int BUILDRELATIONSHIP__TO = 42;

        static const int BUILDRELATIONSHIP__FROM = 43;

        static const int SUPPLIEDBY__TO = 44;

        static const int SUPPLIEDBY__FROM = 45;

        static const int PRODUCES__TO = 46;

        static const int PRODUCES__FROM = 47;

        static const int SUPPORTEDBY__TO = 48;

        static const int SUPPORTEDBY__FROM = 49;

        static const int DESCRIBEDBY__TO = 50;

        static const int DESCRIBEDBY__FROM = 51;

        // IDs for classifiers for class AbstractBuildElement 

        static const int ABSTRACTBUILDELEMENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int ABSTRACTBUILDELEMENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int ABSTRACTBUILDELEMENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int ABSTRACTBUILDELEMENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int ABSTRACTBUILDELEMENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        // IDs for classifiers for class AbstractBuildRelationship 

        static const int ABSTRACTBUILDRELATIONSHIP__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int ABSTRACTBUILDRELATIONSHIP__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int ABSTRACTBUILDRELATIONSHIP__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int ABSTRACTBUILDRELATIONSHIP__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class BuildComponent 

        static const int BUILDCOMPONENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int BUILDCOMPONENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int BUILDCOMPONENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int BUILDCOMPONENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int BUILDCOMPONENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int BUILDCOMPONENT__BUILDRELATION = ABSTRACTBUILDELEMENT__BUILDRELATION;

        static const int BUILDCOMPONENT__IMPLEMENTATION = BUILDRESOURCE__IMPLEMENTATION;

        static const int BUILDCOMPONENT__GROUPEDBUILD = BUILDRESOURCE__GROUPEDBUILD;

        static const int BUILDCOMPONENT__BUILDELEMENT = BUILDRESOURCE__BUILDELEMENT;

        // IDs for classifiers for class BuildDescription 

        static const int BUILDDESCRIPTION__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int BUILDDESCRIPTION__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int BUILDDESCRIPTION__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int BUILDDESCRIPTION__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int BUILDDESCRIPTION__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int BUILDDESCRIPTION__BUILDRELATION = ABSTRACTBUILDELEMENT__BUILDRELATION;

        static const int BUILDDESCRIPTION__IMPLEMENTATION = BUILDRESOURCE__IMPLEMENTATION;

        static const int BUILDDESCRIPTION__GROUPEDBUILD = BUILDRESOURCE__GROUPEDBUILD;

        static const int BUILDDESCRIPTION__BUILDELEMENT = BUILDRESOURCE__BUILDELEMENT;

        // IDs for classifiers for class BuildElement 

        static const int BUILDELEMENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int BUILDELEMENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int BUILDELEMENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int BUILDELEMENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int BUILDELEMENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int BUILDELEMENT__BUILDRELATION = ABSTRACTBUILDELEMENT__BUILDRELATION;

        // IDs for classifiers for class BuildModel 

        static const int BUILDMODEL__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int BUILDMODEL__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int BUILDMODEL__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int BUILDMODEL__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int BUILDMODEL__AUDIT = ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT;

        static const int BUILDMODEL__EXTENSIONFAMILY = ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY;

        static const int BUILDMODEL__NAME = ::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME;

        // IDs for classifiers for class BuildProduct 

        static const int BUILDPRODUCT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int BUILDPRODUCT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int BUILDPRODUCT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int BUILDPRODUCT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int BUILDPRODUCT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int BUILDPRODUCT__BUILDRELATION = ABSTRACTBUILDELEMENT__BUILDRELATION;

        static const int BUILDPRODUCT__IMPLEMENTATION = BUILDRESOURCE__IMPLEMENTATION;

        static const int BUILDPRODUCT__GROUPEDBUILD = BUILDRESOURCE__GROUPEDBUILD;

        static const int BUILDPRODUCT__BUILDELEMENT = BUILDRESOURCE__BUILDELEMENT;

        // IDs for classifiers for class BuildRelationship 

        static const int BUILDRELATIONSHIP__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int BUILDRELATIONSHIP__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int BUILDRELATIONSHIP__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int BUILDRELATIONSHIP__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class BuildResource 

        static const int BUILDRESOURCE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int BUILDRESOURCE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int BUILDRESOURCE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int BUILDRESOURCE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int BUILDRESOURCE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int BUILDRESOURCE__BUILDRELATION = ABSTRACTBUILDELEMENT__BUILDRELATION;

        // IDs for classifiers for class BuildStep 

        static const int BUILDSTEP__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int BUILDSTEP__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int BUILDSTEP__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int BUILDSTEP__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int BUILDSTEP__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int BUILDSTEP__BUILDRELATION = ABSTRACTBUILDELEMENT__BUILDRELATION;

        static const int BUILDSTEP__IMPLEMENTATION = BUILDRESOURCE__IMPLEMENTATION;

        static const int BUILDSTEP__GROUPEDBUILD = BUILDRESOURCE__GROUPEDBUILD;

        static const int BUILDSTEP__BUILDELEMENT = BUILDRESOURCE__BUILDELEMENT;

        // IDs for classifiers for class Consumes 

        static const int CONSUMES__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int CONSUMES__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int CONSUMES__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int CONSUMES__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class DescribedBy 

        static const int DESCRIBEDBY__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int DESCRIBEDBY__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int DESCRIBEDBY__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int DESCRIBEDBY__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class Library 

        static const int LIBRARY__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int LIBRARY__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int LIBRARY__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int LIBRARY__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int LIBRARY__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int LIBRARY__BUILDRELATION = ABSTRACTBUILDELEMENT__BUILDRELATION;

        static const int LIBRARY__IMPLEMENTATION = BUILDRESOURCE__IMPLEMENTATION;

        static const int LIBRARY__GROUPEDBUILD = BUILDRESOURCE__GROUPEDBUILD;

        static const int LIBRARY__BUILDELEMENT = BUILDRESOURCE__BUILDELEMENT;

        // IDs for classifiers for class LinksTo 

        static const int LINKSTO__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int LINKSTO__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int LINKSTO__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int LINKSTO__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class Produces 

        static const int PRODUCES__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int PRODUCES__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int PRODUCES__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int PRODUCES__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class SuppliedBy 

        static const int SUPPLIEDBY__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int SUPPLIEDBY__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int SUPPLIEDBY__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int SUPPLIEDBY__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class Supplier 

        static const int SUPPLIER__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int SUPPLIER__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int SUPPLIER__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int SUPPLIER__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int SUPPLIER__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int SUPPLIER__BUILDRELATION = ABSTRACTBUILDELEMENT__BUILDRELATION;

        // IDs for classifiers for class SupportedBy 

        static const int SUPPORTEDBY__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int SUPPORTEDBY__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int SUPPORTEDBY__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int SUPPORTEDBY__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class SymbolicLink 

        static const int SYMBOLICLINK__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int SYMBOLICLINK__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int SYMBOLICLINK__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int SYMBOLICLINK__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int SYMBOLICLINK__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int SYMBOLICLINK__BUILDRELATION = ABSTRACTBUILDELEMENT__BUILDRELATION;

        // IDs for classifiers for class Tool 

        static const int TOOL__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int TOOL__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int TOOL__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int TOOL__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int TOOL__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int TOOL__BUILDRELATION = ABSTRACTBUILDELEMENT__BUILDRELATION;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getAbstractBuildElement();

        virtual ::ecore::EClass_ptr getBuildResource();

        virtual ::ecore::EClass_ptr getBuildDescription();

        virtual ::ecore::EClass_ptr getSymbolicLink();

        virtual ::ecore::EClass_ptr getAbstractBuildRelationship();

        virtual ::ecore::EClass_ptr getLinksTo();

        virtual ::ecore::EClass_ptr getConsumes();

        virtual ::ecore::EClass_ptr getBuildModel();

        virtual ::ecore::EClass_ptr getBuildComponent();

        virtual ::ecore::EClass_ptr getSupplier();

        virtual ::ecore::EClass_ptr getTool();

        virtual ::ecore::EClass_ptr getBuildElement();

        virtual ::ecore::EClass_ptr getBuildRelationship();

        virtual ::ecore::EClass_ptr getSuppliedBy();

        virtual ::ecore::EClass_ptr getLibrary();

        virtual ::ecore::EClass_ptr getBuildStep();

        virtual ::ecore::EClass_ptr getProduces();

        virtual ::ecore::EClass_ptr getSupportedBy();

        virtual ::ecore::EClass_ptr getBuildProduct();

        virtual ::ecore::EClass_ptr getDescribedBy();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getElement__attribute();

        virtual ::ecore::EReference_ptr getElement__annotation();

        virtual ::ecore::EReference_ptr getModelElement__stereotype();

        virtual ::ecore::EReference_ptr getModelElement__taggedValue();

        virtual ::ecore::EAttribute_ptr getKDMEntity__name();

        virtual ::ecore::EReference_ptr getAbstractBuildElement__buildRelation();

        virtual ::ecore::EReference_ptr getBuildResource__implementation();

        virtual ::ecore::EReference_ptr getBuildResource__groupedBuild();

        virtual ::ecore::EReference_ptr getBuildResource__buildElement();

        virtual ::ecore::EReference_ptr getBuildDescription__source();

        virtual ::ecore::EAttribute_ptr getBuildDescription__text();

        virtual ::ecore::EReference_ptr getLinksTo__to();

        virtual ::ecore::EReference_ptr getLinksTo__from();

        virtual ::ecore::EReference_ptr getConsumes__to();

        virtual ::ecore::EReference_ptr getConsumes__from();

        virtual ::ecore::EReference_ptr getKDMFramework__audit();

        virtual ::ecore::EReference_ptr getKDMFramework__extensionFamily();

        virtual ::ecore::EAttribute_ptr getKDMFramework__name();

        virtual ::ecore::EReference_ptr getBuildModel__buildElement();

        virtual ::ecore::EReference_ptr getBuildRelationship__to();

        virtual ::ecore::EReference_ptr getBuildRelationship__from();

        virtual ::ecore::EReference_ptr getSuppliedBy__to();

        virtual ::ecore::EReference_ptr getSuppliedBy__from();

        virtual ::ecore::EReference_ptr getProduces__to();

        virtual ::ecore::EReference_ptr getProduces__from();

        virtual ::ecore::EReference_ptr getSupportedBy__to();

        virtual ::ecore::EReference_ptr getSupportedBy__from();

        virtual ::ecore::EReference_ptr getDescribedBy__to();

        virtual ::ecore::EReference_ptr getDescribedBy__from();

    protected:

        static boost::intrusive_ptr< BuildPackage > s_instance;

        BuildPackage();
        void _initPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_AbstractBuildElementEClass;

        ::ecore::EClass_ptr m_BuildResourceEClass;

        ::ecore::EClass_ptr m_BuildDescriptionEClass;

        ::ecore::EClass_ptr m_SymbolicLinkEClass;

        ::ecore::EClass_ptr m_AbstractBuildRelationshipEClass;

        ::ecore::EClass_ptr m_LinksToEClass;

        ::ecore::EClass_ptr m_ConsumesEClass;

        ::ecore::EClass_ptr m_BuildModelEClass;

        ::ecore::EClass_ptr m_BuildComponentEClass;

        ::ecore::EClass_ptr m_SupplierEClass;

        ::ecore::EClass_ptr m_ToolEClass;

        ::ecore::EClass_ptr m_BuildElementEClass;

        ::ecore::EClass_ptr m_BuildRelationshipEClass;

        ::ecore::EClass_ptr m_SuppliedByEClass;

        ::ecore::EClass_ptr m_LibraryEClass;

        ::ecore::EClass_ptr m_BuildStepEClass;

        ::ecore::EClass_ptr m_ProducesEClass;

        ::ecore::EClass_ptr m_SupportedByEClass;

        ::ecore::EClass_ptr m_BuildProductEClass;

        ::ecore::EClass_ptr m_DescribedByEClass;

        // EEnuminstances 

        // EDataType instances 

        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_Element__attribute;

        ::ecore::EReference_ptr m_Element__annotation;

        ::ecore::EReference_ptr m_ModelElement__stereotype;

        ::ecore::EReference_ptr m_ModelElement__taggedValue;

        ::ecore::EAttribute_ptr m_KDMEntity__name;

        ::ecore::EReference_ptr m_AbstractBuildElement__buildRelation;

        ::ecore::EReference_ptr m_BuildResource__implementation;

        ::ecore::EReference_ptr m_BuildResource__groupedBuild;

        ::ecore::EReference_ptr m_BuildResource__buildElement;

        ::ecore::EReference_ptr m_BuildDescription__source;

        ::ecore::EAttribute_ptr m_BuildDescription__text;

        ::ecore::EReference_ptr m_LinksTo__to;

        ::ecore::EReference_ptr m_LinksTo__from;

        ::ecore::EReference_ptr m_Consumes__to;

        ::ecore::EReference_ptr m_Consumes__from;

        ::ecore::EReference_ptr m_KDMFramework__audit;

        ::ecore::EReference_ptr m_KDMFramework__extensionFamily;

        ::ecore::EAttribute_ptr m_KDMFramework__name;

        ::ecore::EReference_ptr m_BuildModel__buildElement;

        ::ecore::EReference_ptr m_BuildRelationship__to;

        ::ecore::EReference_ptr m_BuildRelationship__from;

        ::ecore::EReference_ptr m_SuppliedBy__to;

        ::ecore::EReference_ptr m_SuppliedBy__from;

        ::ecore::EReference_ptr m_Produces__to;

        ::ecore::EReference_ptr m_Produces__from;

        ::ecore::EReference_ptr m_SupportedBy__to;

        ::ecore::EReference_ptr m_SupportedBy__from;

        ::ecore::EReference_ptr m_DescribedBy__to;

        ::ecore::EReference_ptr m_DescribedBy__from;

    };

}
 // build
}// kdm

#endif // _KDM_BUILDPACKAGE_HPP

