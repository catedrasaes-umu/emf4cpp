// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/CodeFactory.hpp
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

#ifndef _KDM_CODEFACTORY_HPP
#define _KDM_CODEFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/code.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace code
    {

        class EXPORT_KDM_DLL CodeFactory : public virtual ::ecore::EFactory
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

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static boost::intrusive_ptr< CodeFactory > s_holder;

            CodeFactory();

        };

        /** An object creation helper
         *
         * Usage (add namespaces as required):
         *   auto p = create<MyClass>();
         *
         */
        template< class T > inline boost::intrusive_ptr< T > create()
        {
            return boost::intrusive_ptr< T >();
        }

        template< > inline AbstractCodeElement_ptr create< AbstractCodeElement >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createAbstractCodeElement();
        }

        template< > inline CodeItem_ptr create< CodeItem >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createCodeItem();
        }

        template< > inline ComputationalObject_ptr create< ComputationalObject >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createComputationalObject();
        }

        template< > inline ControlElement_ptr create< ControlElement >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createControlElement();
        }

        template< > inline MethodUnit_ptr create< MethodUnit >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createMethodUnit();
        }

        template< > inline Module_ptr create< Module >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createModule();
        }

        template< > inline CodeAssembly_ptr create< CodeAssembly >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createCodeAssembly();
        }

        template< > inline CallableUnit_ptr create< CallableUnit >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createCallableUnit();
        }

        template< > inline Datatype_ptr create< Datatype >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createDatatype();
        }

        template< > inline TemplateUnit_ptr create< TemplateUnit >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createTemplateUnit();
        }

        template< > inline TemplateParameter_ptr create< TemplateParameter >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createTemplateParameter();
        }

        template< > inline AbstractCodeRelationship_ptr create<
                AbstractCodeRelationship >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createAbstractCodeRelationship();
        }

        template< > inline InstanceOf_ptr create< InstanceOf >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createInstanceOf();
        }

        template< > inline CompilationUnit_ptr create< CompilationUnit >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createCompilationUnit();
        }

        template< > inline CodeModel_ptr create< CodeModel >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createCodeModel();
        }

        template< > inline DerivedType_ptr create< DerivedType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createDerivedType();
        }

        template< > inline ArrayType_ptr create< ArrayType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createArrayType();
        }

        template< > inline PrimitiveType_ptr create< PrimitiveType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createPrimitiveType();
        }

        template< > inline BooleanType_ptr create< BooleanType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createBooleanType();
        }

        template< > inline CharType_ptr create< CharType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createCharType();
        }

        template< > inline ClassUnit_ptr create< ClassUnit >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createClassUnit();
        }

        template< > inline CompositeType_ptr create< CompositeType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createCompositeType();
        }

        template< > inline RecordType_ptr create< RecordType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createRecordType();
        }

        template< > inline EnumeratedType_ptr create< EnumeratedType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createEnumeratedType();
        }

        template< > inline Extends_ptr create< Extends >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createExtends();
        }

        template< > inline ScaledType_ptr create< ScaledType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createScaledType();
        }

        template< > inline FloatType_ptr create< FloatType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createFloatType();
        }

        template< > inline HasType_ptr create< HasType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createHasType();
        }

        template< > inline ImplementationOf_ptr create< ImplementationOf >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createImplementationOf();
        }

        template< > inline Implements_ptr create< Implements >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createImplements();
        }

        template< > inline IntegerType_ptr create< IntegerType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createIntegerType();
        }

        template< > inline InterfaceUnit_ptr create< InterfaceUnit >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createInterfaceUnit();
        }

        template< > inline PointerType_ptr create< PointerType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createPointerType();
        }

        template< > inline DefinedType_ptr create< DefinedType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createDefinedType();
        }

        template< > inline TypeUnit_ptr create< TypeUnit >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createTypeUnit();
        }

        template< > inline RangeType_ptr create< RangeType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createRangeType();
        }

        template< > inline Signature_ptr create< Signature >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createSignature();
        }

        template< > inline DataElement_ptr create< DataElement >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createDataElement();
        }

        template< > inline StringType_ptr create< StringType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createStringType();
        }

        template< > inline ChoiceType_ptr create< ChoiceType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createChoiceType();
        }

        template< > inline NamespaceUnit_ptr create< NamespaceUnit >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createNamespaceUnit();
        }

        template< > inline VisibleIn_ptr create< VisibleIn >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createVisibleIn();
        }

        template< > inline CommentUnit_ptr create< CommentUnit >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createCommentUnit();
        }

        template< > inline SharedUnit_ptr create< SharedUnit >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createSharedUnit();
        }

        template< > inline DecimalType_ptr create< DecimalType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createDecimalType();
        }

        template< > inline DateType_ptr create< DateType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createDateType();
        }

        template< > inline TimeType_ptr create< TimeType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createTimeType();
        }

        template< > inline VoidType_ptr create< VoidType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createVoidType();
        }

        template< > inline ValueElement_ptr create< ValueElement >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createValueElement();
        }

        template< > inline Value_ptr create< Value >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createValue();
        }

        template< > inline ValueList_ptr create< ValueList >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createValueList();
        }

        template< > inline StorableUnit_ptr create< StorableUnit >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createStorableUnit();
        }

        template< > inline MemberUnit_ptr create< MemberUnit >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createMemberUnit();
        }

        template< > inline ParameterUnit_ptr create< ParameterUnit >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createParameterUnit();
        }

        template< > inline ItemUnit_ptr create< ItemUnit >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createItemUnit();
        }

        template< > inline IndexUnit_ptr create< IndexUnit >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createIndexUnit();
        }

        template< > inline SynonymType_ptr create< SynonymType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createSynonymType();
        }

        template< > inline SequenceType_ptr create< SequenceType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createSequenceType();
        }

        template< > inline BagType_ptr create< BagType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createBagType();
        }

        template< > inline SetType_ptr create< SetType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createSetType();
        }

        template< > inline CodeElement_ptr create< CodeElement >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createCodeElement();
        }

        template< > inline CodeRelationship_ptr create< CodeRelationship >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createCodeRelationship();
        }

        template< > inline LanguageUnit_ptr create< LanguageUnit >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createLanguageUnit();
        }

        template< > inline OrdinalType_ptr create< OrdinalType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createOrdinalType();
        }

        template< > inline BitstringType_ptr create< BitstringType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createBitstringType();
        }

        template< > inline OctetType_ptr create< OctetType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createOctetType();
        }

        template< > inline OctetstringType_ptr create< OctetstringType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createOctetstringType();
        }

        template< > inline BitType_ptr create< BitType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createBitType();
        }

        template< > inline Imports_ptr create< Imports >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createImports();
        }

        template< > inline Package_ptr create< Package >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createPackage();
        }

        template< > inline ParameterTo_ptr create< ParameterTo >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createParameterTo();
        }

        template< > inline TemplateType_ptr create< TemplateType >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createTemplateType();
        }

        template< > inline PreprocessorDirective_ptr create<
                PreprocessorDirective >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createPreprocessorDirective();
        }

        template< > inline MacroDirective_ptr create< MacroDirective >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createMacroDirective();
        }

        template< > inline MacroUnit_ptr create< MacroUnit >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createMacroUnit();
        }

        template< > inline ConditionalDirective_ptr create< ConditionalDirective >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createConditionalDirective();
        }

        template< > inline IncludeDirective_ptr create< IncludeDirective >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createIncludeDirective();
        }

        template< > inline VariantTo_ptr create< VariantTo >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createVariantTo();
        }

        template< > inline Expands_ptr create< Expands >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createExpands();
        }

        template< > inline Redefines_ptr create< Redefines >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createRedefines();
        }

        template< > inline GeneratedFrom_ptr create< GeneratedFrom >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createGeneratedFrom();
        }

        template< > inline Includes_ptr create< Includes >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createIncludes();
        }

        template< > inline HasValue_ptr create< HasValue >()
        {
            auto eFactory = CodePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CodeFactory* >(eFactory.get());
            return packageFactory->createHasValue();
        }

    } // code
} // kdm

#endif // _KDM_CODEFACTORY_HPP

