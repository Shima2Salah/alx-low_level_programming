#include "main.h"
/**
 * is_palindrome - functn returns 1 if string is palindrome
 * @s: input pointer
 *
 * Return: integer
 */
int is_palindrome(char *s)
{
	int i;

	i = sized(s);
	return (check(s, i, 0));
}
/**
 * sized - functn returns size of string
 * @s: input pointer
 *
 * Return: integer
 */
int sized(char *s)
{
	int z;

	if (*s == '\0')
	{
		return (0);
	}
	z = 1 + sized(s + 1);
	{
		return (z);
	}
}
/**
 * sized - functn returns size of string
 * @s: input pointer
 * @i: size
 * @n: integer
 *
 * Return: integer
 */
int check(char *s, int i, int n)
{
	if (*(s + i - n - 1) != *(s + n))
	{
		return (0);
	}
	else if ((n == (i / 2)) || (((n - 1) == (i / 2)) && ((i % 2) != 0)))
	{
		return (1);
	}
	else
	{
		return (check(s, i, n + 1));
	}
}

