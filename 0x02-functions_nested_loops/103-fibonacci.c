#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program sum all even fibonacci
 *
 * Return: 0
 */
int main(void)
{
	long n, sum;
	long n1 = 1;
	long n2 = 2;
	long x = 2;

	for (n = 1; n < 4000000; n++)
	{
		if (n == (n1 + n2))
		{
			n = n1 + n2;
			{
				if (n % 2 == 0)
				{
					sum = x + n;
					x = sum;
				}
			}
			n1 = n2;
			n2 = n;
		}
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}

