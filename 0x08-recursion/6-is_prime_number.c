#include "main.h"
/**
 * is_prime_number - functn returns 1 if input is prime number, else 0
 * @n: input integer
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (div(n, n - 1));
}
/**
 * div - functn returns 1 if input is prime number, else 0
 * @n: input integer
 * @y: input integer
 *
 * Return: integer
 */
int div (int n , int y)
{
	if ((n % y) == 0)
	{
		return(0);
	}
	else if (((n % y) != 0) && (y > 2))
	{
		return(div(n, y - 1));
	}
	else
	{
		return (1);
	}
}

