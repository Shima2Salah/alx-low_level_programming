#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _puts(char *str);
int _strlen(char *s);
int _isdigit(int c);
int init(char **n1, char **n2, int *l1, int *l2, int size_r, char **min,
char **imin, char **max, char **imax, char **c1, char **c2);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
#endif
