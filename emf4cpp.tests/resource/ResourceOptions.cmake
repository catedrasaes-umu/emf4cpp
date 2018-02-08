
#
# ResourceOptions.cmake
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

set(ResourceOptions_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceOptions.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceOptions/ResourceOptionsPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceOptions/ResourceOptionsFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceOptions/ResourceOptionsPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceOptions/ResourceOptionsFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceOptions/ETypes.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceOptions/ETypesImpl.cpp
)

set(ResourceOptions_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/ResourceOptions.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceOptions_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceOptions/ResourceOptionsPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceOptions/ResourceOptionsFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceOptions/ETypes.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ResourceOptions.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ResourceOptions_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ResourceOptions/ResourceOptionsFactory.hpp DESTINATION include/emf4cpp/ResourceOptions)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ResourceOptions/ResourceOptionsPackage.hpp DESTINATION include/emf4cpp/ResourceOptions)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ResourceOptions/ETypes.hpp DESTINATION include/emf4cpp/ResourceOptions)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ResourceOptions/dllResourceOptions.hpp DESTINATION include/emf4cpp/ResourceOptions)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../builds/emf4cpp-generator-1.1.0-Linux-x86/include/emf4cpp ../../builds/emf4cpp-generator-1.1.0-Linux-x86/include/emf4cpp)
link_directories(../../builds/emf4cpp-generator-1.1.0-Linux-x86/lib)

add_library(emf4cpp-ResourceOptions SHARED ${ResourceOptions_HEADERS} ${ResourceOptions_SOURCES})
set_target_properties(emf4cpp-ResourceOptions PROPERTIES COMPILE_FLAGS "-DMAKE_RESOURCEOPTIONS_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-ResourceOptions emf4cpp-ecore)

install(TARGETS emf4cpp-ResourceOptions DESTINATION lib)

