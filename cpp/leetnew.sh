#!/bin/bash
mkdir $1
cd $1
cp ../common/makefile ./
cp ../common/sample.cpp ./
cp ../common/sample.h ./
mv sample.cpp  main.cpp
mv sample.h solution.h


