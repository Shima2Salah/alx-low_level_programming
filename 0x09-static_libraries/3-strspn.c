#include "main.h"
/**
 * _strspn - functn that gets the length of a prefix substring
 * @s: first pointer
 * @accept: second pointer
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int d = 0;
	int i, j;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				d++;
			}
		}
	}
	return (d);
}
