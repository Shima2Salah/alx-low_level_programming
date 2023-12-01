#include "hash_tables.h"
/**
 * hash_table_print - func prints hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int idx, i = 0, count = 0;
hash_node_t *current;
if (!ht)
return;
for (idx = 0; idx < ht->size; idx++)
{
current = ht->array[idx];
while (current)
{
if (current->key != NULL)
count++;
current = current->next;
}
}
printf("{");
for (idx = 0; idx < ht->size; idx++)
{
current = ht->array[idx];
while (current)
{
printf("'%s': '%s'", current->key, current->value);
if (i < count - 1)
{
printf(", ");
i++;
}
current = current->next;
}
}
printf("}\n");
}
