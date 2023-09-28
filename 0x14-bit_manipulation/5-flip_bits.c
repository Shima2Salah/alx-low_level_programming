#include "main.h"
/**
 * flip_bits - functn to count flip bits
 * @n: input unsigned long int
 * @m: input secound unsigned long int
 * Return: unsigned int
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int a, i = 0;
int b = 0;
a = n ^ m;
while (i < (sizeof(a)) * 8)
{
if ((a & 1) == 1)
b++;
a = a >> 1;
i++;
}
return (b);
}
