

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/..  ${CMAKE_CURRENT_SOURCE_DIR}/../../../emf4cpp)

# test
add_executable(test-idlmm test.cpp)
target_link_libraries(test-idlmm emf4cpp-ecorecpp emf4cpp-ecore emf4cpp-idlmm)


