#include <stdio.h>
#include "lists.h"
/**
 * print_list - functn print size list
 * @h: list pointer
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	const struct list_s *p;
	int i = 0;

	p = h;
	while (p != NULL)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);
		p = p->next;
		i++;
	}
	return (i);
}

