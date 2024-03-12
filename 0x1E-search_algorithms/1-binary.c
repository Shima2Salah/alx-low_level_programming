#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search - func search binary
 * @array:searched array
 * @size: size of array
 * @value: search value
 *
 * Return: index of array
 */
int binary_search(int *array, size_t size, int value)
{
int l = 0, h = size - 1, i;
int mid;
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
