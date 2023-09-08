#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - realloc a memory address
 * @ptr: current address
 * @old_size: old size of the address
 * @new_size: new size of the address
 *
 * Return: pointer to the new address
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		*((char *)ptr + i) = *((char *)new_ptr + i);
	free(ptr);
	return (new_ptr);
}

