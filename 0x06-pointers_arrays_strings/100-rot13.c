#include "main.h"
/**
* rot13 - Encodes a string using rot13.
* @s: String to encode.
* Return: Encoded string.
*/
char *rot13(char *s)
{
	int a[] = {-1, 1};
	char *t = s;

	while (*s++)
	{
		if ((*(s - 1) >= 'a' && *(s - 1) <= 'z') || (*(s - 1) >= 'A' &&
		*(s - 1) <= 'Z'))
		{
			*(s - 1) = *(s - 1) + 13 * a[*(s - 1) <= 'M' || (*(s - 1) >= 'a' &&
		*(s - 1) <= 'm')];
		}
	}
	return (t);
}
