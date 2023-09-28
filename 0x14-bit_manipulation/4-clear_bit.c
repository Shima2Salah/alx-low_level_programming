#include "main.h"
/**
 * clear_bit - functn to set binary to 1
 * @n: input unsigned long int pointer
 * @index: input unsigned int
 * Return: 1 success, -1 unsuccess
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int a;
if (index < (sizeof(n)) * 8)
{
a = ~(1 << index);
*n = *n & a;
return (1);
}
return (-1);
}
