#include "lists.h"
/**
* sum_listint- Sum of the nth node of a listint
* @head: Singly linked list
* Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *h;

	if (!head)
		return (0);
	h = head;
	while (h)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
