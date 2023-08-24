#include "main.h"
/**
 * string_toupper - a function that turns upper
 * @a: input pointer
 *
 * Return: pointer
 */
char *string_toupper(char *a)
{
	char *b;
	int i;

	b = a;

	{
		for (i = 0; a[i] != '\0'; i++)
		{
			if ((a[i] <= 'z') && (a[i] >= 'a'))
			{
				a[i] = (a[i] - 32);
			}
		}
	}
	return (b);
}

