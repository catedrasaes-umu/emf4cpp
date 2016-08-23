
#
# kdm_platform.cmake
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

set(kdm_platform_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/AbstractPlatformElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/AbstractPlatformElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/AbstractPlatformRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/AbstractPlatformRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Requires.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/RequiresImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ResourceType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ResourceTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/NamingResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/NamingResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/MarshalledResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/MarshalledResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/MessagingResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/MessagingResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/FileResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/FileResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ExecutionResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ExecutionResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformAction.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformActionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ExternalActor.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ExternalActorImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DataManager.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DataManagerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/BindsTo.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/BindsToImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/LockResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/LockResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedSoftwareSystem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedSoftwareSystemImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Machine.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/MachineImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedComponent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedComponentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Loads.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/LoadsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Spawns.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/SpawnsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/RuntimeResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/RuntimeResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Thread.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ThreadImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Process.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ProcessImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ReadsResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ReadsResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/WritesResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/WritesResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ManagesResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ManagesResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DefinedBy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DefinedByImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/StreamResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/StreamResourceImpl.cpp
   )
   
set(kdm_platform_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/AbstractPlatformElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/AbstractPlatformRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Requires.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ResourceType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/NamingResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/MarshalledResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/MessagingResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/FileResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ExecutionResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformAction.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ExternalActor.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DataManager.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/BindsTo.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/LockResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedSoftwareSystem.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Machine.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedComponent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Loads.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Spawns.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/RuntimeResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Thread.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Process.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ReadsResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/WritesResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ManagesResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DefinedBy.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/StreamResource.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformFactory.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformPackage.hpp DESTINATION include/emf4cpp/kdm/platform)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/AbstractPlatformElement.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformModel.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/AbstractPlatformRelationship.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Requires.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ResourceType.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/NamingResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/MarshalledResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/MessagingResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/FileResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ExecutionResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformAction.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ExternalActor.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DataManager.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/BindsTo.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformElement.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformRelationship.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/PlatformEvent.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/LockResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedSoftwareSystem.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Machine.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedComponent.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DeployedResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Loads.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Spawns.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/RuntimeResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Thread.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/Process.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ReadsResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/WritesResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/ManagesResource.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/DefinedBy.hpp DESTINATION include/emf4cpp/kdm/platform)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/platform/StreamResource.hpp DESTINATION include/emf4cpp/kdm/platform)
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-kdm_platform SHARED ${kdm_platform_HEADERS} ${kdm_platform_SOURCES})
set_target_properties(emf4cpp-kdm_platform PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-kdm_platform DESTINATION lib)

