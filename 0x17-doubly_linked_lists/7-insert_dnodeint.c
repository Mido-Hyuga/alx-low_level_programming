#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - add node at index
* @h: pointer to pointer to dlinked list
* @idx: index to add at
* @n: number to add
* Return: new node or null if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *head = *h, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n, new->prev = NULL, new->next = NULL;
	if (*h == NULL && idx == 0)
	{
		*h = new;
		return (new);
	}
	while (head != NULL && i < idx)
	{
		if (head->next == NULL && i + 1 == idx)
		{
			head->next = new, new->prev = head;
			return (new);
		}

		head = head->next;
		i++;
	}

	if (head == NULL && i < idx)
	{
		free(new);
		return (NULL);
	}

	if (head->prev == NULL)
		*h = new;
	else
	{
		head->prev->next = new;
		new->prev = head->prev;
	}
	new->next = head;
	head->prev = new;
	return (new);
}
