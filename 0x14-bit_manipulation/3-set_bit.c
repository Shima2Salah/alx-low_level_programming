#include "main.h"
/**
 * set_bit - functn to set binary to 1
 * @n: input unsigned long int pointer
 * @index: input unsigned int
 * Return: integer number
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int a;
if (index < (sizeof(n)) * 8)
{
a = (1 << index);
*n = *n | a;
return (1);
}
return (-1);
}
