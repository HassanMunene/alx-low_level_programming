#include "hash_tables.h"

/**
 *hash_table_get - retrieves a value associated with a key
 *@ht: hash table where the value is stored
 *@key: key of of the value in the hash table
 *Return: value connected to the key or NULL if key cannot be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned int index;
hash_node_t *temp_ht;

if (!ht || !key || !strlen(key) || !ht->array || !ht->size)
{
    return (NULL);
}
index = key_index((unsigned char *)key, ht->size);
temp_ht = ht->array[index];
if (temp_ht == NULL)
{
    return (NULL);
}
for (; temp_ht != NULL; temp_ht = temp_ht->next)
{
if (strcmp(temp_ht->key, key) == 0)
return (temp_ht->value);
}
return (NULL);
}
