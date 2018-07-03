
#
# kdm_source.cmake
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

set(kdm_source_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourcePackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourcePackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceRef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceRefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceRegion.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceRegionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/AbstractInventoryElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/AbstractInventoryElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryItem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryItemImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceFile.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceFileImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Image.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ImageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ResourceDescription.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ResourceDescriptionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Configuration.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ConfigurationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryContainer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryContainerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Directory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/DirectoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Project.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ProjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/AbstractInventoryRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/AbstractInventoryRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/BinaryFile.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/BinaryFileImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ExecutableFile.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ExecutableFileImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/DependsOn.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/DependsOnImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryRelationshipImpl.cpp
   )
   
set(kdm_source_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourcePackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceRef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceRegion.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/AbstractInventoryElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryItem.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceFile.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Image.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ResourceDescription.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Configuration.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryContainer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Directory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Project.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/AbstractInventoryRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/BinaryFile.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ExecutableFile.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/DependsOn.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryRelationship.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceFactory.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourcePackage.hpp DESTINATION include/emf4cpp/kdm/source)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceRef.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceRegion.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryModel.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/AbstractInventoryElement.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryItem.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/SourceFile.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Image.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ResourceDescription.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Configuration.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryContainer.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Directory.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/Project.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/AbstractInventoryRelationship.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/BinaryFile.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/ExecutableFile.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/DependsOn.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryElement.hpp DESTINATION include/emf4cpp/kdm/source)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/source/InventoryRelationship.hpp DESTINATION include/emf4cpp/kdm/source)
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-kdm_source SHARED ${kdm_source_HEADERS} ${kdm_source_SOURCES})
set_target_properties(emf4cpp-kdm_source PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-kdm_source DESTINATION lib)

