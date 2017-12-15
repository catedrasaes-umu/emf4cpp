
#
# treeiterator.cmake
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

set(treeiterator_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeiteratorPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeiteratorFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeiteratorPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeiteratorFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeNode.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeNodeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/Leaf.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/LeafImpl.cpp
)

set(treeiterator_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/treeiterator.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeiteratorPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeiteratorFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeNode.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/Leaf.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeiteratorFactory.hpp DESTINATION include/emf4cpp/treeiterator)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeiteratorPackage.hpp DESTINATION include/emf4cpp/treeiterator)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeNode.hpp DESTINATION include/emf4cpp/treeiterator)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/Leaf.hpp DESTINATION include/emf4cpp/treeiterator)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/dllTreeiterator.hpp DESTINATION include/emf4cpp/treeiterator)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../builds/emf4cpp-generator-1.1.0-Linux-x86/include/emf4cpp ../../builds/emf4cpp-generator-1.1.0-Linux-x86/include/emf4cpp)
link_directories(../../builds/emf4cpp-generator-1.1.0-Linux-x86/lib)

add_library(emf4cpp-treeiterator SHARED ${treeiterator_HEADERS} ${treeiterator_SOURCES})
set_target_properties(emf4cpp-treeiterator PROPERTIES COMPILE_FLAGS "-DMAKE_TREEITERATOR_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-treeiterator emf4cpp-ecore)

install(TARGETS emf4cpp-treeiterator DESTINATION lib)

