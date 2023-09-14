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
	char *str;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char*);
		if ((separator == NULL) || (i == n - 1))
		{
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
		}
		else
		{
			if (str == NULL)
			{
				printf("(nil)%s", separator);
			}
			else
			{
				printf("%s%s", str, separator);
			}
		}
	}
	printf("\n");
	va_end(ptr);
}

