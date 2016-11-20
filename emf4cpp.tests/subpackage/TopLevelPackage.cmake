
#
# TopLevelPackage.cmake
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

set(TopLevelPackage_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/TopLevelPackagePackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/TopLevelPackageFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/TopLevelPackagePackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/TopLevelPackageFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/TopLevelClass.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/TopLevelClassImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level1Package.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level1Factory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level1PackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level1FactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level1Class.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level1ClassImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level2Package.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level2Factory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level2PackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level2FactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level2Class.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level2ClassImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level3.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level3/Level3Package.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level3/Level3Factory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level3/Level3PackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level3/Level3FactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level3/Level3Class.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level3/Level3ClassImpl.cpp
)

set(TopLevelPackage_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/TopLevelPackagePackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/TopLevelPackageFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/TopLevelClass.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level1Package.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level1Factory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level1Class.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level2Package.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level2Factory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level2Class.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level3.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level3_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level3/Level3Package.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level3/Level3Factory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level3/Level3Class.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/TopLevelPackageFactory.hpp DESTINATION include/emf4cpp/TopLevelPackage)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/TopLevelPackagePackage.hpp DESTINATION include/emf4cpp/TopLevelPackage)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/TopLevelClass.hpp DESTINATION include/emf4cpp/TopLevelPackage)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1.hpp DESTINATION include/emf4cpp/TopLevelPackage/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1_forward.hpp DESTINATION include/emf4cpp/TopLevelPackage/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level1Factory.hpp DESTINATION include/emf4cpp/TopLevelPackage/Level1)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level1Package.hpp DESTINATION include/emf4cpp/TopLevelPackage/Level1)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level1Class.hpp DESTINATION include/emf4cpp/TopLevelPackage/Level1)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2.hpp DESTINATION include/emf4cpp/TopLevelPackage/Level2)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2_forward.hpp DESTINATION include/emf4cpp/TopLevelPackage/Level2)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level2Factory.hpp DESTINATION include/emf4cpp/TopLevelPackage/Level1/Level2)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level2Package.hpp DESTINATION include/emf4cpp/TopLevelPackage/Level1/Level2)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level2Class.hpp DESTINATION include/emf4cpp/TopLevelPackage/Level1/Level2)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level3.hpp DESTINATION include/emf4cpp/TopLevelPackage/Level2Level3)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level3_forward.hpp DESTINATION include/emf4cpp/TopLevelPackage/Level2Level3)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level3/Level3Factory.hpp DESTINATION include/emf4cpp/TopLevelPackage/Level1/Level2/Level3)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level3/Level3Package.hpp DESTINATION include/emf4cpp/TopLevelPackage/Level1/Level2/Level3)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/Level1/Level2/Level3/Level3Class.hpp DESTINATION include/emf4cpp/TopLevelPackage/Level1/Level2/Level3)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/TopLevelPackage/dllTopLevelPackage.hpp DESTINATION include/emf4cpp/TopLevelPackage)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../builds/emf4cpp-generator-1.1.0-Linux-x86/include/emf4cpp ../../builds/emf4cpp-generator-1.1.0-Linux-x86/include/emf4cpp)
link_directories(../../builds/emf4cpp-generator-1.1.0-Linux-x86/lib)

add_library(emf4cpp-TopLevelPackage SHARED ${TopLevelPackage_HEADERS} ${TopLevelPackage_SOURCES})
set_target_properties(emf4cpp-TopLevelPackage PROPERTIES COMPILE_FLAGS "-DMAKE_TOPLEVELPACKAGE_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-TopLevelPackage emf4cpp-ecore)


install(TARGETS emf4cpp-TopLevelPackage DESTINATION lib)

