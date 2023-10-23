#include <stddef.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *preview = NULL;
	listint_t *next;
	listint_t *curr = *head;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = preview;
		preview = curr;
		curr = next;
	}

	*head = preview;

	return (preview);
}
