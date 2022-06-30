# 0x1A. C - Hash tables

## Description
HashTable Data Structure - Introduction to Hash Tables

## Table of contents

Files | Description
----------- | -----------
[.gitignore](./.gitignore) | Ignore test files
[hash_tables.h](./hash_tables.h) | Header file
[0-hash_table_create.c](./0-hash_table_create.c) | Function that creates a hash table. Prototype: hash_table_t *hash_table_create(unsigned long int size);
[1-djb2.c](./1-djb2.c) | A hash function implementing the djb2 algorithm. Prototype: unsigned long int hash_djb2(const unsigned char *str);
[2-key_index.c](./2-key_index.c) | Function that gives you the index of a key. Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
[3-hash_table_set.c](./3-hash_table_set.c) | Function that adds an element to the hash table. Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
[4-hash_table_get.c](./4-hash_table_get.c) | Function that retrieves a value associated with a key. Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
[5-hash_table_print.c](./5-hash_table_print.c) | Function that prints a hash table. Prototype: void hash_table_print(const hash_table_t *ht);
[6-hash_table_delete.c](./6-hash_table_delete.c) | Function that deletes a hash table. Prototype: void hash_table_delete(hash_table_t *ht);
[100-sorted_hash_table.c](./100-sorted_hash_table.c) | READ [PHP Internals Book: HashTable](https://alx-intranet.hbtn.io/rltoken/SIdpN9PE_9aYBCHUGPX-fw)


---
## Author

Norris Selorm Bedzo | [Norris](https://github.com/bedzon94)
