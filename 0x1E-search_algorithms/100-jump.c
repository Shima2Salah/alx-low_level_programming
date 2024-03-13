#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search - func search jumped
 * @array:searched array
 * @size: size of array
 * @value: search value
 *
 * Return: index of array
 */
int jump_search(int *array, size_t size, int value)
{
size_t m, i = 0, j;
m = sqrt(size);
if (array == NULL)
return (-1);
while (i <= size)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
i = i + m;
if (array[i] >= value || i >= size)
{
printf("Value found between indexes [%ld] and [%ld]\n", i - m, i);
break;
}
}
for (j = i - m; j <= i && j < size; j++)
{
printf("Value checked array[%ld] = [%d]\n", j, array[j]);
if (array[j] == value)
return (j);
}
return (-1);
}
