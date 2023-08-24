#include "main.h"
/**
 * cap_string - a function that turns upper
 * @a: input pointer
 *
 * Return: pointer
 */
char *cap_string(char *a)
{
	char *b;
	int i, j;
	char c[] = {' ', '\t', '\n', '.', '!', '?', '"', '(', ')', '{', '}'};

	if ((a[0] <= 'z') && (a[0] >= 'a'))
	{
		a[0] = (a[0] - 32);
	}
	for (i = 1; a[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (a[i] == c[j])
			{
				if ((a[i + 1] <= 'z') && (a[i + 1] >= 'a'))
				{
					a[i + 1] = (a[i + 1] - 32);
				}
			}
		}
	}
	b = a;
	return (b);
}
