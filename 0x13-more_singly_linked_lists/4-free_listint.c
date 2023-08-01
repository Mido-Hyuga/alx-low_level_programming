#include "lists.h"
/**
* free_listint - free a listint_t list.
* @head: Head of a list.
* Return: Nothings
*/
void free_listint(listint_t *head)
{
	listint_t *h;

	while (head)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
