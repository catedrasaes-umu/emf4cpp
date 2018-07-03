
#
# kdm.cmake
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


set(CMAKE_CXX_FLAGS "-Wall -std=c++11")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -funroll-loops")

set(kdm_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/KdmPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/KdmFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/KdmPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/KdmFactoryImpl.cpp
   )
   
set(kdm_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/KdmPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/KdmFactory.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/KdmFactory.hpp DESTINATION include/emf4cpp/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/KdmPackage.hpp DESTINATION include/emf4cpp/kdm)   
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-kdm SHARED ${kdm_HEADERS} ${kdm_SOURCES})
set_target_properties(emf4cpp-kdm PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-kdm DESTINATION lib)

