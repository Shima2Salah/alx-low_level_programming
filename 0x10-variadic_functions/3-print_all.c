#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_all - Prints anything.
* @format: String with format of parameters.
*/
void print_all(const char * const format, ...)
{
	va_list ptr;
	int j = 0;

	va_start(ptr, format);
	while (*(format + j) != '\0')
	{
		switch (*(format + j))
		{
			case'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case'f':
				printf("%f", va_arg(ptr, double));
				break;
			case's':
				{
					if (ptr == NULL)
						printf("(nil)");
					else
						printf("%s", va_arg(ptr, char *));
					break;
				}
		}
		j++;
		if (*(format + j) != '\0' && (*(format + j) == 'c' || *(format + j) == 'i'
					|| *(format + j) == 'f' || *(format + j) == 's'))
			printf(", ");
	}
	printf("\n");
	va_end(ptr);
}

