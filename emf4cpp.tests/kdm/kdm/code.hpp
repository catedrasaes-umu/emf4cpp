// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code.hpp
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

#ifndef KDM_CODE_HPP
#define KDM_CODE_HPP

#include "code_forward.hpp"
#include <ecorecpp/mapping.hpp>

// EPackage

// EClass
#include "code/AbstractCodeElement.hpp"
#include "code/CodeItem.hpp"
#include "code/ComputationalObject.hpp"
#include "code/ControlElement.hpp"
#include "code/MethodUnit.hpp"
#include "code/Module.hpp"
#include "code/CodeAssembly.hpp"
#include "code/CallableUnit.hpp"
#include "code/Datatype.hpp"
#include "code/TemplateUnit.hpp"
#include "code/TemplateParameter.hpp"
#include "code/AbstractCodeRelationship.hpp"
#include "code/InstanceOf.hpp"
#include "code/CompilationUnit.hpp"
#include "code/CodeModel.hpp"
#include "code/DerivedType.hpp"
#include "code/ArrayType.hpp"
#include "code/PrimitiveType.hpp"
#include "code/BooleanType.hpp"
#include "code/CharType.hpp"
#include "code/ClassUnit.hpp"
#include "code/CompositeType.hpp"
#include "code/RecordType.hpp"
#include "code/EnumeratedType.hpp"
#include "code/Extends.hpp"
#include "code/ScaledType.hpp"
#include "code/FloatType.hpp"
#include "code/HasType.hpp"
#include "code/ImplementationOf.hpp"
#include "code/Implements.hpp"
#include "code/IntegerType.hpp"
#include "code/InterfaceUnit.hpp"
#include "code/PointerType.hpp"
#include "code/DefinedType.hpp"
#include "code/TypeUnit.hpp"
#include "code/RangeType.hpp"
#include "code/Signature.hpp"
#include "code/DataElement.hpp"
#include "code/StringType.hpp"
#include "code/ChoiceType.hpp"
#include "code/NamespaceUnit.hpp"
#include "code/VisibleIn.hpp"
#include "code/CommentUnit.hpp"
#include "code/SharedUnit.hpp"
#include "code/DecimalType.hpp"
#include "code/DateType.hpp"
#include "code/TimeType.hpp"
#include "code/VoidType.hpp"
#include "code/ValueElement.hpp"
#include "code/Value.hpp"
#include "code/ValueList.hpp"
#include "code/StorableUnit.hpp"
#include "code/MemberUnit.hpp"
#include "code/ParameterUnit.hpp"
#include "code/ItemUnit.hpp"
#include "code/IndexUnit.hpp"
#include "code/SynonymType.hpp"
#include "code/SequenceType.hpp"
#include "code/BagType.hpp"
#include "code/SetType.hpp"
#include "code/CodeElement.hpp"
#include "code/CodeRelationship.hpp"
#include "code/LanguageUnit.hpp"
#include "code/OrdinalType.hpp"
#include "code/BitstringType.hpp"
#include "code/OctetType.hpp"
#include "code/OctetstringType.hpp"
#include "code/BitType.hpp"
#include "code/Imports.hpp"
#include "code/Package.hpp"
#include "code/ParameterTo.hpp"
#include "code/TemplateType.hpp"
#include "code/PreprocessorDirective.hpp"
#include "code/MacroDirective.hpp"
#include "code/MacroUnit.hpp"
#include "code/ConditionalDirective.hpp"
#include "code/IncludeDirective.hpp"
#include "code/VariantTo.hpp"
#include "code/Expands.hpp"
#include "code/Redefines.hpp"
#include "code/GeneratedFrom.hpp"
#include "code/Includes.hpp"
#include "code/HasValue.hpp"

// Package & Factory
#include "kdm/code/CodePackage.hpp"
#include "kdm/code/CodeFactory.hpp"

#endif // KDM_CODE_HPP
