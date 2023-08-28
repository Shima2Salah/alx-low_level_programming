#include "main.h"
/**
 * _strpbrk - functn that searches a string for any of a set of bytes
 * @s: first pointer
 * @accept: second pointer
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
	}
	if (s[i] == accept[j])
	{
		return (s);
	}
	else
	{
	return (0);
	}
}

