#include "main.h"
/**
 * leet - a function that turns upper
 * @a: input pointer
 *
 * Return: pointer
 */
char *leet(char *a)
{
	char *b;
	int i, j;
	char c[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char d[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; d[j] != '\0'; j++)
		{
			if (a[i] == d[j])
			{
				a[i] = c[j];
			}
		}
	}
	b = a;
	return (b);
}

