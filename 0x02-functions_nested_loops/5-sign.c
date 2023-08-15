#include "main.h"
/**
 * print_sign - support function
 * @n: check character
 *
 * Descreption: a function that checks for alphabetic character
 * Return: 0, 1, -1 (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}

