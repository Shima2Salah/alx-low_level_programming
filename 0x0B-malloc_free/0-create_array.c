#include "main.h"
#include <stdlib.h>
/**
 * create_array - fundtn creates a new array
 * @size: array size input
 * @c: input character
 *
 * Return: pointer of char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}

