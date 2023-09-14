#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function print numbers
 * @separator: input character
 * @n: const unsigned integer
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if ((separator == NULL) || (i == n - 1))
		{
			if (ptr == NULL)
			{
				printf("nil");
			}
			else
			{
				printf("%s", va_arg(ptr, char*));
			}
		}
		else
		{
			if (ptr == NULL)
			{
				printf("nil%s", separator);
			}
			else
			{
				printf("%s%s", va_arg(ptr, char*), separator);
			}
		}
	}
	printf("\n");
	va_end(ptr);
}

