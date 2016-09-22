
#
# kdm_event.cmake
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

set(kdm_event_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/AbstractEventElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/AbstractEventElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/Event.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/AbstractEventRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/AbstractEventRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/State.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/StateImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/Transition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/TransitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/OnEntry.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/OnEntryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/OnExit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/OnExitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventAction.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventActionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ReadsState.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ReadsStateImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ProducesEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ProducesEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ConsumesEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ConsumesEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/NextState.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/NextStateImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/InitialState.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/InitialStateImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/HasState.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/HasStateImpl.cpp
   )
   
set(kdm_event_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/AbstractEventElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/Event.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/AbstractEventRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/State.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/Transition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/OnEntry.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/OnExit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventAction.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ReadsState.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ProducesEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ConsumesEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/NextState.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/InitialState.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/HasState.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventFactory.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventPackage.hpp DESTINATION include/emf4cpp/kdm/event)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventModel.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/AbstractEventElement.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/Event.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/AbstractEventRelationship.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventRelationship.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventResource.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/State.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/Transition.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/OnEntry.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/OnExit.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventAction.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ReadsState.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ProducesEvent.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/ConsumesEvent.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/NextState.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/InitialState.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/EventElement.hpp DESTINATION include/emf4cpp/kdm/event)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/event/HasState.hpp DESTINATION include/emf4cpp/kdm/event)
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-kdm_event SHARED ${kdm_event_HEADERS} ${kdm_event_SOURCES})
set_target_properties(emf4cpp-kdm_event PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-kdm_event DESTINATION lib)

