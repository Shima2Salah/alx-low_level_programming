#include "main.h"
/**
 * _strcmp - a function that compare
 * @s1: first pointer
 * @s2: second pointer
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			break;
		}
		else
		{
			j = 0;
		}
	}
	return (j);
}
