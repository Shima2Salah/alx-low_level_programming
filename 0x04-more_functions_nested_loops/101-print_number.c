#include "main.h"
/**
 * print_number - functn prints an integer
 * @n: input integer
 *
 * Description: a function that prints an integer
 *
 */
void print_number(int n)
{
	int div = 1;

	if (n < 0)
	{
		{
			_putchar('-');
		}
		while (-1 * ((n / div)) >= 10)
		{
			div *= 10;
		}
		while (div > 0)
		{
			_putchar(-1 * ((n / div) % 10) + '0');
			div /= 10;
		}
	}
	else
	{
		while ((n / div) >= 10)
		{
			div *= 10;
		}
		while (div > 0)
		{
			_putchar((n / div) % 10 + '0');
			div /= 10;
		}
	}
}

