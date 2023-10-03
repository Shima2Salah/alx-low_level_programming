#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - functn to read filename
 * @filename: input character
 * @letters: input integer
 * Return: integer size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file;
char *buffer;
ssize_t total_read;
ssize_t total_written;
if (filename == NULL)
return 0;
file = fopen(filename, "r");
if (file == NULL)
return (0);
buffer = malloc(letters + 1);
if (buffer == NULL)
{
fclose(file);
return (0);
}
total_read = fread(buffer, sizeof(char), letters, file);
if (total_read <= 0)
{
fclose(file);
free(buffer);
return (0);
}
buffer[total_read] = '\0';
total_written = fwrite(buffer, sizeof(char), total_read, stdout);
if (total_written != total_read)
{
fclose(file);
free(buffer);
return (0);
}
fclose(file);
free(buffer);
return (total_read);
}
