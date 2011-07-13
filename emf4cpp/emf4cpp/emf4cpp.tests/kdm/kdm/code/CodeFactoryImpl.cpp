// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/CodeFactoryImpl.cpp
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

#include <kdm/code/CodeFactory.hpp>
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/code/CodeItem.hpp>
#include <kdm/code/ComputationalObject.hpp>
#include <kdm/code/ControlElement.hpp>
#include <kdm/code/MethodUnit.hpp>
#include <kdm/code/Module.hpp>
#include <kdm/code/CodeAssembly.hpp>
#include <kdm/code/CallableUnit.hpp>
#include <kdm/code/Datatype.hpp>
#include <kdm/code/TemplateUnit.hpp>
#include <kdm/code/TemplateParameter.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>
#include <kdm/code/InstanceOf.hpp>
#include <kdm/code/CompilationUnit.hpp>
#include <kdm/code/CodeModel.hpp>
#include <kdm/code/DerivedType.hpp>
#include <kdm/code/ArrayType.hpp>
#include <kdm/code/PrimitiveType.hpp>
#include <kdm/code/BooleanType.hpp>
#include <kdm/code/CharType.hpp>
#include <kdm/code/ClassUnit.hpp>
#include <kdm/code/CompositeType.hpp>
#include <kdm/code/RecordType.hpp>
#include <kdm/code/EnumeratedType.hpp>
#include <kdm/code/Extends.hpp>
#include <kdm/code/ScaledType.hpp>
#include <kdm/code/FloatType.hpp>
#include <kdm/code/HasType.hpp>
#include <kdm/code/ImplementationOf.hpp>
#include <kdm/code/Implements.hpp>
#include <kdm/code/IntegerType.hpp>
#include <kdm/code/InterfaceUnit.hpp>
#include <kdm/code/PointerType.hpp>
#include <kdm/code/DefinedType.hpp>
#include <kdm/code/TypeUnit.hpp>
#include <kdm/code/RangeType.hpp>
#include <kdm/code/Signature.hpp>
#include <kdm/code/DataElement.hpp>
#include <kdm/code/StringType.hpp>
#include <kdm/code/ChoiceType.hpp>
#include <kdm/code/NamespaceUnit.hpp>
#include <kdm/code/VisibleIn.hpp>
#include <kdm/code/CommentUnit.hpp>
#include <kdm/code/SharedUnit.hpp>
#include <kdm/code/DecimalType.hpp>
#include <kdm/code/DateType.hpp>
#include <kdm/code/TimeType.hpp>
#include <kdm/code/VoidType.hpp>
#include <kdm/code/ValueElement.hpp>
#include <kdm/code/Value.hpp>
#include <kdm/code/ValueList.hpp>
#include <kdm/code/StorableUnit.hpp>
#include <kdm/code/MemberUnit.hpp>
#include <kdm/code/ParameterUnit.hpp>
#include <kdm/code/ItemUnit.hpp>
#include <kdm/code/IndexUnit.hpp>
#include <kdm/code/SynonymType.hpp>
#include <kdm/code/SequenceType.hpp>
#include <kdm/code/BagType.hpp>
#include <kdm/code/SetType.hpp>
#include <kdm/code/CodeElement.hpp>
#include <kdm/code/CodeRelationship.hpp>
#include <kdm/code/LanguageUnit.hpp>
#include <kdm/code/OrdinalType.hpp>
#include <kdm/code/BitstringType.hpp>
#include <kdm/code/OctetType.hpp>
#include <kdm/code/OctetstringType.hpp>
#include <kdm/code/BitType.hpp>
#include <kdm/code/Imports.hpp>
#include <kdm/code/Package.hpp>
#include <kdm/code/ParameterTo.hpp>
#include <kdm/code/TemplateType.hpp>
#include <kdm/code/PreprocessorDirective.hpp>
#include <kdm/code/MacroDirective.hpp>
#include <kdm/code/MacroUnit.hpp>
#include <kdm/code/ConditionalDirective.hpp>
#include <kdm/code/IncludeDirective.hpp>
#include <kdm/code/VariantTo.hpp>
#include <kdm/code/Expands.hpp>
#include <kdm/code/Redefines.hpp>
#include <kdm/code/GeneratedFrom.hpp>
#include <kdm/code/Includes.hpp>
#include <kdm/code/HasValue.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::code;

CodeFactory::CodeFactory()
{
    s_instance.reset(this);
}

::ecore::EObject_ptr CodeFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case CodePackage::ABSTRACTCODEELEMENT:
        return createAbstractCodeElement();
    case CodePackage::CODEITEM:
        return createCodeItem();
    case CodePackage::COMPUTATIONALOBJECT:
        return createComputationalObject();
    case CodePackage::CONTROLELEMENT:
        return createControlElement();
    case CodePackage::METHODUNIT:
        return createMethodUnit();
    case CodePackage::MODULE:
        return createModule();
    case CodePackage::CODEASSEMBLY:
        return createCodeAssembly();
    case CodePackage::CALLABLEUNIT:
        return createCallableUnit();
    case CodePackage::DATATYPE:
        return createDatatype();
    case CodePackage::TEMPLATEUNIT:
        return createTemplateUnit();
    case CodePackage::TEMPLATEPARAMETER:
        return createTemplateParameter();
    case CodePackage::ABSTRACTCODERELATIONSHIP:
        return createAbstractCodeRelationship();
    case CodePackage::INSTANCEOF:
        return createInstanceOf();
    case CodePackage::COMPILATIONUNIT:
        return createCompilationUnit();
    case CodePackage::CODEMODEL:
        return createCodeModel();
    case CodePackage::DERIVEDTYPE:
        return createDerivedType();
    case CodePackage::ARRAYTYPE:
        return createArrayType();
    case CodePackage::PRIMITIVETYPE:
        return createPrimitiveType();
    case CodePackage::BOOLEANTYPE:
        return createBooleanType();
    case CodePackage::CHARTYPE:
        return createCharType();
    case CodePackage::CLASSUNIT:
        return createClassUnit();
    case CodePackage::COMPOSITETYPE:
        return createCompositeType();
    case CodePackage::RECORDTYPE:
        return createRecordType();
    case CodePackage::ENUMERATEDTYPE:
        return createEnumeratedType();
    case CodePackage::EXTENDS:
        return createExtends();
    case CodePackage::SCALEDTYPE:
        return createScaledType();
    case CodePackage::FLOATTYPE:
        return createFloatType();
    case CodePackage::HASTYPE:
        return createHasType();
    case CodePackage::IMPLEMENTATIONOF:
        return createImplementationOf();
    case CodePackage::IMPLEMENTS:
        return createImplements();
    case CodePackage::INTEGERTYPE:
        return createIntegerType();
    case CodePackage::INTERFACEUNIT:
        return createInterfaceUnit();
    case CodePackage::POINTERTYPE:
        return createPointerType();
    case CodePackage::DEFINEDTYPE:
        return createDefinedType();
    case CodePackage::TYPEUNIT:
        return createTypeUnit();
    case CodePackage::RANGETYPE:
        return createRangeType();
    case CodePackage::SIGNATURE:
        return createSignature();
    case CodePackage::DATAELEMENT:
        return createDataElement();
    case CodePackage::STRINGTYPE:
        return createStringType();
    case CodePackage::CHOICETYPE:
        return createChoiceType();
    case CodePackage::NAMESPACEUNIT:
        return createNamespaceUnit();
    case CodePackage::VISIBLEIN:
        return createVisibleIn();
    case CodePackage::COMMENTUNIT:
        return createCommentUnit();
    case CodePackage::SHAREDUNIT:
        return createSharedUnit();
    case CodePackage::DECIMALTYPE:
        return createDecimalType();
    case CodePackage::DATETYPE:
        return createDateType();
    case CodePackage::TIMETYPE:
        return createTimeType();
    case CodePackage::VOIDTYPE:
        return createVoidType();
    case CodePackage::VALUEELEMENT:
        return createValueElement();
    case CodePackage::VALUE:
        return createValue();
    case CodePackage::VALUELIST:
        return createValueList();
    case CodePackage::STORABLEUNIT:
        return createStorableUnit();
    case CodePackage::MEMBERUNIT:
        return createMemberUnit();
    case CodePackage::PARAMETERUNIT:
        return createParameterUnit();
    case CodePackage::ITEMUNIT:
        return createItemUnit();
    case CodePackage::INDEXUNIT:
        return createIndexUnit();
    case CodePackage::SYNONYMTYPE:
        return createSynonymType();
    case CodePackage::SEQUENCETYPE:
        return createSequenceType();
    case CodePackage::BAGTYPE:
        return createBagType();
    case CodePackage::SETTYPE:
        return createSetType();
    case CodePackage::CODEELEMENT:
        return createCodeElement();
    case CodePackage::CODERELATIONSHIP:
        return createCodeRelationship();
    case CodePackage::LANGUAGEUNIT:
        return createLanguageUnit();
    case CodePackage::ORDINALTYPE:
        return createOrdinalType();
    case CodePackage::BITSTRINGTYPE:
        return createBitstringType();
    case CodePackage::OCTETTYPE:
        return createOctetType();
    case CodePackage::OCTETSTRINGTYPE:
        return createOctetstringType();
    case CodePackage::BITTYPE:
        return createBitType();
    case CodePackage::IMPORTS:
        return createImports();
    case CodePackage::PACKAGE:
        return createPackage();
    case CodePackage::PARAMETERTO:
        return createParameterTo();
    case CodePackage::TEMPLATETYPE:
        return createTemplateType();
    case CodePackage::PREPROCESSORDIRECTIVE:
        return createPreprocessorDirective();
    case CodePackage::MACRODIRECTIVE:
        return createMacroDirective();
    case CodePackage::MACROUNIT:
        return createMacroUnit();
    case CodePackage::CONDITIONALDIRECTIVE:
        return createConditionalDirective();
    case CodePackage::INCLUDEDIRECTIVE:
        return createIncludeDirective();
    case CodePackage::VARIANTTO:
        return createVariantTo();
    case CodePackage::EXPANDS:
        return createExpands();
    case CodePackage::REDEFINES:
        return createRedefines();
    case CodePackage::GENERATEDFROM:
        return createGeneratedFrom();
    case CodePackage::INCLUDES:
        return createIncludes();
    case CodePackage::HASVALUE:
        return createHasValue();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject CodeFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    case CodePackage::METHODKIND:
    {
        ::ecore::EJavaObject _any;
        CodePackage_ptr _epkg =
                dynamic_cast< ::kdm::code::CodePackage_ptr > (getEPackage());
        return _epkg->getMethodKind()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case CodePackage::PARAMETERKIND:
    {
        ::ecore::EJavaObject _any;
        CodePackage_ptr _epkg =
                dynamic_cast< ::kdm::code::CodePackage_ptr > (getEPackage());
        return _epkg->getParameterKind()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case CodePackage::EXPORTKIND:
    {
        ::ecore::EJavaObject _any;
        CodePackage_ptr _epkg =
                dynamic_cast< ::kdm::code::CodePackage_ptr > (getEPackage());
        return _epkg->getExportKind()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case CodePackage::STORABLEKIND:
    {
        ::ecore::EJavaObject _any;
        CodePackage_ptr _epkg =
                dynamic_cast< ::kdm::code::CodePackage_ptr > (getEPackage());
        return _epkg->getStorableKind()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case CodePackage::CALLABLEKIND:
    {
        ::ecore::EJavaObject _any;
        CodePackage_ptr _epkg =
                dynamic_cast< ::kdm::code::CodePackage_ptr > (getEPackage());
        return _epkg->getCallableKind()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case CodePackage::MACROKIND:
    {
        ::ecore::EJavaObject _any;
        CodePackage_ptr _epkg =
                dynamic_cast< ::kdm::code::CodePackage_ptr > (getEPackage());
        return _epkg->getMacroKind()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString CodeFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    case CodePackage::METHODKIND:
    {
        CodePackage_ptr _epkg = ::kdm::code::instanceOf<
                ::kdm::code::CodePackage >(getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EInt >(_instanceValue);
        return _epkg->getMethodKind()->getEEnumLiteral(_value)->getName();
    }
    case CodePackage::PARAMETERKIND:
    {
        CodePackage_ptr _epkg = ::kdm::code::instanceOf<
                ::kdm::code::CodePackage >(getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EInt >(_instanceValue);
        return _epkg->getParameterKind()->getEEnumLiteral(_value)->getName();
    }
    case CodePackage::EXPORTKIND:
    {
        CodePackage_ptr _epkg = ::kdm::code::instanceOf<
                ::kdm::code::CodePackage >(getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EInt >(_instanceValue);
        return _epkg->getExportKind()->getEEnumLiteral(_value)->getName();
    }
    case CodePackage::STORABLEKIND:
    {
        CodePackage_ptr _epkg = ::kdm::code::instanceOf<
                ::kdm::code::CodePackage >(getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EInt >(_instanceValue);
        return _epkg->getStorableKind()->getEEnumLiteral(_value)->getName();
    }
    case CodePackage::CALLABLEKIND:
    {
        CodePackage_ptr _epkg = ::kdm::code::instanceOf<
                ::kdm::code::CodePackage >(getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EInt >(_instanceValue);
        return _epkg->getCallableKind()->getEEnumLiteral(_value)->getName();
    }
    case CodePackage::MACROKIND:
    {
        CodePackage_ptr _epkg = ::kdm::code::instanceOf<
                ::kdm::code::CodePackage >(getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EInt >(_instanceValue);
        return _epkg->getMacroKind()->getEEnumLiteral(_value)->getName();
    }
    default:
        throw "IllegalArgumentException";
    }
}

AbstractCodeElement_ptr CodeFactory::createAbstractCodeElement()
{
    return new AbstractCodeElement();
}
CodeItem_ptr CodeFactory::createCodeItem()
{
    return new CodeItem();
}
ComputationalObject_ptr CodeFactory::createComputationalObject()
{
    return new ComputationalObject();
}
ControlElement_ptr CodeFactory::createControlElement()
{
    return new ControlElement();
}
MethodUnit_ptr CodeFactory::createMethodUnit()
{
    return new MethodUnit();
}
Module_ptr CodeFactory::createModule()
{
    return new Module();
}
CodeAssembly_ptr CodeFactory::createCodeAssembly()
{
    return new CodeAssembly();
}
CallableUnit_ptr CodeFactory::createCallableUnit()
{
    return new CallableUnit();
}
Datatype_ptr CodeFactory::createDatatype()
{
    return new Datatype();
}
TemplateUnit_ptr CodeFactory::createTemplateUnit()
{
    return new TemplateUnit();
}
TemplateParameter_ptr CodeFactory::createTemplateParameter()
{
    return new TemplateParameter();
}
AbstractCodeRelationship_ptr CodeFactory::createAbstractCodeRelationship()
{
    return new AbstractCodeRelationship();
}
InstanceOf_ptr CodeFactory::createInstanceOf()
{
    return new InstanceOf();
}
CompilationUnit_ptr CodeFactory::createCompilationUnit()
{
    return new CompilationUnit();
}
CodeModel_ptr CodeFactory::createCodeModel()
{
    return new CodeModel();
}
DerivedType_ptr CodeFactory::createDerivedType()
{
    return new DerivedType();
}
ArrayType_ptr CodeFactory::createArrayType()
{
    return new ArrayType();
}
PrimitiveType_ptr CodeFactory::createPrimitiveType()
{
    return new PrimitiveType();
}
BooleanType_ptr CodeFactory::createBooleanType()
{
    return new BooleanType();
}
CharType_ptr CodeFactory::createCharType()
{
    return new CharType();
}
ClassUnit_ptr CodeFactory::createClassUnit()
{
    return new ClassUnit();
}
CompositeType_ptr CodeFactory::createCompositeType()
{
    return new CompositeType();
}
RecordType_ptr CodeFactory::createRecordType()
{
    return new RecordType();
}
EnumeratedType_ptr CodeFactory::createEnumeratedType()
{
    return new EnumeratedType();
}
Extends_ptr CodeFactory::createExtends()
{
    return new Extends();
}
ScaledType_ptr CodeFactory::createScaledType()
{
    return new ScaledType();
}
FloatType_ptr CodeFactory::createFloatType()
{
    return new FloatType();
}
HasType_ptr CodeFactory::createHasType()
{
    return new HasType();
}
ImplementationOf_ptr CodeFactory::createImplementationOf()
{
    return new ImplementationOf();
}
Implements_ptr CodeFactory::createImplements()
{
    return new Implements();
}
IntegerType_ptr CodeFactory::createIntegerType()
{
    return new IntegerType();
}
InterfaceUnit_ptr CodeFactory::createInterfaceUnit()
{
    return new InterfaceUnit();
}
PointerType_ptr CodeFactory::createPointerType()
{
    return new PointerType();
}
DefinedType_ptr CodeFactory::createDefinedType()
{
    return new DefinedType();
}
TypeUnit_ptr CodeFactory::createTypeUnit()
{
    return new TypeUnit();
}
RangeType_ptr CodeFactory::createRangeType()
{
    return new RangeType();
}
Signature_ptr CodeFactory::createSignature()
{
    return new Signature();
}
DataElement_ptr CodeFactory::createDataElement()
{
    return new DataElement();
}
StringType_ptr CodeFactory::createStringType()
{
    return new StringType();
}
ChoiceType_ptr CodeFactory::createChoiceType()
{
    return new ChoiceType();
}
NamespaceUnit_ptr CodeFactory::createNamespaceUnit()
{
    return new NamespaceUnit();
}
VisibleIn_ptr CodeFactory::createVisibleIn()
{
    return new VisibleIn();
}
CommentUnit_ptr CodeFactory::createCommentUnit()
{
    return new CommentUnit();
}
SharedUnit_ptr CodeFactory::createSharedUnit()
{
    return new SharedUnit();
}
DecimalType_ptr CodeFactory::createDecimalType()
{
    return new DecimalType();
}
DateType_ptr CodeFactory::createDateType()
{
    return new DateType();
}
TimeType_ptr CodeFactory::createTimeType()
{
    return new TimeType();
}
VoidType_ptr CodeFactory::createVoidType()
{
    return new VoidType();
}
ValueElement_ptr CodeFactory::createValueElement()
{
    return new ValueElement();
}
Value_ptr CodeFactory::createValue()
{
    return new Value();
}
ValueList_ptr CodeFactory::createValueList()
{
    return new ValueList();
}
StorableUnit_ptr CodeFactory::createStorableUnit()
{
    return new StorableUnit();
}
MemberUnit_ptr CodeFactory::createMemberUnit()
{
    return new MemberUnit();
}
ParameterUnit_ptr CodeFactory::createParameterUnit()
{
    return new ParameterUnit();
}
ItemUnit_ptr CodeFactory::createItemUnit()
{
    return new ItemUnit();
}
IndexUnit_ptr CodeFactory::createIndexUnit()
{
    return new IndexUnit();
}
SynonymType_ptr CodeFactory::createSynonymType()
{
    return new SynonymType();
}
SequenceType_ptr CodeFactory::createSequenceType()
{
    return new SequenceType();
}
BagType_ptr CodeFactory::createBagType()
{
    return new BagType();
}
SetType_ptr CodeFactory::createSetType()
{
    return new SetType();
}
CodeElement_ptr CodeFactory::createCodeElement()
{
    return new CodeElement();
}
CodeRelationship_ptr CodeFactory::createCodeRelationship()
{
    return new CodeRelationship();
}
LanguageUnit_ptr CodeFactory::createLanguageUnit()
{
    return new LanguageUnit();
}
OrdinalType_ptr CodeFactory::createOrdinalType()
{
    return new OrdinalType();
}
BitstringType_ptr CodeFactory::createBitstringType()
{
    return new BitstringType();
}
OctetType_ptr CodeFactory::createOctetType()
{
    return new OctetType();
}
OctetstringType_ptr CodeFactory::createOctetstringType()
{
    return new OctetstringType();
}
BitType_ptr CodeFactory::createBitType()
{
    return new BitType();
}
Imports_ptr CodeFactory::createImports()
{
    return new Imports();
}
Package_ptr CodeFactory::createPackage()
{
    return new Package();
}
ParameterTo_ptr CodeFactory::createParameterTo()
{
    return new ParameterTo();
}
TemplateType_ptr CodeFactory::createTemplateType()
{
    return new TemplateType();
}
PreprocessorDirective_ptr CodeFactory::createPreprocessorDirective()
{
    return new PreprocessorDirective();
}
MacroDirective_ptr CodeFactory::createMacroDirective()
{
    return new MacroDirective();
}
MacroUnit_ptr CodeFactory::createMacroUnit()
{
    return new MacroUnit();
}
ConditionalDirective_ptr CodeFactory::createConditionalDirective()
{
    return new ConditionalDirective();
}
IncludeDirective_ptr CodeFactory::createIncludeDirective()
{
    return new IncludeDirective();
}
VariantTo_ptr CodeFactory::createVariantTo()
{
    return new VariantTo();
}
Expands_ptr CodeFactory::createExpands()
{
    return new Expands();
}
Redefines_ptr CodeFactory::createRedefines()
{
    return new Redefines();
}
GeneratedFrom_ptr CodeFactory::createGeneratedFrom()
{
    return new GeneratedFrom();
}
Includes_ptr CodeFactory::createIncludes()
{
    return new Includes();
}
HasValue_ptr CodeFactory::createHasValue()
{
    return new HasValue();
}

