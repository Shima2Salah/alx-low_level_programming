#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - functn to convert to binary
 * @b: input binary number
 * Return: unsigned integer number
*/
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int c = 1;
unsigned int n = 0;
if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
;
i--;
while (i >= 0)
{
if ((b[i] < '0') || (b[i] > '1'))
return (0);
n += (b[i] - '0') * c;
c *= 2;
i--;
}
return (n);
}
