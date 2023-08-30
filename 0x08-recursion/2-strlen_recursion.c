#include "main.h"
/**
 * _strlen_recursion - a functn returns the length of a string
 * @s: input pointer
 *
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (0);
	}
	i = 1 + (_strlen_recursion(s + 1));
	return (i);
}

