#include "function_pointers.h"
#include <stddef>
/**
 * print_name - a function that prints a name
 * @name: pointer input
 * @f: function input
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
		f(name);
}
