
#
# kdm_kdm.cmake
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

set(kdm_kdm_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KdmPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KdmFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KdmPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KdmFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KDMFramework.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KDMFrameworkImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KDMModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KDMModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Audit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/AuditImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Segment.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/SegmentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Attribute.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/AttributeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Annotation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/AnnotationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TagDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TagDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/ExtendedValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/ExtendedValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Stereotype.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/StereotypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/ExtensionFamily.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/ExtensionFamilyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TaggedRef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TaggedRefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TaggedValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TaggedValueImpl.cpp
   )
   
set(kdm_kdm_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KdmPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KdmFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KDMFramework.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KDMModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Audit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Segment.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Attribute.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Annotation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TagDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/ExtendedValue.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Stereotype.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/ExtensionFamily.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TaggedRef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TaggedValue.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KdmFactory.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KdmPackage.hpp DESTINATION include/emf4cpp/kdm/kdm)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KDMFramework.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/KDMModel.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Audit.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Segment.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Attribute.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Annotation.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TagDefinition.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/ExtendedValue.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/Stereotype.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/ExtensionFamily.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TaggedRef.hpp DESTINATION include/emf4cpp/kdm/kdm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/kdm/TaggedValue.hpp DESTINATION include/emf4cpp/kdm/kdm)
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-kdm_kdm SHARED ${kdm_kdm_HEADERS} ${kdm_kdm_SOURCES})
set_target_properties(emf4cpp-kdm_kdm PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-kdm_kdm DESTINATION lib)

