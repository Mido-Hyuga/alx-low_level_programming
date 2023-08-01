#include "lists.h"
/**
* listint_len - Print All the elements of a list
* @h: Singly linked list
* Return: Integer
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
