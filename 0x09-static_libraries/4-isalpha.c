#include "main.h"
/**
 * _isalpha - support function
 * @c: check character
 *
 * Descreption: a function that checks for alphabetic character
 * Return: 0, 1 (success)
 */
int _isalpha(int c)
{
	if (((c <= 122) && (c >= 97)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
