include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/../../emf4cpp.generator/src-gen ${CMAKE_CURRENT_SOURCE_DIR}/../../emf4cpp.generator/src-nogen)

set(CMAKE_CXX_FLAGS "-Wall -std=c++11")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -funroll-loops")

# test-serializer
add_executable(test_km3 test_km3.cpp)
#target_link_libraries(test-serializer emf4cpp-ecorecpp emf4cpp-ecore)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/test.km3 ${CMAKE_CURRENT_BINARY_DIR}/test.km3 COPYONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/test2.km3 ${CMAKE_CURRENT_BINARY_DIR}/test2.km3 COPYONLY)

