#include "lists.h"
/**
 * insert_dnodeint_at_index - functn to insert nodes
 * @h:struct head pointer
 * @idx: index required
 * @n: node data
 * Return: node pointer
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new;
dlistint_t *current = *h;
unsigned int i = 0;
if (h == NULL)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
while (i < idx - 1)
{
current = current->next;
i++;
}
current->next->prev = new;
new->next = current->next;
new->prev = current;
current->next = new;
return (new);
}
