#include "hash_tables.h"
/**
 * key_index - func return index using djb2 algorithm
 * @key: key value to be hashed
 * @size: size of array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index;
index = hash_djb2(key) % size;
return (index);
}
