
#
# kdm_conceptual.cmake
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

set(kdm_conceptual_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/AbstractConceptualElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/AbstractConceptualElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/TermUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/TermUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualContainer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualContainerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/FactUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/FactUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/AbstractConceptualRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/AbstractConceptualRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/BehaviorUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/BehaviorUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/RuleUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/RuleUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ScenarioUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ScenarioUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualFlow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualFlowImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualRole.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualRoleImpl.cpp
   )
   
set(kdm_conceptual_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/AbstractConceptualElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/TermUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualContainer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/FactUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/AbstractConceptualRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/BehaviorUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/RuleUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ScenarioUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualFlow.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualRole.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualFactory.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualPackage.hpp DESTINATION include/emf4cpp/kdm/conceptual)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualModel.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/AbstractConceptualElement.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/TermUnit.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualContainer.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/FactUnit.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/AbstractConceptualRelationship.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualRelationship.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/BehaviorUnit.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/RuleUnit.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ScenarioUnit.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualFlow.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualElement.hpp DESTINATION include/emf4cpp/kdm/conceptual)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/conceptual/ConceptualRole.hpp DESTINATION include/emf4cpp/kdm/conceptual)
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-kdm_conceptual SHARED ${kdm_conceptual_HEADERS} ${kdm_conceptual_SOURCES})
set_target_properties(emf4cpp-kdm_conceptual PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-kdm_conceptual DESTINATION lib)

