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
	void *new_ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
	}
	else if (new_size == 0)
	{
		free(ptr);
		new_ptr = NULL;
	}
	else
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < old_size && i < new_size; i++)
			{
				*((char *)ptr + i) = *((char *)new_ptr + i);
			}
			free(ptr);
		}
	}
	return (new_ptr);
}

