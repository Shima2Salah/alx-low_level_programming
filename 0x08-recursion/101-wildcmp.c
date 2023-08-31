#include "main.h"
/**
 * wildcmp - Compares two strings and returns 1 if they can be considered
 * identical, otherwise return 0.
 * @s1: First input string.
 * @s2: Second input string.
 *
 * Return: Integer.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		else
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (0);
}

