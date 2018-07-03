
#
# kdm_code.cmake
# Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
#
# EMF4CPP is free software: you can redistribute it and/or modify it
# under the terms of the GNU Lesser General Public License as published
# by the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# EMF4CPP is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# See the GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
#


set(CMAKE_CXX_FLAGS "-Wall -std=c++11")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -funroll-loops")

set(kdm_code_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodePackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodePackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/AbstractCodeElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/AbstractCodeElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeItem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeItemImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ComputationalObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ComputationalObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ControlElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ControlElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/MethodUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/MethodUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Module.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ModuleImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeAssembly.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeAssemblyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CallableUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CallableUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Datatype.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DatatypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TemplateUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TemplateUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TemplateParameter.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TemplateParameterImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/AbstractCodeRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/AbstractCodeRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/InstanceOf.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/InstanceOfImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CompilationUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CompilationUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DerivedType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DerivedTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ArrayType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ArrayTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/PrimitiveType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/PrimitiveTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/BooleanType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/BooleanTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CharType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CharTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ClassUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ClassUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CompositeType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CompositeTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/RecordType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/RecordTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/EnumeratedType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/EnumeratedTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Extends.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ExtendsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ScaledType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ScaledTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/FloatType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/FloatTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/HasType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/HasTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ImplementationOf.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ImplementationOfImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Implements.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ImplementsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/IntegerType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/IntegerTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/InterfaceUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/InterfaceUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/PointerType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/PointerTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DefinedType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DefinedTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TypeUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TypeUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/RangeType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/RangeTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Signature.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/SignatureImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DataElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DataElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/StringType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/StringTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ChoiceType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ChoiceTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/NamespaceUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/NamespaceUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/VisibleIn.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/VisibleInImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CommentUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CommentUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/SharedUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/SharedUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DecimalType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DecimalTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DateType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DateTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TimeType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TimeTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/VoidType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/VoidTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ValueElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ValueElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Value.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ValueList.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ValueListImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/StorableUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/StorableUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/MemberUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/MemberUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ParameterUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ParameterUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ItemUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ItemUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/IndexUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/IndexUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/SynonymType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/SynonymTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/SequenceType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/SequenceTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/BagType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/BagTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/SetType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/SetTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/LanguageUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/LanguageUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/OrdinalType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/OrdinalTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/BitstringType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/BitstringTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/OctetType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/OctetTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/OctetstringType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/OctetstringTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/BitType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/BitTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Imports.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ImportsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Package.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/PackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ParameterTo.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ParameterToImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TemplateType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TemplateTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/PreprocessorDirective.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/PreprocessorDirectiveImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/MacroDirective.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/MacroDirectiveImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/MacroUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/MacroUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ConditionalDirective.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ConditionalDirectiveImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/IncludeDirective.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/IncludeDirectiveImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/VariantTo.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/VariantToImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Expands.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ExpandsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Redefines.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/RedefinesImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/GeneratedFrom.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/GeneratedFromImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Includes.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/IncludesImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/HasValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/HasValueImpl.cpp
   )
   
set(kdm_code_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodePackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/AbstractCodeElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeItem.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ComputationalObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ControlElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/MethodUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Module.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeAssembly.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CallableUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Datatype.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TemplateUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TemplateParameter.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/AbstractCodeRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/InstanceOf.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CompilationUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DerivedType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ArrayType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/PrimitiveType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/BooleanType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CharType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ClassUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CompositeType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/RecordType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/EnumeratedType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Extends.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ScaledType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/FloatType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/HasType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ImplementationOf.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Implements.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/IntegerType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/InterfaceUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/PointerType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DefinedType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TypeUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/RangeType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Signature.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DataElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/StringType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ChoiceType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/NamespaceUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/VisibleIn.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CommentUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/SharedUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DecimalType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DateType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TimeType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/VoidType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ValueElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Value.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ValueList.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/StorableUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/MemberUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ParameterUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ItemUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/IndexUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/SynonymType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/SequenceType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/BagType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/SetType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/LanguageUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/OrdinalType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/BitstringType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/OctetType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/OctetstringType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/BitType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Imports.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Package.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ParameterTo.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TemplateType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/PreprocessorDirective.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/MacroDirective.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/MacroUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ConditionalDirective.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/IncludeDirective.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/VariantTo.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Expands.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Redefines.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/GeneratedFrom.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Includes.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/HasValue.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeFactory.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodePackage.hpp DESTINATION include/emf4cpp/kdm/code)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/AbstractCodeElement.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeItem.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ComputationalObject.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ControlElement.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/MethodUnit.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Module.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeAssembly.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CallableUnit.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Datatype.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TemplateUnit.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TemplateParameter.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/AbstractCodeRelationship.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/InstanceOf.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CompilationUnit.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeModel.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DerivedType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ArrayType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/PrimitiveType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/BooleanType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CharType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ClassUnit.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CompositeType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/RecordType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/EnumeratedType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Extends.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ScaledType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/FloatType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/HasType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ImplementationOf.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Implements.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/IntegerType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/InterfaceUnit.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/PointerType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DefinedType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TypeUnit.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/RangeType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Signature.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DataElement.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/StringType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ChoiceType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/NamespaceUnit.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/VisibleIn.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CommentUnit.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/SharedUnit.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DecimalType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/DateType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TimeType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/VoidType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ValueElement.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Value.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ValueList.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/StorableUnit.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/MemberUnit.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ParameterUnit.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ItemUnit.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/IndexUnit.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/SynonymType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/SequenceType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/BagType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/SetType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeElement.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/CodeRelationship.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/LanguageUnit.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/OrdinalType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/BitstringType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/OctetType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/OctetstringType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/BitType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Imports.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Package.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ParameterTo.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/TemplateType.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/PreprocessorDirective.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/MacroDirective.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/MacroUnit.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/ConditionalDirective.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/IncludeDirective.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/VariantTo.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Expands.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Redefines.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/GeneratedFrom.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/Includes.hpp DESTINATION include/emf4cpp/kdm/code)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/code/HasValue.hpp DESTINATION include/emf4cpp/kdm/code)
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-kdm_code SHARED ${kdm_code_HEADERS} ${kdm_code_SOURCES})
set_target_properties(emf4cpp-kdm_code PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-kdm_code DESTINATION lib)

