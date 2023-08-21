#include "main.h"
/**
 * _puts - functn prints array
 * @str: my input
 *
 * Description: function prints arr.
 *
 * Return: length
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

