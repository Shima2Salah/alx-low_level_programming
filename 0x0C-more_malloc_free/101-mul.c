#include "main.h"
#include <stdlib.h>

/**
 * print_error - prints error message and exits with status 98
 */
void print_error(void)
{
	char *error = "Error\n";
	int i;

	for (i = 0; error[i] != '\0'; i++)
		_putchar(error[i]);
	exit(98);
}

/**
 * check_valid - checks if the given string is valid
 * @s: string to check
 */
void check_valid(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			print_error();
	}
}

/**
 * convert_to_long - converts string to long integer
 * @s: string to convert
 * Return: long integer value of string
 */
long int convert_to_long(char *s)
{
	long int result = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		result = result * 10 + (s[i] - '0');
	}
	return (result);
}

/**
 * print_result - prints the result
 * @n: result to print
 */
void print_result(long int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_result(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	long int num1, num2, result;

	if (argc != 3)
		print_error();
	check_valid(argv[1]);
	check_valid(argv[2]);
	num1 = convert_to_long(argv[1]);
	num2 = convert_to_long(argv[2]);
	result = num1 * num2;
	print_result(result);
	_putchar('\n');
	return (0);
}

