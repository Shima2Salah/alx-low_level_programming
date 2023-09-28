#include "main.h"
/**
 * get_bit - functn to print binary
 * @n: input unsigned long in
 * @index: input unsigned int
 * Return: integer number
*/
int get_bit(unsigned long int n, unsigned int index)
{
int a;
a = (n >> (index)) & 1;
return (a);
}
