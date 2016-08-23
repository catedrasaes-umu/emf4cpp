
#
# xpand3.cmake
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
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-xpand3 SHARED ${xpand3_HEADERS} ${xpand3_SOURCES})
set_target_properties(emf4cpp-xpand3 PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-xpand3 DESTINATION lib)

