#include "lists.h"

/**
* reverse_listint - Reverse a listint linked list.
* @head: Singly linked list
* Return: Pointer to the new head of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev = NULL, *next_node;

	if (!head || !(*head) || !((*head)->next))
		return (*head);

	current = *head;

	while (current)
	{
		next_node = current->next;
		current->next = prev;
		prev = current;
		current = next_node;
	}

	*head = prev;

	return (*head);
}
