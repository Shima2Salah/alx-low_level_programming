#include <stdio.h>
/**
 * print_buffer - Prints the contents of a buffer.
 * @b: Pointer to the buffer.
 * @size: The size of the buffer.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%08x: ", i);
			for (j = i; j < i + 10; j++)
			{
				if (j >= size)
				{
					printf(" ");
				}
				else if (b[j] >= ' ' && b[j] <= '~')
				{
					printf("%c", b[j]);
				}
				else
				{
					printf(".");
				}
			}
			printf("\n");
		}
	}
}

