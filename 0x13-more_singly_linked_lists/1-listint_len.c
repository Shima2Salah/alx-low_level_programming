#include <stdio.h>
#include "lists.h"
/**
 * listint_len - functn to count list length
 * @h: input struct pointer
 * Return: number
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *p = h;
	int i = 0;

	while (p != NULL)
	{
		p = p->next;
		i++;
	}
	return (i);
}
