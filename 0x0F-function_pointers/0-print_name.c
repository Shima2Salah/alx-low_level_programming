#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: pointer input
 * @f: function input
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
