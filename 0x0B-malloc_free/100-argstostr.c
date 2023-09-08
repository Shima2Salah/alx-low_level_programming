#include <stdlib.h>
/**
* argstostr - Concatenates all the arguments of your program.
* @ac: Argument counter.
* @av: Argument vector.
* Return: Pointer to concatenated string.
*/
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *ptr;

	if ((ac == 0) || (av == NULL))
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	ptr = malloc(sizeof(ptr) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*(ptr + k) = av[i][j];
			k++;
		}
		*(ptr + k) = '\n';
		k++;
	}
	*(ptr + k) = '\0';
	return (ptr);
}

