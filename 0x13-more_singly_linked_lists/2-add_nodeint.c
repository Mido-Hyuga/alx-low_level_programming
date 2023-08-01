#include "lists.h"

/**
* add_nodeint - Add a node at the beginning of a listint_t
* @head: Singly linked list
* @n: Integer
* Return: Integer
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	h = (listint_t *)malloc(sizeof(listint_t));
	if (!h)
		return (0);
	h->n = n;
	h->next = *head;
	*head = h;
	return (h);
}
