
#
# xpand3_expression.cmake
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


set(CMAKE_CXX_FLAGS "")
set(CMAKE_CXX_FLAGS_DEBUG "-Wall -g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-Wall -O3 -funroll-loops")

set(xpand3_expression_SOURCES
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
   )
   
set(xpand3_expression_HEADERS
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
   )

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
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-xpand3_expression SHARED ${xpand3_expression_HEADERS} ${xpand3_expression_SOURCES})
set_target_properties(emf4cpp-xpand3_expression PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-xpand3_expression DESTINATION lib)

