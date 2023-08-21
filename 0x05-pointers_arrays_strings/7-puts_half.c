#include "main.h"
/**
 * puts_half - functn prints half string
 * @str: my input
 *
 * Description: function prints second half
 */
void puts_half(char *str)
{
	int i, x;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (x = 0; str[x] != '\0'; x++)
	{
		if (x >= ((i - 1) / 2))
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}

