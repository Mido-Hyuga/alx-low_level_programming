#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: the head node.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head != NULL)
	{
		free(temp);
		head = head->next;
		temp = head;
	}
}
