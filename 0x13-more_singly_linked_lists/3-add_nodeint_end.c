#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - functn to add node int
 * @head: input struct pointer
 * @n: input integer
 * Return: list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *New_list;
	listint_t *p;

	if (head == NULL)
		return (NULL);
	New_list = malloc(sizeof(listint_t));
	if (New_list == NULL)
		return (NULL);
	New_list->n = n;
	if (*head == NULL)
	{
		New_list->next = *head;
		*head = New_list;
	}
	else
	{
		New_list->next = NULL;
		p = *head;
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = New_list;
	}
	return (New_list);
}
