#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - functn to add node
 * @head: input struct pointer
 * @idx: input index
 * @n: input integer
 * Return: struct node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *New_list;
	listint_t *p;
	unsigned int i = 0;

	if ((head == NULL) || (!*head && idx))
		return (NULL);
	p = *head;
	if (*head == NULL || idx == 0)
	{
		New_list = malloc(sizeof(listint_t));
		if (New_list == NULL)
			return (NULL);
		New_list->n = n;
		New_list->next = *head;
		*head = New_list;
	}
	else
	{
		while (i < idx - 1)
		{
			if (p->next == NULL)
				return (NULL);
			p = p->next;
			i++;
		}
		New_list = malloc(sizeof(listint_t));
		if (New_list == NULL)
			return (NULL);
		New_list->n = n;
		New_list->next = p->next;
		p->next = New_list;
	}
	return (New_list);
}
