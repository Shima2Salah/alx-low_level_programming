#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *fptr;
int i = 0;
fptr = fopen (filename, "r");
if ((fptr == NULL) || (filename == NULL))
return (0);
while (fptr != EOF)
{
fgets (filename, letters, fptr);
}
fclose (fptr);
return (i);
}
