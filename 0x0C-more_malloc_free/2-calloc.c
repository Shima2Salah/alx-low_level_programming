#include <stdlib.h>
/**
 * _calloc - functn to allocate memory
 * @nmemb: first input int
 * @size: second input int
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
	{
		*((char *)ptr + i) = 0;
	}
	return (ptr);
}
