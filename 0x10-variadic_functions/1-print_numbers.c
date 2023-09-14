#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - function print numbers
 * @separator: input character
 * @n: const unsigned integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if ((separator == NULL) || (i == n - 1))
		{
			printf("%d", va_arg(ptr, int));
		}
		else
		{
			printf("%d%s", va_arg(ptr, int), separator);
		}
	}
	printf("\n");
	va_end(ptr);
}
