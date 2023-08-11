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

	for (i = 0; i <= 9 ; i++)
	{
		printf("%d", i);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

