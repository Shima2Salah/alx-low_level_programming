#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 * @head:struct head pointer
 * @n: node value
 * Return:list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *tail;
dlistint_t *current = *head;
if (head == NULL)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
while (current != NULL)
{
if (current->next == NULL)
{
tail = current;
tail->next = new;
break;
}
current = current->next;
}
new->n = n;
new->next = NULL;
new->prev = tail;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
}
return (new);
}
