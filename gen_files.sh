#!/bin/bash

mkdir files_800kB
pushd files_800kB
for num in `seq -w 1 10000` ; do
    dd if=/dev/zero of=file_${num} bs=1k count=800&
done
wait
popd


