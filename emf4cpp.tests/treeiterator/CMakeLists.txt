#
# CMakeLists.txt
# This file was created by EMF4CPP 2.0.5 and is copyrighted by the
# respective user and/or provider of the processed ECORE model.
#
# EMF4CPP is free software. You can obtain it from
# https://github.com/catedrasaes-umu/emf4cpp
#
#

cmake_minimum_required(VERSION 2.6)

project(emf4cpp-treeiterator CXX)

FILE(GLOB CMAKES "${CMAKE_CURRENT_SOURCE_DIR}/*.cmake")

foreach(cmake ${CMAKES})
  include(${cmake})
endforeach(cmake)


