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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

