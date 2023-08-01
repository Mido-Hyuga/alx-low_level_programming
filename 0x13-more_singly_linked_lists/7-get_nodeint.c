#include "lists.h"
/**
* get_nodeint_at_index - The nth node of a listint
* @head: Singly linked list
* @index: Integer
* Return: return 0
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *h;

	if (!head)
		return (0);
	h = head;
	while (h)
	{
		if (i == index)
			return (h);
		i++;
		h = h->next;
	}
	return (0);
}
