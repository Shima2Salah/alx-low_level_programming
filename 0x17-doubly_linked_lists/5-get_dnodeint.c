#include "lists.h"
/**
 * get_dnodeint_at_index - functn get nodes
 * @head:struct head pointer
 * @index:struct index
 * Return: struct node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int i = 0;
if (head == NULL)
return (NULL);
while (i < index)
{
if (current == NULL)
return (NULL);
current = current->next;
i++;
}
return (current);
}
