#include "main.h"
/**
 * _pow_recursion - a functn returns a value of x raised to power of y
 * @x: first integer
 * @y: second integer
 *
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	int z;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	z = x * (_pow_recursion(x, y - 1));
	return (z);
}

