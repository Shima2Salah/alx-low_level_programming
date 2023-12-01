#include "hash_tables.h"
/**
 * hash_table_get - func return value of key
 * @ht: hash table
 * @key: key to be hashed
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx;
hash_node_t *current;
if (!ht || !key)
return (NULL);
idx = key_index((unsigned char *)key, ht->size);
current = ht->array[idx];
while (current)
{
if (strcmp(current->key, key) == 0)
return (current->value);
current = current->next;
}
return (NULL);
}
