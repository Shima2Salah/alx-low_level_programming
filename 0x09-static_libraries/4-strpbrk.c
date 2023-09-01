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
	char *d = accept;
	char *e = s;

	while (*e != '\0')
	{
		while (*d != '\0')
		{
			if (*e == *d)
			{
				return (e);
			}
			d++;
		}
		e++;
		d = accept;
	}
	return (0);
}
