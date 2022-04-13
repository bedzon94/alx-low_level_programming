#0x0F. C - Function pointers

## Description
Function pointers and how to use them

## Table of contents

Directories | Description
----------- | -----------
[.gitignore](./.gitignore) | Ignore pushing compiled codes and test files.
[0-print_name.c](./0-print_name.c) | Function that prints a name. Prototype: void print_name(char *name, void (*f)(char *));
[1-array_iterator.c](./1-array_iterator.c) | Function that executes a function given as a parameter on each element of an array. Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
[2-int_index.c](./2-int_index.c) | Function that searches for an integer. Prototype: int int_index(int *array, int size, int (*cmp)(int));
[3-main.c](./3-main.c) | Contains main function only for Task 3.
[3-op_functions.c](./3-op_functions.c) | Contains the 5 following functions (not more): Prototype: int op_add(int a, int b); / Prototype: int op_sub(int a, int b); / Prototype: int op_mul(int a, int b); / Prototype: int op_div(int a, int b); / Prototype: int op_mod(int a, int b); (Task 3).
[3-get_op_func.c](./3-get_op_func.c) |  Contains the function that selects the correct function to perform the operation asked by the user. Prototype: int (*get_op_func(char *s))(int, int); (Task 3).
[3-calc.h](./3-calc.h) | Contains all the function prototypes and data structures used by the program (Task 3).
[100-main_opcodes.c](./100-main_opcodes.c) | Program that prints the opcodes of its own main function.
[function_pointers.h](./function_pointers.h) | Header file.
