#include <stdio.h>
/**
 * main - the entry point
 *
 * Description: program to write all lowercase letters
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
	putchar('\n');
	return (0);
}

