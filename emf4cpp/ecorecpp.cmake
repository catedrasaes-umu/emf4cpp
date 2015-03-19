
set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -funroll-loops")

set(ecorecpp_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/MetaModelRepository.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/print.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/parser.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/handler.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/serializer.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/json/serializer.cpp
    # notify
   	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify/Adapter.cpp
   	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify/Notification.cpp
   	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify/Notifier.cpp
   )
   
set(ecorecpp_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/json/json_serializer.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/json/serializer.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/any.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/any_traits.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/EList.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/EListImpl.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping_forward.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/list.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/out_ptr.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/set_traits.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/string_traits.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/type_traits.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/MetaModelRepository.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify/Adapter.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify_forward.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify/Notification.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify/Notifier.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/handler.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/handler-xerces.hpp		
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/localstr.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/parser_common.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/parser.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/parser-xerces.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/reference_parser.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/simple_xml_parser.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/unresolved_reference.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/externalstr.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/greedy_serializer.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/serializer.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/serializer-xerces.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/debug.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/print.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp.hpp DESTINATION include/emf4cpp)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/json/json_serializer.hpp DESTINATION include/emf4cpp/ecorecpp/json)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/json/serializer.hpp DESTINATION include/emf4cpp/ecorecpp/json)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/any.hpp DESTINATION include/emf4cpp/ecorecpp/mapping)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/any_traits.hpp DESTINATION include/emf4cpp/ecorecpp/mapping)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/EList.hpp DESTINATION include/emf4cpp/ecorecpp/mapping)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/EListImpl.hpp DESTINATION include/emf4cpp/ecorecpp/mapping)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping_forward.hpp DESTINATION include/emf4cpp/ecorecpp)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping.hpp DESTINATION include/emf4cpp/ecorecpp)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/list.hpp DESTINATION include/emf4cpp/ecorecpp/mapping)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/out_ptr.hpp DESTINATION include/emf4cpp/ecorecpp/mapping)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/set_traits.hpp DESTINATION include/emf4cpp/ecorecpp/mapping)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/string_traits.hpp DESTINATION include/emf4cpp/ecorecpp/mapping)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/type_traits.hpp DESTINATION include/emf4cpp/ecorecpp/mapping)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/MetaModelRepository.hpp DESTINATION include/emf4cpp/ecorecpp)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify/Adapter.hpp DESTINATION include/emf4cpp/ecorecpp/notify)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify_forward.hpp DESTINATION include/emf4cpp/ecorecpp)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify.hpp DESTINATION include/emf4cpp/ecorecpp)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify/Notification.hpp DESTINATION include/emf4cpp/ecorecpp/notify)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify/Notifier.hpp DESTINATION include/emf4cpp/ecorecpp/notify)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/handler.hpp DESTINATION include/emf4cpp/ecorecpp/parser)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/handler-xerces.hpp DESTINATION include/emf4cpp/ecorecpp/parser)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/localstr.hpp DESTINATION include/emf4cpp/ecorecpp/parser)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/parser_common.hpp DESTINATION include/emf4cpp/ecorecpp/parser)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/parser.hpp DESTINATION include/emf4cpp/ecorecpp/parser)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/parser-xerces.hpp DESTINATION include/emf4cpp/ecorecpp/parser)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/reference_parser.hpp DESTINATION include/emf4cpp/ecorecpp/parser)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/simple_xml_parser.hpp DESTINATION include/emf4cpp/ecorecpp/parser)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/unresolved_reference.hpp DESTINATION include/emf4cpp/ecorecpp/parser)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/externalstr.hpp DESTINATION include/emf4cpp/ecorecpp/serializer)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/greedy_serializer.hpp DESTINATION include/emf4cpp/ecorecpp/serializer)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/serializer.hpp DESTINATION include/emf4cpp/ecorecpp/serializer)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/serializer-xerces.hpp DESTINATION include/emf4cpp/ecorecpp/serializer)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/debug.hpp DESTINATION include/emf4cpp/ecorecpp/util)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/print.hpp DESTINATION include/emf4cpp/ecorecpp/util)

   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../emf4cpp)

add_library(emf4cpp-ecorecpp SHARED ${ecorecpp_HEADERS} ${ecorecpp_SOURCES})
set_target_properties(emf4cpp-ecorecpp PROPERTIES VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-ecorecpp ) # xerces-c)

install(TARGETS emf4cpp-ecorecpp DESTINATION lib)

