#include "main.h"
/**
 * rot13 - a function that encodes a string
 * @a: input pointer
 *
 * Return: pointer
 */
char *rot13(char *a)
{
	char *b;
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (((a[i] >= 'a') && (a[i] <= 'm')) || ((a[i] >= 'A') && (a[i] <= 'M')))
		{
			a[i] = (a[i] + 13);
		}
		else if (((a[i] > 'm') && (a[i] <= 'z')) || ((a[i] > 'M') && (a[i] <= 'Z')))
		{
			a[i] = (a[i] - 13);
		}
	}
	b = a;
	return (b);
}
