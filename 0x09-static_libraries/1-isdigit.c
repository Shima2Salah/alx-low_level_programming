#include "main.h"
/**
 * _isdigit - functn check digits
 * @c: input integer
 *
 * Description: check for digits
 * Return: 0, 1 (success)
 */
int _isdigit(int c)
{
	if ((c <= '9') && (c >= '0'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
