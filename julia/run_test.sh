#!/bin/bash

for dir in `find . -type d | egrep [A-Z]`
do
cd $dir && julia main.jl && cd ..
done
