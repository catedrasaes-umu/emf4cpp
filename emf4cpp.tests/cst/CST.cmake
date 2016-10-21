
#
# CST.cmake
# Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
# Copyright (C) INCHRON Gmbh 2016 <soeren.henning@inchron.com>
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

set(CST_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/CST.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CST/CSTPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CST/CSTFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CST/CSTPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CST/CSTFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CST/Tree.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CST/TreeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CST/Element.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CST/ElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CST/Node.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CST/NodeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CST/Leaf.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CST/LeafImpl.cpp
)

set(CST_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/CST.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CST_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CST/CSTPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CST/CSTFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CST/Tree.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CST/Element.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CST/Node.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CST/Leaf.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/CST.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/CST_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/CST/CSTFactory.hpp DESTINATION include/emf4cpp/CST)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/CST/CSTPackage.hpp DESTINATION include/emf4cpp/CST)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/CST/Tree.hpp DESTINATION include/emf4cpp/CST)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/CST/Element.hpp DESTINATION include/emf4cpp/CST)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/CST/Node.hpp DESTINATION include/emf4cpp/CST)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/CST/Leaf.hpp DESTINATION include/emf4cpp/CST)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/CST/dllCST.hpp DESTINATION include/emf4cpp/CST)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../builds/emf4cpp-generator-1.1.0-Linux-x86/include/emf4cpp ../../builds/emf4cpp-generator-1.1.0-Linux-x86/include/emf4cpp)
link_directories(../../builds/emf4cpp-generator-1.1.0-Linux-x86/lib)

add_library(emf4cpp-CST SHARED ${CST_HEADERS} ${CST_SOURCES})
set_target_properties(emf4cpp-CST PROPERTIES COMPILE_FLAGS "-DMAKE_CST_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-CST emf4cpp-ecore)


install(TARGETS emf4cpp-CST DESTINATION lib)

