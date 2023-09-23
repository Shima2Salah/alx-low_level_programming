#include <stdio.h>
void Print_functn(void) __attribute__ ((constructor));
/**
* Print_functn - Prnits a text before main.
*/
void Print_functn(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
