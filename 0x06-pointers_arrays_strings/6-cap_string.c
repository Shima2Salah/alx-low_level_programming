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
	int i;

	if ((a[0] <= 'z') && (a[0] >= 'a'))
	{
		a[0] = (a[0] - 32);
	}
	for (i = 1; a[i] != '\0'; i++)
	{
		if ((a[i] == ' ') || (a[i] == '\t') || (a[i] == '\n'))
		{
			if ((a[i + 1] <= 'z') && (a[i + 1] >= 'a'))
			{
				a[i + 1] = (a[i + 1] - 32);
			}
		}
	}
	b = a;
	return (b);
}
