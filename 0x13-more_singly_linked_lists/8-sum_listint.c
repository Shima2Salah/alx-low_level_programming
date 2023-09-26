#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - functn to sum n node
 * @head: input struct pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p;

	if (!head)
		return (0);
	p = head;
	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
