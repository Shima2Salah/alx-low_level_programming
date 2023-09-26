#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - functn to get index node
 * @head: input struct pointer
 * @index: input integer
 * Return: list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p;

	if (!head)
		return (0);
	p = head;
	while (p != NULL && i < index)
	{
		if (p->next == NULL)
			return (NULL);
		p = p->next;
		i++;
	}
	if (p->next == NULL)
		return (NULL);
	return (p);

}
