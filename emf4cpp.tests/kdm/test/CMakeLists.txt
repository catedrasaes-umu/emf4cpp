include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/..  ${CMAKE_CURRENT_SOURCE_DIR}/../../../emf4cpp)

# test
add_executable(test-kdm test.cpp)
target_link_libraries(test-kdm emf4cpp-ecorecpp emf4cpp-ecore emf4cpp-kdm)
