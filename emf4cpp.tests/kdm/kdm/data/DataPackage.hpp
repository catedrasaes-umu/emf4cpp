// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/data/DataPackage.hpp
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

#ifndef _KDM_DATAPACKAGE_HPP
#define _KDM_DATAPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/data_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/KdmPackage.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace data
    {

    class EXPORT_KDM_DLL DataPackage : public virtual ::ecore::EPackage
    {
    public:

        static DataPackage_ptr _instance();
        static DataPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifiers

        static const int ABSTRACTCONTENTELEMENT = 0;

        static const int ABSTRACTDATAELEMENT = 1;

        static const int ABSTRACTDATARELATIONSHIP = 2;

        static const int ALLCONTENT = 3;

        static const int CATALOG = 4;

        static const int CHOICECONTENT = 5;

        static const int COLUMNSET = 6;

        static const int COMPLEXCONTENTTYPE = 7;

        static const int CONTENTATTRIBUTE = 8;

        static const int CONTENTELEMENT = 9;

        static const int CONTENTITEM = 10;

        static const int CONTENTREFERENCE = 11;

        static const int CONTENTRESTRICTION = 12;

        static const int DATAACTION = 13;

        static const int DATACONTAINER = 14;

        static const int DATAEVENT = 15;

        static const int DATAMODEL = 16;

        static const int DATARELATIONSHIP = 17;

        static const int DATARESOURCE = 18;

        static const int DATASEGMENT = 19;

        static const int DATATYPEOF = 20;

        static const int EXTENDEDDATAELEMENT = 21;

        static const int EXTENSIONTO = 22;

        static const int GROUPCONTENT = 23;

        static const int HASCONTENT = 24;

        static const int INDEX = 25;

        static const int INDEXELEMENT = 26;

        static const int KEYRELATION = 27;

        static const int MANAGESDATA = 28;

        static const int MIXEDCONTENT = 29;

        static const int PRODUCESDATAEVENT = 30;

        static const int READSCOLUMNSET = 31;

        static const int RECORDFILE = 32;

        static const int REFERENCEKEY = 33;

        static const int REFERENCETO = 34;

        static const int RELATIONALSCHEMA = 35;

        static const int RELATIONALTABLE = 36;

        static const int RELATIONALVIEW = 37;

        static const int RESTRICTIONOF = 38;

        static const int SEQCONTENT = 39;

        static const int SIMPLECONTENTTYPE = 40;

        static const int TYPEDBY = 41;

        static const int UNIQUEKEY = 42;

        static const int WRITESCOLUMNSET = 43;

        static const int XMLSCHEMA = 44;

        static const int DATAMODEL__DATAELEMENT = 143;

        static const int ABSTRACTDATAELEMENT__SOURCE = 144;

        static const int ABSTRACTDATAELEMENT__DATARELATION = 145;

        static const int ABSTRACTDATAELEMENT__ABSTRACTION = 146;

        static const int INDEXELEMENT__IMPLEMENTATION = 147;

        static const int KEYRELATION__TO = 148;

        static const int KEYRELATION__FROM = 149;

        static const int DATACONTAINER__DATAELEMENT = 150;

        static const int RELATIONALSCHEMA__CODEELEMENT = 151;

        static const int COLUMNSET__ITEMUNIT = 152;

        static const int DATAEVENT__KIND = 153;

        static const int XMLSCHEMA__CONTENTELEMENT = 154;

        static const int COMPLEXCONTENTTYPE__CONTENTELEMENT = 155;

        static const int CONTENTITEM__TYPE = 156;

        static const int CONTENTITEM__CONTENTELEMENT = 157;

        static const int CONTENTRESTRICTION__KIND = 158;

        static const int CONTENTRESTRICTION__VALUE = 159;

        static const int SIMPLECONTENTTYPE__TYPE = 160;

        static const int SIMPLECONTENTTYPE__KIND = 161;

        static const int DATARELATIONSHIP__TO = 162;

        static const int DATARELATIONSHIP__FROM = 163;

        static const int DATAACTION__KIND = 164;

        static const int DATAACTION__IMPLEMENTATION = 165;

        static const int DATAACTION__DATAELEMENT = 166;

        static const int READSCOLUMNSET__TO = 167;

        static const int READSCOLUMNSET__FROM = 168;

        static const int TYPEDBY__TO = 169;

        static const int TYPEDBY__FROM = 170;

        static const int REFERENCETO__TO = 171;

        static const int REFERENCETO__FROM = 172;

        static const int RESTRICTIONOF__TO = 173;

        static const int RESTRICTIONOF__FROM = 174;

        static const int EXTENSIONTO__TO = 175;

        static const int EXTENSIONTO__FROM = 176;

        static const int DATATYPEOF__TO = 177;

        static const int DATATYPEOF__FROM = 178;

        static const int HASCONTENT__TO = 179;

        static const int HASCONTENT__FROM = 180;

        static const int WRITESCOLUMNSET__TO = 181;

        static const int WRITESCOLUMNSET__FROM = 182;

        static const int PRODUCESDATAEVENT__TO = 183;

        static const int PRODUCESDATAEVENT__FROM = 184;

        static const int MANAGESDATA__TO = 185;

        static const int MANAGESDATA__FROM = 186;

        // IDs for classifiers for class AbstractContentElement 

        static const int ABSTRACTCONTENTELEMENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int ABSTRACTCONTENTELEMENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int ABSTRACTCONTENTELEMENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int ABSTRACTCONTENTELEMENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int ABSTRACTCONTENTELEMENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int ABSTRACTCONTENTELEMENT__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int ABSTRACTCONTENTELEMENT__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int ABSTRACTCONTENTELEMENT__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        // IDs for classifiers for class AbstractDataElement 

        static const int ABSTRACTDATAELEMENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int ABSTRACTDATAELEMENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int ABSTRACTDATAELEMENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int ABSTRACTDATAELEMENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int ABSTRACTDATAELEMENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        // IDs for classifiers for class AbstractDataRelationship 

        static const int ABSTRACTDATARELATIONSHIP__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int ABSTRACTDATARELATIONSHIP__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int ABSTRACTDATARELATIONSHIP__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int ABSTRACTDATARELATIONSHIP__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class AllContent 

        static const int ALLCONTENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int ALLCONTENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int ALLCONTENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int ALLCONTENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int ALLCONTENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int ALLCONTENT__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int ALLCONTENT__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int ALLCONTENT__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        static const int ALLCONTENT__CONTENTELEMENT = COMPLEXCONTENTTYPE__CONTENTELEMENT;

        // IDs for classifiers for class Catalog 

        static const int CATALOG__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int CATALOG__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int CATALOG__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int CATALOG__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int CATALOG__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int CATALOG__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int CATALOG__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int CATALOG__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        static const int CATALOG__DATAELEMENT = DATACONTAINER__DATAELEMENT;

        // IDs for classifiers for class ChoiceContent 

        static const int CHOICECONTENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int CHOICECONTENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int CHOICECONTENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int CHOICECONTENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int CHOICECONTENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int CHOICECONTENT__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int CHOICECONTENT__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int CHOICECONTENT__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        static const int CHOICECONTENT__CONTENTELEMENT = COMPLEXCONTENTTYPE__CONTENTELEMENT;

        // IDs for classifiers for class ColumnSet 

        static const int COLUMNSET__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int COLUMNSET__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int COLUMNSET__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int COLUMNSET__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int COLUMNSET__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int COLUMNSET__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int COLUMNSET__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int COLUMNSET__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        static const int COLUMNSET__DATAELEMENT = DATACONTAINER__DATAELEMENT;

        // IDs for classifiers for class ComplexContentType 

        static const int COMPLEXCONTENTTYPE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int COMPLEXCONTENTTYPE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int COMPLEXCONTENTTYPE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int COMPLEXCONTENTTYPE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int COMPLEXCONTENTTYPE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int COMPLEXCONTENTTYPE__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int COMPLEXCONTENTTYPE__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int COMPLEXCONTENTTYPE__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        // IDs for classifiers for class ContentAttribute 

        static const int CONTENTATTRIBUTE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int CONTENTATTRIBUTE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int CONTENTATTRIBUTE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int CONTENTATTRIBUTE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int CONTENTATTRIBUTE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int CONTENTATTRIBUTE__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int CONTENTATTRIBUTE__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int CONTENTATTRIBUTE__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        static const int CONTENTATTRIBUTE__TYPE = CONTENTITEM__TYPE;

        static const int CONTENTATTRIBUTE__CONTENTELEMENT = CONTENTITEM__CONTENTELEMENT;

        // IDs for classifiers for class ContentElement 

        static const int CONTENTELEMENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int CONTENTELEMENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int CONTENTELEMENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int CONTENTELEMENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int CONTENTELEMENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int CONTENTELEMENT__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int CONTENTELEMENT__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int CONTENTELEMENT__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        static const int CONTENTELEMENT__TYPE = CONTENTITEM__TYPE;

        static const int CONTENTELEMENT__CONTENTELEMENT = CONTENTITEM__CONTENTELEMENT;

        // IDs for classifiers for class ContentItem 

        static const int CONTENTITEM__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int CONTENTITEM__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int CONTENTITEM__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int CONTENTITEM__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int CONTENTITEM__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int CONTENTITEM__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int CONTENTITEM__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int CONTENTITEM__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        // IDs for classifiers for class ContentReference 

        static const int CONTENTREFERENCE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int CONTENTREFERENCE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int CONTENTREFERENCE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int CONTENTREFERENCE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int CONTENTREFERENCE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int CONTENTREFERENCE__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int CONTENTREFERENCE__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int CONTENTREFERENCE__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        static const int CONTENTREFERENCE__TYPE = CONTENTITEM__TYPE;

        static const int CONTENTREFERENCE__CONTENTELEMENT = CONTENTITEM__CONTENTELEMENT;

        // IDs for classifiers for class ContentRestriction 

        static const int CONTENTRESTRICTION__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int CONTENTRESTRICTION__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int CONTENTRESTRICTION__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int CONTENTRESTRICTION__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int CONTENTRESTRICTION__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int CONTENTRESTRICTION__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int CONTENTRESTRICTION__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int CONTENTRESTRICTION__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        // IDs for classifiers for class DataAction 

        static const int DATAACTION__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int DATAACTION__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int DATAACTION__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int DATAACTION__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int DATAACTION__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int DATAACTION__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int DATAACTION__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int DATAACTION__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        // IDs for classifiers for class DataContainer 

        static const int DATACONTAINER__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int DATACONTAINER__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int DATACONTAINER__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int DATACONTAINER__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int DATACONTAINER__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int DATACONTAINER__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int DATACONTAINER__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int DATACONTAINER__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        // IDs for classifiers for class DataEvent 

        static const int DATAEVENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int DATAEVENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int DATAEVENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int DATAEVENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int DATAEVENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int DATAEVENT__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int DATAEVENT__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int DATAEVENT__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        // IDs for classifiers for class DataModel 

        static const int DATAMODEL__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int DATAMODEL__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int DATAMODEL__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int DATAMODEL__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int DATAMODEL__AUDIT = ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT;

        static const int DATAMODEL__EXTENSIONFAMILY = ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY;

        static const int DATAMODEL__NAME = ::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME;

        // IDs for classifiers for class DataRelationship 

        static const int DATARELATIONSHIP__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int DATARELATIONSHIP__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int DATARELATIONSHIP__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int DATARELATIONSHIP__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class DataResource 

        static const int DATARESOURCE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int DATARESOURCE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int DATARESOURCE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int DATARESOURCE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int DATARESOURCE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int DATARESOURCE__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int DATARESOURCE__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int DATARESOURCE__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        // IDs for classifiers for class DataSegment 

        static const int DATASEGMENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int DATASEGMENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int DATASEGMENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int DATASEGMENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int DATASEGMENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int DATASEGMENT__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int DATASEGMENT__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int DATASEGMENT__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        static const int DATASEGMENT__DATAELEMENT = DATACONTAINER__DATAELEMENT;

        static const int DATASEGMENT__ITEMUNIT = COLUMNSET__ITEMUNIT;

        // IDs for classifiers for class DatatypeOf 

        static const int DATATYPEOF__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int DATATYPEOF__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int DATATYPEOF__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int DATATYPEOF__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class ExtendedDataElement 

        static const int EXTENDEDDATAELEMENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int EXTENDEDDATAELEMENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int EXTENDEDDATAELEMENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int EXTENDEDDATAELEMENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int EXTENDEDDATAELEMENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int EXTENDEDDATAELEMENT__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int EXTENDEDDATAELEMENT__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int EXTENDEDDATAELEMENT__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        // IDs for classifiers for class ExtensionTo 

        static const int EXTENSIONTO__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int EXTENSIONTO__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int EXTENSIONTO__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int EXTENSIONTO__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class GroupContent 

        static const int GROUPCONTENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int GROUPCONTENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int GROUPCONTENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int GROUPCONTENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int GROUPCONTENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int GROUPCONTENT__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int GROUPCONTENT__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int GROUPCONTENT__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        static const int GROUPCONTENT__TYPE = CONTENTITEM__TYPE;

        static const int GROUPCONTENT__CONTENTELEMENT = CONTENTITEM__CONTENTELEMENT;

        // IDs for classifiers for class HasContent 

        static const int HASCONTENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int HASCONTENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int HASCONTENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int HASCONTENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class Index 

        static const int INDEX__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int INDEX__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int INDEX__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int INDEX__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int INDEX__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int INDEX__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int INDEX__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int INDEX__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        static const int INDEX__IMPLEMENTATION = INDEXELEMENT__IMPLEMENTATION;

        // IDs for classifiers for class IndexElement 

        static const int INDEXELEMENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int INDEXELEMENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int INDEXELEMENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int INDEXELEMENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int INDEXELEMENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int INDEXELEMENT__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int INDEXELEMENT__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int INDEXELEMENT__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        // IDs for classifiers for class KeyRelation 

        static const int KEYRELATION__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int KEYRELATION__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int KEYRELATION__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int KEYRELATION__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class ManagesData 

        static const int MANAGESDATA__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int MANAGESDATA__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int MANAGESDATA__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int MANAGESDATA__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class MixedContent 

        static const int MIXEDCONTENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int MIXEDCONTENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int MIXEDCONTENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int MIXEDCONTENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int MIXEDCONTENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int MIXEDCONTENT__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int MIXEDCONTENT__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int MIXEDCONTENT__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        static const int MIXEDCONTENT__CONTENTELEMENT = COMPLEXCONTENTTYPE__CONTENTELEMENT;

        // IDs for classifiers for class ProducesDataEvent 

        static const int PRODUCESDATAEVENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int PRODUCESDATAEVENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int PRODUCESDATAEVENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int PRODUCESDATAEVENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class ReadsColumnSet 

        static const int READSCOLUMNSET__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int READSCOLUMNSET__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int READSCOLUMNSET__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int READSCOLUMNSET__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class RecordFile 

        static const int RECORDFILE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int RECORDFILE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int RECORDFILE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int RECORDFILE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int RECORDFILE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int RECORDFILE__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int RECORDFILE__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int RECORDFILE__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        static const int RECORDFILE__DATAELEMENT = DATACONTAINER__DATAELEMENT;

        static const int RECORDFILE__ITEMUNIT = COLUMNSET__ITEMUNIT;

        // IDs for classifiers for class ReferenceKey 

        static const int REFERENCEKEY__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int REFERENCEKEY__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int REFERENCEKEY__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int REFERENCEKEY__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int REFERENCEKEY__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int REFERENCEKEY__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int REFERENCEKEY__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int REFERENCEKEY__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        static const int REFERENCEKEY__IMPLEMENTATION = INDEXELEMENT__IMPLEMENTATION;

        // IDs for classifiers for class ReferenceTo 

        static const int REFERENCETO__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int REFERENCETO__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int REFERENCETO__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int REFERENCETO__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class RelationalSchema 

        static const int RELATIONALSCHEMA__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int RELATIONALSCHEMA__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int RELATIONALSCHEMA__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int RELATIONALSCHEMA__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int RELATIONALSCHEMA__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int RELATIONALSCHEMA__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int RELATIONALSCHEMA__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int RELATIONALSCHEMA__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        static const int RELATIONALSCHEMA__DATAELEMENT = DATACONTAINER__DATAELEMENT;

        // IDs for classifiers for class RelationalTable 

        static const int RELATIONALTABLE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int RELATIONALTABLE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int RELATIONALTABLE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int RELATIONALTABLE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int RELATIONALTABLE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int RELATIONALTABLE__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int RELATIONALTABLE__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int RELATIONALTABLE__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        static const int RELATIONALTABLE__DATAELEMENT = DATACONTAINER__DATAELEMENT;

        static const int RELATIONALTABLE__ITEMUNIT = COLUMNSET__ITEMUNIT;

        // IDs for classifiers for class RelationalView 

        static const int RELATIONALVIEW__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int RELATIONALVIEW__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int RELATIONALVIEW__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int RELATIONALVIEW__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int RELATIONALVIEW__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int RELATIONALVIEW__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int RELATIONALVIEW__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int RELATIONALVIEW__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        static const int RELATIONALVIEW__DATAELEMENT = DATACONTAINER__DATAELEMENT;

        static const int RELATIONALVIEW__ITEMUNIT = COLUMNSET__ITEMUNIT;

        // IDs for classifiers for class RestrictionOf 

        static const int RESTRICTIONOF__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int RESTRICTIONOF__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int RESTRICTIONOF__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int RESTRICTIONOF__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class SeqContent 

        static const int SEQCONTENT__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int SEQCONTENT__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int SEQCONTENT__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int SEQCONTENT__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int SEQCONTENT__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int SEQCONTENT__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int SEQCONTENT__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int SEQCONTENT__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        static const int SEQCONTENT__CONTENTELEMENT = COMPLEXCONTENTTYPE__CONTENTELEMENT;

        // IDs for classifiers for class SimpleContentType 

        static const int SIMPLECONTENTTYPE__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int SIMPLECONTENTTYPE__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int SIMPLECONTENTTYPE__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int SIMPLECONTENTTYPE__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int SIMPLECONTENTTYPE__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int SIMPLECONTENTTYPE__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int SIMPLECONTENTTYPE__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int SIMPLECONTENTTYPE__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        static const int SIMPLECONTENTTYPE__CONTENTELEMENT = COMPLEXCONTENTTYPE__CONTENTELEMENT;

        // IDs for classifiers for class TypedBy 

        static const int TYPEDBY__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int TYPEDBY__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int TYPEDBY__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int TYPEDBY__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class UniqueKey 

        static const int UNIQUEKEY__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int UNIQUEKEY__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int UNIQUEKEY__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int UNIQUEKEY__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int UNIQUEKEY__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int UNIQUEKEY__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int UNIQUEKEY__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int UNIQUEKEY__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        static const int UNIQUEKEY__IMPLEMENTATION = INDEXELEMENT__IMPLEMENTATION;

        // IDs for classifiers for class WritesColumnSet 

        static const int WRITESCOLUMNSET__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int WRITESCOLUMNSET__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int WRITESCOLUMNSET__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int WRITESCOLUMNSET__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        // IDs for classifiers for class XMLSchema 

        static const int XMLSCHEMA__ATTRIBUTE = ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

        static const int XMLSCHEMA__ANNOTATION = ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

        static const int XMLSCHEMA__STEREOTYPE = ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

        static const int XMLSCHEMA__TAGGEDVALUE = ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

        static const int XMLSCHEMA__NAME = ::kdm::core::CorePackage::KDMENTITY__NAME;

        static const int XMLSCHEMA__SOURCE = ABSTRACTDATAELEMENT__SOURCE;

        static const int XMLSCHEMA__DATARELATION = ABSTRACTDATAELEMENT__DATARELATION;

        static const int XMLSCHEMA__ABSTRACTION = ABSTRACTDATAELEMENT__ABSTRACTION;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getDataModel();

        virtual ::ecore::EClass_ptr getAbstractDataElement();

        virtual ::ecore::EClass_ptr getDataResource();

        virtual ::ecore::EClass_ptr getIndexElement();

        virtual ::ecore::EClass_ptr getUniqueKey();

        virtual ::ecore::EClass_ptr getIndex();

        virtual ::ecore::EClass_ptr getAbstractDataRelationship();

        virtual ::ecore::EClass_ptr getKeyRelation();

        virtual ::ecore::EClass_ptr getReferenceKey();

        virtual ::ecore::EClass_ptr getDataContainer();

        virtual ::ecore::EClass_ptr getCatalog();

        virtual ::ecore::EClass_ptr getRelationalSchema();

        virtual ::ecore::EClass_ptr getColumnSet();

        virtual ::ecore::EClass_ptr getRelationalTable();

        virtual ::ecore::EClass_ptr getRelationalView();

        virtual ::ecore::EClass_ptr getRecordFile();

        virtual ::ecore::EClass_ptr getDataEvent();

        virtual ::ecore::EClass_ptr getXMLSchema();

        virtual ::ecore::EClass_ptr getAbstractContentElement();

        virtual ::ecore::EClass_ptr getComplexContentType();

        virtual ::ecore::EClass_ptr getAllContent();

        virtual ::ecore::EClass_ptr getSeqContent();

        virtual ::ecore::EClass_ptr getChoiceContent();

        virtual ::ecore::EClass_ptr getContentItem();

        virtual ::ecore::EClass_ptr getGroupContent();

        virtual ::ecore::EClass_ptr getContentRestriction();

        virtual ::ecore::EClass_ptr getSimpleContentType();

        virtual ::ecore::EClass_ptr getExtendedDataElement();

        virtual ::ecore::EClass_ptr getDataRelationship();

        virtual ::ecore::EClass_ptr getMixedContent();

        virtual ::ecore::EClass_ptr getContentReference();

        virtual ::ecore::EClass_ptr getDataAction();

        virtual ::ecore::EClass_ptr getReadsColumnSet();

        virtual ::ecore::EClass_ptr getContentAttribute();

        virtual ::ecore::EClass_ptr getTypedBy();

        virtual ::ecore::EClass_ptr getReferenceTo();

        virtual ::ecore::EClass_ptr getRestrictionOf();

        virtual ::ecore::EClass_ptr getExtensionTo();

        virtual ::ecore::EClass_ptr getDatatypeOf();

        virtual ::ecore::EClass_ptr getHasContent();

        virtual ::ecore::EClass_ptr getWritesColumnSet();

        virtual ::ecore::EClass_ptr getProducesDataEvent();

        virtual ::ecore::EClass_ptr getDataSegment();

        virtual ::ecore::EClass_ptr getContentElement();

        virtual ::ecore::EClass_ptr getManagesData();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getElement__attribute();

        virtual ::ecore::EReference_ptr getElement__annotation();

        virtual ::ecore::EReference_ptr getModelElement__stereotype();

        virtual ::ecore::EReference_ptr getModelElement__taggedValue();

        virtual ::ecore::EReference_ptr getKDMFramework__audit();

        virtual ::ecore::EReference_ptr getKDMFramework__extensionFamily();

        virtual ::ecore::EAttribute_ptr getKDMFramework__name();

        virtual ::ecore::EReference_ptr getDataModel__dataElement();

        virtual ::ecore::EAttribute_ptr getKDMEntity__name();

        virtual ::ecore::EReference_ptr getAbstractDataElement__source();

        virtual ::ecore::EReference_ptr getAbstractDataElement__dataRelation();

        virtual ::ecore::EReference_ptr getAbstractDataElement__abstraction();

        virtual ::ecore::EReference_ptr getIndexElement__implementation();

        virtual ::ecore::EReference_ptr getKeyRelation__to();

        virtual ::ecore::EReference_ptr getKeyRelation__from();

        virtual ::ecore::EReference_ptr getDataContainer__dataElement();

        virtual ::ecore::EReference_ptr getRelationalSchema__codeElement();

        virtual ::ecore::EReference_ptr getColumnSet__itemUnit();

        virtual ::ecore::EAttribute_ptr getDataEvent__kind();

        virtual ::ecore::EReference_ptr getXMLSchema__contentElement();

        virtual ::ecore::EReference_ptr getComplexContentType__contentElement();

        virtual ::ecore::EReference_ptr getContentItem__type();

        virtual ::ecore::EReference_ptr getContentItem__contentElement();

        virtual ::ecore::EAttribute_ptr getContentRestriction__kind();

        virtual ::ecore::EAttribute_ptr getContentRestriction__value();

        virtual ::ecore::EReference_ptr getSimpleContentType__type();

        virtual ::ecore::EAttribute_ptr getSimpleContentType__kind();

        virtual ::ecore::EReference_ptr getDataRelationship__to();

        virtual ::ecore::EReference_ptr getDataRelationship__from();

        virtual ::ecore::EAttribute_ptr getDataAction__kind();

        virtual ::ecore::EReference_ptr getDataAction__implementation();

        virtual ::ecore::EReference_ptr getDataAction__dataElement();

        virtual ::ecore::EReference_ptr getReadsColumnSet__to();

        virtual ::ecore::EReference_ptr getReadsColumnSet__from();

        virtual ::ecore::EReference_ptr getTypedBy__to();

        virtual ::ecore::EReference_ptr getTypedBy__from();

        virtual ::ecore::EReference_ptr getReferenceTo__to();

        virtual ::ecore::EReference_ptr getReferenceTo__from();

        virtual ::ecore::EReference_ptr getRestrictionOf__to();

        virtual ::ecore::EReference_ptr getRestrictionOf__from();

        virtual ::ecore::EReference_ptr getExtensionTo__to();

        virtual ::ecore::EReference_ptr getExtensionTo__from();

        virtual ::ecore::EReference_ptr getDatatypeOf__to();

        virtual ::ecore::EReference_ptr getDatatypeOf__from();

        virtual ::ecore::EReference_ptr getHasContent__to();

        virtual ::ecore::EReference_ptr getHasContent__from();

        virtual ::ecore::EReference_ptr getWritesColumnSet__to();

        virtual ::ecore::EReference_ptr getWritesColumnSet__from();

        virtual ::ecore::EReference_ptr getProducesDataEvent__to();

        virtual ::ecore::EReference_ptr getProducesDataEvent__from();

        virtual ::ecore::EReference_ptr getManagesData__to();

        virtual ::ecore::EReference_ptr getManagesData__from();

    protected:

        static std::unique_ptr< DataPackage, ::ecorecpp::PackageDeleter<DataPackage> > s_instance;

        DataPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_DataModelEClass;

        ::ecore::EClass_ptr m_AbstractDataElementEClass;

        ::ecore::EClass_ptr m_DataResourceEClass;

        ::ecore::EClass_ptr m_IndexElementEClass;

        ::ecore::EClass_ptr m_UniqueKeyEClass;

        ::ecore::EClass_ptr m_IndexEClass;

        ::ecore::EClass_ptr m_AbstractDataRelationshipEClass;

        ::ecore::EClass_ptr m_KeyRelationEClass;

        ::ecore::EClass_ptr m_ReferenceKeyEClass;

        ::ecore::EClass_ptr m_DataContainerEClass;

        ::ecore::EClass_ptr m_CatalogEClass;

        ::ecore::EClass_ptr m_RelationalSchemaEClass;

        ::ecore::EClass_ptr m_ColumnSetEClass;

        ::ecore::EClass_ptr m_RelationalTableEClass;

        ::ecore::EClass_ptr m_RelationalViewEClass;

        ::ecore::EClass_ptr m_RecordFileEClass;

        ::ecore::EClass_ptr m_DataEventEClass;

        ::ecore::EClass_ptr m_XMLSchemaEClass;

        ::ecore::EClass_ptr m_AbstractContentElementEClass;

        ::ecore::EClass_ptr m_ComplexContentTypeEClass;

        ::ecore::EClass_ptr m_AllContentEClass;

        ::ecore::EClass_ptr m_SeqContentEClass;

        ::ecore::EClass_ptr m_ChoiceContentEClass;

        ::ecore::EClass_ptr m_ContentItemEClass;

        ::ecore::EClass_ptr m_GroupContentEClass;

        ::ecore::EClass_ptr m_ContentRestrictionEClass;

        ::ecore::EClass_ptr m_SimpleContentTypeEClass;

        ::ecore::EClass_ptr m_ExtendedDataElementEClass;

        ::ecore::EClass_ptr m_DataRelationshipEClass;

        ::ecore::EClass_ptr m_MixedContentEClass;

        ::ecore::EClass_ptr m_ContentReferenceEClass;

        ::ecore::EClass_ptr m_DataActionEClass;

        ::ecore::EClass_ptr m_ReadsColumnSetEClass;

        ::ecore::EClass_ptr m_ContentAttributeEClass;

        ::ecore::EClass_ptr m_TypedByEClass;

        ::ecore::EClass_ptr m_ReferenceToEClass;

        ::ecore::EClass_ptr m_RestrictionOfEClass;

        ::ecore::EClass_ptr m_ExtensionToEClass;

        ::ecore::EClass_ptr m_DatatypeOfEClass;

        ::ecore::EClass_ptr m_HasContentEClass;

        ::ecore::EClass_ptr m_WritesColumnSetEClass;

        ::ecore::EClass_ptr m_ProducesDataEventEClass;

        ::ecore::EClass_ptr m_DataSegmentEClass;

        ::ecore::EClass_ptr m_ContentElementEClass;

        ::ecore::EClass_ptr m_ManagesDataEClass;

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

        ::ecore::EReference_ptr m_DataModel__dataElement;

        ::ecore::EAttribute_ptr m_KDMEntity__name;

        ::ecore::EReference_ptr m_AbstractDataElement__source;

        ::ecore::EReference_ptr m_AbstractDataElement__dataRelation;

        ::ecore::EReference_ptr m_AbstractDataElement__abstraction;

        ::ecore::EReference_ptr m_IndexElement__implementation;

        ::ecore::EReference_ptr m_KeyRelation__to;

        ::ecore::EReference_ptr m_KeyRelation__from;

        ::ecore::EReference_ptr m_DataContainer__dataElement;

        ::ecore::EReference_ptr m_RelationalSchema__codeElement;

        ::ecore::EReference_ptr m_ColumnSet__itemUnit;

        ::ecore::EAttribute_ptr m_DataEvent__kind;

        ::ecore::EReference_ptr m_XMLSchema__contentElement;

        ::ecore::EReference_ptr m_ComplexContentType__contentElement;

        ::ecore::EReference_ptr m_ContentItem__type;

        ::ecore::EReference_ptr m_ContentItem__contentElement;

        ::ecore::EAttribute_ptr m_ContentRestriction__kind;

        ::ecore::EAttribute_ptr m_ContentRestriction__value;

        ::ecore::EReference_ptr m_SimpleContentType__type;

        ::ecore::EAttribute_ptr m_SimpleContentType__kind;

        ::ecore::EReference_ptr m_DataRelationship__to;

        ::ecore::EReference_ptr m_DataRelationship__from;

        ::ecore::EAttribute_ptr m_DataAction__kind;

        ::ecore::EReference_ptr m_DataAction__implementation;

        ::ecore::EReference_ptr m_DataAction__dataElement;

        ::ecore::EReference_ptr m_ReadsColumnSet__to;

        ::ecore::EReference_ptr m_ReadsColumnSet__from;

        ::ecore::EReference_ptr m_TypedBy__to;

        ::ecore::EReference_ptr m_TypedBy__from;

        ::ecore::EReference_ptr m_ReferenceTo__to;

        ::ecore::EReference_ptr m_ReferenceTo__from;

        ::ecore::EReference_ptr m_RestrictionOf__to;

        ::ecore::EReference_ptr m_RestrictionOf__from;

        ::ecore::EReference_ptr m_ExtensionTo__to;

        ::ecore::EReference_ptr m_ExtensionTo__from;

        ::ecore::EReference_ptr m_DatatypeOf__to;

        ::ecore::EReference_ptr m_DatatypeOf__from;

        ::ecore::EReference_ptr m_HasContent__to;

        ::ecore::EReference_ptr m_HasContent__from;

        ::ecore::EReference_ptr m_WritesColumnSet__to;

        ::ecore::EReference_ptr m_WritesColumnSet__from;

        ::ecore::EReference_ptr m_ProducesDataEvent__to;

        ::ecore::EReference_ptr m_ProducesDataEvent__from;

        ::ecore::EReference_ptr m_ManagesData__to;

        ::ecore::EReference_ptr m_ManagesData__from;

    };

}
 // data
}// kdm

#endif // _KDM_DATAPACKAGE_HPP

