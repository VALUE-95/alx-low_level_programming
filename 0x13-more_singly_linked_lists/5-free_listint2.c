#include "lists.h"

/**
 * free_listint2 - frees a linked list.
 * @head: listint_t.
 */

void free_listint2(listint_t **head)
{
	listint_t *free_me;

	if (head == NULL)
		return;

	while (*head)
	{
		free_me = (*head)->next;
		free(*head);
		*head = free_me;
	}

	*head = NULL;
}
