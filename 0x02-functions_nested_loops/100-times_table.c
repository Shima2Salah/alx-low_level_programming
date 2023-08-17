#include "main.h"
/**
 * print_times_table - functn prints time table
 * @n: first integer
 *
 * Description: to print time table
 */
void print_times_table(int n)
{
	int i, j, k;

	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k <= 9)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(k + 48);
				}
				else if (k <= 99)
				{
					_putchar(' ');
					_putchar((k / 10) + 48);
					_putchar((k % 10) + 48);
				}
				else
				{
					_putchar((k / 100) + 48);
					_putchar(((k % 100) / 10) + 48);
					_putchar((k % 10) + 48);
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

