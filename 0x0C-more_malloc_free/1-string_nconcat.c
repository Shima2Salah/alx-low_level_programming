#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - functn to concat
 * @s1: first input character
 * @s2: second input character
 * @n: integer input
 *
 * Return: character pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *ptr;

	if (s1 == NULL)
		s1 =  " ";
	if (s2 == NULL)
		s2 =  " ";
	for (i = 0; s1[i] != 0; i++)
		;
	ptr = malloc(sizeof(char) * (i + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		ptr[j] = s1[j];
	}
	for (k = 0; k < n; k++)
	{
		ptr[j] = s2[k];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

