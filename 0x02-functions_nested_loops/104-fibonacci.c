#include <stdio.h>
/**
* main - Entry point.
* Return: Always 0 (success).
*/
int main(void)
{
	unsigned long int n1 = 1, n2 = 2, r, r2, x, y;
	int i;

	printf("1, 2");
	for (i = 0; i < 96; i++)
	{
		if (i < 90)
		{
			r = n1 + n2;
			printf(", %lu", r);
			n1 = n2;
			n2 = r;
		}
		else
		{
			if (i == 90)
			{
				x = n1 % 10000000000;
				n1 /= 10000000000;
				y = n2 % 10000000000;
				n2 /= 10000000000;
			}
			r = (n1 + n2 + (x + y)) / 10000000000;
			r2 = (x + y) % 10000000000;
			printf(", %lu%lu", r, r2);
			n1 = n2;
			n2 = r;
			x = y;
			y = r2;
		}
	}
	printf("\n");
	return (0);
}
