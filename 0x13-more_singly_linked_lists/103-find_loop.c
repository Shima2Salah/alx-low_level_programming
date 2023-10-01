#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds a loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *p;
listint_t *support;
if (head == NULL)
return (NULL);
p = head->next;
while (p != NULL)
{
if (p == p->next)
return (p->next);
support = head;
while (support != p)
{
if (support == p->next)
return (p->next);
support = support->next;
}
p = p->next;
}
return (NULL);
}
