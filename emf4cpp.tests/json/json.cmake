
#
# json.cmake
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

set(json_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/json.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/JsonPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/JsonFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/JsonPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/JsonFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/ObjectValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/ObjectValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/NVPair.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/NVPairImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/Value.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/ValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/StringValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/StringValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/NumberValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/NumberValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/BooleanValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/BooleanValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/ArrayValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/ArrayValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/NullValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/NullValueImpl.cpp
   )
   
set(json_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/json.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/JsonPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/JsonFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/ObjectValue.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/NVPair.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/Value.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/StringValue.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/NumberValue.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/BooleanValue.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/ArrayValue.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/json/NullValue.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/json.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/json_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/json/JsonFactory.hpp DESTINATION include/emf4cpp/json)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/json/JsonPackage.hpp DESTINATION include/emf4cpp/json)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/json/ObjectValue.hpp DESTINATION include/emf4cpp/json)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/json/NVPair.hpp DESTINATION include/emf4cpp/json)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/json/Value.hpp DESTINATION include/emf4cpp/json)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/json/StringValue.hpp DESTINATION include/emf4cpp/json)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/json/NumberValue.hpp DESTINATION include/emf4cpp/json)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/json/BooleanValue.hpp DESTINATION include/emf4cpp/json)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/json/ArrayValue.hpp DESTINATION include/emf4cpp/json)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/json/NullValue.hpp DESTINATION include/emf4cpp/json)
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-json SHARED ${json_HEADERS} ${json_SOURCES})
set_target_properties(emf4cpp-json PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-json DESTINATION lib)

