#include <stdlib.h>
/**
* _realloc - Rallocates a memory block using malloc and.
* @ptr: Old pointer.
* @old_size: Size of old pointer.
* @new_size: New desired size.
* Return: New pointer with new size.
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
		if (new_ptr != NULL)
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

