#include <stdio.h>
/**
 * main - the entry point
 * @argc: argument count
 * @argv: argument value
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (argc);
}
