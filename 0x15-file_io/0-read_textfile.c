#include "main.h"
/**
 * read_textfile - functn to read filename
 * @filename: input character
 * @letters: input integer
 * Return: integer size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *fptr;
size_t i = 0;
char ch;
fptr = fopen(filename, "r");
if ((fptr == NULL) || (filename == NULL))
return (0);
while (((ch = getc(fptr)) != EOF) && i < letters)
{
_putchar(ch);
if (ch != '\n')
i++;
}
fclose(fptr);
return (i);
}
