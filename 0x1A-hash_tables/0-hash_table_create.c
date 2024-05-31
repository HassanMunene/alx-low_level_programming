#include "hash_tables.h"

/**
 * hash_table_create: create a hash table
 * @size: define the size of the array
 *
 * Return: return a pointer to the memory allocation of array or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table;
    unsigned long int i;

    new_table = malloc(sizeof(hash_table_t));
    if (new_table == NULL)
    {
        return NULL;
    }

    for (i = 0; i < size; i++)
    {
        new_table->array = NULL;
    }
    new_table->size = size;

    return (new_table);
}
