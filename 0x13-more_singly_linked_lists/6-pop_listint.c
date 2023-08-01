#include "lists.h"
/**
* pop_listint - Delete a node at the beginning of a listint_t
* @head: Singly linked list
* Return: Integer
*/
int pop_listint(listint_t **head)
{
	listint_t *h;
	int a;

	if (!(*head))
		return (0);
	h = (*head)->next;
	a = (*head)->n;
	free(*head);
	*head = h;
	return (a);
}
