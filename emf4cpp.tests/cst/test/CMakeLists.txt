

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/..  ${CMAKE_CURRENT_SOURCE_DIR}/../../../emf4cpp)

# test
add_executable(test-cst test.cpp)
target_link_libraries(test-cst emf4cpp-ecorecpp emf4cpp-ecore emf4cpp-CST)


