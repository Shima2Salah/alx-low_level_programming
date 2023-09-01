#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry point
 * @argc: argument count
 * @argv: argument value
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if ((*argv[i] >= '0') && (*argv[i] <= '9'))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
				break;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

