#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */
/**
 * main - the entry point
 *
 * Description: project to print negative and positive values
 *
 */
/* betty style doc for function main goes there */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}

