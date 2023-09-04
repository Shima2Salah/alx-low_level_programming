#include "main.h"
#include <stdlib.h>
/**
 * _strdup - fundtn creates a new array
 * @str: pointer input
 *
 * Return: pointer of char
 */

char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		;
	}
	j++;
	ptr = malloc(j * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
	free(ptr);
}

