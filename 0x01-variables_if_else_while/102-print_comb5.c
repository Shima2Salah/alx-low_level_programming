#include <stdio.h>
/**
 * main - the entery point
 *
 * Description: program prints possible combinations of four digits
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n1, n2, n3, n4;

	for (n1 = 48; n1 <= 57; n1++)
	{
		for (n2 = 48; n2 <= 57; n2++)
		{
			for (n3 = 48; n3 <= 57; n3++)
			{
				for (n4 = 48; n4 <= 57; n4++)
				{
					if (((n1 + n2) <= (n3 + n4)) && (n1 <= n3))
					{
					putchar(n1);
					putchar(n2);
					putchar(' ');
					putchar(n3);
					putchar(n4);
					if ((n1 != 57) || (n2 != 56) || (n3 != 57) || (n4 != 57))
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
