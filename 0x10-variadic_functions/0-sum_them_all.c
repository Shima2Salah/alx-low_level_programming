#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function sum parameters
 * @n: const unsigned integer
 *
 * Return: integer number
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	return (sum);
	va_end(ptr);
}
