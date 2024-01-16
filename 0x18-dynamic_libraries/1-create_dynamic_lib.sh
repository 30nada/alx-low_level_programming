#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c -FPIC *.c
gcc -shared -o liaball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
