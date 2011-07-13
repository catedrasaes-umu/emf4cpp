#
# kdm_core.cmake
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

set(kdm_core_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/CorePackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/CoreFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/CorePackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/CoreFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/Element.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/ElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/ModelElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/ModelElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/KDMEntity.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/KDMEntityImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/KDMRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/KDMRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/AggregatedRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/AggregatedRelationshipImpl.cpp
   )
   
set(kdm_core_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/CorePackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/CoreFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/Element.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/ModelElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/KDMEntity.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/KDMRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/AggregatedRelationship.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/CoreFactory.hpp DESTINATION include/emf4cpp/kdm/core)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/CorePackage.hpp DESTINATION include/emf4cpp/kdm/core)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/Element.hpp DESTINATION include/emf4cpp/kdm/core)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/ModelElement.hpp DESTINATION include/emf4cpp/kdm/core)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/KDMEntity.hpp DESTINATION include/emf4cpp/kdm/core)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/KDMRelationship.hpp DESTINATION include/emf4cpp/kdm/core)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/core/AggregatedRelationship.hpp DESTINATION include/emf4cpp/kdm/core)
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-kdm_core SHARED ${kdm_core_HEADERS} ${kdm_core_SOURCES})
set_target_properties(emf4cpp-kdm_core PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-kdm_core DESTINATION lib)

