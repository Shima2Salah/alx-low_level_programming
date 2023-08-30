#include "main.h"
/**
 * _puts_recursion - a functn that prints a string
 * @s: input pointer
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

