// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/CodeFactory.hpp
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

#ifndef _KDM_CODEFACTORY_HPP
#define _KDM_CODEFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/code.hpp>

namespace kdm
{
    namespace code
    {

        class CodeFactory: public virtual ::ecore::EFactory
        {
        public:

            static CodeFactory_ptr _instance();

            virtual AbstractCodeElement_ptr createAbstractCodeElement();
            virtual CodeItem_ptr createCodeItem();
            virtual ComputationalObject_ptr createComputationalObject();
            virtual ControlElement_ptr createControlElement();
            virtual MethodUnit_ptr createMethodUnit();
            virtual Module_ptr createModule();
            virtual CodeAssembly_ptr createCodeAssembly();
            virtual CallableUnit_ptr createCallableUnit();
            virtual Datatype_ptr createDatatype();
            virtual TemplateUnit_ptr createTemplateUnit();
            virtual TemplateParameter_ptr createTemplateParameter();
            virtual AbstractCodeRelationship_ptr createAbstractCodeRelationship();
            virtual InstanceOf_ptr createInstanceOf();
            virtual CompilationUnit_ptr createCompilationUnit();
            virtual CodeModel_ptr createCodeModel();
            virtual DerivedType_ptr createDerivedType();
            virtual ArrayType_ptr createArrayType();
            virtual PrimitiveType_ptr createPrimitiveType();
            virtual BooleanType_ptr createBooleanType();
            virtual CharType_ptr createCharType();
            virtual ClassUnit_ptr createClassUnit();
            virtual CompositeType_ptr createCompositeType();
            virtual RecordType_ptr createRecordType();
            virtual EnumeratedType_ptr createEnumeratedType();
            virtual Extends_ptr createExtends();
            virtual ScaledType_ptr createScaledType();
            virtual FloatType_ptr createFloatType();
            virtual HasType_ptr createHasType();
            virtual ImplementationOf_ptr createImplementationOf();
            virtual Implements_ptr createImplements();
            virtual IntegerType_ptr createIntegerType();
            virtual InterfaceUnit_ptr createInterfaceUnit();
            virtual PointerType_ptr createPointerType();
            virtual DefinedType_ptr createDefinedType();
            virtual TypeUnit_ptr createTypeUnit();
            virtual RangeType_ptr createRangeType();
            virtual Signature_ptr createSignature();
            virtual DataElement_ptr createDataElement();
            virtual StringType_ptr createStringType();
            virtual ChoiceType_ptr createChoiceType();
            virtual NamespaceUnit_ptr createNamespaceUnit();
            virtual VisibleIn_ptr createVisibleIn();
            virtual CommentUnit_ptr createCommentUnit();
            virtual SharedUnit_ptr createSharedUnit();
            virtual DecimalType_ptr createDecimalType();
            virtual DateType_ptr createDateType();
            virtual TimeType_ptr createTimeType();
            virtual VoidType_ptr createVoidType();
            virtual ValueElement_ptr createValueElement();
            virtual Value_ptr createValue();
            virtual ValueList_ptr createValueList();
            virtual StorableUnit_ptr createStorableUnit();
            virtual MemberUnit_ptr createMemberUnit();
            virtual ParameterUnit_ptr createParameterUnit();
            virtual ItemUnit_ptr createItemUnit();
            virtual IndexUnit_ptr createIndexUnit();
            virtual SynonymType_ptr createSynonymType();
            virtual SequenceType_ptr createSequenceType();
            virtual BagType_ptr createBagType();
            virtual SetType_ptr createSetType();
            virtual CodeElement_ptr createCodeElement();
            virtual CodeRelationship_ptr createCodeRelationship();
            virtual LanguageUnit_ptr createLanguageUnit();
            virtual OrdinalType_ptr createOrdinalType();
            virtual BitstringType_ptr createBitstringType();
            virtual OctetType_ptr createOctetType();
            virtual OctetstringType_ptr createOctetstringType();
            virtual BitType_ptr createBitType();
            virtual Imports_ptr createImports();
            virtual Package_ptr createPackage();
            virtual ParameterTo_ptr createParameterTo();
            virtual TemplateType_ptr createTemplateType();
            virtual PreprocessorDirective_ptr createPreprocessorDirective();
            virtual MacroDirective_ptr createMacroDirective();
            virtual MacroUnit_ptr createMacroUnit();
            virtual ConditionalDirective_ptr createConditionalDirective();
            virtual IncludeDirective_ptr createIncludeDirective();
            virtual VariantTo_ptr createVariantTo();
            virtual Expands_ptr createExpands();
            virtual Redefines_ptr createRedefines();
            virtual GeneratedFrom_ptr createGeneratedFrom();
            virtual Includes_ptr createIncludes();
            virtual HasValue_ptr createHasValue();

            virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EJavaObject const& _instanceValue);

        protected:

            static std::auto_ptr< CodeFactory > s_instance;

            CodeFactory();

        };

    } // code
} // kdm

#endif // _KDM_CODEFACTORY_HPP

