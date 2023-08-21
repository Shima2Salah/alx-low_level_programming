#include "main.h"
/**
 * swap_int - functn swap 2 int
 * @a: first integer
 * @b: second integer
 *
 * Description: function swap a and b
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

