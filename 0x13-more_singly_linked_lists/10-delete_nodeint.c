#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - functn to add node
 * @head: input struct pointer
 * @index: input index
 * Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *p;
unsigned int i = 0;
if ((head == NULL) || (!*head && index))
return (-1);
p = *head;
if (*head == NULL || index == 0)
{
*head = p->next;
return (1);
}
while ((i < index - 1) && (p != NULL))
{
p = p->next;
if (p == NULL)
return (-1);
i++;
}
p->next = p->next->next;
return (1);
}
