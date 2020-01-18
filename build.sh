#!/bin/bash

readonly DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

readonly prev_dir=$(pwd)

cd $DIR

if [ ! -d "./build" ]; then
    mkdir ./build
fi

cd ./build

cmake -DBUILD_TESTING=OFF -G "Unix Makefiles" ..
cmake --build . --config Release --target myExe

cd $prev_dir

exit 0

