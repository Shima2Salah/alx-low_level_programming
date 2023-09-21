#include "lists.h"
/**
 * list_len - functn print list length
 * @h: input pointer list
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	const struct list_s *p;
	int i = 0;

	p = h;
	while (p != NULL)
	{
		p = p->next;
		i++;
	}
	return (i);
}

