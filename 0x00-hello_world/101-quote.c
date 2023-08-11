#include <unistd.h>
/**
 * main - Entry point
 *
 * Description : a C program that prints to he standard error
 *
 * Return: 1 (unsuccess)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

