# 0x17. C - Doubly linked lists

## Description
Doubly linked lists in C Programming

## Table of contents

Files | Description
----------- | -----------
[.gitignore](./.gitignore) | Ignore test files and compiled codes
[lists.h](./lists.h) | Header File
[0-print_dlistint.c](./0-print_dlistint.c) | Function that prints all the elements of a dlistint_t list. Prototype: size_t print_dlistint(const dlistint_t *h);
[1-dlistint_len.c](./1-dlistint_len.c) | Function that returns the number of elements in a linked dlistint_t list. Prototype: size_t dlistint_len(const dlistint_t *h);
[2-add_dnodeint.c](./2-add_dnodeint.c) | Function that adds a new node at the beginning of a dlistint_t list. Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
[3-add_dnodeint_end.c](./3-add_dnodeint_end.c) | Function that adds a new node at the end of a dlistint_t list. Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
[4-free_dlistint.c](./4-free_dlistint.c) | Function that frees a dlistint_t list. Prototype: void free_dlistint(dlistint_t *head);
[5-get_dnodeint.c](./5-get_dnodeint.c) | Function that returns the nth node of a dlistint_t linked list. Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
[6-sum_dlistint.c](./6-sum_dlistint.c) | Function that returns the sum of all the data (n) of a dlistint_t linked list. Prototype: int sum_dlistint(dlistint_t *head);
[7-insert_dnodeint.c](./7-insert_dnodeint.c) | Function that inserts a new node at a given position. Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
[8-delete_dnodeint.c](./8-delete_dnodeint.c) | Function that deletes the node at index index of a dlistint_t linked list. Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
[100-password](./100-password) | Password for crackme4.
[102-result](./102-result) | Finds the largest palindrome made from the product of two 3-digit numbers.
[103-keygen.c](./103-keygen.c) | keygen for crackme5. Usage of the crackme: ./crackme5 username key
