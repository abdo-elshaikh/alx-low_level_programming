#ifndef _HASH_TABLES_H
#define _HASH_TABLES_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

typedef struct hash_table_s
{
    char *size;
    char *array;
    struct hash_table_s *next;
} hash_table_t;

typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;
hash_table_t *hash_table_create(unsigned long int size);
#endif