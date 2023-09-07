#include <stdlib.h>
/**
 * _realloc - functn to allocate memory
 * @ptr: input pointer
 * @old_size: first input int
 * @new_size: second input int
 *
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	void *new_ptr;

	if (new_size > old_size)
		new_ptr = malloc(new_size);
	if (ptr == NULL)
		new_ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
		return (NULL);
	for (i = 0; i < old_size; i++)
		*((char*)ptr+i) = *((char*)new_ptr+i);
	free(ptr);
	return (new_ptr);
}

