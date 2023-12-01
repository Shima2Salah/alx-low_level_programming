#include "hash_tables.h"
/**
 * hash_table_print - func prints hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int idx;
hash_node_t *current;
if (!ht)
return;
printf("{");
for (idx = 0; idx < ht->size; idx++)
{
current = ht->array[idx];
while (current)
{
printf("'%s': '%s'", current->key, current->value);
if (current->next != NULL)
printf(", ");
current = current->next;
}
}
printf("}\n");
}
