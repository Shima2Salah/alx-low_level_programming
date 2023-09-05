#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - fundtn creates a new array
 * @s1: first pointer input
 * @s2: second pointer input
 *
 * Return: pointer of char
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, l, m;
	int k = 0;
	char *ptr;

	if ((ptr == NULL) || (s1 == NULL) || (s2 == NULL))
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	i++;
	j++;
	ptr = malloc((i + j) * sizeof(char));
	for (m = 0; s1[m] != '\0'; m++)
	{
		ptr[k] = s1[m];
		k++;
	}
	for (l = 0; s2[l] != '\0'; l++)
	{
		ptr[k] = s2[l];
		k++;
	}
	return (ptr);
}

