#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 *
 * @h: the head node.
 * Return: return number of nudes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int i = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
