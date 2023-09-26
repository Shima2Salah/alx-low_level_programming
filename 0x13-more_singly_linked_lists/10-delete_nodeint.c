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
listint_t *temp;
unsigned int i = 0;
if ((head == NULL) || (!*head && index))
return (-1);
p = *head;
if (*head == NULL || index == 0)
{
*head = p->next;
free(p);
return (1);
}
while ((i < index - 1) && (p != NULL))
{
p = p->next;
if (p == NULL)
return (-1);
i++;
}
temp = p->next;
if (!temp)
return (-1);
p->next = temp->next;
free(temp);
return (1);
}
