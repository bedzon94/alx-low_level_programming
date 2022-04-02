#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -r liball.a *.o

