#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * exponential_search - func search interpolation
 * @array: searched array
 * @size: size of array
 * @value: search value
 *
 * Return: index of array
 */
int exponential_search(int *array, size_t size, int value)
{
size_t i = 1, j, max;
if (array == NULL)
return (-1);
while (i < size && array[i] < value)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
i = i * 2;
}
if (i > size - 1)
max = size - 1;
else
max = i;
printf("Value found between indexes [%ld] and [%ld]\n", i / 2, max);
j = _binary_search(array, i / 2, max, value);
return (j);
}

/**
 * _binary_search - func search binary
 * @array: searched array
 * @l: start index of the subarray
 * @h: end index of the subarray
 * @value: search value
 *
 * Return: index of array
 */
int _binary_search(int *array, size_t l, size_t h, int value)
{
size_t mid, i;
if (array == NULL)
return (-1);
while (l <= h)
{
mid = l + (h - l) / 2;
printf("Searching in array: ");
for (i = l; i < h; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);
if (array[mid] == value)
return (mid);
else if (array[mid] < value)
l = mid + 1;
else
h = mid - 1;
}
return (-1);
}
