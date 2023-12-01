#include "hash_tables.h"
/**
 * hash_table_delete - func delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int idx;
hash_node_t *current;
hash_node_t *helper;
if (!ht)
return;
for (idx = 0; idx < ht->size; idx++)
{
current = ht->array[idx];
while (current)
{
helper = current->next;
free(current->key);
free(current->value);
free(current);
current = helper;
}
}
free(ht->array);
free(ht);
}
