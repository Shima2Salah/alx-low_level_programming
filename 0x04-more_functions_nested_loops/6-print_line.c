#include "main.h"
/**
 * print_line - functn print line
 * @n: input integer
 *
 * Description: a function that draws a straight line in the terminal
 *
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

