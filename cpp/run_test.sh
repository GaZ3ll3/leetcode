#!/bin/bash

for dir in `find . -type d | egrep [A-Z]`
do
cd $dir && make  &&  cd ..
done
