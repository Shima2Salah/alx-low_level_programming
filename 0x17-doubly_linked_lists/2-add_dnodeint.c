#include "lists.h"
/**
 * add_dnodeint - add node at first
 * @head:struct head pointer
 * @n: node value
 * Return:list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
if (head == NULL)
return (NULL);
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = *head;
*head = new;
return (*head);
}
