#! /bin/sh

EMF4CPPDIR=../..

create_cfg ()
{
    CFG=$1
    shift
    mkdir -p ${CFG}
    (cd ${CFG} && cmake $@ ${EMF4CPPDIR})
}

# release
create_cfg "release" -DCMAKE_BUILD_TYPE=Release

# debug
create_cfg "debug" -DCMAKE_BUILD_TYPE=Debug

