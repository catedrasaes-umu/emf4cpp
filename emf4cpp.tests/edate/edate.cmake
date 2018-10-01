
#
# edate.cmake
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

set(edate_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/edate.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/edate/EdatePackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/edate/EdateFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/edate/EdatePackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/edate/EdateFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/edate/Person.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/edate/PersonImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/edate/Apollo11.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/edate/Apollo11Impl.cpp
)

set(edate_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/edate.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/edate_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/edate/EdatePackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/edate/EdateFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/edate/Person.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/edate/Apollo11.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/edate.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/edate_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/edate/EdateFactory.hpp DESTINATION include/emf4cpp/edate)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/edate/EdatePackage.hpp DESTINATION include/emf4cpp/edate)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/edate/Person.hpp DESTINATION include/emf4cpp/edate)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/edate/Apollo11.hpp DESTINATION include/emf4cpp/edate)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/edate/dllEdate.hpp DESTINATION include/emf4cpp/edate)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../builds/emf4cpp-generator-2.0.0/include/emf4cpp ../../builds/emf4cpp-generator-2.0.0/include/emf4cpp)
link_directories(../../builds/emf4cpp-generator-2.0.0/lib)

add_library(emf4cpp-edate SHARED ${edate_HEADERS} ${edate_SOURCES})
set_target_properties(emf4cpp-edate PROPERTIES COMPILE_FLAGS "-DMAKE_EDATE_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-edate emf4cpp-ecore)

install(TARGETS emf4cpp-edate DESTINATION lib)

