#include "hash_tables.h"
/**
 * hash_table_create - functn to create a new hash hash_table
 * @size: size of hash hash_table
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *creted_tbl;
unsigned long int x;
creted_tbl = malloc(sizeof(hash_table_t));
if (creted_tbl == NULL)
return (NULL);
creted_tbl->size = size;
creted_tbl->array = calloc(size, sizeof(hash_node_t *));
if (creted_tbl->array == NULL)
{
free(creted_tbl);
return (NULL);
}
for (x = 0; x < size; x++)
creted_tbl->array[x] = NULL;
return (creted_tbl);
}
