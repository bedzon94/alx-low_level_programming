#!/bin/bash
gcc -fPIC -c testfiles/*.c
gcc -shared -o liball.so *.o
