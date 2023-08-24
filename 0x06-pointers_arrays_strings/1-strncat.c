#include "main.h"
/**
 * _strncat - a function that concatenates
 * @dest: first pointer
 * @src: second pointer
 * @n: third pointer
 *
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *temp;

	for (i = 0; dest[i] != '\0'; i++)
		;
	temp = src;
	for (j = 0; j < n ; j++)
	{
		dest[i] = temp[j];
		i++;
	}
	temp = dest;
	return (temp);
}

