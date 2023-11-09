#include "lists.h"
/**
 * get_dnodeint_at_index - functn get nodes
 * @head:struct head pointer
 * @index:struct index
 * Return: struct node
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
int i = 0;
if (head == NULL)
return (0);
while (current != NULL)
{
i += current->n;
current = current->next;
}
return (i);
}
