
#
# kdm_data.cmake
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

set(kdm_data_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractDataElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractDataElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataResource.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataResourceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/IndexElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/IndexElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/UniqueKey.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/UniqueKeyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/Index.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/IndexImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractDataRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractDataRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/KeyRelation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/KeyRelationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReferenceKey.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReferenceKeyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataContainer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataContainerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/Catalog.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/CatalogImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalSchema.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalSchemaImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ColumnSet.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ColumnSetImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalTable.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalTableImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalView.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalViewImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RecordFile.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RecordFileImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/XMLSchema.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/XMLSchemaImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractContentElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractContentElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ComplexContentType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ComplexContentTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AllContent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AllContentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/SeqContent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/SeqContentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ChoiceContent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ChoiceContentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentItem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentItemImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/GroupContent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/GroupContentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentRestriction.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentRestrictionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/SimpleContentType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/SimpleContentTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ExtendedDataElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ExtendedDataElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataRelationship.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataRelationshipImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/MixedContent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/MixedContentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentReference.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentReferenceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataAction.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataActionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReadsColumnSet.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReadsColumnSetImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentAttribute.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentAttributeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/TypedBy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/TypedByImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReferenceTo.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReferenceToImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RestrictionOf.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RestrictionOfImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ExtensionTo.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ExtensionToImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DatatypeOf.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DatatypeOfImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/HasContent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/HasContentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/WritesColumnSet.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/WritesColumnSetImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ProducesDataEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ProducesDataEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataSegment.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataSegmentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ManagesData.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ManagesDataImpl.cpp
   )
   
set(kdm_data_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractDataElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataResource.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/IndexElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/UniqueKey.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/Index.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractDataRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/KeyRelation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReferenceKey.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataContainer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/Catalog.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalSchema.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ColumnSet.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalTable.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalView.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RecordFile.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/XMLSchema.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractContentElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ComplexContentType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AllContent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/SeqContent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ChoiceContent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentItem.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/GroupContent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentRestriction.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/SimpleContentType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ExtendedDataElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataRelationship.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/MixedContent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentReference.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataAction.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReadsColumnSet.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentAttribute.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/TypedBy.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReferenceTo.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RestrictionOf.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ExtensionTo.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DatatypeOf.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/HasContent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/WritesColumnSet.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ProducesDataEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataSegment.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ManagesData.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data_forward.hpp DESTINATION include/emf4cpp/kdm/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataFactory.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataPackage.hpp DESTINATION include/emf4cpp/kdm/data)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataModel.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractDataElement.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataResource.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/IndexElement.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/UniqueKey.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/Index.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractDataRelationship.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/KeyRelation.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReferenceKey.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataContainer.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/Catalog.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalSchema.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ColumnSet.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalTable.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RelationalView.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RecordFile.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataEvent.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/XMLSchema.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AbstractContentElement.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ComplexContentType.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/AllContent.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/SeqContent.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ChoiceContent.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentItem.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/GroupContent.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentRestriction.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/SimpleContentType.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ExtendedDataElement.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataRelationship.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/MixedContent.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentReference.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataAction.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReadsColumnSet.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentAttribute.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/TypedBy.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ReferenceTo.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/RestrictionOf.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ExtensionTo.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DatatypeOf.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/HasContent.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/WritesColumnSet.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ProducesDataEvent.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/DataSegment.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ContentElement.hpp DESTINATION include/emf4cpp/kdm/data)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/kdm/data/ManagesData.hpp DESTINATION include/emf4cpp/kdm/data)
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-kdm_data SHARED ${kdm_data_HEADERS} ${kdm_data_SOURCES})
set_target_properties(emf4cpp-kdm_data PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-kdm_data DESTINATION lib)

