#include "lists.h"
/**
* reverse_listint - Reverses a listint_t linked list.
* @head: Pointer to pointer to a linked list.
* Return: Pointer to the first node of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev;
listint_t *after;
unsigned int i = 0;
if ((head == NULL) || (*head == NULL))
return (NULL);
prev = *head;
after = prev->next;
prev->next = NULL;
while (after != NULL && after->next != NULL)
{
prev = after->next;
after->next = *head;
*head = prev->next;
prev->next = after;
after = *head;
*head = prev;
}
if (after != NULL)
{
prev = after->next;
after->next = *head;
*head = after;
}
return (*head);
}
