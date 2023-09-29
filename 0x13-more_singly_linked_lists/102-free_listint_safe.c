#include "lists.h"
#include <stdlib.h>
/**
* free_listint_safe - Frees a listint_t list.
* @h: Pointer to pointer to list to free.
* Return: Number of nodes of the list.
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *p;
size_t len = 0;
if (!h || !*h)
return (0);
while (*h != NULL)
{
p = *h;
if (p->next >= p)
p->next = NULL;
*h = p->next;
free(p);
len++;
}
*h = NULL;
return (len);
}
