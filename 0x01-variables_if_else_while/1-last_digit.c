#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - the entry point
 *
 * Description:  last digit of the number stored in the variable n
 *
 * Return: Always 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 2);
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 2);
	}
	if ((n % 10) < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 2);
	}
return (0);
}
