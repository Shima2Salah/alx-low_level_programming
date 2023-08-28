#include "main.h"
/**
 * _memset - function fills memory with a constant byte
 * @s: pointer
 * @b: characte
 * @n: no of bytes
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	ptr = s;
	return (ptr);
}

