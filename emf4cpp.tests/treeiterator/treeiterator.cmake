
#
# treeiterator.cmake
# This file was created by EMF4CPP 2.0.5 and is copyrighted by the
# respective user and/or provider of the processed ECORE model.
#
# EMF4CPP is free software. You can obtain it from
# https://github.com/catedrasaes-umu/emf4cpp
#
#


set(CMAKE_CXX_FLAGS "-Wall -std=c++11")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -funroll-loops")

set(treeiterator_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeiteratorPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeiteratorFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeiteratorPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeiteratorFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeNode.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeNodeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/Leaf.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/LeafImpl.cpp
)

set(treeiterator_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/treeiterator.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeiteratorPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeiteratorFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeNode.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/Leaf.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeiteratorFactory.hpp DESTINATION include/emf4cpp/treeiterator)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeiteratorPackage.hpp DESTINATION include/emf4cpp/treeiterator)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/TreeNode.hpp DESTINATION include/emf4cpp/treeiterator)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/Leaf.hpp DESTINATION include/emf4cpp/treeiterator)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/treeiterator/dllTreeiterator.hpp DESTINATION include/emf4cpp/treeiterator)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} /opt/emf4cpp/bin/../include/emf4cpp /opt/emf4cpp/bin/../include/emf4cpp)
link_directories(/opt/emf4cpp/bin/../lib)

add_library(emf4cpp-treeiterator SHARED ${treeiterator_HEADERS} ${treeiterator_SOURCES})
set_target_properties(emf4cpp-treeiterator PROPERTIES COMPILE_FLAGS "-DMAKE_TREEITERATOR_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-treeiterator emf4cpp-ecore)


install(TARGETS emf4cpp-treeiterator DESTINATION lib)

