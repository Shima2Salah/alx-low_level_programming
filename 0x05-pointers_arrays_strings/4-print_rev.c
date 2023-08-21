#include "main.h"
/**
 * print_rev - functn print reverse array
 * @s: my input
 *
 * Description: function prints reverse array
 *
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	do {
		_putchar(*s);
		s--;
		i--;
	} while (i >= 0);
	_putchar('\n');
}

