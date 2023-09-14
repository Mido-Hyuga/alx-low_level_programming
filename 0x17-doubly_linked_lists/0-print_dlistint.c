#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
* print_dlistint - prints all the elements of a dlistint_t list.
* @h: the head node.
* Return: Number of nudes.
*/

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}
