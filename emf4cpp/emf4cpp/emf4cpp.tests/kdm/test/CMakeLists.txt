include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/..  ${CMAKE_CURRENT_SOURCE_DIR}/../../../emf4cpp)

# test
add_executable(test-kdm test.cpp)
target_link_libraries(test-kdm emf4cpp-ecorecpp emf4cpp-ecore emf4cpp-kdm emf4cpp-kdm_action emf4cpp-kdm_build emf4cpp-kdm_code emf4cpp-kdm_conceptual emf4cpp-kdm_core emf4cpp-kdm_data emf4cpp-kdm_event emf4cpp-kdm_kdm emf4cpp-kdm_platform emf4cpp-kdm_source emf4cpp-kdm_structure emf4cpp-kdm_ui)


