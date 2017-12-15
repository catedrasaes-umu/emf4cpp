// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/platform/PlatformPackage.hpp
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

#ifndef _KDM_PLATFORMPACKAGE_HPP
#define _KDM_PLATFORMPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/platform_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/KdmPackage.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace platform
    {

    class EXPORT_KDM_DLL PlatformPackage : public virtual ::ecore::EPackage
    {
    public:

        static PlatformPackage_ptr _instance();
        static PlatformPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifiers

        static const int ABSTRACTPLATFORMELEMENT = 0;

        static const int ABSTRACTPLATFORMRELATIONSHIP = 1;

        static const int BINDSTO = 2;

        static const int DATAMANAGER = 3;

        static const int DEFINEDBY = 4;

        static const int DEPLOYEDCOMPONENT = 5;

        static const int DEPLOYEDRESOURCE = 6;

        static const int DEPLOYEDSOFTWARESYSTEM = 7;

        static const int EXECUTIONRESOURCE = 8;

        static const int EXTERNALACTOR = 9;

        static const int FILERESOURCE = 10;

        static const int LOADS = 11;

        static const int LOCKRESOURCE = 12;

        static const int MACHINE = 13;

        static const int MANAGESRESOURCE = 14;

        static const int MARSHALLEDRESOURCE = 15;

        static const int MESSAGINGRESOURCE = 16;

        static const int NAMINGRESOURCE = 17;

        static const int PLATFORMACTION = 18;

        static const int PLATFORMELEMENT = 19;

        static const int PLATFORMEVENT = 20;

        static const int PLATFORMMODEL = 21;

        static const int PLATFORMRELATIONSHIP = 22;

        static const int PROCESS = 23;

        static const int READSRESOURCE = 24;

        static const int REQUIRES = 25;

        static const int RESOURCETYPE = 26;

        static const int RUNTIMERESOURCE = 27;

        static const int SPAWNS = 28;

        static const int STREAMRESOURCE = 29;

        static const int THREAD = 30;

        static const int WRITESRESOURCE = 31;

        static const int ABSTRACTPLATFORMELEMENT__SOURCE = 230;

        static const int ABSTRACTPLATFORMELEMENT__RELATION = 231;

        static const int ABSTRACTPLATFORMELEMENT__ABSTRACTION = 232;

        static const int ABSTRACTPLATFORMELEMENT__IMPLEMENTATION = 233;

        static const int PLATFORMMODEL__PLATFORMELEMENT = 234;

        static const int REQUIRES__TO = 235;

        static const int REQUIRES__FROM = 236;

        static const int RESOURCETYPE__PLATFORMELEMENT = 237;

        static const int PLATFORMACTION__KIND = 238;

        static const int PLATFORMACTION__PLATFORMELEMENT = 239;

        static const int BINDSTO__TO = 240;

        static const int BINDSTO__FROM = 241;

        static const int PLATFORMRELATIONSHIP__TO = 242;

        static const int PLATFORMRELATIONSHIP__FROM = 243;

        static const int PLATFORMEVENT__KIND = 244;

        static const int DEPLOYEDSOFTWARESYSTEM__GROUPEDCOMPONENT = 245;

        static const int MACHINE__DEPLOYEDCOMPONENT = 246;

        static const int MACHINE__DEPLOYEDRESOURCE = 247;

        static const int DEPLOYEDCOMPONENT__GROUPEDCODE = 248;

        static const int DEPLOYEDRESOURCE__PLATFORMELEMENT = 249;

        static const int LOADS__TO = 250;

        static const int LOADS__FROM = 251;

        static const int SPAWNS__TO = 252;

        static const int SPAWNS__FROM = 253;

        static const int READSRESOURCE__TO = 254;

        static const int READSRESOURCE__FROM = 255;

        static const int WRITESRESOURCE__TO = 256;

        static const int WRITESRESOURCE__FROM = 257;

        static const int MANAGESRESOURCE__TO = 258;

        static const int MANAGESRESOURCE__FROM = 259;

        static const int DEFINEDBY__TO = 260;

        static const int DEFINEDBY__FROM = 261;

        // IDs for classifiers for class AbstractPlatformElement 

        static const int ABSTRACTPLATFORMELEMENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int ABSTRACTPLATFORMELEMENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int ABSTRACTPLATFORMELEMENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int ABSTRACTPLATFORMELEMENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int ABSTRACTPLATFORMELEMENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        // IDs for classifiers for class AbstractPlatformRelationship 

        static const int ABSTRACTPLATFORMRELATIONSHIP__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int ABSTRACTPLATFORMRELATIONSHIP__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int ABSTRACTPLATFORMRELATIONSHIP__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int ABSTRACTPLATFORMRELATIONSHIP__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class BindsTo 

        static const int BINDSTO__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int BINDSTO__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int BINDSTO__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int BINDSTO__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class DataManager 

        static const int DATAMANAGER__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int DATAMANAGER__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int DATAMANAGER__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int DATAMANAGER__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int DATAMANAGER__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int DATAMANAGER__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int DATAMANAGER__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int DATAMANAGER__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int DATAMANAGER__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        static const int DATAMANAGER__PLATFORMELEMENT = RESOURCETYPE__PLATFORMELEMENT;

        // IDs for classifiers for class DefinedBy 

        static const int DEFINEDBY__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int DEFINEDBY__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int DEFINEDBY__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int DEFINEDBY__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class DeployedComponent 

        static const int DEPLOYEDCOMPONENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int DEPLOYEDCOMPONENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int DEPLOYEDCOMPONENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int DEPLOYEDCOMPONENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int DEPLOYEDCOMPONENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int DEPLOYEDCOMPONENT__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int DEPLOYEDCOMPONENT__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int DEPLOYEDCOMPONENT__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int DEPLOYEDCOMPONENT__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        // IDs for classifiers for class DeployedResource 

        static const int DEPLOYEDRESOURCE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int DEPLOYEDRESOURCE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int DEPLOYEDRESOURCE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int DEPLOYEDRESOURCE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int DEPLOYEDRESOURCE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int DEPLOYEDRESOURCE__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int DEPLOYEDRESOURCE__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int DEPLOYEDRESOURCE__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int DEPLOYEDRESOURCE__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        // IDs for classifiers for class DeployedSoftwareSystem 

        static const int DEPLOYEDSOFTWARESYSTEM__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int DEPLOYEDSOFTWARESYSTEM__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int DEPLOYEDSOFTWARESYSTEM__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int DEPLOYEDSOFTWARESYSTEM__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int DEPLOYEDSOFTWARESYSTEM__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int DEPLOYEDSOFTWARESYSTEM__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int DEPLOYEDSOFTWARESYSTEM__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int DEPLOYEDSOFTWARESYSTEM__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int DEPLOYEDSOFTWARESYSTEM__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        // IDs for classifiers for class ExecutionResource 

        static const int EXECUTIONRESOURCE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int EXECUTIONRESOURCE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int EXECUTIONRESOURCE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int EXECUTIONRESOURCE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int EXECUTIONRESOURCE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int EXECUTIONRESOURCE__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int EXECUTIONRESOURCE__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int EXECUTIONRESOURCE__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int EXECUTIONRESOURCE__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        static const int EXECUTIONRESOURCE__PLATFORMELEMENT = RESOURCETYPE__PLATFORMELEMENT;

        // IDs for classifiers for class ExternalActor 

        static const int EXTERNALACTOR__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int EXTERNALACTOR__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int EXTERNALACTOR__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int EXTERNALACTOR__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int EXTERNALACTOR__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int EXTERNALACTOR__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int EXTERNALACTOR__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int EXTERNALACTOR__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int EXTERNALACTOR__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        static const int EXTERNALACTOR__KIND = PLATFORMACTION__KIND;

        static const int EXTERNALACTOR__PLATFORMELEMENT = PLATFORMACTION__PLATFORMELEMENT;

        // IDs for classifiers for class FileResource 

        static const int FILERESOURCE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int FILERESOURCE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int FILERESOURCE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int FILERESOURCE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int FILERESOURCE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int FILERESOURCE__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int FILERESOURCE__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int FILERESOURCE__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int FILERESOURCE__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        static const int FILERESOURCE__PLATFORMELEMENT = RESOURCETYPE__PLATFORMELEMENT;

        // IDs for classifiers for class Loads 

        static const int LOADS__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int LOADS__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int LOADS__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int LOADS__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class LockResource 

        static const int LOCKRESOURCE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int LOCKRESOURCE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int LOCKRESOURCE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int LOCKRESOURCE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int LOCKRESOURCE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int LOCKRESOURCE__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int LOCKRESOURCE__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int LOCKRESOURCE__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int LOCKRESOURCE__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        static const int LOCKRESOURCE__PLATFORMELEMENT = RESOURCETYPE__PLATFORMELEMENT;

        // IDs for classifiers for class Machine 

        static const int MACHINE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int MACHINE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int MACHINE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int MACHINE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int MACHINE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int MACHINE__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int MACHINE__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int MACHINE__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int MACHINE__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        // IDs for classifiers for class ManagesResource 

        static const int MANAGESRESOURCE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int MANAGESRESOURCE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int MANAGESRESOURCE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int MANAGESRESOURCE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class MarshalledResource 

        static const int MARSHALLEDRESOURCE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int MARSHALLEDRESOURCE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int MARSHALLEDRESOURCE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int MARSHALLEDRESOURCE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int MARSHALLEDRESOURCE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int MARSHALLEDRESOURCE__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int MARSHALLEDRESOURCE__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int MARSHALLEDRESOURCE__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int MARSHALLEDRESOURCE__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        static const int MARSHALLEDRESOURCE__PLATFORMELEMENT = RESOURCETYPE__PLATFORMELEMENT;

        // IDs for classifiers for class MessagingResource 

        static const int MESSAGINGRESOURCE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int MESSAGINGRESOURCE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int MESSAGINGRESOURCE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int MESSAGINGRESOURCE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int MESSAGINGRESOURCE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int MESSAGINGRESOURCE__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int MESSAGINGRESOURCE__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int MESSAGINGRESOURCE__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int MESSAGINGRESOURCE__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        static const int MESSAGINGRESOURCE__PLATFORMELEMENT = RESOURCETYPE__PLATFORMELEMENT;

        // IDs for classifiers for class NamingResource 

        static const int NAMINGRESOURCE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int NAMINGRESOURCE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int NAMINGRESOURCE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int NAMINGRESOURCE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int NAMINGRESOURCE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int NAMINGRESOURCE__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int NAMINGRESOURCE__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int NAMINGRESOURCE__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int NAMINGRESOURCE__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        static const int NAMINGRESOURCE__PLATFORMELEMENT = RESOURCETYPE__PLATFORMELEMENT;

        // IDs for classifiers for class PlatformAction 

        static const int PLATFORMACTION__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int PLATFORMACTION__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int PLATFORMACTION__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int PLATFORMACTION__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int PLATFORMACTION__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int PLATFORMACTION__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int PLATFORMACTION__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int PLATFORMACTION__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int PLATFORMACTION__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        // IDs for classifiers for class PlatformElement 

        static const int PLATFORMELEMENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int PLATFORMELEMENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int PLATFORMELEMENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int PLATFORMELEMENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int PLATFORMELEMENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int PLATFORMELEMENT__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int PLATFORMELEMENT__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int PLATFORMELEMENT__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int PLATFORMELEMENT__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        // IDs for classifiers for class PlatformEvent 

        static const int PLATFORMEVENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int PLATFORMEVENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int PLATFORMEVENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int PLATFORMEVENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int PLATFORMEVENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int PLATFORMEVENT__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int PLATFORMEVENT__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int PLATFORMEVENT__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int PLATFORMEVENT__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        // IDs for classifiers for class PlatformModel 

        static const int PLATFORMMODEL__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int PLATFORMMODEL__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int PLATFORMMODEL__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int PLATFORMMODEL__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int PLATFORMMODEL__AUDIT = ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT;

        static const int PLATFORMMODEL__EXTENSIONFAMILY = ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY;

        static const int PLATFORMMODEL__NAME = ::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME;

        // IDs for classifiers for class PlatformRelationship 

        static const int PLATFORMRELATIONSHIP__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int PLATFORMRELATIONSHIP__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int PLATFORMRELATIONSHIP__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int PLATFORMRELATIONSHIP__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class Process 

        static const int PROCESS__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int PROCESS__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int PROCESS__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int PROCESS__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int PROCESS__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int PROCESS__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int PROCESS__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int PROCESS__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int PROCESS__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        static const int PROCESS__PLATFORMELEMENT = RESOURCETYPE__PLATFORMELEMENT;

        // IDs for classifiers for class ReadsResource 

        static const int READSRESOURCE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int READSRESOURCE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int READSRESOURCE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int READSRESOURCE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class Requires 

        static const int REQUIRES__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int REQUIRES__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int REQUIRES__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int REQUIRES__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class ResourceType 

        static const int RESOURCETYPE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int RESOURCETYPE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int RESOURCETYPE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int RESOURCETYPE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int RESOURCETYPE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int RESOURCETYPE__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int RESOURCETYPE__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int RESOURCETYPE__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int RESOURCETYPE__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        // IDs for classifiers for class RuntimeResource 

        static const int RUNTIMERESOURCE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int RUNTIMERESOURCE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int RUNTIMERESOURCE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int RUNTIMERESOURCE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int RUNTIMERESOURCE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int RUNTIMERESOURCE__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int RUNTIMERESOURCE__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int RUNTIMERESOURCE__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int RUNTIMERESOURCE__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        static const int RUNTIMERESOURCE__PLATFORMELEMENT = RESOURCETYPE__PLATFORMELEMENT;

        // IDs for classifiers for class Spawns 

        static const int SPAWNS__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int SPAWNS__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int SPAWNS__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int SPAWNS__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class StreamResource 

        static const int STREAMRESOURCE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int STREAMRESOURCE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int STREAMRESOURCE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int STREAMRESOURCE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int STREAMRESOURCE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int STREAMRESOURCE__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int STREAMRESOURCE__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int STREAMRESOURCE__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int STREAMRESOURCE__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        static const int STREAMRESOURCE__PLATFORMELEMENT = RESOURCETYPE__PLATFORMELEMENT;

        // IDs for classifiers for class Thread 

        static const int THREAD__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int THREAD__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int THREAD__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int THREAD__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int THREAD__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int THREAD__SOURCE = ABSTRACTPLATFORMELEMENT__SOURCE;

        static const int THREAD__RELATION = ABSTRACTPLATFORMELEMENT__RELATION;

        static const int THREAD__ABSTRACTION = ABSTRACTPLATFORMELEMENT__ABSTRACTION;

        static const int THREAD__IMPLEMENTATION = ABSTRACTPLATFORMELEMENT__IMPLEMENTATION;

        static const int THREAD__PLATFORMELEMENT = RESOURCETYPE__PLATFORMELEMENT;

        // IDs for classifiers for class WritesResource 

        static const int WRITESRESOURCE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int WRITESRESOURCE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int WRITESRESOURCE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int WRITESRESOURCE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getAbstractPlatformElement();

        virtual ::ecore::EClass_ptr getPlatformModel();

        virtual ::ecore::EClass_ptr getAbstractPlatformRelationship();

        virtual ::ecore::EClass_ptr getRequires();

        virtual ::ecore::EClass_ptr getResourceType();

        virtual ::ecore::EClass_ptr getNamingResource();

        virtual ::ecore::EClass_ptr getMarshalledResource();

        virtual ::ecore::EClass_ptr getMessagingResource();

        virtual ::ecore::EClass_ptr getFileResource();

        virtual ::ecore::EClass_ptr getExecutionResource();

        virtual ::ecore::EClass_ptr getPlatformAction();

        virtual ::ecore::EClass_ptr getExternalActor();

        virtual ::ecore::EClass_ptr getDataManager();

        virtual ::ecore::EClass_ptr getBindsTo();

        virtual ::ecore::EClass_ptr getPlatformElement();

        virtual ::ecore::EClass_ptr getPlatformRelationship();

        virtual ::ecore::EClass_ptr getPlatformEvent();

        virtual ::ecore::EClass_ptr getLockResource();

        virtual ::ecore::EClass_ptr getDeployedSoftwareSystem();

        virtual ::ecore::EClass_ptr getMachine();

        virtual ::ecore::EClass_ptr getDeployedComponent();

        virtual ::ecore::EClass_ptr getDeployedResource();

        virtual ::ecore::EClass_ptr getLoads();

        virtual ::ecore::EClass_ptr getSpawns();

        virtual ::ecore::EClass_ptr getRuntimeResource();

        virtual ::ecore::EClass_ptr getThread();

        virtual ::ecore::EClass_ptr getProcess();

        virtual ::ecore::EClass_ptr getReadsResource();

        virtual ::ecore::EClass_ptr getWritesResource();

        virtual ::ecore::EClass_ptr getManagesResource();

        virtual ::ecore::EClass_ptr getDefinedBy();

        virtual ::ecore::EClass_ptr getStreamResource();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getElement__attribute();

        virtual ::ecore::EReference_ptr getElement__annotation();

        virtual ::ecore::EReference_ptr getModelElement__stereotype();

        virtual ::ecore::EReference_ptr getModelElement__taggedValue();

        virtual ::ecore::EAttribute_ptr getKDMEntity__name();

        virtual ::ecore::EReference_ptr getAbstractPlatformElement__source();

        virtual ::ecore::EReference_ptr getAbstractPlatformElement__relation();

        virtual ::ecore::EReference_ptr getAbstractPlatformElement__abstraction();

        virtual ::ecore::EReference_ptr getAbstractPlatformElement__implementation();

        virtual ::ecore::EReference_ptr getKDMFramework__audit();

        virtual ::ecore::EReference_ptr getKDMFramework__extensionFamily();

        virtual ::ecore::EAttribute_ptr getKDMFramework__name();

        virtual ::ecore::EReference_ptr getPlatformModel__platformElement();

        virtual ::ecore::EReference_ptr getRequires__to();

        virtual ::ecore::EReference_ptr getRequires__from();

        virtual ::ecore::EReference_ptr getResourceType__platformElement();

        virtual ::ecore::EAttribute_ptr getPlatformAction__kind();

        virtual ::ecore::EReference_ptr getPlatformAction__platformElement();

        virtual ::ecore::EReference_ptr getBindsTo__to();

        virtual ::ecore::EReference_ptr getBindsTo__from();

        virtual ::ecore::EReference_ptr getPlatformRelationship__to();

        virtual ::ecore::EReference_ptr getPlatformRelationship__from();

        virtual ::ecore::EAttribute_ptr getPlatformEvent__kind();

        virtual ::ecore::EReference_ptr getDeployedSoftwareSystem__groupedComponent();

        virtual ::ecore::EReference_ptr getMachine__deployedComponent();

        virtual ::ecore::EReference_ptr getMachine__deployedResource();

        virtual ::ecore::EReference_ptr getDeployedComponent__groupedCode();

        virtual ::ecore::EReference_ptr getDeployedResource__platformElement();

        virtual ::ecore::EReference_ptr getLoads__to();

        virtual ::ecore::EReference_ptr getLoads__from();

        virtual ::ecore::EReference_ptr getSpawns__to();

        virtual ::ecore::EReference_ptr getSpawns__from();

        virtual ::ecore::EReference_ptr getReadsResource__to();

        virtual ::ecore::EReference_ptr getReadsResource__from();

        virtual ::ecore::EReference_ptr getWritesResource__to();

        virtual ::ecore::EReference_ptr getWritesResource__from();

        virtual ::ecore::EReference_ptr getManagesResource__to();

        virtual ::ecore::EReference_ptr getManagesResource__from();

        virtual ::ecore::EReference_ptr getDefinedBy__to();

        virtual ::ecore::EReference_ptr getDefinedBy__from();

    protected:

        static boost::intrusive_ptr< PlatformPackage > s_instance;

        PlatformPackage();
        void _initPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_AbstractPlatformElementEClass;

        ::ecore::EClass_ptr m_PlatformModelEClass;

        ::ecore::EClass_ptr m_AbstractPlatformRelationshipEClass;

        ::ecore::EClass_ptr m_RequiresEClass;

        ::ecore::EClass_ptr m_ResourceTypeEClass;

        ::ecore::EClass_ptr m_NamingResourceEClass;

        ::ecore::EClass_ptr m_MarshalledResourceEClass;

        ::ecore::EClass_ptr m_MessagingResourceEClass;

        ::ecore::EClass_ptr m_FileResourceEClass;

        ::ecore::EClass_ptr m_ExecutionResourceEClass;

        ::ecore::EClass_ptr m_PlatformActionEClass;

        ::ecore::EClass_ptr m_ExternalActorEClass;

        ::ecore::EClass_ptr m_DataManagerEClass;

        ::ecore::EClass_ptr m_BindsToEClass;

        ::ecore::EClass_ptr m_PlatformElementEClass;

        ::ecore::EClass_ptr m_PlatformRelationshipEClass;

        ::ecore::EClass_ptr m_PlatformEventEClass;

        ::ecore::EClass_ptr m_LockResourceEClass;

        ::ecore::EClass_ptr m_DeployedSoftwareSystemEClass;

        ::ecore::EClass_ptr m_MachineEClass;

        ::ecore::EClass_ptr m_DeployedComponentEClass;

        ::ecore::EClass_ptr m_DeployedResourceEClass;

        ::ecore::EClass_ptr m_LoadsEClass;

        ::ecore::EClass_ptr m_SpawnsEClass;

        ::ecore::EClass_ptr m_RuntimeResourceEClass;

        ::ecore::EClass_ptr m_ThreadEClass;

        ::ecore::EClass_ptr m_ProcessEClass;

        ::ecore::EClass_ptr m_ReadsResourceEClass;

        ::ecore::EClass_ptr m_WritesResourceEClass;

        ::ecore::EClass_ptr m_ManagesResourceEClass;

        ::ecore::EClass_ptr m_DefinedByEClass;

        ::ecore::EClass_ptr m_StreamResourceEClass;

        // EEnuminstances 

        // EDataType instances 

        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_Element__attribute;

        ::ecore::EReference_ptr m_Element__annotation;

        ::ecore::EReference_ptr m_ModelElement__stereotype;

        ::ecore::EReference_ptr m_ModelElement__taggedValue;

        ::ecore::EAttribute_ptr m_KDMEntity__name;

        ::ecore::EReference_ptr m_AbstractPlatformElement__source;

        ::ecore::EReference_ptr m_AbstractPlatformElement__relation;

        ::ecore::EReference_ptr m_AbstractPlatformElement__abstraction;

        ::ecore::EReference_ptr m_AbstractPlatformElement__implementation;

        ::ecore::EReference_ptr m_KDMFramework__audit;

        ::ecore::EReference_ptr m_KDMFramework__extensionFamily;

        ::ecore::EAttribute_ptr m_KDMFramework__name;

        ::ecore::EReference_ptr m_PlatformModel__platformElement;

        ::ecore::EReference_ptr m_Requires__to;

        ::ecore::EReference_ptr m_Requires__from;

        ::ecore::EReference_ptr m_ResourceType__platformElement;

        ::ecore::EAttribute_ptr m_PlatformAction__kind;

        ::ecore::EReference_ptr m_PlatformAction__platformElement;

        ::ecore::EReference_ptr m_BindsTo__to;

        ::ecore::EReference_ptr m_BindsTo__from;

        ::ecore::EReference_ptr m_PlatformRelationship__to;

        ::ecore::EReference_ptr m_PlatformRelationship__from;

        ::ecore::EAttribute_ptr m_PlatformEvent__kind;

        ::ecore::EReference_ptr m_DeployedSoftwareSystem__groupedComponent;

        ::ecore::EReference_ptr m_Machine__deployedComponent;

        ::ecore::EReference_ptr m_Machine__deployedResource;

        ::ecore::EReference_ptr m_DeployedComponent__groupedCode;

        ::ecore::EReference_ptr m_DeployedResource__platformElement;

        ::ecore::EReference_ptr m_Loads__to;

        ::ecore::EReference_ptr m_Loads__from;

        ::ecore::EReference_ptr m_Spawns__to;

        ::ecore::EReference_ptr m_Spawns__from;

        ::ecore::EReference_ptr m_ReadsResource__to;

        ::ecore::EReference_ptr m_ReadsResource__from;

        ::ecore::EReference_ptr m_WritesResource__to;

        ::ecore::EReference_ptr m_WritesResource__from;

        ::ecore::EReference_ptr m_ManagesResource__to;

        ::ecore::EReference_ptr m_ManagesResource__from;

        ::ecore::EReference_ptr m_DefinedBy__to;

        ::ecore::EReference_ptr m_DefinedBy__from;

    };

}
 // platform
}// kdm

#endif // _KDM_PLATFORMPACKAGE_HPP

