#include <stddef.h>
#include <stdlib.h>
#include "dog.h"
/**
* new_dog - Creates a new dog.
* @name: Name for the dog.
* @age: Age for the dog.
* @owner: Owner of the dog.
* Return: New dog created.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int i, j;
dog_t *d;
if (!name)
name = "";
if (!owner)
owner = "";
for (i = 0; name[i] != '\0'; i++)
;
for (j = 0; owner[j] != '\0'; j++)
;
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
d->name = malloc(i + 1);
if (d->name == NULL)
{
free(d);
return (NULL);
}
for (i = 0; name[i] != '\0'; i++)
d->name[i] = name[i];
d->name[i] = '\0';
d->age = age;
d->owner = malloc(j + 1);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
for (j = 0; owner[j] != '\0'; j++)
d->owner[j] = owner[j];
d->owner[j] = '\0';
return (d);
}
