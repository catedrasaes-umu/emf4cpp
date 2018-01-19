
#
# xpand3.pri
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


SOURCES += \
    xpand3.cpp \
    xpand3/Xpand3Package.cpp \
    xpand3/Xpand3Factory.cpp \
    xpand3/Xpand3PackageImpl.cpp \
    xpand3/Xpand3FactoryImpl.cpp \
    xpand3/SyntaxElement.cpp \
    xpand3/SyntaxElementImpl.cpp \
    xpand3/File.cpp \
    xpand3/FileImpl.cpp \
    xpand3/ImportStatement.cpp \
    xpand3/ImportStatementImpl.cpp \
    xpand3/Identifier.cpp \
    xpand3/IdentifierImpl.cpp \
    xpand3/DeclaredParameter.cpp \
    xpand3/DeclaredParameterImpl.cpp \
    xpand3/expression.cpp \
    xpand3/expression/ExpressionPackage.cpp \
    xpand3/expression/ExpressionFactory.cpp \
    xpand3/expression/ExpressionPackageImpl.cpp \
    xpand3/expression/ExpressionFactoryImpl.cpp \
    xpand3/expression/AbstractExpression.cpp \
    xpand3/expression/AbstractExpressionImpl.cpp \
    xpand3/expression/BooleanOperation.cpp \
    xpand3/expression/BooleanOperationImpl.cpp \
    xpand3/expression/Cast.cpp \
    xpand3/expression/CastImpl.cpp \
    xpand3/expression/ChainExpression.cpp \
    xpand3/expression/ChainExpressionImpl.cpp \
    xpand3/expression/ConstructorCallExpression.cpp \
    xpand3/expression/ConstructorCallExpressionImpl.cpp \
    xpand3/expression/FeatureCall.cpp \
    xpand3/expression/FeatureCallImpl.cpp \
    xpand3/expression/CollectionExpression.cpp \
    xpand3/expression/CollectionExpressionImpl.cpp \
    xpand3/expression/OperationCall.cpp \
    xpand3/expression/OperationCallImpl.cpp \
    xpand3/expression/TypeSelectExpression.cpp \
    xpand3/expression/TypeSelectExpressionImpl.cpp \
    xpand3/expression/GlobalVarExpression.cpp \
    xpand3/expression/GlobalVarExpressionImpl.cpp \
    xpand3/expression/IfExpression.cpp \
    xpand3/expression/IfExpressionImpl.cpp \
    xpand3/expression/LetExpression.cpp \
    xpand3/expression/LetExpressionImpl.cpp \
    xpand3/expression/ListLiteral.cpp \
    xpand3/expression/ListLiteralImpl.cpp \
    xpand3/expression/Literal.cpp \
    xpand3/expression/LiteralImpl.cpp \
    xpand3/expression/BooleanLiteral.cpp \
    xpand3/expression/BooleanLiteralImpl.cpp \
    xpand3/expression/IntegerLiteral.cpp \
    xpand3/expression/IntegerLiteralImpl.cpp \
    xpand3/expression/NullLiteral.cpp \
    xpand3/expression/NullLiteralImpl.cpp \
    xpand3/expression/RealLiteral.cpp \
    xpand3/expression/RealLiteralImpl.cpp \
    xpand3/expression/StringLiteral.cpp \
    xpand3/expression/StringLiteralImpl.cpp \
    xpand3/expression/SwitchExpression.cpp \
    xpand3/expression/SwitchExpressionImpl.cpp \
    xpand3/expression/Case.cpp \
    xpand3/expression/CaseImpl.cpp \
    xpand3/expression/BinaryOperation.cpp \
    xpand3/expression/BinaryOperationImpl.cpp \
    xpand3/expression/UnaryOperation.cpp \
    xpand3/expression/UnaryOperationImpl.cpp \
    xpand3/statement.cpp \
    xpand3/statement/StatementPackage.cpp \
    xpand3/statement/StatementFactory.cpp \
    xpand3/statement/StatementPackageImpl.cpp \
    xpand3/statement/StatementFactoryImpl.cpp \
    xpand3/statement/AbstractStatement.cpp \
    xpand3/statement/AbstractStatementImpl.cpp \
    xpand3/statement/ExpandStatement.cpp \
    xpand3/statement/ExpandStatementImpl.cpp \
    xpand3/statement/ExpressionStatement.cpp \
    xpand3/statement/ExpressionStatementImpl.cpp \
    xpand3/statement/ErrorStatement.cpp \
    xpand3/statement/ErrorStatementImpl.cpp \
    xpand3/statement/AbstractStatementWithBody.cpp \
    xpand3/statement/AbstractStatementWithBodyImpl.cpp \
    xpand3/statement/FileStatement.cpp \
    xpand3/statement/FileStatementImpl.cpp \
    xpand3/statement/ForEachStatement.cpp \
    xpand3/statement/ForEachStatementImpl.cpp \
    xpand3/statement/IfStatement.cpp \
    xpand3/statement/IfStatementImpl.cpp \
    xpand3/statement/LetStatement.cpp \
    xpand3/statement/LetStatementImpl.cpp \
    xpand3/statement/ProtectStatement.cpp \
    xpand3/statement/ProtectStatementImpl.cpp \
    xpand3/statement/TextStatement.cpp \
    xpand3/statement/TextStatementImpl.cpp \
    xpand3/declaration.cpp \
    xpand3/declaration/DeclarationPackage.cpp \
    xpand3/declaration/DeclarationFactory.cpp \
    xpand3/declaration/DeclarationPackageImpl.cpp \
    xpand3/declaration/DeclarationFactoryImpl.cpp \
    xpand3/declaration/AbstractDeclaration.cpp \
    xpand3/declaration/AbstractDeclarationImpl.cpp \
    xpand3/declaration/AbstractNamedDeclaration.cpp \
    xpand3/declaration/AbstractNamedDeclarationImpl.cpp \
    xpand3/declaration/Definition.cpp \
    xpand3/declaration/DefinitionImpl.cpp \
    xpand3/declaration/Extension.cpp \
    xpand3/declaration/ExtensionImpl.cpp \
    xpand3/declaration/AbstractAspect.cpp \
    xpand3/declaration/AbstractAspectImpl.cpp \
    xpand3/declaration/ExtensionAspect.cpp \
    xpand3/declaration/ExtensionAspectImpl.cpp \
    xpand3/declaration/DefinitionAspect.cpp \
    xpand3/declaration/DefinitionAspectImpl.cpp \
    xpand3/declaration/Check.cpp \
    xpand3/declaration/CheckImpl.cpp \
    xpand3/declaration/CreateExtension.cpp \
    xpand3/declaration/CreateExtensionImpl.cpp \
    xpand3/declaration/JavaExtension.cpp \
    xpand3/declaration/JavaExtensionImpl.cpp \


HEADERS += \
    xpand3.hpp \
    xpand3_forward.hpp \
    xpand3/Xpand3Package.hpp \
    xpand3/Xpand3Factory.hpp \
    xpand3/SyntaxElement.hpp \
    xpand3/File.hpp \
    xpand3/ImportStatement.hpp \
    xpand3/Identifier.hpp \
    xpand3/DeclaredParameter.hpp \
    xpand3/expression.hpp \
    xpand3/expression_forward.hpp \
    xpand3/expression/ExpressionPackage.hpp \
    xpand3/expression/ExpressionFactory.hpp \
    xpand3/expression/AbstractExpression.hpp \
    xpand3/expression/BooleanOperation.hpp \
    xpand3/expression/Cast.hpp \
    xpand3/expression/ChainExpression.hpp \
    xpand3/expression/ConstructorCallExpression.hpp \
    xpand3/expression/FeatureCall.hpp \
    xpand3/expression/CollectionExpression.hpp \
    xpand3/expression/OperationCall.hpp \
    xpand3/expression/TypeSelectExpression.hpp \
    xpand3/expression/GlobalVarExpression.hpp \
    xpand3/expression/IfExpression.hpp \
    xpand3/expression/LetExpression.hpp \
    xpand3/expression/ListLiteral.hpp \
    xpand3/expression/Literal.hpp \
    xpand3/expression/BooleanLiteral.hpp \
    xpand3/expression/IntegerLiteral.hpp \
    xpand3/expression/NullLiteral.hpp \
    xpand3/expression/RealLiteral.hpp \
    xpand3/expression/StringLiteral.hpp \
    xpand3/expression/SwitchExpression.hpp \
    xpand3/expression/Case.hpp \
    xpand3/expression/BinaryOperation.hpp \
    xpand3/expression/UnaryOperation.hpp \
    xpand3/statement.hpp \
    xpand3/statement_forward.hpp \
    xpand3/statement/StatementPackage.hpp \
    xpand3/statement/StatementFactory.hpp \
    xpand3/statement/AbstractStatement.hpp \
    xpand3/statement/ExpandStatement.hpp \
    xpand3/statement/ExpressionStatement.hpp \
    xpand3/statement/ErrorStatement.hpp \
    xpand3/statement/AbstractStatementWithBody.hpp \
    xpand3/statement/FileStatement.hpp \
    xpand3/statement/ForEachStatement.hpp \
    xpand3/statement/IfStatement.hpp \
    xpand3/statement/LetStatement.hpp \
    xpand3/statement/ProtectStatement.hpp \
    xpand3/statement/TextStatement.hpp \
    xpand3/declaration.hpp \
    xpand3/declaration_forward.hpp \
    xpand3/declaration/DeclarationPackage.hpp \
    xpand3/declaration/DeclarationFactory.hpp \
    xpand3/declaration/AbstractDeclaration.hpp \
    xpand3/declaration/AbstractNamedDeclaration.hpp \
    xpand3/declaration/Definition.hpp \
    xpand3/declaration/Extension.hpp \
    xpand3/declaration/AbstractAspect.hpp \
    xpand3/declaration/ExtensionAspect.hpp \
    xpand3/declaration/DefinitionAspect.hpp \
    xpand3/declaration/Check.hpp \
    xpand3/declaration/CreateExtension.hpp \
    xpand3/declaration/JavaExtension.hpp \

