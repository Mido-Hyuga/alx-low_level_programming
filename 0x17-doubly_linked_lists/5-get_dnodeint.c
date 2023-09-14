#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 *
 * @head: the haed node.
 * @index: where the node exist.
 * Return: Null or value.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		if (n == index)
			return (temp);
		temp = temp->next;
		n++;
	}
	return (NULL);
}
