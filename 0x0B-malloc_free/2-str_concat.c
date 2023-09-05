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
	int i = 0, j = 0, l = 0, m = 0, k = 0;
	char *ptr;

	if (s1 != NULL)
	{
		for (; s1[i] != '\0'; i++)
			;
		i++;
	}
	if (s2 != NULL)
	{
		for (; s2[j] != '\0'; j++)
			;
		j++;
	}
	if ((s1 == NULL) && (s2 == NULL))
		return (NULL);
	ptr = malloc((i + j) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[m] != '\0')
			ptr[k++] = s1[m++];
	}
	if (s2 != NULL)
	{
		while (s2[l] != '\0')
			ptr[k++] = s2[l++];
	}
	return (ptr);
}

