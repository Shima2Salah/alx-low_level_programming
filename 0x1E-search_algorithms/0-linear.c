#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - func search linear
 * @array:searched array
 * @size: size of array
 * @value: search value
 *
 * Return: index of array
 */
int linear_search(int *array, size_t size, int value)
{
int i;
if (array == NULL)
return (-1);
for (i = 0; i < size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
break;
}
if (i == size)
return (-1);
return (i);
}
