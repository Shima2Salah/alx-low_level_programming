#include "lists.h"
/**
 * dlistint_len - print list length
 * @h:struct head pointer
 * Return:struct size
 */
size_t dlistint_len(const dlistint_t *h)
{
int i = 0;
const dlistint_t *current = h;
if (h == NULL)
return (0);
while (current != NULL)
{
current = current->next;
i++;
}
return (i);
}
