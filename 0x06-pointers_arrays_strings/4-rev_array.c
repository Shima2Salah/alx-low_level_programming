#include "main.h"
/**
 * reverse_array - a function that reverse array
 * @a: first pointer
 * @n: integer
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0 ; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}

