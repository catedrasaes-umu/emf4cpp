
#
# kdm_structure.cmake
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

set(kdm_structure_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructurePackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructurePackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/AbstractStructureElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/AbstractStructureElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/Subsystem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/SubsystemImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/Layer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/LayerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/Component.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/ComponentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/SoftwareSystem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/SoftwareSystemImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/AbstractStructureRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/AbstractStructureRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/ArchitectureView.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/ArchitectureViewImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureElementImpl.cpp
   )
   
set(kdm_structure_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructurePackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/AbstractStructureElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/Subsystem.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/Layer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/Component.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/SoftwareSystem.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/AbstractStructureRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/ArchitectureView.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureElement.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureFactory.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructurePackage.hpp DESTINATION include/emf4cpp/kdm/structure)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/AbstractStructureElement.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/Subsystem.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/Layer.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureModel.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/Component.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/SoftwareSystem.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/AbstractStructureRelationship.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureRelationship.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/ArchitectureView.hpp DESTINATION include/emf4cpp/kdm/structure)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/structure/StructureElement.hpp DESTINATION include/emf4cpp/kdm/structure)
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-kdm_structure SHARED ${kdm_structure_HEADERS} ${kdm_structure_SOURCES})
set_target_properties(emf4cpp-kdm_structure PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-kdm_structure DESTINATION lib)

