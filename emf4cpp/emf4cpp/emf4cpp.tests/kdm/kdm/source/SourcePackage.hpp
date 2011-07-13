// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/SourcePackage.hpp
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

#ifndef _KDM_SOURCEPACKAGE_HPP
#define _KDM_SOURCEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/source_forward.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/KdmPackage.hpp>

namespace kdm
{
    namespace source
    {

        class SourcePackage: public virtual ::ecore::EPackage
        {
        public:

            static SourcePackage_ptr _instance();

            // IDs for classifiers

            static const int ABSTRACTINVENTORYELEMENT = 0;

            static const int ABSTRACTINVENTORYRELATIONSHIP = 1;

            static const int BINARYFILE = 2;

            static const int CONFIGURATION = 3;

            static const int DEPENDSON = 4;

            static const int DIRECTORY = 5;

            static const int EXECUTABLEFILE = 6;

            static const int IMAGE = 7;

            static const int INVENTORYCONTAINER = 8;

            static const int INVENTORYELEMENT = 9;

            static const int INVENTORYITEM = 10;

            static const int INVENTORYMODEL = 11;

            static const int INVENTORYRELATIONSHIP = 12;

            static const int PROJECT = 13;

            static const int RESOURCEDESCRIPTION = 14;

            static const int SOURCEFILE = 15;

            static const int SOURCEREF = 16;

            static const int SOURCEREGION = 17;

            static const int SOURCEREF__REGION = 208;

            static const int SOURCEREF__LANGUAGE = 209;

            static const int SOURCEREF__SNIPPET = 210;

            static const int SOURCEREGION__FILE = 211;

            static const int SOURCEREGION__STARTLINE = 212;

            static const int SOURCEREGION__STARTPOSITION = 213;

            static const int SOURCEREGION__ENDLINE = 214;

            static const int SOURCEREGION__ENDPOSITION = 215;

            static const int SOURCEREGION__LANGUAGE = 216;

            static const int SOURCEREGION__PATH = 217;

            static const int INVENTORYMODEL__INVENTORYELEMENT = 218;

            static const int ABSTRACTINVENTORYELEMENT__INVENTORYRELATION = 219;

            static const int INVENTORYITEM__VERSION = 220;

            static const int INVENTORYITEM__PATH = 221;

            static const int SOURCEFILE__LANGUAGE = 222;

            static const int SOURCEFILE__ENCODING = 223;

            static const int INVENTORYCONTAINER__INVENTORYELEMENT = 224;

            static const int DIRECTORY__PATH = 225;

            static const int DEPENDSON__TO = 226;

            static const int DEPENDSON__FROM = 227;

            static const int INVENTORYRELATIONSHIP__TO = 228;

            static const int INVENTORYRELATIONSHIP__FROM = 229;

            // IDs for classifiers for class AbstractInventoryElement 

            static const int ABSTRACTINVENTORYELEMENT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int ABSTRACTINVENTORYELEMENT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int ABSTRACTINVENTORYELEMENT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int ABSTRACTINVENTORYELEMENT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int ABSTRACTINVENTORYELEMENT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            // IDs for classifiers for class AbstractInventoryRelationship 

            static const int ABSTRACTINVENTORYRELATIONSHIP__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int ABSTRACTINVENTORYRELATIONSHIP__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int ABSTRACTINVENTORYRELATIONSHIP__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int ABSTRACTINVENTORYRELATIONSHIP__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class BinaryFile 

            static const int BINARYFILE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int BINARYFILE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int BINARYFILE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int BINARYFILE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int BINARYFILE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int BINARYFILE__INVENTORYRELATION =
                    ABSTRACTINVENTORYELEMENT__INVENTORYRELATION;

            static const int BINARYFILE__VERSION = INVENTORYITEM__VERSION;

            static const int BINARYFILE__PATH = INVENTORYITEM__PATH;

            // IDs for classifiers for class Configuration 

            static const int CONFIGURATION__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int CONFIGURATION__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int CONFIGURATION__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int CONFIGURATION__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int CONFIGURATION__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int CONFIGURATION__INVENTORYRELATION =
                    ABSTRACTINVENTORYELEMENT__INVENTORYRELATION;

            static const int CONFIGURATION__VERSION = INVENTORYITEM__VERSION;

            static const int CONFIGURATION__PATH = INVENTORYITEM__PATH;

            // IDs for classifiers for class DependsOn 

            static const int DEPENDSON__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int DEPENDSON__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int DEPENDSON__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int DEPENDSON__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class Directory 

            static const int DIRECTORY__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int DIRECTORY__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int DIRECTORY__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int DIRECTORY__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int DIRECTORY__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int DIRECTORY__INVENTORYRELATION =
                    ABSTRACTINVENTORYELEMENT__INVENTORYRELATION;

            static const int DIRECTORY__INVENTORYELEMENT =
                    INVENTORYCONTAINER__INVENTORYELEMENT;

            // IDs for classifiers for class ExecutableFile 

            static const int EXECUTABLEFILE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int EXECUTABLEFILE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int EXECUTABLEFILE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int EXECUTABLEFILE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int EXECUTABLEFILE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int EXECUTABLEFILE__INVENTORYRELATION =
                    ABSTRACTINVENTORYELEMENT__INVENTORYRELATION;

            static const int EXECUTABLEFILE__VERSION = INVENTORYITEM__VERSION;

            static const int EXECUTABLEFILE__PATH = INVENTORYITEM__PATH;

            // IDs for classifiers for class Image 

            static const int IMAGE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int IMAGE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int IMAGE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int IMAGE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int IMAGE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int IMAGE__INVENTORYRELATION =
                    ABSTRACTINVENTORYELEMENT__INVENTORYRELATION;

            static const int IMAGE__VERSION = INVENTORYITEM__VERSION;

            static const int IMAGE__PATH = INVENTORYITEM__PATH;

            // IDs for classifiers for class InventoryContainer 

            static const int INVENTORYCONTAINER__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int INVENTORYCONTAINER__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int INVENTORYCONTAINER__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int INVENTORYCONTAINER__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int INVENTORYCONTAINER__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int INVENTORYCONTAINER__INVENTORYRELATION =
                    ABSTRACTINVENTORYELEMENT__INVENTORYRELATION;

            // IDs for classifiers for class InventoryElement 

            static const int INVENTORYELEMENT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int INVENTORYELEMENT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int INVENTORYELEMENT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int INVENTORYELEMENT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int INVENTORYELEMENT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int INVENTORYELEMENT__INVENTORYRELATION =
                    ABSTRACTINVENTORYELEMENT__INVENTORYRELATION;

            // IDs for classifiers for class InventoryItem 

            static const int INVENTORYITEM__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int INVENTORYITEM__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int INVENTORYITEM__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int INVENTORYITEM__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int INVENTORYITEM__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int INVENTORYITEM__INVENTORYRELATION =
                    ABSTRACTINVENTORYELEMENT__INVENTORYRELATION;

            // IDs for classifiers for class InventoryModel 

            static const int INVENTORYMODEL__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int INVENTORYMODEL__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int INVENTORYMODEL__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int INVENTORYMODEL__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int INVENTORYMODEL__AUDIT =
                    ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT;

            static const int INVENTORYMODEL__EXTENSIONFAMILY =
                    ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY;

            static const int INVENTORYMODEL__NAME =
                    ::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME;

            // IDs for classifiers for class InventoryRelationship 

            static const int INVENTORYRELATIONSHIP__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int INVENTORYRELATIONSHIP__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int INVENTORYRELATIONSHIP__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int INVENTORYRELATIONSHIP__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class Project 

            static const int PROJECT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int PROJECT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int PROJECT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int PROJECT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int PROJECT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int PROJECT__INVENTORYRELATION =
                    ABSTRACTINVENTORYELEMENT__INVENTORYRELATION;

            static const int PROJECT__INVENTORYELEMENT =
                    INVENTORYCONTAINER__INVENTORYELEMENT;

            // IDs for classifiers for class ResourceDescription 

            static const int RESOURCEDESCRIPTION__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int RESOURCEDESCRIPTION__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int RESOURCEDESCRIPTION__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int RESOURCEDESCRIPTION__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int RESOURCEDESCRIPTION__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int RESOURCEDESCRIPTION__INVENTORYRELATION =
                    ABSTRACTINVENTORYELEMENT__INVENTORYRELATION;

            static const int RESOURCEDESCRIPTION__VERSION =
                    INVENTORYITEM__VERSION;

            static const int RESOURCEDESCRIPTION__PATH = INVENTORYITEM__PATH;

            // IDs for classifiers for class SourceFile 

            static const int SOURCEFILE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int SOURCEFILE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int SOURCEFILE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int SOURCEFILE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int SOURCEFILE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int SOURCEFILE__INVENTORYRELATION =
                    ABSTRACTINVENTORYELEMENT__INVENTORYRELATION;

            static const int SOURCEFILE__VERSION = INVENTORYITEM__VERSION;

            static const int SOURCEFILE__PATH = INVENTORYITEM__PATH;

            // IDs for classifiers for class SourceRef 

            static const int SOURCEREF__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int SOURCEREF__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            // IDs for classifiers for class SourceRegion 

            static const int SOURCEREGION__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int SOURCEREGION__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            // EClassifiers methods

            virtual ::ecore::EClass_ptr getSourceRef();

            virtual ::ecore::EClass_ptr getSourceRegion();

            virtual ::ecore::EClass_ptr getInventoryModel();

            virtual ::ecore::EClass_ptr getAbstractInventoryElement();

            virtual ::ecore::EClass_ptr getInventoryItem();

            virtual ::ecore::EClass_ptr getSourceFile();

            virtual ::ecore::EClass_ptr getImage();

            virtual ::ecore::EClass_ptr getResourceDescription();

            virtual ::ecore::EClass_ptr getConfiguration();

            virtual ::ecore::EClass_ptr getInventoryContainer();

            virtual ::ecore::EClass_ptr getDirectory();

            virtual ::ecore::EClass_ptr getProject();

            virtual ::ecore::EClass_ptr getAbstractInventoryRelationship();

            virtual ::ecore::EClass_ptr getBinaryFile();

            virtual ::ecore::EClass_ptr getExecutableFile();

            virtual ::ecore::EClass_ptr getDependsOn();

            virtual ::ecore::EClass_ptr getInventoryElement();

            virtual ::ecore::EClass_ptr getInventoryRelationship();

            // EStructuralFeatures methods

            virtual ::ecore::EReference_ptr getElement__attribute();

            virtual ::ecore::EReference_ptr getElement__annotation();

            virtual ::ecore::EReference_ptr getSourceRef__region();

            virtual ::ecore::EAttribute_ptr getSourceRef__language();

            virtual ::ecore::EAttribute_ptr getSourceRef__snippet();

            virtual ::ecore::EReference_ptr getSourceRegion__file();

            virtual ::ecore::EAttribute_ptr getSourceRegion__startLine();

            virtual ::ecore::EAttribute_ptr getSourceRegion__startPosition();

            virtual ::ecore::EAttribute_ptr getSourceRegion__endLine();

            virtual ::ecore::EAttribute_ptr getSourceRegion__endPosition();

            virtual ::ecore::EAttribute_ptr getSourceRegion__language();

            virtual ::ecore::EAttribute_ptr getSourceRegion__path();

            virtual ::ecore::EReference_ptr getModelElement__stereotype();

            virtual ::ecore::EReference_ptr getModelElement__taggedValue();

            virtual ::ecore::EReference_ptr getKDMFramework__audit();

            virtual ::ecore::EReference_ptr getKDMFramework__extensionFamily();

            virtual ::ecore::EAttribute_ptr getKDMFramework__name();

            virtual ::ecore::EReference_ptr
                    getInventoryModel__inventoryElement();

            virtual ::ecore::EAttribute_ptr getKDMEntity__name();

            virtual ::ecore::EReference_ptr
                    getAbstractInventoryElement__inventoryRelation();

            virtual ::ecore::EAttribute_ptr getInventoryItem__version();

            virtual ::ecore::EAttribute_ptr getInventoryItem__path();

            virtual ::ecore::EAttribute_ptr getSourceFile__language();

            virtual ::ecore::EAttribute_ptr getSourceFile__encoding();

            virtual ::ecore::EReference_ptr
                    getInventoryContainer__inventoryElement();

            virtual ::ecore::EAttribute_ptr getDirectory__path();

            virtual ::ecore::EReference_ptr getDependsOn__to();

            virtual ::ecore::EReference_ptr getDependsOn__from();

            virtual ::ecore::EReference_ptr getInventoryRelationship__to();

            virtual ::ecore::EReference_ptr getInventoryRelationship__from();

        protected:

            static std::auto_ptr< SourcePackage > s_instance;

            SourcePackage();

            // EClass instances 

            ::ecore::EClass_ptr m_SourceRefEClass;

            ::ecore::EClass_ptr m_SourceRegionEClass;

            ::ecore::EClass_ptr m_InventoryModelEClass;

            ::ecore::EClass_ptr m_AbstractInventoryElementEClass;

            ::ecore::EClass_ptr m_InventoryItemEClass;

            ::ecore::EClass_ptr m_SourceFileEClass;

            ::ecore::EClass_ptr m_ImageEClass;

            ::ecore::EClass_ptr m_ResourceDescriptionEClass;

            ::ecore::EClass_ptr m_ConfigurationEClass;

            ::ecore::EClass_ptr m_InventoryContainerEClass;

            ::ecore::EClass_ptr m_DirectoryEClass;

            ::ecore::EClass_ptr m_ProjectEClass;

            ::ecore::EClass_ptr m_AbstractInventoryRelationshipEClass;

            ::ecore::EClass_ptr m_BinaryFileEClass;

            ::ecore::EClass_ptr m_ExecutableFileEClass;

            ::ecore::EClass_ptr m_DependsOnEClass;

            ::ecore::EClass_ptr m_InventoryElementEClass;

            ::ecore::EClass_ptr m_InventoryRelationshipEClass;

            // EEnuminstances 


            // EDataType instances 


            // EStructuralFeatures instances

            ::ecore::EReference_ptr m_Element__attribute;

            ::ecore::EReference_ptr m_Element__annotation;

            ::ecore::EReference_ptr m_SourceRef__region;

            ::ecore::EAttribute_ptr m_SourceRef__language;

            ::ecore::EAttribute_ptr m_SourceRef__snippet;

            ::ecore::EReference_ptr m_SourceRegion__file;

            ::ecore::EAttribute_ptr m_SourceRegion__startLine;

            ::ecore::EAttribute_ptr m_SourceRegion__startPosition;

            ::ecore::EAttribute_ptr m_SourceRegion__endLine;

            ::ecore::EAttribute_ptr m_SourceRegion__endPosition;

            ::ecore::EAttribute_ptr m_SourceRegion__language;

            ::ecore::EAttribute_ptr m_SourceRegion__path;

            ::ecore::EReference_ptr m_ModelElement__stereotype;

            ::ecore::EReference_ptr m_ModelElement__taggedValue;

            ::ecore::EReference_ptr m_KDMFramework__audit;

            ::ecore::EReference_ptr m_KDMFramework__extensionFamily;

            ::ecore::EAttribute_ptr m_KDMFramework__name;

            ::ecore::EReference_ptr m_InventoryModel__inventoryElement;

            ::ecore::EAttribute_ptr m_KDMEntity__name;

            ::ecore::EReference_ptr
                    m_AbstractInventoryElement__inventoryRelation;

            ::ecore::EAttribute_ptr m_InventoryItem__version;

            ::ecore::EAttribute_ptr m_InventoryItem__path;

            ::ecore::EAttribute_ptr m_SourceFile__language;

            ::ecore::EAttribute_ptr m_SourceFile__encoding;

            ::ecore::EReference_ptr m_InventoryContainer__inventoryElement;

            ::ecore::EAttribute_ptr m_Directory__path;

            ::ecore::EReference_ptr m_DependsOn__to;

            ::ecore::EReference_ptr m_DependsOn__from;

            ::ecore::EReference_ptr m_InventoryRelationship__to;

            ::ecore::EReference_ptr m_InventoryRelationship__from;

        };

    } // source
} // kdm


#endif // _KDM_SOURCEPACKAGE_HPP
