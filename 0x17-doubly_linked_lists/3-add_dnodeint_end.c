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
dlistint_t *current = *head;
if (head == NULL)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}
while (current->next != NULL)
current = current->next;
current->next = new;
new->prev = current;
return (new);
}
