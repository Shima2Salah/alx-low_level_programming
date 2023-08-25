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

	while (*s != '\0')
	{
		if ((*(s) >= 97 && *(s) <= 122) || (*(s) >= 65 &&
		*(s) <= 90))
		{
			*(s) = *(s) + 13 * a[*(s) <= 77 || (*(s) >= 97 &&
		*(s) <= 109)];
		}
		s++;
	}
	return (t);
}
