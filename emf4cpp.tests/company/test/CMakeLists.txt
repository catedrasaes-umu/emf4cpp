

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/..  ${CMAKE_CURRENT_SOURCE_DIR}/../../../emf4cpp)

set(CMAKE_CXX_FLAGS "-Wall -std=c++11")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -funroll-loops")
set(CMAKE_LD_FLAGS "-L.. -L/opt/emf4cpp/lib")

# test
add_executable(test-company0 test.cpp)
target_link_libraries(test-company0 emf4cpp-ecorecpp emf4cpp-ecore emf4cpp-company)


