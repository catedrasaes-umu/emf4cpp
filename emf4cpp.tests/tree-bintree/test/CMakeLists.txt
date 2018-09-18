include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/..  ${CMAKE_CURRENT_SOURCE_DIR}/../../../emf4cpp)
link_directories(/opt/emf4cpp/lib)

set(CMAKE_CXX_FLAGS "-Wall -std=c++11")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -funroll-loops")

# read
add_executable(tree-read read.cpp)
target_link_libraries(tree-read emf4cpp-ecorecpp emf4cpp-ecore emf4cpp-tree)

# transform
add_executable(tree-transform transform.cpp)
target_link_libraries(tree-transform emf4cpp-ecorecpp emf4cpp-ecore emf4cpp-tree emf4cpp-bintree)

# test
add_executable(test-tree test.cpp)
target_link_libraries(test-tree emf4cpp-ecorecpp emf4cpp-ecore emf4cpp-tree)
