
#
# kdm_ui.cmake
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

set(kdm_ui_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UiPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UiFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UiPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UiFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/AbstractUIElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/AbstractUIElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIDisplay.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIDisplayImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/Screen.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ScreenImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/Report.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ReportImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/AbstractUIRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/AbstractUIRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UILayout.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UILayoutImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIField.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIFieldImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/DisplaysImage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/DisplaysImageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/Displays.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/DisplaysImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIFlow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIFlowImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIAction.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIActionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ReadsUI.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ReadsUIImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/WritesUI.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/WritesUIImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ManagesUI.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ManagesUIImpl.cpp
   )
   
set(kdm_ui_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UiPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UiFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/AbstractUIElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIDisplay.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/Screen.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/Report.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/AbstractUIRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UILayout.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIField.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/DisplaysImage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/Displays.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIFlow.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIAction.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ReadsUI.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/WritesUI.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ManagesUI.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UiFactory.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UiPackage.hpp DESTINATION include/emf4cpp/kdm/ui)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/AbstractUIElement.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIResource.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIDisplay.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/Screen.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/Report.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIModel.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/AbstractUIRelationship.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UILayout.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIField.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/DisplaysImage.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/Displays.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIFlow.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIElement.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIRelationship.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIAction.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/UIEvent.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ReadsUI.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/WritesUI.hpp DESTINATION include/emf4cpp/kdm/ui)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/ui/ManagesUI.hpp DESTINATION include/emf4cpp/kdm/ui)
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-kdm_ui SHARED ${kdm_ui_HEADERS} ${kdm_ui_SOURCES})
set_target_properties(emf4cpp-kdm_ui PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-kdm_ui DESTINATION lib)

