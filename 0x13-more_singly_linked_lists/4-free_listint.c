#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - functn to free node
 * @head: input struct pointer
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
