#include "main.h"
/**
 * _strlen - functn measure array length
 * @s: my input
 *
 * Description: function calculate arr length
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
