#include <stdio.h>
/**
 * main - the entery point
 *
 * Description: program that prints possible combinations of two digits
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n1, n2;

	for (n1 = 48; n1 <= 57; n1++)
	{
		for (n2 = 48; n2 <= 57; n2++)
		{
			if (n1 < n2)
			{
			putchar(n1);
			putchar(n2);
			if ((n1 != 56) || (n2 != 57))
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}

