#include "lists.h"
/**
 * sum_dlistint - functn to sum numbers
 * @head:struct head pointer
 * Return: sum integer
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
