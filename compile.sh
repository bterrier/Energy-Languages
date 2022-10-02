#!/bin/bash
set -e
folders=(
        node_modules/
        pidigits/
        chameneos-redux/
    )

for d in */ ; do
    if [[ " ${folders[*]} " =~ "$d" ]]
    then
        echo "skip $d"
        continue
    fi
    echo ">> $d"
    cd "$d"
    make ${@:1} 1>/dev/null
    cd ..
done
