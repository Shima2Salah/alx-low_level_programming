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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((*(s - 1) >= 97 && *(s - 1) <= 122) || (*(s - 1) >= 65 &&
					*(s - 1) <= 90))
		{
			*(s - 1) = *(s - 1) + 13 * a[*(s - 1) <= 77 || (*(s - 1) >= 97 &&
					*(s - 1) <= 109)];
		}
		s++;
	}
	return (t);
}
