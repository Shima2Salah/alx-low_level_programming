#include "main.h"
/**
 * _strcat - a function that concatenates
 * @dest: first pointer
 * @src: second pointer
 *
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	char *temp;

	for (i = 0; dest[i] != '\0'; i++)
		;
	temp = src;
	dest[i] = temp[0];
	for (j = 0; temp[j] != '\0'; j++)
	{
		dest[i++] = temp[j];
	}
	temp = dest;
	return (temp);
}

