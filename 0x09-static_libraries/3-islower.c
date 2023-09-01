#include "main.h"
/**
 * _islower - support function
 * @c: charecter value
 *
 * Description: a function that checks for lowercase character
 * Return: 0 or 1 (success)
 */
int _islower(int c)
{
	if ((c <= 122) && (c >= 97))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
