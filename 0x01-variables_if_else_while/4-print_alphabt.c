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
	int i = 97;

	while (i <= 122)
	{
		if ((i != 101) && (i != 113))
		{
			putchar(i);
		}
		i++;
	}
		putchar('\n');
	return (0);
}

