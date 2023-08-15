#include "main.h"
/**
 * print_last_digit - support function
 * @n: integer number
 *
 * Descreption: a function that prints the last digit of a number
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	n = n % 10;
	_putchar (n + 48);
	return (n);
}

