#include "lists.h"
/**
 * print_dlistint - print struct values
 * @h:struct head pointer
 * Return:struct size
 */
size_t print_dlistint(const dlistint_t *h)
{
int i = 0;
const dlistint_t *current = h;
if (h == NULL)
return (0);
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
i++;
}
return (i);
}
