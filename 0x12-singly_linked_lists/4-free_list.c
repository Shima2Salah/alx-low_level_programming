#include "lists.h"
#include <stdlib.h>
/**
* free_list - Frees a linked list.
* @head: Pointer to the first element of list.
*/
void free_list(list_t *head)
{
struct list_s *p;
while (head != NULL)
{p = head;
free(head->str);
head = p->next;
free(p);
}
}
