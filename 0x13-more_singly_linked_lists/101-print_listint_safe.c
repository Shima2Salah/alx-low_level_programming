#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_listint_safe - prints a linked list, even if it
* has a loop
* @head: head of list to print
* Return: number of nodes printed
*/
size_t print_listint_safe(const listint_t *head)
{
int i = 0;
listint_t *p;
const listint_t *support;
if (head == NULL)
return (0);
printf("[%p] %d\n", (void *)head, head->n);
i++;
p = head->next;
while (p != NULL)
{
printf("[%p] %d\n", (void *)p, p->n);
i++;
if (p == p->next)
{
printf("-> [%p] %d\n", (void *)p->next, p->next->n);
return (i);
}
support = head;
while (support != p)
{
if (support == p->next)
{
printf("-> [%p] %d\n", (void *)p->next, p->next->n);
return (i);
}
support = support->next;
}
p = p->next;
}
return (i);
}

