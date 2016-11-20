
#
# xpand3.cmake
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

set(xpand3_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/Xpand3Package.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/Xpand3Factory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/Xpand3PackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/Xpand3FactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/SyntaxElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/SyntaxElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/File.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/FileImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/ImportStatement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/ImportStatementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/Identifier.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/IdentifierImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/DeclaredParameter.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/DeclaredParameterImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ExpressionPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ExpressionFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ExpressionPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ExpressionFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/AbstractExpression.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/AbstractExpressionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/BooleanOperation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/BooleanOperationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/Cast.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/CastImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ChainExpression.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ChainExpressionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ConstructorCallExpression.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ConstructorCallExpressionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/FeatureCall.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/FeatureCallImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/CollectionExpression.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/CollectionExpressionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/OperationCall.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/OperationCallImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/TypeSelectExpression.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/TypeSelectExpressionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/GlobalVarExpression.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/GlobalVarExpressionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/IfExpression.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/IfExpressionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/LetExpression.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/LetExpressionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ListLiteral.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ListLiteralImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/Literal.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/LiteralImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/BooleanLiteral.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/BooleanLiteralImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/IntegerLiteral.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/IntegerLiteralImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/NullLiteral.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/NullLiteralImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/RealLiteral.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/RealLiteralImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/StringLiteral.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/StringLiteralImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/SwitchExpression.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/SwitchExpressionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/Case.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/CaseImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/BinaryOperation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/BinaryOperationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/UnaryOperation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/UnaryOperationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/StatementPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/StatementFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/StatementPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/StatementFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/AbstractStatement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/AbstractStatementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ExpandStatement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ExpandStatementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ExpressionStatement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ExpressionStatementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ErrorStatement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ErrorStatementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/AbstractStatementWithBody.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/AbstractStatementWithBodyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/FileStatement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/FileStatementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ForEachStatement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ForEachStatementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/IfStatement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/IfStatementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/LetStatement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/LetStatementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ProtectStatement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ProtectStatementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/TextStatement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/TextStatementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/DeclarationPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/DeclarationFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/DeclarationPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/DeclarationFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/AbstractDeclaration.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/AbstractDeclarationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/AbstractNamedDeclaration.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/AbstractNamedDeclarationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/Definition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/DefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/Extension.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/ExtensionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/AbstractAspect.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/AbstractAspectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/ExtensionAspect.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/ExtensionAspectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/DefinitionAspect.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/DefinitionAspectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/Check.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/CheckImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/CreateExtension.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/CreateExtensionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/JavaExtension.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/JavaExtensionImpl.cpp
)

set(xpand3_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/xpand3.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/Xpand3Package.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/Xpand3Factory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/SyntaxElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/File.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/ImportStatement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/Identifier.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/DeclaredParameter.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ExpressionPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ExpressionFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/AbstractExpression.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/BooleanOperation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/Cast.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ChainExpression.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ConstructorCallExpression.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/FeatureCall.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/CollectionExpression.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/OperationCall.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/TypeSelectExpression.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/GlobalVarExpression.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/IfExpression.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/LetExpression.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ListLiteral.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/Literal.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/BooleanLiteral.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/IntegerLiteral.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/NullLiteral.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/RealLiteral.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/StringLiteral.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/SwitchExpression.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/Case.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/BinaryOperation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/UnaryOperation.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/StatementPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/StatementFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/AbstractStatement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ExpandStatement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ExpressionStatement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ErrorStatement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/AbstractStatementWithBody.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/FileStatement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ForEachStatement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/IfStatement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/LetStatement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ProtectStatement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/TextStatement.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/DeclarationPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/DeclarationFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/AbstractDeclaration.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/AbstractNamedDeclaration.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/Definition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/Extension.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/AbstractAspect.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/ExtensionAspect.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/DefinitionAspect.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/Check.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/CreateExtension.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/JavaExtension.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/Xpand3Factory.hpp DESTINATION include/emf4cpp/xpand3)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/Xpand3Package.hpp DESTINATION include/emf4cpp/xpand3)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/SyntaxElement.hpp DESTINATION include/emf4cpp/xpand3)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/File.hpp DESTINATION include/emf4cpp/xpand3)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/ImportStatement.hpp DESTINATION include/emf4cpp/xpand3)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/Identifier.hpp DESTINATION include/emf4cpp/xpand3)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/DeclaredParameter.hpp DESTINATION include/emf4cpp/xpand3)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression.hpp DESTINATION include/emf4cpp/xpand3/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression_forward.hpp DESTINATION include/emf4cpp/xpand3/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ExpressionFactory.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ExpressionPackage.hpp DESTINATION include/emf4cpp/xpand3/expression)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/AbstractExpression.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/BooleanOperation.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/Cast.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ChainExpression.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ConstructorCallExpression.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/FeatureCall.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/CollectionExpression.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/OperationCall.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/TypeSelectExpression.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/GlobalVarExpression.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/IfExpression.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/LetExpression.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/ListLiteral.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/Literal.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/BooleanLiteral.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/IntegerLiteral.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/NullLiteral.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/RealLiteral.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/StringLiteral.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/SwitchExpression.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/Case.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/BinaryOperation.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/expression/UnaryOperation.hpp DESTINATION include/emf4cpp/xpand3/expression)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement.hpp DESTINATION include/emf4cpp/xpand3/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement_forward.hpp DESTINATION include/emf4cpp/xpand3/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/StatementFactory.hpp DESTINATION include/emf4cpp/xpand3/statement)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/StatementPackage.hpp DESTINATION include/emf4cpp/xpand3/statement)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/AbstractStatement.hpp DESTINATION include/emf4cpp/xpand3/statement)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ExpandStatement.hpp DESTINATION include/emf4cpp/xpand3/statement)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ExpressionStatement.hpp DESTINATION include/emf4cpp/xpand3/statement)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ErrorStatement.hpp DESTINATION include/emf4cpp/xpand3/statement)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/AbstractStatementWithBody.hpp DESTINATION include/emf4cpp/xpand3/statement)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/FileStatement.hpp DESTINATION include/emf4cpp/xpand3/statement)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ForEachStatement.hpp DESTINATION include/emf4cpp/xpand3/statement)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/IfStatement.hpp DESTINATION include/emf4cpp/xpand3/statement)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/LetStatement.hpp DESTINATION include/emf4cpp/xpand3/statement)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/ProtectStatement.hpp DESTINATION include/emf4cpp/xpand3/statement)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/statement/TextStatement.hpp DESTINATION include/emf4cpp/xpand3/statement)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration.hpp DESTINATION include/emf4cpp/xpand3/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration_forward.hpp DESTINATION include/emf4cpp/xpand3/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/DeclarationFactory.hpp DESTINATION include/emf4cpp/xpand3/declaration)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/DeclarationPackage.hpp DESTINATION include/emf4cpp/xpand3/declaration)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/AbstractDeclaration.hpp DESTINATION include/emf4cpp/xpand3/declaration)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/AbstractNamedDeclaration.hpp DESTINATION include/emf4cpp/xpand3/declaration)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/Definition.hpp DESTINATION include/emf4cpp/xpand3/declaration)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/Extension.hpp DESTINATION include/emf4cpp/xpand3/declaration)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/AbstractAspect.hpp DESTINATION include/emf4cpp/xpand3/declaration)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/ExtensionAspect.hpp DESTINATION include/emf4cpp/xpand3/declaration)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/DefinitionAspect.hpp DESTINATION include/emf4cpp/xpand3/declaration)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/Check.hpp DESTINATION include/emf4cpp/xpand3/declaration)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/CreateExtension.hpp DESTINATION include/emf4cpp/xpand3/declaration)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/declaration/JavaExtension.hpp DESTINATION include/emf4cpp/xpand3/declaration)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/xpand3/dllXpand3.hpp DESTINATION include/emf4cpp/xpand3)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../builds/emf4cpp-generator-1.1.0-Linux-x86/include/emf4cpp ../../builds/emf4cpp-generator-1.1.0-Linux-x86/include/emf4cpp)
link_directories(../../builds/emf4cpp-generator-1.1.0-Linux-x86/lib)

add_library(emf4cpp-xpand3 SHARED ${xpand3_HEADERS} ${xpand3_SOURCES})
set_target_properties(emf4cpp-xpand3 PROPERTIES COMPILE_FLAGS "-DMAKE_XPAND3_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-xpand3 emf4cpp-ecore)


install(TARGETS emf4cpp-xpand3 DESTINATION lib)

