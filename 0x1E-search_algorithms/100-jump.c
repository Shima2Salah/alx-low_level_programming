#include "search_algos.h"
#include <math.h>
/**
* jump_search - Searches for a value in a sorted array of integers using the
*		Jump search algorithm.
* @array: Pointer to the first element of the array to search in.
* @size: Number of elements in array.
* @value: Value to search for.
* Return: First index where value is located or -1 if not.
*/
int jump_search(int *array, size_t size, int value)
{
size_t m, i = 0, j;
m = sqrt(size);
if (array == NULL)
return (-1);
for (i = 0; i < size; i += m)
{
if (array[i] >= value)
break;
printf("Value checked array[%d] = [%d]\n", i, array[i]);
}
printf("Value found between indexes [%ld] and [%ld]\n", i - m, i);
for (j = i - m; j <= i; j++)
{
if (j >= size)
return (-1);
printf("Value checked array[%ld] = [%d]\n", j, array[j]);
if (array[j] == value)
return (j);
}
return (-1);
}
