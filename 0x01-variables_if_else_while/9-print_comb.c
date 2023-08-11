#include <stdio.h>
/**
 * main - the entery point
 *
 * Description: program that prints all single digit numbers from 0 to 10
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
		putchar(' ');
		putchar(',');
		}
	}
	putchar('\n');
	return (0);
}

