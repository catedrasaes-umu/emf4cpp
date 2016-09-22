
#
# PrimitiveTypes.cmake
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

set(PrimitiveTypes_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/PrimitiveTypes.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/PrimitiveTypes/PrimitiveTypesPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/PrimitiveTypes/PrimitiveTypesFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/PrimitiveTypes/PrimitiveTypesPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/PrimitiveTypes/PrimitiveTypesFactoryImpl.cpp
   )
   
set(PrimitiveTypes_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/PrimitiveTypes.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/PrimitiveTypes_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/PrimitiveTypes/PrimitiveTypesPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/PrimitiveTypes/PrimitiveTypesFactory.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/PrimitiveTypes.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/PrimitiveTypes_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/PrimitiveTypes/PrimitiveTypesFactory.hpp DESTINATION include/emf4cpp/PrimitiveTypes)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/PrimitiveTypes/PrimitiveTypesPackage.hpp DESTINATION include/emf4cpp/PrimitiveTypes)   
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-PrimitiveTypes SHARED ${PrimitiveTypes_HEADERS} ${PrimitiveTypes_SOURCES})
set_target_properties(emf4cpp-PrimitiveTypes PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-PrimitiveTypes DESTINATION lib)

