#
# CMakeLists.txt
# Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
# 
# EMF4CPP is free software: you can redistribute it and/or modify it
# under the terms of the GNU Lesser General Public License as published
# by the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
# 
# EMF4CPP is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# See the GNU Lesser General Public License for more details.
# 
# You should have received a copy of the GNU Lesser General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
# 
#

cmake_minimum_required(VERSION 2.6)

project(emf4cpp-generator CXX C)

set(CPACK_GENERATOR TGZ)
set(CPACK_PACKAGE_VERSION_MAJOR "2")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_PACKAGE_VENDOR "Cátedra SAES-UMU")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Cátedra SAES-UMU: EMF4CPP-Generator")
include(CPack)

if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX 
    /opt/emf4cpp-${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH})
endif(NOT DEFINED CMAKE_INSTALL_PREFIX)

if(NOT DEFINED CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "release")
endif(NOT DEFINED CMAKE_BUILD_TYPE)

install(PROGRAMS emf4cpp.generator.sh DESTINATION bin)
install(FILES org.csu.emf4cpp.generator_${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH}.jar DESTINATION bin)

