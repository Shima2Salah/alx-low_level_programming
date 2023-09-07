#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - functn check malloc
 * @b: unsigned integer input
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

