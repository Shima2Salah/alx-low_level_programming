#include "main.h"
/**
 * _puts_recursion - a functn that prints a string
 * @s: input pointer
 *
 */
void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s != '\0')
	{
		_puts_recursion(s + 1);
	}
}

