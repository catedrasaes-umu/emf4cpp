// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/CodePackage.hpp
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

#ifndef _KDM_CODEPACKAGE_HPP
#define _KDM_CODEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/code_forward.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/KdmPackage.hpp>

namespace kdm
{
    namespace code
    {

        class CodePackage: public virtual ::ecore::EPackage
        {
        public:

            static CodePackage_ptr _instance();

            // IDs for classifiers

            static const int ABSTRACTCODEELEMENT = 0;

            static const int ABSTRACTCODERELATIONSHIP = 1;

            static const int ARRAYTYPE = 2;

            static const int BAGTYPE = 3;

            static const int BITSTRINGTYPE = 4;

            static const int BITTYPE = 5;

            static const int BOOLEANTYPE = 6;

            static const int CALLABLEKIND = 7;

            static const int CALLABLEUNIT = 8;

            static const int CHARTYPE = 9;

            static const int CHOICETYPE = 10;

            static const int CLASSUNIT = 11;

            static const int CODEASSEMBLY = 12;

            static const int CODEELEMENT = 13;

            static const int CODEITEM = 14;

            static const int CODEMODEL = 15;

            static const int CODERELATIONSHIP = 16;

            static const int COMMENTUNIT = 17;

            static const int COMPILATIONUNIT = 18;

            static const int COMPOSITETYPE = 19;

            static const int COMPUTATIONALOBJECT = 20;

            static const int CONDITIONALDIRECTIVE = 21;

            static const int CONTROLELEMENT = 22;

            static const int DATAELEMENT = 23;

            static const int DATATYPE = 24;

            static const int DATETYPE = 25;

            static const int DECIMALTYPE = 26;

            static const int DEFINEDTYPE = 27;

            static const int DERIVEDTYPE = 28;

            static const int ENUMERATEDTYPE = 29;

            static const int EXPANDS = 30;

            static const int EXPORTKIND = 31;

            static const int EXTENDS = 32;

            static const int FLOATTYPE = 33;

            static const int GENERATEDFROM = 34;

            static const int HASTYPE = 35;

            static const int HASVALUE = 36;

            static const int IMPLEMENTATIONOF = 37;

            static const int IMPLEMENTS = 38;

            static const int IMPORTS = 39;

            static const int INCLUDEDIRECTIVE = 40;

            static const int INCLUDES = 41;

            static const int INDEXUNIT = 42;

            static const int INSTANCEOF = 43;

            static const int INTEGERTYPE = 44;

            static const int INTERFACEUNIT = 45;

            static const int ITEMUNIT = 46;

            static const int LANGUAGEUNIT = 47;

            static const int MACRODIRECTIVE = 48;

            static const int MACROKIND = 49;

            static const int MACROUNIT = 50;

            static const int MEMBERUNIT = 51;

            static const int METHODKIND = 52;

            static const int METHODUNIT = 53;

            static const int MODULE = 54;

            static const int NAMESPACEUNIT = 55;

            static const int OCTETSTRINGTYPE = 56;

            static const int OCTETTYPE = 57;

            static const int ORDINALTYPE = 58;

            static const int PACKAGE = 59;

            static const int PARAMETERKIND = 60;

            static const int PARAMETERTO = 61;

            static const int PARAMETERUNIT = 62;

            static const int POINTERTYPE = 63;

            static const int PREPROCESSORDIRECTIVE = 64;

            static const int PRIMITIVETYPE = 65;

            static const int RANGETYPE = 66;

            static const int RECORDTYPE = 67;

            static const int REDEFINES = 68;

            static const int SCALEDTYPE = 69;

            static const int SEQUENCETYPE = 70;

            static const int SETTYPE = 71;

            static const int SHAREDUNIT = 72;

            static const int SIGNATURE = 73;

            static const int STORABLEKIND = 74;

            static const int STORABLEUNIT = 75;

            static const int STRINGTYPE = 76;

            static const int SYNONYMTYPE = 77;

            static const int TEMPLATEPARAMETER = 78;

            static const int TEMPLATETYPE = 79;

            static const int TEMPLATEUNIT = 80;

            static const int TIMETYPE = 81;

            static const int TYPEUNIT = 82;

            static const int VALUE = 83;

            static const int VALUEELEMENT = 84;

            static const int VALUELIST = 85;

            static const int VARIANTTO = 86;

            static const int VISIBLEIN = 87;

            static const int VOIDTYPE = 88;

            static const int ABSTRACTCODEELEMENT__SOURCE = 52;

            static const int ABSTRACTCODEELEMENT__COMMENT = 53;

            static const int ABSTRACTCODEELEMENT__CODERELATION = 54;

            static const int CONTROLELEMENT__TYPE = 55;

            static const int CONTROLELEMENT__ENTRYFLOW = 56;

            static const int CONTROLELEMENT__CODEELEMENT = 57;

            static const int METHODUNIT__KIND = 58;

            static const int METHODUNIT__EXPORT = 59;

            static const int MODULE__CODEELEMENT = 60;

            static const int CALLABLEUNIT__KIND = 61;

            static const int TEMPLATEUNIT__CODEELEMENT = 62;

            static const int INSTANCEOF__TO = 63;

            static const int INSTANCEOF__FROM = 64;

            static const int CODEMODEL__CODEELEMENT = 65;

            static const int DERIVEDTYPE__ITEMUNIT = 66;

            static const int ARRAYTYPE__SIZE = 67;

            static const int ARRAYTYPE__INDEXUNIT = 68;

            static const int CLASSUNIT__ISABSTRACT = 69;

            static const int CLASSUNIT__CODEELEMENT = 70;

            static const int COMPOSITETYPE__ITEMUNIT = 71;

            static const int ENUMERATEDTYPE__VALUE = 72;

            static const int EXTENDS__TO = 73;

            static const int EXTENDS__FROM = 74;

            static const int HASTYPE__TO = 75;

            static const int HASTYPE__FROM = 76;

            static const int IMPLEMENTATIONOF__TO = 77;

            static const int IMPLEMENTATIONOF__FROM = 78;

            static const int IMPLEMENTS__TO = 79;

            static const int IMPLEMENTS__FROM = 80;

            static const int INTERFACEUNIT__CODEELEMENT = 81;

            static const int DEFINEDTYPE__TYPE = 82;

            static const int DEFINEDTYPE__CODEELEMENT = 83;

            static const int RANGETYPE__LOWER = 84;

            static const int RANGETYPE__UPPER = 85;

            static const int SIGNATURE__PARAMETERUNIT = 86;

            static const int DATAELEMENT__TYPE = 87;

            static const int DATAELEMENT__EXT = 88;

            static const int DATAELEMENT__SIZE = 89;

            static const int DATAELEMENT__CODEELEMENT = 90;

            static const int NAMESPACEUNIT__GROUPEDCODE = 91;

            static const int VISIBLEIN__TO = 92;

            static const int VISIBLEIN__FROM = 93;

            static const int COMMENTUNIT__TEXT = 94;

            static const int VALUELIST__VALUEELEMENT = 95;

            static const int STORABLEUNIT__KIND = 96;

            static const int MEMBERUNIT__EXPORT = 97;

            static const int PARAMETERUNIT__KIND = 98;

            static const int PARAMETERUNIT__POS = 99;

            static const int SEQUENCETYPE__SIZE = 100;

            static const int BAGTYPE__SIZE = 101;

            static const int SETTYPE__SIZE = 102;

            static const int CODERELATIONSHIP__TO = 103;

            static const int CODERELATIONSHIP__FROM = 104;

            static const int IMPORTS__TO = 105;

            static const int IMPORTS__FROM = 106;

            static const int PARAMETERTO__TO = 107;

            static const int PARAMETERTO__FROM = 108;

            static const int PREPROCESSORDIRECTIVE__CODEELEMENT = 109;

            static const int MACROUNIT__KIND = 110;

            static const int VARIANTTO__TO = 111;

            static const int VARIANTTO__FROM = 112;

            static const int EXPANDS__TO = 113;

            static const int EXPANDS__FROM = 114;

            static const int REDEFINES__TO = 115;

            static const int REDEFINES__FROM = 116;

            static const int GENERATEDFROM__TO = 117;

            static const int GENERATEDFROM__FROM = 118;

            static const int INCLUDES__TO = 119;

            static const int INCLUDES__FROM = 120;

            static const int HASVALUE__TO = 121;

            static const int HASVALUE__FROM = 122;

            // IDs for classifiers for class AbstractCodeElement 

            static const int ABSTRACTCODEELEMENT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int ABSTRACTCODEELEMENT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int ABSTRACTCODEELEMENT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int ABSTRACTCODEELEMENT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int ABSTRACTCODEELEMENT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            // IDs for classifiers for class AbstractCodeRelationship 

            static const int ABSTRACTCODERELATIONSHIP__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int ABSTRACTCODERELATIONSHIP__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int ABSTRACTCODERELATIONSHIP__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int ABSTRACTCODERELATIONSHIP__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class ArrayType 

            static const int ARRAYTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int ARRAYTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int ARRAYTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int ARRAYTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int ARRAYTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int ARRAYTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int ARRAYTYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int ARRAYTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int ARRAYTYPE__ITEMUNIT = DERIVEDTYPE__ITEMUNIT;

            // IDs for classifiers for class BagType 

            static const int BAGTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int BAGTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int BAGTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int BAGTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int BAGTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int BAGTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int BAGTYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int BAGTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int BAGTYPE__ITEMUNIT = DERIVEDTYPE__ITEMUNIT;

            // IDs for classifiers for class BitstringType 

            static const int BITSTRINGTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int BITSTRINGTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int BITSTRINGTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int BITSTRINGTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int BITSTRINGTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int BITSTRINGTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int BITSTRINGTYPE__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int BITSTRINGTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class BitType 

            static const int BITTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int BITTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int BITTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int BITTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int BITTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int BITTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int BITTYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int BITTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class BooleanType 

            static const int BOOLEANTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int BOOLEANTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int BOOLEANTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int BOOLEANTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int BOOLEANTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int BOOLEANTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int BOOLEANTYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int BOOLEANTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class CallableUnit 

            static const int CALLABLEUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int CALLABLEUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int CALLABLEUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int CALLABLEUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int CALLABLEUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int CALLABLEUNIT__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int CALLABLEUNIT__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int CALLABLEUNIT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int CALLABLEUNIT__TYPE = CONTROLELEMENT__TYPE;

            static const int CALLABLEUNIT__ENTRYFLOW = CONTROLELEMENT__ENTRYFLOW;

            static const int CALLABLEUNIT__CODEELEMENT =
                    CONTROLELEMENT__CODEELEMENT;

            // IDs for classifiers for class CharType 

            static const int CHARTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int CHARTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int CHARTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int CHARTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int CHARTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int CHARTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int CHARTYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int CHARTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class ChoiceType 

            static const int CHOICETYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int CHOICETYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int CHOICETYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int CHOICETYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int CHOICETYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int CHOICETYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int CHOICETYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int CHOICETYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int CHOICETYPE__ITEMUNIT = COMPOSITETYPE__ITEMUNIT;

            // IDs for classifiers for class ClassUnit 

            static const int CLASSUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int CLASSUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int CLASSUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int CLASSUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int CLASSUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int CLASSUNIT__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int CLASSUNIT__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int CLASSUNIT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class CodeAssembly 

            static const int CODEASSEMBLY__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int CODEASSEMBLY__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int CODEASSEMBLY__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int CODEASSEMBLY__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int CODEASSEMBLY__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int CODEASSEMBLY__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int CODEASSEMBLY__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int CODEASSEMBLY__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int CODEASSEMBLY__CODEELEMENT = MODULE__CODEELEMENT;

            // IDs for classifiers for class CodeElement 

            static const int CODEELEMENT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int CODEELEMENT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int CODEELEMENT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int CODEELEMENT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int CODEELEMENT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int CODEELEMENT__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int CODEELEMENT__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int CODEELEMENT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class CodeItem 

            static const int CODEITEM__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int CODEITEM__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int CODEITEM__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int CODEITEM__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int CODEITEM__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int CODEITEM__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int CODEITEM__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int CODEITEM__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class CodeModel 

            static const int CODEMODEL__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int CODEMODEL__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int CODEMODEL__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int CODEMODEL__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int CODEMODEL__AUDIT =
                    ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT;

            static const int CODEMODEL__EXTENSIONFAMILY =
                    ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY;

            static const int CODEMODEL__NAME =
                    ::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME;

            // IDs for classifiers for class CodeRelationship 

            static const int CODERELATIONSHIP__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int CODERELATIONSHIP__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int CODERELATIONSHIP__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int CODERELATIONSHIP__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class CommentUnit 

            static const int COMMENTUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int COMMENTUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int COMMENTUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int COMMENTUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class CompilationUnit 

            static const int COMPILATIONUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int COMPILATIONUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int COMPILATIONUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int COMPILATIONUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int COMPILATIONUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int COMPILATIONUNIT__SOURCE =
                    ABSTRACTCODEELEMENT__SOURCE;

            static const int COMPILATIONUNIT__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int COMPILATIONUNIT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int COMPILATIONUNIT__CODEELEMENT = MODULE__CODEELEMENT;

            // IDs for classifiers for class CompositeType 

            static const int COMPOSITETYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int COMPOSITETYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int COMPOSITETYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int COMPOSITETYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int COMPOSITETYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int COMPOSITETYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int COMPOSITETYPE__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int COMPOSITETYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class ComputationalObject 

            static const int COMPUTATIONALOBJECT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int COMPUTATIONALOBJECT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int COMPUTATIONALOBJECT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int COMPUTATIONALOBJECT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int COMPUTATIONALOBJECT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int COMPUTATIONALOBJECT__SOURCE =
                    ABSTRACTCODEELEMENT__SOURCE;

            static const int COMPUTATIONALOBJECT__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int COMPUTATIONALOBJECT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class ConditionalDirective 

            static const int CONDITIONALDIRECTIVE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int CONDITIONALDIRECTIVE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int CONDITIONALDIRECTIVE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int CONDITIONALDIRECTIVE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int CONDITIONALDIRECTIVE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int CONDITIONALDIRECTIVE__SOURCE =
                    ABSTRACTCODEELEMENT__SOURCE;

            static const int CONDITIONALDIRECTIVE__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int CONDITIONALDIRECTIVE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int CONDITIONALDIRECTIVE__CODEELEMENT =
                    PREPROCESSORDIRECTIVE__CODEELEMENT;

            // IDs for classifiers for class ControlElement 

            static const int CONTROLELEMENT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int CONTROLELEMENT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int CONTROLELEMENT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int CONTROLELEMENT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int CONTROLELEMENT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int CONTROLELEMENT__SOURCE =
                    ABSTRACTCODEELEMENT__SOURCE;

            static const int CONTROLELEMENT__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int CONTROLELEMENT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class DataElement 

            static const int DATAELEMENT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int DATAELEMENT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int DATAELEMENT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int DATAELEMENT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int DATAELEMENT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int DATAELEMENT__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int DATAELEMENT__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int DATAELEMENT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class Datatype 

            static const int DATATYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int DATATYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int DATATYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int DATATYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int DATATYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int DATATYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int DATATYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int DATATYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class DateType 

            static const int DATETYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int DATETYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int DATETYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int DATETYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int DATETYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int DATETYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int DATETYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int DATETYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class DecimalType 

            static const int DECIMALTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int DECIMALTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int DECIMALTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int DECIMALTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int DECIMALTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int DECIMALTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int DECIMALTYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int DECIMALTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class DefinedType 

            static const int DEFINEDTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int DEFINEDTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int DEFINEDTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int DEFINEDTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int DEFINEDTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int DEFINEDTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int DEFINEDTYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int DEFINEDTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class DerivedType 

            static const int DERIVEDTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int DERIVEDTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int DERIVEDTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int DERIVEDTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int DERIVEDTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int DERIVEDTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int DERIVEDTYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int DERIVEDTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class EnumeratedType 

            static const int ENUMERATEDTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int ENUMERATEDTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int ENUMERATEDTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int ENUMERATEDTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int ENUMERATEDTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int ENUMERATEDTYPE__SOURCE =
                    ABSTRACTCODEELEMENT__SOURCE;

            static const int ENUMERATEDTYPE__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int ENUMERATEDTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class Expands 

            static const int EXPANDS__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int EXPANDS__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int EXPANDS__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int EXPANDS__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class Extends 

            static const int EXTENDS__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int EXTENDS__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int EXTENDS__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int EXTENDS__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class FloatType 

            static const int FLOATTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int FLOATTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int FLOATTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int FLOATTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int FLOATTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int FLOATTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int FLOATTYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int FLOATTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class GeneratedFrom 

            static const int GENERATEDFROM__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int GENERATEDFROM__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int GENERATEDFROM__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int GENERATEDFROM__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class HasType 

            static const int HASTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int HASTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int HASTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int HASTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class HasValue 

            static const int HASVALUE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int HASVALUE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int HASVALUE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int HASVALUE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class ImplementationOf 

            static const int IMPLEMENTATIONOF__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int IMPLEMENTATIONOF__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int IMPLEMENTATIONOF__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int IMPLEMENTATIONOF__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class Implements 

            static const int IMPLEMENTS__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int IMPLEMENTS__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int IMPLEMENTS__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int IMPLEMENTS__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class Imports 

            static const int IMPORTS__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int IMPORTS__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int IMPORTS__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int IMPORTS__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class IncludeDirective 

            static const int INCLUDEDIRECTIVE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int INCLUDEDIRECTIVE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int INCLUDEDIRECTIVE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int INCLUDEDIRECTIVE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int INCLUDEDIRECTIVE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int INCLUDEDIRECTIVE__SOURCE =
                    ABSTRACTCODEELEMENT__SOURCE;

            static const int INCLUDEDIRECTIVE__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int INCLUDEDIRECTIVE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int INCLUDEDIRECTIVE__CODEELEMENT =
                    PREPROCESSORDIRECTIVE__CODEELEMENT;

            // IDs for classifiers for class Includes 

            static const int INCLUDES__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int INCLUDES__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int INCLUDES__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int INCLUDES__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class IndexUnit 

            static const int INDEXUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int INDEXUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int INDEXUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int INDEXUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int INDEXUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int INDEXUNIT__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int INDEXUNIT__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int INDEXUNIT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int INDEXUNIT__TYPE = DATAELEMENT__TYPE;

            static const int INDEXUNIT__EXT = DATAELEMENT__EXT;

            static const int INDEXUNIT__SIZE = DATAELEMENT__SIZE;

            static const int INDEXUNIT__CODEELEMENT = DATAELEMENT__CODEELEMENT;

            // IDs for classifiers for class InstanceOf 

            static const int INSTANCEOF__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int INSTANCEOF__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int INSTANCEOF__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int INSTANCEOF__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class IntegerType 

            static const int INTEGERTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int INTEGERTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int INTEGERTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int INTEGERTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int INTEGERTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int INTEGERTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int INTEGERTYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int INTEGERTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class InterfaceUnit 

            static const int INTERFACEUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int INTERFACEUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int INTERFACEUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int INTERFACEUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int INTERFACEUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int INTERFACEUNIT__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int INTERFACEUNIT__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int INTERFACEUNIT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class ItemUnit 

            static const int ITEMUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int ITEMUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int ITEMUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int ITEMUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int ITEMUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int ITEMUNIT__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int ITEMUNIT__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int ITEMUNIT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int ITEMUNIT__TYPE = DATAELEMENT__TYPE;

            static const int ITEMUNIT__EXT = DATAELEMENT__EXT;

            static const int ITEMUNIT__SIZE = DATAELEMENT__SIZE;

            static const int ITEMUNIT__CODEELEMENT = DATAELEMENT__CODEELEMENT;

            // IDs for classifiers for class LanguageUnit 

            static const int LANGUAGEUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int LANGUAGEUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int LANGUAGEUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int LANGUAGEUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int LANGUAGEUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int LANGUAGEUNIT__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int LANGUAGEUNIT__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int LANGUAGEUNIT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int LANGUAGEUNIT__CODEELEMENT = MODULE__CODEELEMENT;

            // IDs for classifiers for class MacroDirective 

            static const int MACRODIRECTIVE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int MACRODIRECTIVE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int MACRODIRECTIVE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int MACRODIRECTIVE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int MACRODIRECTIVE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int MACRODIRECTIVE__SOURCE =
                    ABSTRACTCODEELEMENT__SOURCE;

            static const int MACRODIRECTIVE__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int MACRODIRECTIVE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int MACRODIRECTIVE__CODEELEMENT =
                    PREPROCESSORDIRECTIVE__CODEELEMENT;

            // IDs for classifiers for class MacroUnit 

            static const int MACROUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int MACROUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int MACROUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int MACROUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int MACROUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int MACROUNIT__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int MACROUNIT__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int MACROUNIT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int MACROUNIT__CODEELEMENT =
                    PREPROCESSORDIRECTIVE__CODEELEMENT;

            // IDs for classifiers for class MemberUnit 

            static const int MEMBERUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int MEMBERUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int MEMBERUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int MEMBERUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int MEMBERUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int MEMBERUNIT__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int MEMBERUNIT__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int MEMBERUNIT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int MEMBERUNIT__TYPE = DATAELEMENT__TYPE;

            static const int MEMBERUNIT__EXT = DATAELEMENT__EXT;

            static const int MEMBERUNIT__SIZE = DATAELEMENT__SIZE;

            static const int MEMBERUNIT__CODEELEMENT = DATAELEMENT__CODEELEMENT;

            // IDs for classifiers for class MethodUnit 

            static const int METHODUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int METHODUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int METHODUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int METHODUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int METHODUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int METHODUNIT__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int METHODUNIT__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int METHODUNIT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int METHODUNIT__TYPE = CONTROLELEMENT__TYPE;

            static const int METHODUNIT__ENTRYFLOW = CONTROLELEMENT__ENTRYFLOW;

            static const int METHODUNIT__CODEELEMENT =
                    CONTROLELEMENT__CODEELEMENT;

            // IDs for classifiers for class Module 

            static const int MODULE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int MODULE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int MODULE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int MODULE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int MODULE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int MODULE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int MODULE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int MODULE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class NamespaceUnit 

            static const int NAMESPACEUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int NAMESPACEUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int NAMESPACEUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int NAMESPACEUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int NAMESPACEUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int NAMESPACEUNIT__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int NAMESPACEUNIT__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int NAMESPACEUNIT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class OctetstringType 

            static const int OCTETSTRINGTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int OCTETSTRINGTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int OCTETSTRINGTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int OCTETSTRINGTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int OCTETSTRINGTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int OCTETSTRINGTYPE__SOURCE =
                    ABSTRACTCODEELEMENT__SOURCE;

            static const int OCTETSTRINGTYPE__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int OCTETSTRINGTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class OctetType 

            static const int OCTETTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int OCTETTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int OCTETTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int OCTETTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int OCTETTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int OCTETTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int OCTETTYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int OCTETTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class OrdinalType 

            static const int ORDINALTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int ORDINALTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int ORDINALTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int ORDINALTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int ORDINALTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int ORDINALTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int ORDINALTYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int ORDINALTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class Package 

            static const int PACKAGE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int PACKAGE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int PACKAGE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int PACKAGE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int PACKAGE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int PACKAGE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int PACKAGE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int PACKAGE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int PACKAGE__CODEELEMENT = MODULE__CODEELEMENT;

            // IDs for classifiers for class ParameterTo 

            static const int PARAMETERTO__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int PARAMETERTO__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int PARAMETERTO__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int PARAMETERTO__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class ParameterUnit 

            static const int PARAMETERUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int PARAMETERUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int PARAMETERUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int PARAMETERUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int PARAMETERUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int PARAMETERUNIT__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int PARAMETERUNIT__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int PARAMETERUNIT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int PARAMETERUNIT__TYPE = DATAELEMENT__TYPE;

            static const int PARAMETERUNIT__EXT = DATAELEMENT__EXT;

            static const int PARAMETERUNIT__SIZE = DATAELEMENT__SIZE;

            static const int PARAMETERUNIT__CODEELEMENT =
                    DATAELEMENT__CODEELEMENT;

            // IDs for classifiers for class PointerType 

            static const int POINTERTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int POINTERTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int POINTERTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int POINTERTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int POINTERTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int POINTERTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int POINTERTYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int POINTERTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int POINTERTYPE__ITEMUNIT = DERIVEDTYPE__ITEMUNIT;

            // IDs for classifiers for class PreprocessorDirective 

            static const int PREPROCESSORDIRECTIVE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int PREPROCESSORDIRECTIVE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int PREPROCESSORDIRECTIVE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int PREPROCESSORDIRECTIVE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int PREPROCESSORDIRECTIVE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int PREPROCESSORDIRECTIVE__SOURCE =
                    ABSTRACTCODEELEMENT__SOURCE;

            static const int PREPROCESSORDIRECTIVE__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int PREPROCESSORDIRECTIVE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class PrimitiveType 

            static const int PRIMITIVETYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int PRIMITIVETYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int PRIMITIVETYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int PRIMITIVETYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int PRIMITIVETYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int PRIMITIVETYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int PRIMITIVETYPE__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int PRIMITIVETYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class RangeType 

            static const int RANGETYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int RANGETYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int RANGETYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int RANGETYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int RANGETYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int RANGETYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int RANGETYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int RANGETYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int RANGETYPE__ITEMUNIT = DERIVEDTYPE__ITEMUNIT;

            // IDs for classifiers for class RecordType 

            static const int RECORDTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int RECORDTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int RECORDTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int RECORDTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int RECORDTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int RECORDTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int RECORDTYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int RECORDTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int RECORDTYPE__ITEMUNIT = COMPOSITETYPE__ITEMUNIT;

            // IDs for classifiers for class Redefines 

            static const int REDEFINES__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int REDEFINES__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int REDEFINES__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int REDEFINES__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class ScaledType 

            static const int SCALEDTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int SCALEDTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int SCALEDTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int SCALEDTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int SCALEDTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int SCALEDTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int SCALEDTYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int SCALEDTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class SequenceType 

            static const int SEQUENCETYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int SEQUENCETYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int SEQUENCETYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int SEQUENCETYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int SEQUENCETYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int SEQUENCETYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int SEQUENCETYPE__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int SEQUENCETYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int SEQUENCETYPE__ITEMUNIT = DERIVEDTYPE__ITEMUNIT;

            // IDs for classifiers for class SetType 

            static const int SETTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int SETTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int SETTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int SETTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int SETTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int SETTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int SETTYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int SETTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int SETTYPE__ITEMUNIT = DERIVEDTYPE__ITEMUNIT;

            // IDs for classifiers for class SharedUnit 

            static const int SHAREDUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int SHAREDUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int SHAREDUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int SHAREDUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int SHAREDUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int SHAREDUNIT__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int SHAREDUNIT__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int SHAREDUNIT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int SHAREDUNIT__CODEELEMENT = MODULE__CODEELEMENT;

            // IDs for classifiers for class Signature 

            static const int SIGNATURE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int SIGNATURE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int SIGNATURE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int SIGNATURE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int SIGNATURE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int SIGNATURE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int SIGNATURE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int SIGNATURE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class StorableUnit 

            static const int STORABLEUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int STORABLEUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int STORABLEUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int STORABLEUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int STORABLEUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int STORABLEUNIT__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int STORABLEUNIT__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int STORABLEUNIT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int STORABLEUNIT__TYPE = DATAELEMENT__TYPE;

            static const int STORABLEUNIT__EXT = DATAELEMENT__EXT;

            static const int STORABLEUNIT__SIZE = DATAELEMENT__SIZE;

            static const int STORABLEUNIT__CODEELEMENT =
                    DATAELEMENT__CODEELEMENT;

            // IDs for classifiers for class StringType 

            static const int STRINGTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int STRINGTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int STRINGTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int STRINGTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int STRINGTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int STRINGTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int STRINGTYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int STRINGTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class SynonymType 

            static const int SYNONYMTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int SYNONYMTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int SYNONYMTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int SYNONYMTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int SYNONYMTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int SYNONYMTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int SYNONYMTYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int SYNONYMTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int SYNONYMTYPE__TYPE = DEFINEDTYPE__TYPE;

            static const int SYNONYMTYPE__CODEELEMENT = DEFINEDTYPE__CODEELEMENT;

            // IDs for classifiers for class TemplateParameter 

            static const int TEMPLATEPARAMETER__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int TEMPLATEPARAMETER__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int TEMPLATEPARAMETER__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int TEMPLATEPARAMETER__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int TEMPLATEPARAMETER__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int TEMPLATEPARAMETER__SOURCE =
                    ABSTRACTCODEELEMENT__SOURCE;

            static const int TEMPLATEPARAMETER__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int TEMPLATEPARAMETER__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class TemplateType 

            static const int TEMPLATETYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int TEMPLATETYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int TEMPLATETYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int TEMPLATETYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int TEMPLATETYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int TEMPLATETYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int TEMPLATETYPE__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int TEMPLATETYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class TemplateUnit 

            static const int TEMPLATEUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int TEMPLATEUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int TEMPLATEUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int TEMPLATEUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int TEMPLATEUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int TEMPLATEUNIT__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int TEMPLATEUNIT__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int TEMPLATEUNIT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class TimeType 

            static const int TIMETYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int TIMETYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int TIMETYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int TIMETYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int TIMETYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int TIMETYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int TIMETYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int TIMETYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class TypeUnit 

            static const int TYPEUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int TYPEUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int TYPEUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int TYPEUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int TYPEUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int TYPEUNIT__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int TYPEUNIT__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int TYPEUNIT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int TYPEUNIT__TYPE = DEFINEDTYPE__TYPE;

            static const int TYPEUNIT__CODEELEMENT = DEFINEDTYPE__CODEELEMENT;

            // IDs for classifiers for class Value 

            static const int VALUE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int VALUE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int VALUE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int VALUE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int VALUE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int VALUE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int VALUE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int VALUE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int VALUE__TYPE = DATAELEMENT__TYPE;

            static const int VALUE__EXT = DATAELEMENT__EXT;

            static const int VALUE__SIZE = DATAELEMENT__SIZE;

            static const int VALUE__CODEELEMENT = DATAELEMENT__CODEELEMENT;

            // IDs for classifiers for class ValueElement 

            static const int VALUEELEMENT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int VALUEELEMENT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int VALUEELEMENT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int VALUEELEMENT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int VALUEELEMENT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int VALUEELEMENT__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int VALUEELEMENT__COMMENT =
                    ABSTRACTCODEELEMENT__COMMENT;

            static const int VALUEELEMENT__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int VALUEELEMENT__TYPE = DATAELEMENT__TYPE;

            static const int VALUEELEMENT__EXT = DATAELEMENT__EXT;

            static const int VALUEELEMENT__SIZE = DATAELEMENT__SIZE;

            static const int VALUEELEMENT__CODEELEMENT =
                    DATAELEMENT__CODEELEMENT;

            // IDs for classifiers for class ValueList 

            static const int VALUELIST__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int VALUELIST__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int VALUELIST__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int VALUELIST__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int VALUELIST__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int VALUELIST__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int VALUELIST__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int VALUELIST__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            static const int VALUELIST__TYPE = DATAELEMENT__TYPE;

            static const int VALUELIST__EXT = DATAELEMENT__EXT;

            static const int VALUELIST__SIZE = DATAELEMENT__SIZE;

            static const int VALUELIST__CODEELEMENT = DATAELEMENT__CODEELEMENT;

            // IDs for classifiers for class VariantTo 

            static const int VARIANTTO__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int VARIANTTO__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int VARIANTTO__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int VARIANTTO__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class VisibleIn 

            static const int VISIBLEIN__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int VISIBLEIN__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int VISIBLEIN__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int VISIBLEIN__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class VoidType 

            static const int VOIDTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int VOIDTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int VOIDTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int VOIDTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int VOIDTYPE__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int VOIDTYPE__SOURCE = ABSTRACTCODEELEMENT__SOURCE;

            static const int VOIDTYPE__COMMENT = ABSTRACTCODEELEMENT__COMMENT;

            static const int VOIDTYPE__CODERELATION =
                    ABSTRACTCODEELEMENT__CODERELATION;

            // EClassifiers methods

            virtual ::ecore::EClass_ptr getAbstractCodeElement();

            virtual ::ecore::EClass_ptr getCodeItem();

            virtual ::ecore::EClass_ptr getComputationalObject();

            virtual ::ecore::EClass_ptr getControlElement();

            virtual ::ecore::EClass_ptr getMethodUnit();

            virtual ::ecore::EClass_ptr getModule();

            virtual ::ecore::EClass_ptr getCodeAssembly();

            virtual ::ecore::EClass_ptr getCallableUnit();

            virtual ::ecore::EClass_ptr getDatatype();

            virtual ::ecore::EClass_ptr getTemplateUnit();

            virtual ::ecore::EClass_ptr getTemplateParameter();

            virtual ::ecore::EClass_ptr getAbstractCodeRelationship();

            virtual ::ecore::EClass_ptr getInstanceOf();

            virtual ::ecore::EClass_ptr getCompilationUnit();

            virtual ::ecore::EClass_ptr getCodeModel();

            virtual ::ecore::EClass_ptr getDerivedType();

            virtual ::ecore::EClass_ptr getArrayType();

            virtual ::ecore::EClass_ptr getPrimitiveType();

            virtual ::ecore::EClass_ptr getBooleanType();

            virtual ::ecore::EClass_ptr getCharType();

            virtual ::ecore::EClass_ptr getClassUnit();

            virtual ::ecore::EClass_ptr getCompositeType();

            virtual ::ecore::EClass_ptr getRecordType();

            virtual ::ecore::EClass_ptr getEnumeratedType();

            virtual ::ecore::EClass_ptr getExtends();

            virtual ::ecore::EClass_ptr getScaledType();

            virtual ::ecore::EClass_ptr getFloatType();

            virtual ::ecore::EClass_ptr getHasType();

            virtual ::ecore::EClass_ptr getImplementationOf();

            virtual ::ecore::EClass_ptr getImplements();

            virtual ::ecore::EClass_ptr getIntegerType();

            virtual ::ecore::EClass_ptr getInterfaceUnit();

            virtual ::ecore::EClass_ptr getPointerType();

            virtual ::ecore::EClass_ptr getDefinedType();

            virtual ::ecore::EClass_ptr getTypeUnit();

            virtual ::ecore::EClass_ptr getRangeType();

            virtual ::ecore::EClass_ptr getSignature();

            virtual ::ecore::EClass_ptr getDataElement();

            virtual ::ecore::EClass_ptr getStringType();

            virtual ::ecore::EClass_ptr getChoiceType();

            virtual ::ecore::EClass_ptr getNamespaceUnit();

            virtual ::ecore::EClass_ptr getVisibleIn();

            virtual ::ecore::EClass_ptr getCommentUnit();

            virtual ::ecore::EClass_ptr getSharedUnit();

            virtual ::ecore::EClass_ptr getDecimalType();

            virtual ::ecore::EClass_ptr getDateType();

            virtual ::ecore::EClass_ptr getTimeType();

            virtual ::ecore::EEnum_ptr getMethodKind();

            virtual ::ecore::EClass_ptr getVoidType();

            virtual ::ecore::EClass_ptr getValueElement();

            virtual ::ecore::EClass_ptr getValue();

            virtual ::ecore::EClass_ptr getValueList();

            virtual ::ecore::EClass_ptr getStorableUnit();

            virtual ::ecore::EClass_ptr getMemberUnit();

            virtual ::ecore::EClass_ptr getParameterUnit();

            virtual ::ecore::EClass_ptr getItemUnit();

            virtual ::ecore::EClass_ptr getIndexUnit();

            virtual ::ecore::EClass_ptr getSynonymType();

            virtual ::ecore::EClass_ptr getSequenceType();

            virtual ::ecore::EClass_ptr getBagType();

            virtual ::ecore::EClass_ptr getSetType();

            virtual ::ecore::EClass_ptr getCodeElement();

            virtual ::ecore::EClass_ptr getCodeRelationship();

            virtual ::ecore::EEnum_ptr getParameterKind();

            virtual ::ecore::EEnum_ptr getExportKind();

            virtual ::ecore::EClass_ptr getLanguageUnit();

            virtual ::ecore::EClass_ptr getOrdinalType();

            virtual ::ecore::EClass_ptr getBitstringType();

            virtual ::ecore::EClass_ptr getOctetType();

            virtual ::ecore::EClass_ptr getOctetstringType();

            virtual ::ecore::EClass_ptr getBitType();

            virtual ::ecore::EEnum_ptr getStorableKind();

            virtual ::ecore::EEnum_ptr getCallableKind();

            virtual ::ecore::EClass_ptr getImports();

            virtual ::ecore::EClass_ptr getPackage();

            virtual ::ecore::EClass_ptr getParameterTo();

            virtual ::ecore::EClass_ptr getTemplateType();

            virtual ::ecore::EClass_ptr getPreprocessorDirective();

            virtual ::ecore::EClass_ptr getMacroDirective();

            virtual ::ecore::EClass_ptr getMacroUnit();

            virtual ::ecore::EClass_ptr getConditionalDirective();

            virtual ::ecore::EClass_ptr getIncludeDirective();

            virtual ::ecore::EEnum_ptr getMacroKind();

            virtual ::ecore::EClass_ptr getVariantTo();

            virtual ::ecore::EClass_ptr getExpands();

            virtual ::ecore::EClass_ptr getRedefines();

            virtual ::ecore::EClass_ptr getGeneratedFrom();

            virtual ::ecore::EClass_ptr getIncludes();

            virtual ::ecore::EClass_ptr getHasValue();

            // EStructuralFeatures methods

            virtual ::ecore::EReference_ptr getElement__attribute();

            virtual ::ecore::EReference_ptr getElement__annotation();

            virtual ::ecore::EReference_ptr getModelElement__stereotype();

            virtual ::ecore::EReference_ptr getModelElement__taggedValue();

            virtual ::ecore::EAttribute_ptr getKDMEntity__name();

            virtual ::ecore::EReference_ptr getAbstractCodeElement__source();

            virtual ::ecore::EReference_ptr getAbstractCodeElement__comment();

            virtual ::ecore::EReference_ptr getAbstractCodeElement__codeRelation();

            virtual ::ecore::EReference_ptr getControlElement__type();

            virtual ::ecore::EReference_ptr getControlElement__entryFlow();

            virtual ::ecore::EReference_ptr getControlElement__codeElement();

            virtual ::ecore::EAttribute_ptr getMethodUnit__kind();

            virtual ::ecore::EAttribute_ptr getMethodUnit__export();

            virtual ::ecore::EReference_ptr getModule__codeElement();

            virtual ::ecore::EAttribute_ptr getCallableUnit__kind();

            virtual ::ecore::EReference_ptr getTemplateUnit__codeElement();

            virtual ::ecore::EReference_ptr getInstanceOf__to();

            virtual ::ecore::EReference_ptr getInstanceOf__from();

            virtual ::ecore::EReference_ptr getKDMFramework__audit();

            virtual ::ecore::EReference_ptr getKDMFramework__extensionFamily();

            virtual ::ecore::EAttribute_ptr getKDMFramework__name();

            virtual ::ecore::EReference_ptr getCodeModel__codeElement();

            virtual ::ecore::EReference_ptr getDerivedType__itemUnit();

            virtual ::ecore::EAttribute_ptr getArrayType__size();

            virtual ::ecore::EReference_ptr getArrayType__indexUnit();

            virtual ::ecore::EAttribute_ptr getClassUnit__isAbstract();

            virtual ::ecore::EReference_ptr getClassUnit__codeElement();

            virtual ::ecore::EReference_ptr getCompositeType__itemUnit();

            virtual ::ecore::EReference_ptr getEnumeratedType__value();

            virtual ::ecore::EReference_ptr getExtends__to();

            virtual ::ecore::EReference_ptr getExtends__from();

            virtual ::ecore::EReference_ptr getHasType__to();

            virtual ::ecore::EReference_ptr getHasType__from();

            virtual ::ecore::EReference_ptr getImplementationOf__to();

            virtual ::ecore::EReference_ptr getImplementationOf__from();

            virtual ::ecore::EReference_ptr getImplements__to();

            virtual ::ecore::EReference_ptr getImplements__from();

            virtual ::ecore::EReference_ptr getInterfaceUnit__codeElement();

            virtual ::ecore::EReference_ptr getDefinedType__type();

            virtual ::ecore::EReference_ptr getDefinedType__codeElement();

            virtual ::ecore::EAttribute_ptr getRangeType__lower();

            virtual ::ecore::EAttribute_ptr getRangeType__upper();

            virtual ::ecore::EReference_ptr getSignature__parameterUnit();

            virtual ::ecore::EReference_ptr getDataElement__type();

            virtual ::ecore::EAttribute_ptr getDataElement__ext();

            virtual ::ecore::EAttribute_ptr getDataElement__size();

            virtual ::ecore::EReference_ptr getDataElement__codeElement();

            virtual ::ecore::EReference_ptr getNamespaceUnit__groupedCode();

            virtual ::ecore::EReference_ptr getVisibleIn__to();

            virtual ::ecore::EReference_ptr getVisibleIn__from();

            virtual ::ecore::EAttribute_ptr getCommentUnit__text();

            virtual ::ecore::EReference_ptr getValueList__valueElement();

            virtual ::ecore::EAttribute_ptr getStorableUnit__kind();

            virtual ::ecore::EAttribute_ptr getMemberUnit__export();

            virtual ::ecore::EAttribute_ptr getParameterUnit__kind();

            virtual ::ecore::EAttribute_ptr getParameterUnit__pos();

            virtual ::ecore::EAttribute_ptr getSequenceType__size();

            virtual ::ecore::EAttribute_ptr getBagType__size();

            virtual ::ecore::EAttribute_ptr getSetType__size();

            virtual ::ecore::EReference_ptr getCodeRelationship__to();

            virtual ::ecore::EReference_ptr getCodeRelationship__from();

            virtual ::ecore::EReference_ptr getImports__to();

            virtual ::ecore::EReference_ptr getImports__from();

            virtual ::ecore::EReference_ptr getParameterTo__to();

            virtual ::ecore::EReference_ptr getParameterTo__from();

            virtual ::ecore::EReference_ptr getPreprocessorDirective__codeElement();

            virtual ::ecore::EAttribute_ptr getMacroUnit__kind();

            virtual ::ecore::EReference_ptr getVariantTo__to();

            virtual ::ecore::EReference_ptr getVariantTo__from();

            virtual ::ecore::EReference_ptr getExpands__to();

            virtual ::ecore::EReference_ptr getExpands__from();

            virtual ::ecore::EReference_ptr getRedefines__to();

            virtual ::ecore::EReference_ptr getRedefines__from();

            virtual ::ecore::EReference_ptr getGeneratedFrom__to();

            virtual ::ecore::EReference_ptr getGeneratedFrom__from();

            virtual ::ecore::EReference_ptr getIncludes__to();

            virtual ::ecore::EReference_ptr getIncludes__from();

            virtual ::ecore::EReference_ptr getHasValue__to();

            virtual ::ecore::EReference_ptr getHasValue__from();

        protected:

            static std::auto_ptr< CodePackage > s_instance;

            CodePackage();

            // EClass instances 

            ::ecore::EClass_ptr m_AbstractCodeElementEClass;

            ::ecore::EClass_ptr m_CodeItemEClass;

            ::ecore::EClass_ptr m_ComputationalObjectEClass;

            ::ecore::EClass_ptr m_ControlElementEClass;

            ::ecore::EClass_ptr m_MethodUnitEClass;

            ::ecore::EClass_ptr m_ModuleEClass;

            ::ecore::EClass_ptr m_CodeAssemblyEClass;

            ::ecore::EClass_ptr m_CallableUnitEClass;

            ::ecore::EClass_ptr m_DatatypeEClass;

            ::ecore::EClass_ptr m_TemplateUnitEClass;

            ::ecore::EClass_ptr m_TemplateParameterEClass;

            ::ecore::EClass_ptr m_AbstractCodeRelationshipEClass;

            ::ecore::EClass_ptr m_InstanceOfEClass;

            ::ecore::EClass_ptr m_CompilationUnitEClass;

            ::ecore::EClass_ptr m_CodeModelEClass;

            ::ecore::EClass_ptr m_DerivedTypeEClass;

            ::ecore::EClass_ptr m_ArrayTypeEClass;

            ::ecore::EClass_ptr m_PrimitiveTypeEClass;

            ::ecore::EClass_ptr m_BooleanTypeEClass;

            ::ecore::EClass_ptr m_CharTypeEClass;

            ::ecore::EClass_ptr m_ClassUnitEClass;

            ::ecore::EClass_ptr m_CompositeTypeEClass;

            ::ecore::EClass_ptr m_RecordTypeEClass;

            ::ecore::EClass_ptr m_EnumeratedTypeEClass;

            ::ecore::EClass_ptr m_ExtendsEClass;

            ::ecore::EClass_ptr m_ScaledTypeEClass;

            ::ecore::EClass_ptr m_FloatTypeEClass;

            ::ecore::EClass_ptr m_HasTypeEClass;

            ::ecore::EClass_ptr m_ImplementationOfEClass;

            ::ecore::EClass_ptr m_ImplementsEClass;

            ::ecore::EClass_ptr m_IntegerTypeEClass;

            ::ecore::EClass_ptr m_InterfaceUnitEClass;

            ::ecore::EClass_ptr m_PointerTypeEClass;

            ::ecore::EClass_ptr m_DefinedTypeEClass;

            ::ecore::EClass_ptr m_TypeUnitEClass;

            ::ecore::EClass_ptr m_RangeTypeEClass;

            ::ecore::EClass_ptr m_SignatureEClass;

            ::ecore::EClass_ptr m_DataElementEClass;

            ::ecore::EClass_ptr m_StringTypeEClass;

            ::ecore::EClass_ptr m_ChoiceTypeEClass;

            ::ecore::EClass_ptr m_NamespaceUnitEClass;

            ::ecore::EClass_ptr m_VisibleInEClass;

            ::ecore::EClass_ptr m_CommentUnitEClass;

            ::ecore::EClass_ptr m_SharedUnitEClass;

            ::ecore::EClass_ptr m_DecimalTypeEClass;

            ::ecore::EClass_ptr m_DateTypeEClass;

            ::ecore::EClass_ptr m_TimeTypeEClass;

            ::ecore::EClass_ptr m_VoidTypeEClass;

            ::ecore::EClass_ptr m_ValueElementEClass;

            ::ecore::EClass_ptr m_ValueEClass;

            ::ecore::EClass_ptr m_ValueListEClass;

            ::ecore::EClass_ptr m_StorableUnitEClass;

            ::ecore::EClass_ptr m_MemberUnitEClass;

            ::ecore::EClass_ptr m_ParameterUnitEClass;

            ::ecore::EClass_ptr m_ItemUnitEClass;

            ::ecore::EClass_ptr m_IndexUnitEClass;

            ::ecore::EClass_ptr m_SynonymTypeEClass;

            ::ecore::EClass_ptr m_SequenceTypeEClass;

            ::ecore::EClass_ptr m_BagTypeEClass;

            ::ecore::EClass_ptr m_SetTypeEClass;

            ::ecore::EClass_ptr m_CodeElementEClass;

            ::ecore::EClass_ptr m_CodeRelationshipEClass;

            ::ecore::EClass_ptr m_LanguageUnitEClass;

            ::ecore::EClass_ptr m_OrdinalTypeEClass;

            ::ecore::EClass_ptr m_BitstringTypeEClass;

            ::ecore::EClass_ptr m_OctetTypeEClass;

            ::ecore::EClass_ptr m_OctetstringTypeEClass;

            ::ecore::EClass_ptr m_BitTypeEClass;

            ::ecore::EClass_ptr m_ImportsEClass;

            ::ecore::EClass_ptr m_PackageEClass;

            ::ecore::EClass_ptr m_ParameterToEClass;

            ::ecore::EClass_ptr m_TemplateTypeEClass;

            ::ecore::EClass_ptr m_PreprocessorDirectiveEClass;

            ::ecore::EClass_ptr m_MacroDirectiveEClass;

            ::ecore::EClass_ptr m_MacroUnitEClass;

            ::ecore::EClass_ptr m_ConditionalDirectiveEClass;

            ::ecore::EClass_ptr m_IncludeDirectiveEClass;

            ::ecore::EClass_ptr m_VariantToEClass;

            ::ecore::EClass_ptr m_ExpandsEClass;

            ::ecore::EClass_ptr m_RedefinesEClass;

            ::ecore::EClass_ptr m_GeneratedFromEClass;

            ::ecore::EClass_ptr m_IncludesEClass;

            ::ecore::EClass_ptr m_HasValueEClass;

            // EEnuminstances 

            ::ecore::EEnum_ptr m_MethodKindEEnum;

            ::ecore::EEnum_ptr m_ParameterKindEEnum;

            ::ecore::EEnum_ptr m_ExportKindEEnum;

            ::ecore::EEnum_ptr m_StorableKindEEnum;

            ::ecore::EEnum_ptr m_CallableKindEEnum;

            ::ecore::EEnum_ptr m_MacroKindEEnum;

            // EDataType instances 

            // EStructuralFeatures instances

            ::ecore::EReference_ptr m_Element__attribute;

            ::ecore::EReference_ptr m_Element__annotation;

            ::ecore::EReference_ptr m_ModelElement__stereotype;

            ::ecore::EReference_ptr m_ModelElement__taggedValue;

            ::ecore::EAttribute_ptr m_KDMEntity__name;

            ::ecore::EReference_ptr m_AbstractCodeElement__source;

            ::ecore::EReference_ptr m_AbstractCodeElement__comment;

            ::ecore::EReference_ptr m_AbstractCodeElement__codeRelation;

            ::ecore::EReference_ptr m_ControlElement__type;

            ::ecore::EReference_ptr m_ControlElement__entryFlow;

            ::ecore::EReference_ptr m_ControlElement__codeElement;

            ::ecore::EAttribute_ptr m_MethodUnit__kind;

            ::ecore::EAttribute_ptr m_MethodUnit__export;

            ::ecore::EReference_ptr m_Module__codeElement;

            ::ecore::EAttribute_ptr m_CallableUnit__kind;

            ::ecore::EReference_ptr m_TemplateUnit__codeElement;

            ::ecore::EReference_ptr m_InstanceOf__to;

            ::ecore::EReference_ptr m_InstanceOf__from;

            ::ecore::EReference_ptr m_KDMFramework__audit;

            ::ecore::EReference_ptr m_KDMFramework__extensionFamily;

            ::ecore::EAttribute_ptr m_KDMFramework__name;

            ::ecore::EReference_ptr m_CodeModel__codeElement;

            ::ecore::EReference_ptr m_DerivedType__itemUnit;

            ::ecore::EAttribute_ptr m_ArrayType__size;

            ::ecore::EReference_ptr m_ArrayType__indexUnit;

            ::ecore::EAttribute_ptr m_ClassUnit__isAbstract;

            ::ecore::EReference_ptr m_ClassUnit__codeElement;

            ::ecore::EReference_ptr m_CompositeType__itemUnit;

            ::ecore::EReference_ptr m_EnumeratedType__value;

            ::ecore::EReference_ptr m_Extends__to;

            ::ecore::EReference_ptr m_Extends__from;

            ::ecore::EReference_ptr m_HasType__to;

            ::ecore::EReference_ptr m_HasType__from;

            ::ecore::EReference_ptr m_ImplementationOf__to;

            ::ecore::EReference_ptr m_ImplementationOf__from;

            ::ecore::EReference_ptr m_Implements__to;

            ::ecore::EReference_ptr m_Implements__from;

            ::ecore::EReference_ptr m_InterfaceUnit__codeElement;

            ::ecore::EReference_ptr m_DefinedType__type;

            ::ecore::EReference_ptr m_DefinedType__codeElement;

            ::ecore::EAttribute_ptr m_RangeType__lower;

            ::ecore::EAttribute_ptr m_RangeType__upper;

            ::ecore::EReference_ptr m_Signature__parameterUnit;

            ::ecore::EReference_ptr m_DataElement__type;

            ::ecore::EAttribute_ptr m_DataElement__ext;

            ::ecore::EAttribute_ptr m_DataElement__size;

            ::ecore::EReference_ptr m_DataElement__codeElement;

            ::ecore::EReference_ptr m_NamespaceUnit__groupedCode;

            ::ecore::EReference_ptr m_VisibleIn__to;

            ::ecore::EReference_ptr m_VisibleIn__from;

            ::ecore::EAttribute_ptr m_CommentUnit__text;

            ::ecore::EReference_ptr m_ValueList__valueElement;

            ::ecore::EAttribute_ptr m_StorableUnit__kind;

            ::ecore::EAttribute_ptr m_MemberUnit__export;

            ::ecore::EAttribute_ptr m_ParameterUnit__kind;

            ::ecore::EAttribute_ptr m_ParameterUnit__pos;

            ::ecore::EAttribute_ptr m_SequenceType__size;

            ::ecore::EAttribute_ptr m_BagType__size;

            ::ecore::EAttribute_ptr m_SetType__size;

            ::ecore::EReference_ptr m_CodeRelationship__to;

            ::ecore::EReference_ptr m_CodeRelationship__from;

            ::ecore::EReference_ptr m_Imports__to;

            ::ecore::EReference_ptr m_Imports__from;

            ::ecore::EReference_ptr m_ParameterTo__to;

            ::ecore::EReference_ptr m_ParameterTo__from;

            ::ecore::EReference_ptr m_PreprocessorDirective__codeElement;

            ::ecore::EAttribute_ptr m_MacroUnit__kind;

            ::ecore::EReference_ptr m_VariantTo__to;

            ::ecore::EReference_ptr m_VariantTo__from;

            ::ecore::EReference_ptr m_Expands__to;

            ::ecore::EReference_ptr m_Expands__from;

            ::ecore::EReference_ptr m_Redefines__to;

            ::ecore::EReference_ptr m_Redefines__from;

            ::ecore::EReference_ptr m_GeneratedFrom__to;

            ::ecore::EReference_ptr m_GeneratedFrom__from;

            ::ecore::EReference_ptr m_Includes__to;

            ::ecore::EReference_ptr m_Includes__from;

            ::ecore::EReference_ptr m_HasValue__to;

            ::ecore::EReference_ptr m_HasValue__from;

        };

    } // code
} // kdm

#endif // _KDM_CODEPACKAGE_HPP

