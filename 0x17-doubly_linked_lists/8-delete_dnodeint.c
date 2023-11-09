#include "lists.h"
/**
 * delete_dnodeint_at_index - functn to delete nodes
 * @head:struct head pointer
 * @index: index required
 * Return: 1 success , -1 unsuccess
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i = 0;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}
while (i < index)
{
if (current == NULL)
return (-1);
current = current->next;
i++;
}
if (current->next == NULL)
{
current->prev->next = NULL;
current->prev = NULL;
free(current);
return (1);
}
current->prev->next = current->next;
current->next->prev = current->prev;
current->prev = NULL;
current->next = NULL;
free(current);
return (1);
}
