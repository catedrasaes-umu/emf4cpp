
#
# kdm_build.cmake
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

set(kdm_build_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/AbstractBuildElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/AbstractBuildElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildDescription.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildDescriptionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SymbolicLink.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SymbolicLinkImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/AbstractBuildRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/AbstractBuildRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/LinksTo.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/LinksToImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Consumes.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/ConsumesImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildComponent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildComponentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Supplier.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SupplierImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Tool.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/ToolImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SuppliedBy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SuppliedByImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Library.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/LibraryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildStep.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildStepImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Produces.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/ProducesImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SupportedBy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SupportedByImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildProduct.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildProductImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/DescribedBy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/DescribedByImpl.cpp
   )
   
set(kdm_build_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/AbstractBuildElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildDescription.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SymbolicLink.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/AbstractBuildRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/LinksTo.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Consumes.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildComponent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Supplier.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Tool.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SuppliedBy.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Library.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildStep.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Produces.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SupportedBy.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildProduct.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/DescribedBy.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildFactory.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildPackage.hpp DESTINATION include/emf4cpp/kdm/build)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/AbstractBuildElement.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildResource.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildDescription.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SymbolicLink.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/AbstractBuildRelationship.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/LinksTo.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Consumes.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildModel.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildComponent.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Supplier.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Tool.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildElement.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildRelationship.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SuppliedBy.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Library.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildStep.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/Produces.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/SupportedBy.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/BuildProduct.hpp DESTINATION include/emf4cpp/kdm/build)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/build/DescribedBy.hpp DESTINATION include/emf4cpp/kdm/build)
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-kdm_build SHARED ${kdm_build_HEADERS} ${kdm_build_SOURCES})
set_target_properties(emf4cpp-kdm_build PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-kdm_build DESTINATION lib)

