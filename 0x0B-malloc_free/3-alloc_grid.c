#include <stdlib.h>
/**
* alloc_grid - Creates a 2 dimensional array of integers.
* @width: Width of array.
* @height: Height of the array.
* Return: Pointer to resulting array, NULL when error.
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr = malloc(sizeof(ptr) * height);

	if (width <= 0 || height <= 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
		ptr[j] = malloc(sizeof(int) * width);
	for (j = 0; j < height; j++)
		for (i = 0; i < width; i++)
			ptr[j][i] = 0;
	return (ptr);
}

