#include "function_pointers.h"
/**
 * array_iterator - function iterate on array
 * @array: input pointer
 * @size: input size
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

