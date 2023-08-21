#include "main.h"
/**
 * rev_string - functn reverse array
 * @s: my input
 *
 * Description: function reverse array
 *
 */
void rev_string(char *s)
{
	int i;
	char temp;
	int x = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	while (x < (i / 2))
	{
		temp = s[x];
		s[x] = s[i - x - 1];
		s[i - x - 1] = temp;
		x++;
	}
}

