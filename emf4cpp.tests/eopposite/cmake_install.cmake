# Install script for directory: /home/matthias/Development/emf4cpp/emf4cpp.tests/eopposite

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/emf4cpp" TYPE FILE FILES "/home/matthias/Development/emf4cpp/emf4cpp.tests/eopposite/eopposite.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/emf4cpp" TYPE FILE FILES "/home/matthias/Development/emf4cpp/emf4cpp.tests/eopposite/eopposite_forward.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/emf4cpp/eopposite" TYPE FILE FILES "/home/matthias/Development/emf4cpp/emf4cpp.tests/eopposite/eopposite/EoppositeFactory.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/emf4cpp/eopposite" TYPE FILE FILES "/home/matthias/Development/emf4cpp/emf4cpp.tests/eopposite/eopposite/EoppositePackage.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/emf4cpp/eopposite" TYPE FILE FILES "/home/matthias/Development/emf4cpp/emf4cpp.tests/eopposite/eopposite/TopLevel.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/emf4cpp/eopposite" TYPE FILE FILES "/home/matthias/Development/emf4cpp/emf4cpp.tests/eopposite/eopposite/NamedObject.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/emf4cpp/eopposite" TYPE FILE FILES "/home/matthias/Development/emf4cpp/emf4cpp.tests/eopposite/eopposite/LeftHand.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/emf4cpp/eopposite" TYPE FILE FILES "/home/matthias/Development/emf4cpp/emf4cpp.tests/eopposite/eopposite/RightHand.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/emf4cpp/eopposite" TYPE FILE FILES "/home/matthias/Development/emf4cpp/emf4cpp.tests/eopposite/eopposite/RightMultiple.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libemf4cpp-eopposite.so.0.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libemf4cpp-eopposite.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libemf4cpp-eopposite.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/matthias/Development/emf4cpp/emf4cpp.tests/eopposite/libemf4cpp-eopposite.so.0.0.1"
    "/home/matthias/Development/emf4cpp/emf4cpp.tests/eopposite/libemf4cpp-eopposite.so.1"
    "/home/matthias/Development/emf4cpp/emf4cpp.tests/eopposite/libemf4cpp-eopposite.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libemf4cpp-eopposite.so.0.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libemf4cpp-eopposite.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libemf4cpp-eopposite.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

file(WRITE "/home/matthias/Development/emf4cpp/emf4cpp.tests/eopposite/${CMAKE_INSTALL_MANIFEST}" "")
foreach(file ${CMAKE_INSTALL_MANIFEST_FILES})
  file(APPEND "/home/matthias/Development/emf4cpp/emf4cpp.tests/eopposite/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
endforeach()
