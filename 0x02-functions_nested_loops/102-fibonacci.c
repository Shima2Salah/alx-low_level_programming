#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: program print first 50 fibonacci
 *
 * Return: 0
 */
int main(void)
{
	long i, n;
	long n1 = 1;
	long n2 = 2;

	printf("%ld, %ld", n1, n2);
	for (i = 1; i < 49; i++)
	{
		n = n1 + n2;
		printf(", %ld", n);
		n1 = n2;
		n2 = n;
	}
	printf("\n");
	return (0);
}
