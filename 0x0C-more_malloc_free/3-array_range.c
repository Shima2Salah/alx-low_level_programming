#include <stdlib.h>
/**
 * array_range - functn to allocate memory
 * @min: first input int
 * @max: second input int
 *
 * Return: int pointer
 */
int *array_range(int min, int max)
{
	int i;
	int size = max - min;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (size));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= (size); i++)
	{
		*(ptr + i) = min;
		min++;
	}
	return (ptr);
}
