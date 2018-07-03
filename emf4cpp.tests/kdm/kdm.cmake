
#
# kdm.cmake
# Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
# Copyright (C) INCHRON GmbH 2016 <soeren.henning@inchron.com>
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

set(kdm_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/KdmPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/KdmFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/KdmPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/KdmFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/AbstractActionRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/AbstractActionRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ControlFlow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ControlFlowImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Calls.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CallsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Creates.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CreatesImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Reads.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ReadsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Writes.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/WritesImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CompliesTo.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CompliesToImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Flow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/FlowImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/TrueFlow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/TrueFlowImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/FalseFlow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/FalseFlowImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/GuardedFlow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/GuardedFlowImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/UsesType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/UsesTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Addresses.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/AddressesImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Throws.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ThrowsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Dispatches.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/DispatchesImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/EntryFlow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/EntryFlowImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/BlockUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/BlockUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExceptionUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExceptionUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/TryUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/TryUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/FinallyUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/FinallyUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CatchUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CatchUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExitFlow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExitFlowImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExceptionFlow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExceptionFlowImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/AbstractBuildElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/AbstractBuildElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildDescription.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildDescriptionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SymbolicLink.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SymbolicLinkImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/AbstractBuildRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/AbstractBuildRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/LinksTo.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/LinksToImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Consumes.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/ConsumesImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildComponent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildComponentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Supplier.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SupplierImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Tool.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/ToolImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SuppliedBy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SuppliedByImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Library.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/LibraryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildStep.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildStepImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Produces.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/ProducesImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SupportedBy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SupportedByImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildProduct.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildProductImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/DescribedBy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/DescribedByImpl.cpp
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
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/AbstractConceptualElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/AbstractConceptualElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/TermUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/TermUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualContainer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualContainerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/FactUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/FactUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/AbstractConceptualRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/AbstractConceptualRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/BehaviorUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/BehaviorUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/RuleUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/RuleUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ScenarioUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ScenarioUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualFlow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualFlowImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualRole.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualRoleImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/CorePackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/CoreFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/CorePackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/CoreFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/Element.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/ElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/ModelElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/ModelElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/KDMEntity.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/KDMEntityImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/KDMRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/KDMRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/AggregatedRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/AggregatedRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractDataElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractDataElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/IndexElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/IndexElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/UniqueKey.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/UniqueKeyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/Index.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/IndexImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractDataRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractDataRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/KeyRelation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/KeyRelationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReferenceKey.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReferenceKeyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataContainer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataContainerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/Catalog.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/CatalogImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalSchema.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalSchemaImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ColumnSet.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ColumnSetImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalTable.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalTableImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalView.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalViewImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RecordFile.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RecordFileImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/XMLSchema.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/XMLSchemaImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractContentElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractContentElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ComplexContentType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ComplexContentTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AllContent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AllContentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/SeqContent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/SeqContentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ChoiceContent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ChoiceContentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentItem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentItemImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/GroupContent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/GroupContentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentRestriction.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentRestrictionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/SimpleContentType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/SimpleContentTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ExtendedDataElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ExtendedDataElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/MixedContent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/MixedContentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentReference.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentReferenceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataAction.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataActionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReadsColumnSet.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReadsColumnSetImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentAttribute.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentAttributeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/TypedBy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/TypedByImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReferenceTo.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReferenceToImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RestrictionOf.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RestrictionOfImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ExtensionTo.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ExtensionToImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DatatypeOf.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DatatypeOfImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/HasContent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/HasContentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/WritesColumnSet.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/WritesColumnSetImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ProducesDataEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ProducesDataEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataSegment.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataSegmentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ManagesData.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ManagesDataImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/AbstractEventElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/AbstractEventElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/Event.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/AbstractEventRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/AbstractEventRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/State.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/StateImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/Transition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/TransitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/OnEntry.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/OnEntryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/OnExit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/OnExitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventAction.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventActionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ReadsState.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ReadsStateImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ProducesEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ProducesEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ConsumesEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ConsumesEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/NextState.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/NextStateImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/InitialState.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/InitialStateImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/HasState.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/HasStateImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourcePackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourcePackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceRef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceRefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceRegion.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceRegionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/AbstractInventoryElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/AbstractInventoryElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryItem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryItemImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceFile.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceFileImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Image.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ImageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ResourceDescription.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ResourceDescriptionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Configuration.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ConfigurationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryContainer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryContainerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Directory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/DirectoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Project.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ProjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/AbstractInventoryRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/AbstractInventoryRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/BinaryFile.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/BinaryFileImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ExecutableFile.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ExecutableFileImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/DependsOn.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/DependsOnImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/AbstractPlatformElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/AbstractPlatformElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/AbstractPlatformRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/AbstractPlatformRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Requires.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/RequiresImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ResourceType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ResourceTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/NamingResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/NamingResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/MarshalledResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/MarshalledResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/MessagingResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/MessagingResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/FileResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/FileResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ExecutionResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ExecutionResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformAction.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformActionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ExternalActor.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ExternalActorImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DataManager.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DataManagerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/BindsTo.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/BindsToImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/LockResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/LockResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedSoftwareSystem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedSoftwareSystemImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Machine.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/MachineImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedComponent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedComponentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Loads.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/LoadsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Spawns.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/SpawnsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/RuntimeResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/RuntimeResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Thread.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ThreadImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Process.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ProcessImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ReadsResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ReadsResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/WritesResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/WritesResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ManagesResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ManagesResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DefinedBy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DefinedByImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/StreamResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/StreamResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructurePackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructurePackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/AbstractStructureElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/AbstractStructureElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/Subsystem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/SubsystemImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/Layer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/LayerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/Component.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/ComponentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/SoftwareSystem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/SoftwareSystemImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/AbstractStructureRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/AbstractStructureRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/ArchitectureView.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/ArchitectureViewImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KdmPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KdmFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KdmPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KdmFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KDMFramework.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KDMFrameworkImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KDMModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KDMModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Audit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/AuditImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Segment.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/SegmentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Attribute.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/AttributeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Annotation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/AnnotationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TagDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TagDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/ExtendedValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/ExtendedValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Stereotype.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/StereotypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/ExtensionFamily.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/ExtensionFamilyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TaggedRef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TaggedRefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TaggedValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TaggedValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UiPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UiFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UiPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UiFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/AbstractUIElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/AbstractUIElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIDisplay.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIDisplayImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/Screen.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ScreenImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/Report.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ReportImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/AbstractUIRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/AbstractUIRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UILayout.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UILayoutImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIField.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIFieldImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/DisplaysImage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/DisplaysImageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/Displays.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/DisplaysImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIFlow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIFlowImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIAction.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIActionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ReadsUI.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ReadsUIImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/WritesUI.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/WritesUIImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ManagesUI.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ManagesUIImpl.cpp
)

set(kdm_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/kdm.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/KdmPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/KdmFactory.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/kdm/action.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/AbstractActionRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ControlFlow.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Calls.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Creates.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Reads.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Writes.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CompliesTo.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Flow.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/TrueFlow.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/FalseFlow.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/GuardedFlow.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/UsesType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Addresses.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Throws.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Dispatches.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/EntryFlow.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/BlockUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExceptionUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/TryUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/FinallyUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CatchUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExitFlow.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExceptionFlow.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/kdm/build.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/AbstractBuildElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildDescription.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SymbolicLink.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/AbstractBuildRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/LinksTo.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Consumes.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildComponent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Supplier.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Tool.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SuppliedBy.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Library.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildStep.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Produces.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SupportedBy.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildProduct.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/DescribedBy.hpp
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
	${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/AbstractConceptualElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/TermUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualContainer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/FactUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/AbstractConceptualRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/BehaviorUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/RuleUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ScenarioUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualFlow.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualRole.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/kdm/core.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/CorePackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/CoreFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/Element.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/ModelElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/KDMEntity.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/KDMRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/AggregatedRelationship.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/kdm/data.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractDataElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/IndexElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/UniqueKey.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/Index.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractDataRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/KeyRelation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReferenceKey.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataContainer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/Catalog.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalSchema.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ColumnSet.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalTable.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalView.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RecordFile.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/XMLSchema.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractContentElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ComplexContentType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AllContent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/SeqContent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ChoiceContent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentItem.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/GroupContent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentRestriction.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/SimpleContentType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ExtendedDataElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/MixedContent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentReference.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataAction.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReadsColumnSet.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentAttribute.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/TypedBy.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReferenceTo.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RestrictionOf.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ExtensionTo.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DatatypeOf.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/HasContent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/WritesColumnSet.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ProducesDataEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataSegment.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ManagesData.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/kdm/event.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/AbstractEventElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/Event.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/AbstractEventRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/State.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/Transition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/OnEntry.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/OnExit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventAction.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ReadsState.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ProducesEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ConsumesEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/NextState.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/InitialState.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/HasState.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/kdm/source.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourcePackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceRef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceRegion.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/AbstractInventoryElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryItem.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceFile.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Image.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ResourceDescription.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Configuration.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryContainer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Directory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Project.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/AbstractInventoryRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/BinaryFile.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ExecutableFile.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/DependsOn.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryRelationship.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/AbstractPlatformElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/AbstractPlatformRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Requires.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ResourceType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/NamingResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/MarshalledResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/MessagingResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/FileResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ExecutionResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformAction.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ExternalActor.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DataManager.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/BindsTo.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/LockResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedSoftwareSystem.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Machine.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedComponent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Loads.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Spawns.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/RuntimeResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Thread.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Process.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ReadsResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/WritesResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ManagesResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DefinedBy.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/StreamResource.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructurePackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/AbstractStructureElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/Subsystem.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/Layer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/Component.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/SoftwareSystem.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/AbstractStructureRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/ArchitectureView.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureElement.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KdmPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KdmFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KDMFramework.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KDMModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Audit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Segment.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Attribute.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Annotation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TagDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/ExtendedValue.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Stereotype.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/ExtensionFamily.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TaggedRef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TaggedValue.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UiPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UiFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/AbstractUIElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIDisplay.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/Screen.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/Report.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/AbstractUIRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UILayout.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIField.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/DisplaysImage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/Displays.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIFlow.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIAction.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ReadsUI.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/WritesUI.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ManagesUI.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/KdmFactory.hpp DESTINATION include/emf4cpp/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/KdmPackage.hpp DESTINATION include/emf4cpp/kdm)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionFactory.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionPackage.hpp DESTINATION include/emf4cpp/kdm/action)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionElement.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/AbstractActionRelationship.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ControlFlow.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Calls.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Creates.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Reads.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Writes.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CompliesTo.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Flow.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/TrueFlow.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/FalseFlow.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/GuardedFlow.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/UsesType.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Addresses.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionRelationship.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Throws.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Dispatches.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/EntryFlow.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/BlockUnit.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExceptionUnit.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/TryUnit.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/FinallyUnit.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CatchUnit.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExitFlow.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExceptionFlow.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildFactory.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildPackage.hpp DESTINATION include/emf4cpp/kdm/build)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/AbstractBuildElement.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildResource.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildDescription.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SymbolicLink.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/AbstractBuildRelationship.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/LinksTo.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Consumes.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildModel.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildComponent.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Supplier.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Tool.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildElement.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildRelationship.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SuppliedBy.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Library.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildStep.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Produces.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SupportedBy.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildProduct.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/DescribedBy.hpp DESTINATION include/emf4cpp/kdm/build)
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
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualFactory.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualPackage.hpp DESTINATION include/emf4cpp/kdm/conceptual)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualModel.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/AbstractConceptualElement.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/TermUnit.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualContainer.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/FactUnit.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/AbstractConceptualRelationship.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualRelationship.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/BehaviorUnit.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/RuleUnit.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ScenarioUnit.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualFlow.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualElement.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualRole.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/CoreFactory.hpp DESTINATION include/emf4cpp/kdm/core)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/CorePackage.hpp DESTINATION include/emf4cpp/kdm/core)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/Element.hpp DESTINATION include/emf4cpp/kdm/core)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/ModelElement.hpp DESTINATION include/emf4cpp/kdm/core)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/KDMEntity.hpp DESTINATION include/emf4cpp/kdm/core)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/KDMRelationship.hpp DESTINATION include/emf4cpp/kdm/core)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/AggregatedRelationship.hpp DESTINATION include/emf4cpp/kdm/core)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataFactory.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataPackage.hpp DESTINATION include/emf4cpp/kdm/data)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataModel.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractDataElement.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataResource.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/IndexElement.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/UniqueKey.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/Index.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractDataRelationship.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/KeyRelation.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReferenceKey.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataContainer.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/Catalog.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalSchema.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ColumnSet.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalTable.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalView.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RecordFile.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataEvent.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/XMLSchema.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractContentElement.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ComplexContentType.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AllContent.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/SeqContent.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ChoiceContent.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentItem.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/GroupContent.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentRestriction.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/SimpleContentType.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ExtendedDataElement.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataRelationship.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/MixedContent.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentReference.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataAction.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReadsColumnSet.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentAttribute.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/TypedBy.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReferenceTo.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RestrictionOf.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ExtensionTo.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DatatypeOf.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/HasContent.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/WritesColumnSet.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ProducesDataEvent.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataSegment.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentElement.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ManagesData.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventFactory.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventPackage.hpp DESTINATION include/emf4cpp/kdm/event)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventModel.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/AbstractEventElement.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/Event.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/AbstractEventRelationship.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventRelationship.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventResource.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/State.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/Transition.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/OnEntry.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/OnExit.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventAction.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ReadsState.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ProducesEvent.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ConsumesEvent.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/NextState.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/InitialState.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventElement.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/HasState.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceFactory.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourcePackage.hpp DESTINATION include/emf4cpp/kdm/source)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceRef.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceRegion.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryModel.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/AbstractInventoryElement.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryItem.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceFile.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Image.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ResourceDescription.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Configuration.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryContainer.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Directory.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Project.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/AbstractInventoryRelationship.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/BinaryFile.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ExecutableFile.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/DependsOn.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryElement.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryRelationship.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformFactory.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformPackage.hpp DESTINATION include/emf4cpp/kdm/platform)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/AbstractPlatformElement.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformModel.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/AbstractPlatformRelationship.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Requires.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ResourceType.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/NamingResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/MarshalledResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/MessagingResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/FileResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ExecutionResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformAction.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ExternalActor.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DataManager.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/BindsTo.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformElement.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformRelationship.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformEvent.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/LockResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedSoftwareSystem.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Machine.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedComponent.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Loads.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Spawns.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/RuntimeResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Thread.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Process.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ReadsResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/WritesResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ManagesResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DefinedBy.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/StreamResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureFactory.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructurePackage.hpp DESTINATION include/emf4cpp/kdm/structure)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/AbstractStructureElement.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/Subsystem.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/Layer.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureModel.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/Component.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/SoftwareSystem.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/AbstractStructureRelationship.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureRelationship.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/ArchitectureView.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureElement.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KdmFactory.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KdmPackage.hpp DESTINATION include/emf4cpp/kdm/kdm)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KDMFramework.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KDMModel.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Audit.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Segment.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Attribute.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Annotation.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TagDefinition.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/ExtendedValue.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Stereotype.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/ExtensionFamily.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TaggedRef.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TaggedValue.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UiFactory.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UiPackage.hpp DESTINATION include/emf4cpp/kdm/ui)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/AbstractUIElement.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIResource.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIDisplay.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/Screen.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/Report.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIModel.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/AbstractUIRelationship.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UILayout.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIField.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/DisplaysImage.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/Displays.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIFlow.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIElement.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIRelationship.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIAction.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIEvent.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ReadsUI.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/WritesUI.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ManagesUI.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/dllKdm.hpp DESTINATION include/emf4cpp/kdm)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../builds/emf4cpp-generator-2.0.0/include/emf4cpp ../../builds/emf4cpp-generator-2.0.0/include/emf4cpp)
link_directories(../../builds/emf4cpp-generator-2.0.0/lib)

add_library(emf4cpp-kdm SHARED ${kdm_HEADERS} ${kdm_SOURCES})
set_target_properties(emf4cpp-kdm PROPERTIES COMPILE_FLAGS "-DMAKE_KDM_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-kdm emf4cpp-ecore)

install(TARGETS emf4cpp-kdm DESTINATION lib)

