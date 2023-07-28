#include "lists.h"

/**
* free_list - free a list.
* @head: head of the linked list.
* Return: nothing.
*/

void free_list(list_t *head)
{
	list_t *i;

	while ((i = head) != NULL)
	{
		head = head->next;
		free(i->str);
		free(i);
	}
}
