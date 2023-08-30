#include "main.h"
/**
 * factorial - a functn returns factorial of a given number
 * @n: input integer
 *
 * Return: integer
 */
int factorial(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	i = n * (factorial(n - 1));
	return (i);
}

