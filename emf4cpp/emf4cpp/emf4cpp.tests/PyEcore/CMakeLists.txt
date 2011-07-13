
cmake_minimum_required(VERSION 2.6)

project(PyEcore CXX)

set(PyEcore_SOURCES
        main.cpp
     	PyEPackage.cpp
	PyEClass.cpp
	PyEModuleBase.cpp
	PyEObject.cpp
        CXX/cxxsupport.cpp
	CXX/cxx_extensions.cpp
	CXX/cxxextensions.c
	CXX/IndirectPythonInterface.cpp
   )

# Find the correct python
include(FindPythonLibs)

# Ignore this project if no python interpreter found.
if(PYTHONLIBS_FOUND)

  include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/../../emf4cpp ${PYTHON_INCLUDE_DIRS})

  add_executable(PyEcore ${PyEcore_HEADERS} ${PyEcore_SOURCES})
  target_link_libraries(PyEcore emf4cpp-ecore emf4cpp-ecorecpp ${PYTHON_LIBRARIES})

endif()

