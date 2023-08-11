#include <stdio.h>
/**
 * main - the entery point
 *
 * Description: program to print lower case in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

