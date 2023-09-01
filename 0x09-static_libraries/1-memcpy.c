#include "main.h"
/**
 * _memcpy - function fills memory with a constant byte
 * @dest: first pointer
 * @src: second pointer
 * @n: no of bytes
 *
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr;
	unsigned int i;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	ptr = dest;
	return (ptr);
}
