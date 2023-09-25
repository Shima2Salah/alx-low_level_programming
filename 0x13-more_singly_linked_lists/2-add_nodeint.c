#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - functn to add node int
 * @head: input struct pointer
 * @n: input integer
 * Return: list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *New_list;

	if (head == NULL)
		return (NULL);
	New_list = malloc(sizeof(listint_t));
	if (New_list == NULL)
		return (NULL);
	New_list->n = n;
	New_list->next = *head;
	*head = New_list;
	return (New_list);
}
