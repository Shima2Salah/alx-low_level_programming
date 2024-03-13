#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * interpolation_search - func search interpolation
 * @array:searched array
 * @size: size of array
 * @value: search value
 *
 * Return: index of array
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t pos, l, h;
l = 0;
h = size - 1;
if (array == NULL)
return (-1);
if (value > array[h])
{
pos = l + (((value - array[l]) * (h - l)) / (array[h] - array[l]));
printf("Value checked array[%ld] is out of range\n", pos);
return (-1);
}
while (l <= h)
{
pos = l + (((value - array[l]) * (h - l)) / (array[h] - array[l]));
printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
if (array[pos] == value)
return (pos);
else if (array[pos] < value)
l = pos + 1;
else if (value < array[pos])
h = pos - 1;
}
return (-1);
}
