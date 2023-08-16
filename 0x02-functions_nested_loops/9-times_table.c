#include "main.h"
/**
 * jack_bauer - support function
 *
 * Descreption: a function that prints the 9 times table
 */
void jack_bauer(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k > 9)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{
				_putchar(k + '0');
			}
			if (j != 9)
			_putchar(',');
			_putchar('\t');
		}
		_putchar('\n');
	}
}

