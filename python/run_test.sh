#!/bin/bash

for dir in `find . -type d | egrep [A-Z]`
do
cd $dir && python main.py && cd ..
done