#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - functn to free node
 * @head: input struct pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (!head || !*head)
		return;
	while (*head != NULL)
	{
		p = *head;
		*head = p->next;
		free(p);
	}
	*head = NULL;
}
