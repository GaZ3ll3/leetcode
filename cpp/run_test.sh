#!/bin/bash

RED='\033[0;31m'
GRE='\033[0;32m'
NON='\033[0m'

for dir in `find . -type d | egrep [A-Z]`
do
cd $dir && echo -e ${RED}$dir $GRE && make  &&  cd ..
echo -e $NON
done
