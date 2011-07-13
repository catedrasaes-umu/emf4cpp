#
# kdm_action.cmake
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

set(kdm_action_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/AbstractActionRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/AbstractActionRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ControlFlow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ControlFlowImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Calls.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CallsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Creates.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CreatesImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Reads.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ReadsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Writes.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/WritesImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CompliesTo.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CompliesToImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Flow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/FlowImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/TrueFlow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/TrueFlowImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/FalseFlow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/FalseFlowImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/GuardedFlow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/GuardedFlowImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/UsesType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/UsesTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Addresses.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/AddressesImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Throws.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ThrowsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Dispatches.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/DispatchesImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/EntryFlow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/EntryFlowImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/BlockUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/BlockUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExceptionUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExceptionUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/TryUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/TryUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/FinallyUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/FinallyUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CatchUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CatchUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExitFlow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExitFlowImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExceptionFlow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExceptionFlowImpl.cpp
   )
   
set(kdm_action_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/AbstractActionRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ControlFlow.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Calls.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Creates.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Reads.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Writes.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CompliesTo.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Flow.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/TrueFlow.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/FalseFlow.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/GuardedFlow.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/UsesType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Addresses.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Throws.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Dispatches.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/EntryFlow.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/BlockUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExceptionUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/TryUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/FinallyUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CatchUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExitFlow.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExceptionFlow.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionFactory.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionPackage.hpp DESTINATION include/emf4cpp/kdm/action)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionElement.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/AbstractActionRelationship.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ControlFlow.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Calls.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Creates.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Reads.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Writes.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CompliesTo.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Flow.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/TrueFlow.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/FalseFlow.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/GuardedFlow.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/UsesType.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Addresses.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ActionRelationship.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Throws.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/Dispatches.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/EntryFlow.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/BlockUnit.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExceptionUnit.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/TryUnit.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/FinallyUnit.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/CatchUnit.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExitFlow.hpp DESTINATION include/emf4cpp/kdm/action)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/action/ExceptionFlow.hpp DESTINATION include/emf4cpp/kdm/action)
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-kdm_action SHARED ${kdm_action_HEADERS} ${kdm_action_SOURCES})
set_target_properties(emf4cpp-kdm_action PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-kdm_action DESTINATION lib)

