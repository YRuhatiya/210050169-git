#!/bin/bash

g++ -Werror main.cpp
if [[ $? == 0 ]]; then
    ./a.out $1
fi
