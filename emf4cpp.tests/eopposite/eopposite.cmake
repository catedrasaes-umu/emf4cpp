
#
# eopposite.cmake
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

set(eopposite_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/EoppositePackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/EoppositeFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/EoppositePackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/EoppositeFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/TopLevel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/TopLevelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/NamedObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/NamedObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/LeftHand.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/LeftHandImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/RightHand.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/RightHandImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/RightMultiple.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/RightMultipleImpl.cpp
)

set(eopposite_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/eopposite.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/EoppositePackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/EoppositeFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/TopLevel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/NamedObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/LeftHand.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/RightHand.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/RightMultiple.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/eopposite.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/eopposite_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/EoppositeFactory.hpp DESTINATION include/emf4cpp/eopposite)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/EoppositePackage.hpp DESTINATION include/emf4cpp/eopposite)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/TopLevel.hpp DESTINATION include/emf4cpp/eopposite)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/NamedObject.hpp DESTINATION include/emf4cpp/eopposite)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/LeftHand.hpp DESTINATION include/emf4cpp/eopposite)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/RightHand.hpp DESTINATION include/emf4cpp/eopposite)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/RightMultiple.hpp DESTINATION include/emf4cpp/eopposite)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/eopposite/dllEopposite.hpp DESTINATION include/emf4cpp/eopposite)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../builds/emf4cpp-generator-2.0.0/include/emf4cpp ../../builds/emf4cpp-generator-2.0.0/include/emf4cpp)
link_directories(../../builds/emf4cpp-generator-2.0.0/lib)

add_library(emf4cpp-eopposite SHARED ${eopposite_HEADERS} ${eopposite_SOURCES})
set_target_properties(emf4cpp-eopposite PROPERTIES COMPILE_FLAGS "-DMAKE_EOPPOSITE_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-eopposite emf4cpp-ecore)

install(TARGETS emf4cpp-eopposite DESTINATION lib)

