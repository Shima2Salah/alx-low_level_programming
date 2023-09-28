#include "main.h"
/**
 * print_binary - functn to print binary
 * @n: input long integer
*/
void print_binary(unsigned long int n)
{
int c = sizeof(n) * 8;
while (c > 0)
{
c--;
_putchar(((n >> c) &1) + '0');
}
}
