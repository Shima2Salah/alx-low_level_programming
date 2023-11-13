#include "main.h"
/**
 * _abs - support function
 * @n: integer number
 *
 * Descreption: a function that print absolute value
 * Return: 0 (success)
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * (-1);
		return (n);
	}
}
