
cmake_minimum_required(VERSION 2.6)

project(tests CXX)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/../../emf4cpp)

# read-metamodel
add_executable(read-metamodel read-metamodel.cpp)
target_link_libraries(read-metamodel emf4cpp-ecorecpp emf4cpp-ecore)

# company
add_executable(company company.cpp)
target_link_libraries(company emf4cpp-ecorecpp emf4cpp-ecore)

# test-serializer
add_executable(test-serializer test-serializer.cpp)
target_link_libraries(test-serializer emf4cpp-ecorecpp emf4cpp-ecore)

# test-json-serializer
add_executable(test-json-serializer test-json-serializer.cpp)
target_link_libraries(test-json-serializer emf4cpp-ecorecpp emf4cpp-ecore)


