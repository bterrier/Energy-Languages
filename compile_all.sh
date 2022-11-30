#!/bin/bash
set -e
folders=(
        Ada
        C
        C++
        Go
        Java
        JavaScript
        Python
        Rust
    )

for folder in ${folders[@]}
do
    echo "> $folder"

    if [ ! -d "$folder" ]
    then
        echo $folder not found
        exit -1
    fi

    cd "$folder"
    ../compile.sh  ${@:1}
    cd ..
done