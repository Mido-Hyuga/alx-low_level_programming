#include "lists.h"
/**
* insert_nodeint_at_index - Insert a new node at given position of a listint
* @head: Singly linked list
* @idx: Integer
* @n: Integer
* Return: Singly Linked list
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a = 1, b = 0;
	listint_t *af_h, *bf_h, *h;

	if (!head)
		return (0);
	if (idx == 0)
	{
		h = (listint_t *)malloc(sizeof(listint_t));
		if (!h)
			return (0);
		h->n = n, h->next = *head, *head = h;
		return (h);
	}
	af_h = (*head)->next, bf_h = *head;
	while (bf_h)
		bf_h = bf_h->next, b++;
	bf_h = *head;
	if (idx > b)
		return (0);
	while (bf_h)
	{
		if (a == idx)
		{
			h = (listint_t *)malloc(sizeof(listint_t));
			if (!h)
				return (0);
			h->next = af_h, h->n = n, bf_h->next = h;
			return (h);
		}
		a++, af_h = af_h->next, bf_h = bf_h->next;
	}
	return (0);
}
