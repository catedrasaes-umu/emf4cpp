#! /bin/bash

EMF4CPPDIR=../..

create_cfg ()
{
    CFG=$1
    shift
    mkdir -p ${CFG}
    (cd ${CFG} && cmake $@ ${EMF4CPPDIR})
}

create_win_cfg ()
{
    CFG=$1
    shift
    mkdir -p ${CFG}
    (cd ${CFG} && cmake -G "MSYS Makefiles" $@ ${EMF4CPPDIR})
}

if [[ "$OSTYPE" == "msys" ]]; then
	# release
	create_win_cfg "release" -DCMAKE_BUILD_TYPE=Release

	# debug
	create_win_cfg "debug" -DCMAKE_BUILD_TYPE=Debug
else
	# release
	create_cfg "release" -DCMAKE_BUILD_TYPE=Release

	# debug
	create_cfg "debug" -DCMAKE_BUILD_TYPE=Debug
fi
