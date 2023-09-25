#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - functn to pop list int
 * @head: input struct pointer
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *p;

	if (!head || !*head)
		return (0);
	p = *head;
	*head = p->next;
	return (p->n);
}
