#include "main.h"
/**
 * rot13 - a function that encodes a string
 * @a: input pointer
 *
 * Return: pointer
 */
char *rot13(char *s)
{
	char *b;
	int i, j;
	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

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
