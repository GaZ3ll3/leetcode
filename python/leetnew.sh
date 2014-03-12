#!/bin/bash
mkdir $1
cd $1
cp ../common/makefile ./
cp ../common/sample.py ./
cp ../common/test.py ./
mv sample.py  solution.py


