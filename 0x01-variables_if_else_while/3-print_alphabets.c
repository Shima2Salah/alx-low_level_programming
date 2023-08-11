#include <stdio.h>
/**
 * main - the entery point
 *
 * Description: program to view upper and lower case letters
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

