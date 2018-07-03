
#
# ResourceTests.cmake
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

set(ResourceTests_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/ResourceTestsPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/ResourceTestsFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/ResourceTestsPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/ResourceTestsFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/Root.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/RootImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/ReferenceTarget.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/ReferenceTargetImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/Referrer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/ReferrerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/ETypes.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/ETypesImpl.cpp
)

set(ResourceTests_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/ResourceTestsPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/ResourceTestsFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/Root.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/ReferenceTarget.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/Referrer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/ETypes.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/ResourceTestsFactory.hpp DESTINATION include/emf4cpp/ResourceTests)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/ResourceTestsPackage.hpp DESTINATION include/emf4cpp/ResourceTests)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/Root.hpp DESTINATION include/emf4cpp/ResourceTests)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/ReferenceTarget.hpp DESTINATION include/emf4cpp/ResourceTests)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/Referrer.hpp DESTINATION include/emf4cpp/ResourceTests)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/ETypes.hpp DESTINATION include/emf4cpp/ResourceTests)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ResourceTests/dllResourceTests.hpp DESTINATION include/emf4cpp/ResourceTests)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../builds/emf4cpp-generator-2.0.0/include/emf4cpp ../../builds/emf4cpp-generator-2.0.0/include/emf4cpp)
link_directories(../../builds/emf4cpp-generator-2.0.0/lib)

add_library(emf4cpp-ResourceTests SHARED ${ResourceTests_HEADERS} ${ResourceTests_SOURCES})
set_target_properties(emf4cpp-ResourceTests PROPERTIES COMPILE_FLAGS "-DMAKE_RESOURCETESTS_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-ResourceTests emf4cpp-ecore)

install(TARGETS emf4cpp-ResourceTests DESTINATION lib)

