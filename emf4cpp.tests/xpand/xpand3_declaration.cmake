#
# xpand3_declaration.cmake
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

set(xpand3_declaration_SOURCES
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
   
set(xpand3_declaration_HEADERS
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
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-xpand3_declaration SHARED ${xpand3_declaration_HEADERS} ${xpand3_declaration_SOURCES})
set_target_properties(emf4cpp-xpand3_declaration PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-xpand3_declaration DESTINATION lib)

