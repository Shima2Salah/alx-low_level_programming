#include "main.h"
/**
 * _strncpy - a function that copy
 * @dest: first pointer
 * @src: second pointer
 * @n: third pointer
 *
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, k;
	int j = 0;
	char *ptr;

	for (k = 0; src[k] != '\0'; k++)
		;
	for (i = 0; i < n; i++)
	{
		if (j < k)
		{
			dest[i] = src[j];
		}
		else
		{
			dest[i] = '\0';
		}
		j++;
	}
	ptr = dest;
	return (ptr);
}
