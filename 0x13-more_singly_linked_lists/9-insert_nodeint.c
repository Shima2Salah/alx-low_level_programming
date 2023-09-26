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
	listint_t *before;
	listint_t *after;
	unsigned int i = 0;

	if ((head == NULL) || (!*head && idx))
		return (NULL);
	before = *head;
	after = *head;
	if (*head == NULL)
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
			if (before->next == NULL)
				return (NULL);
			before = before->next;
			after = after->next;
			i++;
		}
		after = after->next;
		New_list = malloc(sizeof(listint_t));
		if (New_list == NULL)
			return (NULL);
		New_list->n = n;
		before->next = New_list;
		New_list->next = after;
	}
	return (New_list);
}
