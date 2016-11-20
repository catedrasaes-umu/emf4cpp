
#
# enumeration.cmake
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

set(enumeration_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/enumeration.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/enumeration/EnumerationPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/enumeration/EnumerationFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/enumeration/EnumerationPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/enumeration/EnumerationFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/enumeration/Bird.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/enumeration/BirdImpl.cpp
)

set(enumeration_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/enumeration.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/enumeration_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/enumeration/EnumerationPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/enumeration/EnumerationFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/enumeration/Bird.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/enumeration.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/enumeration_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/enumeration/EnumerationFactory.hpp DESTINATION include/emf4cpp/enumeration)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/enumeration/EnumerationPackage.hpp DESTINATION include/emf4cpp/enumeration)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/enumeration/Bird.hpp DESTINATION include/emf4cpp/enumeration)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/enumeration/dllEnumeration.hpp DESTINATION include/emf4cpp/enumeration)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../builds/emf4cpp-generator-1.1.0-Linux-x86/include/emf4cpp ../../builds/emf4cpp-generator-1.1.0-Linux-x86/include/emf4cpp)
link_directories(../../builds/emf4cpp-generator-1.1.0-Linux-x86/lib)

add_library(emf4cpp-enumeration SHARED ${enumeration_HEADERS} ${enumeration_SOURCES})
set_target_properties(emf4cpp-enumeration PROPERTIES COMPILE_FLAGS "-DMAKE_ENUMERATION_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-enumeration emf4cpp-ecore)


install(TARGETS emf4cpp-enumeration DESTINATION lib)

