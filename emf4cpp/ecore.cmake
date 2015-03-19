#
# ecore.cmake
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

set(ecore_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EcorePackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EcoreFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EcorePackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EcoreFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EAttribute.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EAttributeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EAnnotation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EAnnotationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EClass.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EClassImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EClassifier.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EClassifierImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EDataType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EDataTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EEnum.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EEnumImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EEnumLiteral.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EEnumLiteralImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EModelElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EModelElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ENamedElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ENamedElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EOperation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EOperationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EParameter.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EParameterImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EReference.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EReferenceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EStructuralFeature.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EStructuralFeatureImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ETypedElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ETypedElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EStringToStringMapEntry.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EStringToStringMapEntryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EGenericType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EGenericTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ETypeParameter.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ETypeParameterImpl.cpp
   )
   
set(ecore_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EcorePackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EcoreFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EAttribute.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EAnnotation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EClass.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EClassifier.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EDataType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EEnum.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EEnumLiteral.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EModelElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ENamedElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EOperation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EParameter.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EReference.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EStructuralFeature.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ETypedElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EStringToStringMapEntry.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EGenericType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ETypeParameter.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EcoreFactory.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EcorePackage.hpp DESTINATION include/emf4cpp/ecore)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EAttribute.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EAnnotation.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EClass.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EClassifier.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EDataType.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EEnum.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EEnumLiteral.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EFactory.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EModelElement.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ENamedElement.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EObject.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EOperation.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EPackage.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EParameter.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EReference.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EStructuralFeature.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ETypedElement.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EStringToStringMapEntry.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EGenericType.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ETypeParameter.hpp DESTINATION include/emf4cpp/ecore)
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} . .)

add_library(emf4cpp-ecore SHARED ${ecore_HEADERS} ${ecore_SOURCES})
set_target_properties(emf4cpp-ecore PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-ecore DESTINATION lib)

