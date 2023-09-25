#include <stdio.h>
#include "lists.h"
/**
 * print_listint - functn to print list
 * @h: input struct pointer
 * Return: number
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p = h;
	int i = 0;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		i++;
	}
	return (i);
}

