#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - functn print list length
 * @head: input derefrencing pointer
 * @str: input pointer string
 * Return: list_t linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	struct list_s *New_List;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (head == NULL)
		return (NULL);
	New_List = malloc(sizeof(list_t));
	if (New_List == NULL)
		return (NULL);
	New_List->str = strdup(str);
	if (New_List->str == NULL)
	{
		free(New_List);
		return (NULL);
	}
	New_List->len = i;
	New_List->next = *head;
	*head = New_List;
	return (New_List);
}
