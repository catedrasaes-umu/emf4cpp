#
# xpand3_statement.cmake
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

set(xpand3_statement_SOURCES
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
   )
   
set(xpand3_statement_HEADERS
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
   )

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
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-xpand3_statement SHARED ${xpand3_statement_HEADERS} ${xpand3_statement_SOURCES})
set_target_properties(emf4cpp-xpand3_statement PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-xpand3_statement DESTINATION lib)

