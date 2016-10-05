#! /bin/sh

EMF4CPPDIR=../..

# generator-release
VERSION=emf4cpp-generator-1.1.0-Linux-x86
mkdir -p emf4cpp-release
mkdir -p generator-release
mkdir -p ${VERSION}
(cd generator-release && cmake -DCMAKE_BUILD_TYPE=Release ${EMF4CPPDIR}/org.csu.emf4cpp.generator -DCMAKE_INSTALL_PREFIX=../${VERSION} && make -j7 install)
(cd emf4cpp-release && cmake -DCMAKE_BUILD_TYPE=Release ${EMF4CPPDIR}/emf4cpp -DCMAKE_INSTALL_PREFIX=../${VERSION} && make -j7 install)
tar czf ${VERSION}.tar.gz ${VERSION}

