
#
# bintree.cmake
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

set(bintree_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/bintree.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/bintree/BintreePackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/bintree/BintreeFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/bintree/BintreePackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/bintree/BintreeFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/bintree/BinTreeNode.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/bintree/BinTreeNodeImpl.cpp
)

set(bintree_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/bintree.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/bintree_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/bintree/BintreePackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/bintree/BintreeFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/bintree/BinTreeNode.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/bintree.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/bintree_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/bintree/BintreeFactory.hpp DESTINATION include/emf4cpp/bintree)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/bintree/BintreePackage.hpp DESTINATION include/emf4cpp/bintree)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/bintree/BinTreeNode.hpp DESTINATION include/emf4cpp/bintree)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/bintree/dllBintree.hpp DESTINATION include/emf4cpp/bintree)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../builds/emf4cpp-generator-1.1.0-Linux-x86/include/emf4cpp ../../builds/emf4cpp-generator-1.1.0-Linux-x86/include/emf4cpp)
link_directories(../../builds/emf4cpp-generator-1.1.0-Linux-x86/lib)

add_library(emf4cpp-bintree SHARED ${bintree_HEADERS} ${bintree_SOURCES})
set_target_properties(emf4cpp-bintree PROPERTIES COMPILE_FLAGS "-DMAKE_BINTREE_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-bintree emf4cpp-ecore)


install(TARGETS emf4cpp-bintree DESTINATION lib)

